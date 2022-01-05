import time
import numpy as np
import open3d as o3d
import matplotlib.pyplot as plt
import os
import sys
from scipy.spatial import distance
from scipy.optimize import linear_sum_assignment
import struct
import natsort
import math as m

import socket

from scipy.spatial.qhull import ConvexHull
hostname = socket.gethostname()

from tracker import Tracker
from open3d_test import *

bool_topview = True
topview_param = o3d.io.read_pinhole_camera_parameters("/top_viewpoint_600x900.json")
perspectiveview_param = o3d.io.read_pinhole_camera_parameters("perspective_viewpoint_600x900.json")

tracker = Tracker(8,3,5)


def change_view_callback(vis):
    ctr = vis.get_view_control()
    global bool_topview

    if bool_topview:
        ctr.convert_from_pinhole_camera_parameters(topview_param)
        print("=== Press 'Space bar', change Perspective View ===")
    else:
        ctr.convert_from_pinhole_camera_parameters(perspectiveview_param)
        print("=== Press 'Space bar', change Top View ===")

    bool_topview = not(bool_topview)

def ROIPoints(point_channel_array, X_L, X_R, Y_F, Y_R, Z):

    ROI_X_L = X_L
    ROI_X_R = X_R
    ROI_Y_F = Y_F
    ROI_Y_R = Y_R
    ROI_Z = Z
    point_chan_array = point_channel_array

    arg = np.where((point_chan_array[:,0] <= ROI_X_R) & \
                    (point_chan_array[:,0] >= ROI_X_L) & \
                    (point_chan_array[:,1] <= ROI_Y_F) & \
                    (point_chan_array[:,1] >= ROI_Y_R) &\
                    (point_chan_array[:,2] <= ROI_Z), True, False)      # point들중에 ROI에 해당되는 포인트들의 index

    point_chan_array = point_chan_array[arg]        # ROI에 해당되는 point들만 남긴다

    return point_chan_array

def make_object_list_old(cluster_data):

    # print('image_detect!!!!!!!!!!!!',image_detect)
    object_datas = cluster_data         # 여기서 받은 cluster data는 행 : num_points / 열 : 4 = (x, y, z, labels)의 array
    object_list = np.array([])
    box_dict = {}
    max_label = int(cluster_data[:, 3].max())       # 라벨개수
    # print(max_label)
    for i in range(max_label+1):
        # print(i)
        obj_arg = np.where(object_datas[:,3] == i,True,False)       # i번째 label에 해당하는 점들을 true로, 나머지는 false로
        object_data = object_datas[obj_arg]
        # print(object_data)
        if len(object_data) != 0:
            xyz_points = object_data[:,0:3]
            
            # slope_box = SlopeBBox(xyz_points)

            # 해당 object의 점들의 x,y,z min, max를 구한다
            find_min_x = np.argmin(object_data[:,0])
            find_max_x = np.argmax(object_data[:,0])
            # find_min_y = np.min(object_data[:,1])
            # find_max_y = np.max(object_data[:,1])
            find_max_z = np.max(object_data[:,2])
            find_min_z = np.min(object_data[:,2])
            # max-min 해서 bounding box의 width height 구하기 / 중심 구하기
            # box_h = find_max_y-find_min_y
            # box_w = find_max_x-find_min_x
            # box_y = find_max_y - box_h/2
            # box_x = find_max_x - box_w/2

            # find_max_dist = np.max()

            A = [object_data[find_min_x,1]-object_data[find_max_x,1]]*len(object_data)
            B = [object_data[find_max_x,0]-object_data[find_min_x,0]]*len(object_data)
            C = [object_data[find_min_x,0]*object_data[find_max_x,1] - object_data[find_max_x,0]*object_data[find_min_x,1]]*len(object_data)
            # D = 2/(A[0]**2 + B[0]**2)

            x_3 = np.argmax(abs(A*object_data[:,0] + B*object_data[:,1] + C)) 
            # E = A[0]*object_data[x_3,0] + B[0]*object_data[x_3,1] + C[0]
            # x3 = np.where(find_max_dist == abs(A*object_data[:,0] + B*object_data[:,1] + C))

            # x_4 = [object_data[x_3,0] - D*A[0]*E, object_data[x_3,1]-D*B[0]*E]

            #x1,x2,x3 사이의 거리를 다 구한다 
            dist = np.array([0,0,0])         #[12, 23, 31]
            dist[0] = (object_data[find_max_x,0] - object_data[find_min_x,0])**2 + (object_data[find_max_x,1] - object_data[find_min_x,1])**2
            dist[1] = (object_data[x_3,0] - object_data[find_max_x,0])**2 + (object_data[x_3,1] - object_data[find_max_x,1])**2
            dist[2] = (object_data[x_3,0] - object_data[find_min_x,0])**2 + (object_data[x_3,1] - object_data[find_min_x,1])**2

            maxdist = np.argmax(dist)
            # print(f"maxdist = {maxdist}")
            if maxdist == 0:
                center = [(object_data[find_max_x,0] + object_data[find_min_x,0]) / 2, (object_data[find_max_x,1] + object_data[find_min_x,1]) / 2]
                x_4 = [center[0]*2 - object_data[x_3,0], center[1]*2 - object_data[x_3,1]]
            elif maxdist == 1:
                center = [(object_data[x_3,0] + object_data[find_max_x,0])/2, (object_data[x_3,1] + object_data[find_max_x,1])/2]
                x_4 = [center[0]*2 - object_data[find_min_x,0], center[1]*2 - object_data[find_min_x,1]]
            else:
                center = [(object_data[x_3,0] + object_data[find_min_x,0])/2, (object_data[x_3,1] + object_data[find_min_x,1])/2]
                x_4 = [center[0]*2 - object_data[find_max_x,0], center[1]*2 - object_data[find_max_x,1]]


            box_x = center[0]
            box_y = center[1]
            # box_w = 
        
        box_dict[i] = [[object_data[find_min_x,0], object_data[find_min_x,1]], [object_data[find_max_x,0], object_data[find_max_x,0]], [object_data[x_3,0], object_data[x_3,0]], x_4, find_max_z, find_min_z, box_x, box_y]          
        # x1, x2, x3, x4
        object_list = np.append(object_list,[box_x, box_y, find_max_z, find_min_z, 0, 0, i , 9999.0])       # box의 중심 x,y / z의 max, min / box의 폭, 높이, label넘버
        object_list = np.reshape(object_list,(-1,8))        # (num개수, 방금 append한 8개 특징) 의 array로 reshape

    return object_list, box_dict

def make_object_list(cluster_data):

    # print('image_detect!!!!!!!!!!!!',image_detect)
    object_datas = cluster_data         # 여기서 받은 cluster data는 행 : num_points / 열 : 4 = (x, y, z, labels)의 array
    object_list = np.array([])
    box_dict = {}
    max_label = int(cluster_data[:, 3].max())       # 라벨개수
    # print(max_label)
    for i in range(max_label+1):
        # print(i)
        obj_arg = np.where(object_datas[:,3] == i,True,False)       # i번째 label에 해당하는 점들을 true로, 나머지는 false로
        object_data = object_datas[obj_arg]
        # print(object_data)
        if len(object_data) != 0:
            xy_points = object_data[:,0:2]
            # cluster_pcd = o3d.io.read_point_cloud(object_data[:, 0:3]) 
            rect = minimum_bounding_rectangle(xy_points)

            # convex_hull = ConvexHull(points=xyz_points)
            # print(convex_hull.vertices)

            find_max_z = np.max(object_data[:,2])
            find_min_z = np.min(object_data[:,2])

            box_h = m.sqrt((rect[0][0] - rect[2][0])**2 + (rect[0][1] - rect[2][1])**2)
            box_w = m.sqrt((rect[0][0] - rect[3][0])**2 + (rect[0][1] - rect[3][1])**2)

            box_x = (rect[0][0] + rect[1][0]) / 2
            box_y = (rect[0][1] + rect[1][1]) / 2
            
        
        box_dict[i] = [rect[0], rect[2], rect[1], rect[3], find_max_z, find_min_z, box_x, box_y]          
        # x1, x2, x3, x4
        object_list = np.append(object_list,[box_x, box_y, find_max_z, find_min_z, box_w, box_h, i , rect])       # box의 중심 x,y / z의 max, min / box의 폭, 높이, label넘버
        object_list = np.reshape(object_list,(-1,8))        # (num개수, 방금 append한 8개 특징) 의 array로 reshape

    return object_list, box_dict

def make_object_list_umm(cluster_data):

    # print('image_detect!!!!!!!!!!!!',image_detect)
    object_datas = cluster_data             # 여기서 받은 cluster data는 행 : num_points / 열 : 4 = (x, y, z, labels)의 array
    object_list = np.array([])
    box_dict = {}      # 여기에 x,y 좌표 저장할 예정
    max_label = int(cluster_data[:, 3].max())       # 라벨 개수
    # print(max_label)
    for i in range(max_label+1):
        # print(i)
        obj_arg = np.where(object_datas[:,3] == i,True,False)       # i번째 label에 해당하는 점들을 true로, 나머지는 false로
        object_data = object_datas[obj_arg]
        # print(object_data)
        if len(object_data) != 0:
            xyz_points = object_data[:,0:3]
            
            # slope_box = SlopeBBox(xyz_points)

            # 해당 object의 점들의 x,y,z min, max를 구한다
            find_min_x = np.min(object_data[:,0]) 
            find_max_x = np.max(object_data[:,0])
            find_min_y = np.min(object_data[:,1])
            find_max_y = np.max(object_data[:,1])
            find_max_z = np.max(object_data[:,2])
            find_min_z = np.min(object_data[:,2])

            # x,y,z의 min, max 값에 따른 좌표 값 구하기
            for i in range(len(object_data)):
                if object_data[i,0] == find_min_x:
                    find_min_x_y = object_data[i,1]
                if object_data[i,0] == find_max_x:
                    find_max_x_y = object_data[i,1]
                if object_data[i,1] == find_min_y:
                    find_min_y_x = object_data[i,0]
                if object_data[i,1] == find_max_y:
                    find_max_y_x = object_data[i,0]
                    
            # max-min 해서 bounding box의 width height 구하기 / 중심 구하기
            box_h = find_max_y-find_min_y
            box_w = find_max_x-find_min_x
            box_y = find_max_y - box_h/2
            box_x = find_max_x - box_w/2

        box_dict[i] = [[find_min_x, find_min_x_y], [find_max_x, find_max_x_y], [find_min_y_x, find_min_y], [find_max_y_x, find_max_y], find_max_z, find_min_z, box_x, box_y]

        object_list = np.append(object_list,[box_x, box_y, find_max_z, find_min_z, box_w, box_h, i , 9999.0])
        object_list = np.reshape(object_list,(-1,8))      # (num개수, 방금 append한 8개 특징) 의 array로 reshape
        # coordinate_list = np.append(coordinate_list,[find_min_x, find_min_x_y, find_max_x, find_max_x_y, find_min_y_x, find_min_y, find_max_y_x, find_max_y])
        # coordinate_list = np.reshape(coordinate_list,(-1,2))

    return object_list, box_dict


scenario_num = str(20)
print(os.getcwd() + '/lidar_data_pcd/training0020/')
file_list = sorted(os.listdir(os.getcwd() + '/lidar_data_pcd/training0020/'))
# file_list = natsort.natsorted(os.listdir(os.getcwd() + '/lidar_data_pcd/training0020/'))  # sorted(os.listdir('/home/amlab/SemanticKITTI_point/dataset/sequences_0.06/' + scenario_num + '/velodyne/'))
# print(file_list)
os.chdir(os.getcwd() + '/lidar_data_pcd/training0020/')  # os.chdir('/home/amlab/SemanticKITTI_point/dataset/sequences_0.06/' + scenario_num + '/velodyne/') # change dir
# print(file_list)
grid_line_set = draw_grid_line()        # grid 그리기
transform = homogeneous_matrix(0, 0, 1.73, 0, 0, np.pi/2.0)     # (x, y, z, roll, pitch, yaw)
   
    # transform = [x, roll/   
    #              y, pitch/
    #              z, yaw]]

    
vis = o3d.visualization.VisualizerWithKeyCallback()
vis.register_key_callback(32, change_view_callback)     # space(공백) 누르면 change view

vis.create_window(width=600, height=900)
ctr = vis.get_view_control()

opt = vis.get_render_option()       # return render option : http://www.open3d.org/docs/release/python_api/open3d.visualization.RenderOption.html

# render option setting
opt.background_color = np.asarray([18/255.0, 19/255.0, 13/255.0])
opt.point_size = 3.0

vis.add_geometry(grid_line_set)
# read_npy = np.load(file_list[0])
# size_float = 4

# list_pcd = []
print(os.getcwd() + f"/{file_list[0]}")
draw_pcd = o3d.io.read_point_cloud(os.getcwd() + f"/{file_list[0]}") 
# with open (os.getcwd() + f"/{file_list[0]}", "rb") as f:
#     byte = f.read(size_float*4)
#     while byte:
#         x,y,z,intensity = struct.unpack("ffff", byte)
#         # print(f"x = {x}, y = {y}, z = {z}")
#         list_pcd.append([x, y, z])
#         byte = f.read(size_float*4)
# np_pcd = np.asarray(list_pcd)
# draw_pcd = o3d.geometry.PointCloud()
# v3d = o3d.utility.Vector3dVector
# draw_pcd.points = v3d(np_pcd)

# draw_pcd = o3d.geometry.PointCloud()
# draw_pcd.points = o3d.utility.Vector3dVector(read_npy)      # point cloud에 npy에서 읽어온 [x,y,z] 데이터 넣기
draw_box = o3d.geometry.LineSet()
draw_spd_vector = o3d.geometry.LineSet()

vis.add_geometry(draw_pcd)
vis.add_geometry(draw_box)
vis.add_geometry(draw_spd_vector)
# time.sleep(5)

state = [0] * 1000

start = time.time()
for i in range(len(file_list)):
    print(os.getcwd() + f"/{file_list[i]}")
    xyz_o3d = o3d.io.read_point_cloud(os.getcwd() + f"/{file_list[i]}") 
    # with open (os.getcwd() + f"/{file_list[i]}", "rb") as f:
    #     byte = f.read(size_float*4)
    #     while byte:
    #         x,y,z,intensity = struct.unpack("ffff", byte)
    #         # print(f"x = {x}, y = {y}, z = {z}")
    #         list_pcd.append([x, y, z])
    #         byte = f.read(size_float*4)
    
    # read_npy = np.load(file_list[i]) #load raw_data
    # print(read_npy)
    # np_pcd = np.asarray(list_pcd)

    # xyz_o3d = o3d.geometry.PointCloud()
    # xyz_o3d.points = o3d.utility.Vector3dVector(np_pcd)

    R = o3d.geometry.get_rotation_matrix_from_xyz([0, 0, np.pi/2])
    # R = 회전변환행렬 = [cos@ -sin@ 0 /
    #                  sin@  cos@ 0 /
    #                   0     0   1 ]
    xyz_o3d.rotate(R, center=(0, 0, 0)).translate((0, 0, 1.75))     # 회전, 평행이동

    
    # o3d.visualization.draw_geometries([xyz_o3d]) # raw_data visualization

    raw_point = np.asarray(xyz_o3d.points)
    # print(f"raw data : {len(raw_point)}")  
    height_exclusion = np.where(raw_point[:,2] < 4, True, False)      # 높이 5m 이상인 points 거르기
    raw_point = raw_point[height_exclusion]
    # print(f"height exclusion : {len(raw_point)}")   
    # side_exclusion = np.where(raw_point[:,0] < 3, True, False)      # x 3m 이상인 points 거르기
    # raw_point = raw_point[side_exclusion] 
    # print(f"side exclusion : {len(raw_point)}")    


    draw_pcd.points = o3d.utility.Vector3dVector(raw_point)
    vis.update_geometry(draw_pcd)

    cur_plane_model, cur_inliers = xyz_o3d.segment_plane(distance_threshold=0.3,
                                            ransac_n=3,
                                            num_iterations=50)      # RANSAC 돌려서 plane inlier list 얻기
    cur_inlier_cloud = xyz_o3d.select_by_index(cur_inliers)
    cur_inlier_cloud.paint_uniform_color([0.0, 0.0, 0.0])       # plane inlier 검정으로 칠함
    cur_outlier_cloud = xyz_o3d.select_by_index(cur_inliers, invert=True)   # outlier points 검출 (plane 제외 나머지)
    cur_remain_point = np.asarray(cur_outlier_cloud.points)     # outlier points array

    rm_ground_pts = cur_remain_point

    # draw_pcd.points = o3d.utility.Vector3dVector(rm_ground_pts)
    # vis.update_geometry(draw_pcd)


    rm_o3d_points = o3d.geometry.PointCloud()
    rm_o3d_points.points = o3d.utility.Vector3dVector(rm_ground_pts)

    voxel_pts = rm_o3d_points.voxel_down_sample(voxel_size=0.6)        # ground 제외헌 나머지 voxel down sample


    # o3d.visualization.draw_geometries([voxel_pts]) # voxel visualization

    labels = np.array(voxel_pts.cluster_dbscan(eps=1.3, min_points= 8, print_progress=False))       # clustering
    max_label = labels.max()        # cluster 개수
    # print(f"point cloud has {max_label + 1} clusters")
    colors = plt.get_cmap("tab20")(labels / (max_label if max_label > 0 else 1))
    colors[labels < 0] = 0
    voxel_pts.colors = o3d.utility.Vector3dVector(colors[:, :3])

    draw_pcd.points = voxel_pts.points              # (num_points, 3) 구조
    draw_pcd.colors = voxel_pts.colors
    vis.update_geometry(draw_pcd)
    # o3d.visualization.draw_geometries([voxel_pts]) # dbscan visualization

    numpy_xyz= np.asarray(voxel_pts.points)
    numpy_labels = np.reshape(labels,(-1,1))        # 행 : cluster개수만큼 / 열 : 1 짜리의 array로 reshape
    xyz_labels = np.hstack((numpy_xyz, numpy_labels))   # 행 : num_points / 열 : 4 = (x, y, z, labels)


    cur_object_list, cur_box_dict = make_object_list(xyz_labels)
    # print(cur_object_list[:,0])
    # gar_arg = np.where(cur_object_list[:,0] != 9999, True,False)               
    # cur_object_list = cur_object_list[gar_arg]
    rate_exclusion = np.where(cur_object_list[:,5]/cur_object_list[:,4] < 6, True, False)      # h/w >= 10인 cluster 거르기
    cur_object_list = cur_object_list[rate_exclusion]
    volume_exclusion = np.where(cur_object_list[:,4]*cur_object_list[:,5]*(cur_object_list[:,2]-cur_object_list[:,3]) < 1050, True, False)      # 부피 1050이상인 cluster 거르기
    cur_object_list = cur_object_list[volume_exclusion]

    tracker.update(cur_object_list, 0 , 0 , xyz_labels, 0.1) #### 임의 

    cur_object = np.array([])

    if len(tracker.tracks) != 0:
        for i in range(len(tracker.tracks)):
            # print(tracker.tracks[i].start_frames)
            if (len(tracker.tracks[i].trace) >= 1):
                if tracker.tracks[i].start_frames == 5:
                    x = round(tracker.tracks[i].trace[-1][0,0],4)
                    y = round(tracker.tracks[i].trace[-1][0,1],4)
                    z = round(tracker.tracks[i].trace[-1][0,2],4)
                    min_z = round(tracker.tracks[i].trace[-1][0,3],4)
                    w = round(tracker.tracks[i].trace[-1][0,4],4)
                    h = round(tracker.tracks[i].trace[-1][0,5],4)
                    idx = tracker.tracks[i].trace[-1][0,6]
                    
                    rel_v_x = round(tracker.tracks[i].trace[-1][0,-2],4)
                    rel_v_y = round(tracker.tracks[i].trace[-1][0,-1],4)

                    if len(tracker.tracks[i].trace) != 1:
                        rel_v_x_ex = round(tracker.tracks[i].trace[-2][0,-2],4)
                        rel_v_y_ex = round(tracker.tracks[i].trace[-2][0,-1],4)

                        rel_a_x = round((rel_v_x - rel_v_x_ex) / 0.1 ,4)
                        rel_a_y = round((rel_v_y - rel_v_y_ex) / 0.1 ,4)
                    else:
                        rel_a_x = 9999.0
                        rel_a_y = 9999.0
                    object_class = tracker.tracks[i].trace[-1][0,7]
                    Id = tracker.tracks[i].trackId
                    # state[Id] += 1
                    object_points = tracker.tracks[i].object_points
                    # if state[Id] > 5:
                    cur_object = np.append(cur_object,[Id, x, y, w, h, z, min_z,  rel_a_x, rel_a_y, object_class, rel_v_x, rel_v_y])
                    # print(f"ID : {Id}, how many times detected : {state[Id]}, relative v(x) = {rel_v_x}, relative v(y) = {rel_v_y}")
    
    if len(cur_object) != 0:
        reshape_data = np.reshape(cur_object,(-1,12))
        i = 0

        for i in range(len(reshape_data)):
            points, lines = draw_3d_bbox()
            # vector_points , vector_lines = draw_speed_vector(box[6],box[7],reshape_data[i][-2],reshape_data[i][-1])

            if i == 0:
                box_points = points
                box_lines = lines

                # spd_vector_points = vector_points
                # spd_vector_lines = vector_lines

            else:
                box_lines = np.vstack([box_lines,lines + len(box_points)])
                box_points = np.vstack([box_points, points])

                # spd_vector_points = np.vstack([spd_vector_points, vector_points])
                # spd_vector_lines = np.vstack([spd_vector_lines, vector_lines + len(spd_vector_lines) + i])

            i += 1
        
        # draw_spd_vector.points = o3d.utility.Vector3dVector(spd_vector_points)
        # draw_spd_vector.lines = o3d.utility.Vector2iVector(spd_vector_lines)
        # draw_spd_vector.paint_uniform_color([255/255.0, 255/255.0, 255/255.0])
        draw_box.points = o3d.utility.Vector3dVector(box_points)
        draw_box.lines = o3d.utility.Vector2iVector(box_lines)
        draw_box.paint_uniform_color([255/255.0, 255/255.0, 0/255.0])

        vis.update_geometry(draw_box)
        # vis.update_geometry(draw_spd_vector)


    vis.poll_events()
    vis.update_renderer()


print('final_dt',time.time()-start)