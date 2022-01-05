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
from tracker import Tracks
from open3d_test import *


topview_param = o3d.io.read_pinhole_camera_parameters("/top_viewpoint_600x900.json")
perspectiveview_param = o3d.io.read_pinhole_camera_parameters("perspective_viewpoint_600x900.json")

tracker = Tracker(8,3,5)

class Mot:

    def __init__(self):
        self.bool_topview = True
        self.scenario_num = str(20)
        print(os.getcwd() + '/lidar_data_pcd/training0020/')
        self.file_list = sorted(os.listdir(os.getcwd() + '/lidar_data_pcd/training0020/'))
        # self.file_list = natsort.natsorted(os.listdir(os.getcwd() + '/lidar_data_pcd/training0020/'))  # sorted(os.listdir('/home/amlab/SemanticKITTI_point/dataset/sequences_0.06/' + self.scenario_num + '/velodyne/'))
        os.chdir(os.getcwd() + '/lidar_data_pcd/training0020/')  # os.chdir('/home/amlab/SemanticKITTI_point/dataset/sequences_0.06/' + self.scenario_num + '/velodyne/') # change dir
        self.grid_line_set = self.draw_grid_line()        # grid 그리기
        transform = homogeneous_matrix(0, 0, 1.73, 0, 0, np.pi/2.0)     # (x, y, z, roll, pitch, yaw)
            # transform = [x, roll/   
            #              y, pitch/
            #              z, yaw]]

        self.vis = o3d.visualization.VisualizerWithKeyCallback()
        self.vis.register_key_callback(32, self.change_view_callback)     # space(공백) 누르면 change view

        self.vis.create_window(width=600, height=900)
        self.ctr = self.vis.get_view_control()

        self.opt = self.vis.get_render_option()       # return render option : http://www.open3d.org/docs/release/python_api/open3d.visualization.RenderOption.html

        # render option setting
        self.opt.background_color = np.asarray([18/255.0, 19/255.0, 13/255.0])
        self.opt.point_size = 3.0

        self.vis.add_geometry(self.grid_line_set)
        print(os.getcwd() + f"/{self.file_list[0]}")
        self.draw_pcd = o3d.io.read_point_cloud(os.getcwd() + f"/{self.file_list[0]}") 
        self.draw_box = o3d.geometry.LineSet()
        self.draw_spd_vector = o3d.geometry.LineSet()

        self.vis.add_geometry(self.draw_pcd)
        self.vis.add_geometry(self.draw_box)
        self.vis.add_geometry(self.draw_spd_vector)
        # time.sleep(5)

        self.state = [0] * 1000         # tracking state 관리를 위한 list

    def change_view_callback(self, vis):
        self.ctr = self.vis.get_view_control()

        if self.bool_topview:
            self.ctr.convert_from_pinhole_camera_parameters(topview_param)
            print("=== Press 'Space bar', change Perspective View ===")
        else:
            self.ctr.convert_from_pinhole_camera_parameters(perspectiveview_param)
            print("=== Press 'Space bar', change Top View ===")

        self.bool_topview = not(self.bool_topview)

    def ROIPoints(self,point_channel_array, X_L, X_R, Y_F, Y_R, Z):

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
            
            box_dict[i] = [[object_data[find_min_x,0], object_data[find_min_x,1]], [object_data[find_max_x,0], object_data[find_max_x,0]], [object_data[x_3,0], object_data[x_3,0]], x_4, find_max_z, find_min_z, box_x, box_y]          
            # x1, x2, x3, x4
            object_list = np.append(object_list,[box_x, box_y, find_max_z, find_min_z, 0, 0, i , 9999.0])       # box의 중심 x,y / z의 max, min / box의 폭, 높이, label넘버
            object_list = np.reshape(object_list,(-1,8))        # (num개수, 방금 append한 8개 특징) 의 array로 reshape

        return object_list, box_dict

    # def make_object_list(self, cluster_data):
    #     object_datas = cluster_data         # 여기서 받은 cluster data는 

    #     # print('image_detect!!!!!!!!!!!!',image_detect)
    #     object_datas = cluster_data         # 여기서 받은 cluster data는 행 : num_points / 열 : 4 = (x, y, z, labels)의 array
    #     object_list = np.array([])
    #     box_dict = {}
    #     max_label = int(cluster_data[:, 3].max())       # 라벨개수
    #     # print(max_label)
    #     for i in range(max_label+1):
    #         # print(i)
    #         obj_arg = np.where(object_datas[:,3] == i,True,False)       # i번째 label에 해당하는 점들을 true로, 나머지는 false로
    #         object_data = object_datas[obj_arg]
    #         # print(object_data)
    #         if len(object_data) != 0:
    #             xyz_points = object_data[:,0:3]
                
    #             # slope_box = SlopeBBox(xyz_points)

    #             # 해당 object의 점들의 x,y,z min, max를 구한다
    #             find_min_x = np.argmin(object_data[:,0])
    #             find_max_x = np.argmax(object_data[:,0])
    #             # find_min_y = np.min(object_data[:,1])
    #             # find_max_y = np.max(object_data[:,1])
    #             find_max_z = np.max(object_data[:,2])
    #             find_min_z = np.min(object_data[:,2])
    #             # max-min 해서 bounding box의 width height 구하기 / 중심 구하기
    #             # box_h = find_max_y-find_min_y
    #             # box_w = find_max_x-find_min_x
    #             # box_y = find_max_y - box_h/2
    #             # box_x = find_max_x - box_w/2

    #             # find_max_dist = np.max()

    #             A = [object_data[find_min_x,1]-object_data[find_max_x,1]]*len(object_data)
    #             B = [object_data[find_max_x,0]-object_data[find_min_x,0]]*len(object_data)
    #             C = [object_data[find_min_x,0]*object_data[find_max_x,1] - object_data[find_max_x,0]*object_data[find_min_x,1]]*len(object_data)
    #             # D = 2/(A[0]**2 + B[0]**2)

    #             x_3 = np.argmax(abs(A*object_data[:,0] + B*object_data[:,1] + C)) 
    #             # E = A[0]*object_data[x_3,0] + B[0]*object_data[x_3,1] + C[0]
    #             # x3 = np.where(find_max_dist == abs(A*object_data[:,0] + B*object_data[:,1] + C))

    #             # x_4 = [object_data[x_3,0] - D*A[0]*E, object_data[x_3,1]-D*B[0]*E]

    #             #x1,x2,x3 사이의 거리를 다 구한다 
    #             dist = np.array([0,0,0])         #[12, 23, 31]
    #             dist[0] = (object_data[find_max_x,0] - object_data[find_min_x,0])**2 + (object_data[find_max_x,1] - object_data[find_min_x,1])**2
    #             dist[1] = (object_data[x_3,0] - object_data[find_max_x,0])**2 + (object_data[x_3,1] - object_data[find_max_x,1])**2
    #             dist[2] = (object_data[x_3,0] - object_data[find_min_x,0])**2 + (object_data[x_3,1] - object_data[find_min_x,1])**2

    #             maxdist = np.argmax(dist)
    #             # print(f"maxdist = {maxdist}")
    #             if maxdist == 0:
    #                 center = [(object_data[find_max_x,0] + object_data[find_min_x,0]) / 2, (object_data[find_max_x,1] + object_data[find_min_x,1]) / 2]
    #                 x_4 = [center[0]*2 - object_data[x_3,0], center[1]*2 - object_data[x_3,1]]
    #             elif maxdist == 1:
    #                 center = [(object_data[x_3,0] + object_data[find_max_x,0])/2, (object_data[x_3,1] + object_data[find_max_x,1])/2]
    #                 x_4 = [center[0]*2 - object_data[find_min_x,0], center[1]*2 - object_data[find_min_x,1]]
    #             else:
    #                 center = [(object_data[x_3,0] + object_data[find_min_x,0])/2, (object_data[x_3,1] + object_data[find_min_x,1])/2]
    #                 x_4 = [center[0]*2 - object_data[find_max_x,0], center[1]*2 - object_data[find_max_x,1]]


    #             box_x = center[0]
    #             box_y = center[1]
            
    #         box_dict[i] = [[object_data[find_min_x,0], object_data[find_min_x,1]], [object_data[find_max_x,0], object_data[find_max_x,0]], [object_data[x_3,0], object_data[x_3,0]], x_4, find_max_z, find_min_z, box_x, box_y]          
    #         # x1, x2, x3, x4
    #         object_list = np.append(object_list,[box_x, box_y, find_max_z, find_min_z, 0, 0, i , 9999.0])       # box의 중심 x,y / z의 max, min / box의 폭, 높이, label넘버
    #         object_list = np.reshape(object_list,(-1,8))        # (num개수, 방금 append한 8개 특징) 의 array로 reshape

    #     return object_list, box_dict

    def make_object_list(self, cluster_data):
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

                yaw = m.degrees(m.atan2((rect[0][1] - rect[2][1]), (rect[0][0] - rect[2][0])))
                
            # box_list = np.append(object_list,[box_x, box_y, find_max_z, find_min_z, box_w, box_h, i , 9999.0])       # box의 중심 x,y / z의 max, min / box의 폭, 높이, label넘버
            # box_list = np.reshape(object_list,(-1,8))
            if box_x <10 and box_x > -33 and box_y > -60 and box_y < 30 :       # ROI 생성
                if box_h*box_w*(find_max_z - find_min_z) < 1050:
                    if box_h / box_w < 7:
                        box_dict[i] = [rect[0], rect[2], rect[1], rect[3], find_max_z, find_min_z, box_x, box_y]          
                        # x1, x2, x3, x4
                        object_list = np.append(object_list,[box_x, box_y, find_max_z, find_min_z, box_w, box_h, i , 9999.0, yaw])       # box의 중심 x,y / z의 max, min / box의 폭, 높이, label넘버
                        object_list = np.reshape(object_list,(-1,9))        # (num개수, 방금 append한 8개 특징) 의 array로 reshape
                # else:
                #     # print(f"box중심 : y_ {box_y}")
                #     pass

        return object_list, box_dict

    # def make_object_list_umm(self, cluster_data):

    #     # print('image_detect!!!!!!!!!!!!',image_detect)
    #     object_datas = cluster_data             # 여기서 받은 cluster data는 행 : num_points / 열 : 4 = (x, y, z, labels)의 array
    #     object_list = np.array([])
    #     box_dict = {}      # 여기에 x,y 좌표 저장할 예정
    #     max_label = int(cluster_data[:, 3].max())       # 라벨 개수
    #     # print(max_label)
    #     for i in range(max_label+1):
    #         # print(i)
    #         obj_arg = np.where(object_datas[:,3] == i,True,False)       # i번째 label에 해당하는 점들을 true로, 나머지는 false로
    #         object_data = object_datas[obj_arg]
    #         # print(object_data)
    #         if len(object_data) != 0:
    #             xyz_points = object_data[:,0:3]
                
    #             # slope_box = SlopeBBox(xyz_points)

    #             # 해당 object의 점들의 x,y,z min, max를 구한다
    #             find_min_x = np.min(object_data[:,0]) 
    #             find_max_x = np.max(object_data[:,0])
    #             find_min_y = np.min(object_data[:,1])
    #             find_max_y = np.max(object_data[:,1])
    #             find_max_z = np.max(object_data[:,2])
    #             find_min_z = np.min(object_data[:,2])

    #             # x,y,z의 min, max 값에 따른 좌표 값 구하기
    #             for i in range(len(object_data)):
    #                 if object_data[i,0] == find_min_x:
    #                     find_min_x_y = object_data[i,1]
    #                 if object_data[i,0] == find_max_x:
    #                     find_max_x_y = object_data[i,1]
    #                 if object_data[i,1] == find_min_y:
    #                     find_min_y_x = object_data[i,0]
    #                 if object_data[i,1] == find_max_y:
    #                     find_max_y_x = object_data[i,0]
                        
    #             # max-min 해서 bounding box의 width height 구하기 / 중심 구하기
    #             box_h = find_max_y-find_min_y
    #             box_w = find_max_x-find_min_x
    #             box_y = find_max_y - box_h/2
    #             box_x = find_max_x - box_w/2

    #         box_dict[i] = [[find_min_x, find_min_x_y], [find_max_x, find_max_x_y], [find_min_y_x, find_min_y], [find_max_y_x, find_max_y], find_max_z, find_min_z, box_x, box_y]

    #         object_list = np.append(object_list,[box_x, box_y, find_max_z, find_min_z, box_w, box_h, i , 9999.0])
    #         object_list = np.reshape(object_list,(-1,8))      # (num개수, 방금 append한 8개 특징) 의 array로 reshape
    #         # coordinate_list = np.append(coordinate_list,[find_min_x, find_min_x_y, find_max_x, find_max_x_y, find_min_y_x, find_min_y, find_max_y_x, find_max_y])
    #         # coordinate_list = np.reshape(coordinate_list,(-1,2))

    #     return object_list, box_dict

    def draw_grid_line(self):
    
        grid_width_a = np.arange(-40,41,5)
        grid_width_a = np.repeat(grid_width_a, 2) 

        grid_height_a = np.arange(-30,81,5)
        grid_height_a = np.repeat(grid_height_a, 2) 
        
        grid_width_b = np.array([grid_width_a[0],grid_width_a[-1]])
        grid_width_b = np.tile(grid_width_b, int(grid_height_a.size/2))

        
        grid_height_b = np.array([grid_height_a[0],grid_height_a[-1]])
        grid_height_b = np.tile(grid_height_b, int(grid_width_a.size/2))

        grid_x = np.hstack([grid_width_a, grid_width_b])
        grid_y = np.hstack([grid_height_b, grid_height_a])
        grid_z = np.zeros(grid_width_a.size + grid_height_a.size)

        grid_points = np.column_stack([grid_x, grid_y, grid_z])
    
        grid_lines = np.arange(grid_width_a.size + grid_height_a.size)
        grid_lines = np.reshape(grid_lines, (-1,2))

        grid_line_set = o3d.geometry.LineSet(
            points=o3d.utility.Vector3dVector(grid_points),
            lines=o3d.utility.Vector2iVector(grid_lines),
        )
        grid_colors = [[74/255.0, 70/255.0, 67/255.0] for i in range(len(grid_lines))]
        grid_line_set.colors = o3d.utility.Vector3dVector(grid_colors)

        return grid_line_set
    
    
    
    
    def main(self):
        start = time.time()
        for i in range(len(self.file_list)):
            print(os.getcwd() + f"/{self.file_list[i]}")
            xyz_o3d = o3d.io.read_point_cloud(os.getcwd() + f"/{self.file_list[i]}") 
            R = o3d.geometry.get_rotation_matrix_from_xyz([0, 0, np.pi/2])
            # R = 회전변환행렬 = [cos@ -sin@ 0 /
            #                  sin@  cos@ 0 /
            #                   0     0   1 ]
            xyz_o3d.rotate(R, center=(0, 0, 0)).translate((0, 0, 1.75))     # 회전, 평행이동

            
            # o3d.visualization.draw_geometries([xyz_o3d]) # raw_data visualization

            raw_point = np.asarray(xyz_o3d.points)
            # print(f"raw data : {len(raw_point)}")  
            # height_exclusion = np.where(raw_point[:,2] < 4, True, False)      # 높이 5m 이상인 points 거르기
            # raw_point = raw_point[height_exclusion]
            # print(f"height exclusion : {len(raw_point)}")   
            # side_exclusion = np.where(raw_point[:,0] < 3, True, False)      # x 3m 이상인 points 거르기
            # raw_point = raw_point[side_exclusion] 
            # print(f"side exclusion : {len(raw_point)}")    


            self.draw_pcd.points = o3d.utility.Vector3dVector(raw_point)
            self.vis.update_geometry(self.draw_pcd)

            cur_plane_model, cur_inliers = xyz_o3d.segment_plane(distance_threshold=0.3,
                                                    ransac_n=3,
                                                    num_iterations=50)      # RANSAC 돌려서 plane inlier list 얻기
            cur_inlier_cloud = xyz_o3d.select_by_index(cur_inliers)
            cur_inlier_cloud.paint_uniform_color([0.0, 0.0, 0.0])       # plane inlier 검정으로 칠함
            cur_outlier_cloud = xyz_o3d.select_by_index(cur_inliers, invert=True)   # outlier points 검출 (plane 제외 나머지)
            cur_remain_point = np.asarray(cur_outlier_cloud.points)     # outlier points array

            rm_ground_pts = cur_remain_point

            # self.draw_pcd.points = o3d.utility.Vector3dVector(rm_ground_pts)
            # self.vis.update_geometry(self.draw_pcd)


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

            self.draw_pcd.points = voxel_pts.points              # (num_points, 3) 구조
            self.draw_pcd.colors = voxel_pts.colors
            self.vis.update_geometry(self.draw_pcd)
            # o3d.visualization.draw_geometries([voxel_pts]) # dbscan visualization

            numpy_xyz= np.asarray(voxel_pts.points)
            numpy_labels = np.reshape(labels,(-1,1))        # 행 : cluster개수만큼 / 열 : 1 짜리의 array로 reshape
            xyz_labels = np.hstack((numpy_xyz, numpy_labels))   # 행 : num_points / 열 : 4 = (x, y, z, labels)


            cur_object_list, cur_box_dict = self.make_object_list(xyz_labels)
            # print("box_key: ", end="")

            # for key in cur_box_dict.keys():
                # print(f"{key}", end=" ")
            # print(cur_object_list[:,0])
            # gar_arg = np.where(cur_object_list[:,0] != 9999, True,False)               
            # cur_object_list = cur_object_list[gar_arg]
            # rate_exclusion = np.where(cur_object_list[:,5]/cur_object_list[:,4] < 6, True, False)      # h/w >= 10인 cluster 거르기
            # cur_object_list = cur_object_list[rate_exclusion]
            # volume_exclusion = np.where(cur_object_list[:,4]*cur_object_list[:,5]*(cur_object_list[:,2]-cur_object_list[:,3]) < 1050, True, False)      # 부피 1050이상인 cluster 거르기
            # cur_object_list = cur_object_list[volume_exclusion]
            # ROI_exclusion = np.where(cur_object_list[:,0]<10 and cur_object_list[:,0]>-33 and cur_object_list[:,1]<30 and cur_object_list[:,1]>-60, True, False)
            # cur_object_list = cur_object_list[ROI_exclusion]
            # ROI_exclusion1 = np.where(cur_object_list[:,0]<10, True, False)
            # ROI_exclusion2 = np.where(cur_object_list[:,0]>-33, True, False)
            # ROI_exclusion3 = np.where(cur_object_list[:,1]<30, True, False)
            # ROI_exclusion4 = np.where(cur_object_list[:,1]>-60, True, False)
            # cur_object_list = cur_object_list[ROI_exclusion1]
            # cur_object_list = cur_object_list[ROI_exclusion2]
            # cur_object_list = cur_object_list[ROI_exclusion3]
            # cur_object_list = cur_object_list[ROI_exclusion4]

            # selectedxyz = np.where(xyz_labels[:,3] in cur_box_dict.keys())
            # xyz_labels = xyz_labels[selectedxyz]

            tracker.update(cur_object_list, 0 , 0 , xyz_labels, 0.1, cur_box_dict) #### 임의 

            cur_object = np.array([])
            

            if len(tracker.tracks) != 0:
                # idx_list = []
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
                            yaw = round(tracker.tracks[i].trace[-1][0,7],4)
                            # print(f"idx = {idx}")
                            
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
                            # print(f"object class : {object_class}")
                            Id = tracker.tracks[i].trackId
                            self.state[Id] += 1
                            object_points = tracker.tracks[i].object_points
                            # rect = tracker.tracks[i].rect
                            # if self.state[Id] > 5:
                            # idx_list.append(int(idx))
                            cur_object = np.append(cur_object,[Id, x, y, w, h, z, min_z,  rel_a_x, rel_a_y, object_class, yaw, rel_v_x, rel_v_y])
                            # print(f"ID : {Id}, how many times detected : {self.state[Id]}, relative v(x) = {rel_v_x}, relative v(y) = {rel_v_y}")
            
            # print(f"cur object : {len(cur_object)}")
            if len(cur_object) != 0:
                reshape_data = np.reshape(cur_object,(-1,13))
                # i = 0

                
                for i in range(len(reshape_data)):
                    
                    # print(f"i : {idx}") 
                    # box = cur_box_dict[idx]
                    points, lines = draw_3d_bbox(reshape_data[i][1], reshape_data[i][2], reshape_data[i][3], reshape_data[i][4], reshape_data[i][5], reshape_data[i][6], reshape_data[i][10])
                    # vector_points , vector_lines = draw_speed_vector(box[6],box[7],reshape_data[i][-2],reshape_data[i][-1])
                    
                    
                    if i ==0:
                        box_points = points
                        box_lines = lines
                        # flag? = 0
                        

                        # spd_vector_points = vector_points
                        # spd_vector_lines = vector_lines

                    else:
                        
                        box_lines = np.vstack([box_lines,lines + len(box_points)])
                        box_points = np.vstack([box_points, points])

                        # spd_vector_points = np.vstack([spd_vector_points, vector_points])
                        # spd_vector_lines = np.vstack([spd_vector_lines, vector_lines + len(spd_vector_lines) + i])

                    # i += 1points, lines = draw_3d_bbox(reshape_data[i][3][0], reshape_data[i][3][2], reshape_data[i][3][1], reshape_data[i][3][3], reshape_data[i][6], reshape_data[i][5])

                
                # self.draw_spd_vector.points = o3d.utility.Vectro3dVector(spd_vector_points)
                # self.draw_spd_vector.lines = o3d.utility.Vector2iVector(spd_vector_lines)
                # self.draw_spd_vector.paint_uniform_color([255/255.0, 255/255.0, 255/255.0])
                self.draw_box.points = o3d.utility.Vector3dVector(box_points)
                self.draw_box.lines = o3d.utility.Vector2iVector(box_lines)
                self.draw_box.paint_uniform_color([255/255.0, 255/255.0, 0/255.0])

                self.vis.update_geometry(self.draw_box)
                # self.vis.update_geometry(self.draw_spd_vector)


            self.vis.poll_events()
            self.vis.update_renderer()


        print('final_dt',time.time()-start)


if __name__ == '__main__':
    print("start")
    M=Mot()
    M.main() 