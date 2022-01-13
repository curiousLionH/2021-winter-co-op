import time
import numpy as np
import open3d as o3d
import matplotlib.pyplot as plt
import os
import sys
from scipy.optimize.nonlin import _nonlin_wrapper
from scipy.spatial import distance
from scipy.optimize import linear_sum_assignment
import struct
import natsort
import math as m
import socket
import cv2
from scipy.spatial.qhull import ConvexHull
hostname = socket.gethostname()

from tracker import Tracker

import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from sensor_msgs.msg import PointCloud2
from sensor_msgs.msg import _point_cloud2
from point2numpy import *

from tracker import Tracks
from open3d_test import *



topview_param = o3d.io.read_pinhole_camera_parameters("/top_viewpoint_600x900.json")
perspectiveview_param = o3d.io.read_pinhole_camera_parameters("perspective_viewpoint_600x900.json")

tracker = Tracker(8,3,5)


# class LidarSubscriber(Node):
#     def __init__(self):
#         super().__init__('lidar_subscriber')
#         qos_profile = QoSProfile(depth = 10)
#         self.lidar_subscriber = self.create_subscription(
#             PointCloud2,     # 메세지 타입
#             '/pandar', # 토픽 이름
#             self.cb_lidar,  # 콜백 함수
#             qos_profile
#         )
#         self.lidar_data = None
#         self.row_step = None
#         self.height = None
#         self.node = None

#     def cb_lidar(self, msg):
#         # self.get_logger().info('Received message: {0}'.format(msg))
#         self.lidar_data = np.array(msg.data)
#         self.row_step = msg.row_step
#         self.height = msg.height
#         self.parse_lidar()
#         # print(f"lidar data : {self.lidar_data}")
#         # print(self.height)
#         self.raw_data = msg
#         self.xyz = pointcloud2_to_array(self.raw_data)
#         self.xyz = get_xyz_points(self.xyz)
#         print(self.xyz)
        
#     def parse_lidar(self):
#         # self.lidar_data = np.reshape(self.lidar_data, (self.row_step, self.height))
#         pass

#     def main(self, args=None):
#         # rclpy.init(args=args)
#         self.node = LidarSubscriber()    # RadarSubscriber 클래스 생성
#         self.node.create_rate(4)
#         # node1 = LidarSubscriber()    # LidarSubscriber 클래스 생성
#         print("lidar start")
#         while rclpy.ok():
#             rclpy.spin(self.node)
#         # try:
#         #     rclpy.spin(node)
#         #     # rclpy.spin(node1)
#         # except KeyboardInterrupt:
#         #     node.get_logger().info('Keyboard Interrupt (SIGINT)')
#         # finally:
#         #     node.destroy_node()
#         #     rclpy.shutdown()
 


class Mot(Node):

    def __init__(self):

        self.flag = 1
        self.bool_topview = True
        self.scenario_num = str(20)
        
        self.grid_line_set = self.draw_grid_line()        # grid 그리기
        self.vis = o3d.visualization.VisualizerWithKeyCallback()
        self.vis.register_key_callback(32, self.change_view_callback)     # space(공백) 누르면 change view
        self.vis.create_window(width=600, height=900)
        self.ctr = self.vis.get_view_control()
        self.opt = self.vis.get_render_option()       # return render option : http://www.open3d.org/docs/release/python_api/open3d.visualization.RenderOption.html

        # render option setting
        self.opt.background_color = np.asarray([18/255.0, 19/255.0, 13/255.0])
        self.opt.point_size = 3.0

        self.vis.add_geometry(self.grid_line_set)
        
        # self.draw_pcd = o3d.io.read_point_cloud(os.getcwd() + f"/{self.file_list[0]}") 
        self.draw_box = o3d.geometry.LineSet()
        self.draw_spd_vector = o3d.geometry.LineSet()

        # self.vis.add_geometry(self.draw_pcd)
        self.vis.add_geometry(self.draw_box)
        self.vis.add_geometry(self.draw_spd_vector)
        # time.sleep(5)

        self.state = [0] * 1000         # tracking state 관리를 위한 list

        # super().__init__('lidar_subscriber')
        self.lidar_data = None
        self.row_step = None
        self.height = None
        self.node = None

        self.lidar_subscriber = self.create_subscription(
            PointCloud2,     # 메세지 타입
            '/pandar', # 토픽 이름
            self.cb_lidar,  # 콜백 함수
            QoSProfile(depth = 10)
        )


    def cb_lidar(self, msg):
        # self.get_logger().info('Received message: {0}'.format(msg))
        self.lidar_data = np.array(msg.data)
        self.row_step = msg.row_step
        self.height = msg.height
        # print(f"lidar data : {self.lidar_data}")
        # print(self.height)
        self.raw_data = msg
        self.xyz = pointcloud2_to_array(self.raw_data)
        self.xyz = get_xyz_points(self.xyz)
        print(self.xyz)

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
            print(f"original index : {i}")
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

                # yaw = m.degrees(m.atan2((rect[2][1] - rect[1][1]), (rect[2][0] - rect[1][0])))
                yaw = m.degrees(m.atan2((rect[0][1] - rect[2][1]), (rect[0][0] - rect[2][0])))
                
                
                if (yaw < 90):
                    yaw += 90
                # print(f"칼만필터 전의 yaw : {yaw}")
                # yaw = 0
            # box_list = np.append(object_list,[box_x, box_y, find_max_z, find_min_z, box_w, box_h, i , 9999.0])       # box의 중심 x,y / z의 max, min / box의 폭, 높이, label넘버
            # box_list = np.reshape(object_list,(-1,8))
            if box_x <10 and box_x > -33 and box_y > -60 and box_y < 30 :       # ROI 생성
                if box_h*box_w*(find_max_z - find_min_z) < 1050:
                    if box_h / box_w < 7:
                        box_dict[i] = [rect[0], rect[2], rect[1], rect[3], find_max_z, find_min_z, box_x, box_y, i]          
                        # x1, x2, x3, x4
                        object_list = np.append(object_list,[box_x, box_y, find_max_z, find_min_z, box_w, box_h, i , 9999.0, yaw])       # box의 중심 x,y / z의 max, min / box의 폭, 높이, label넘버
                        object_list = np.reshape(object_list,(-1,9))        # (num개수, 방금 append한 8개 특징) 의 array로 reshape
                # else:
                #     # print(f"box중심 : y_ {box_y}")
                #     pass

        return object_list, box_dict

    
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
    
    
def main(self, args=None):
    start = time.time()
    tr = Mot()
    rate = tr.create_rate(4)

    while rclpy.ok():
        rclpy.spin_once(tr)
        self.flag = 1
        lidar_xyz = tr.xyz
        xyz_o3d = o3d.geometry.Pointcloud(lidar_xyz)

        R = o3d.geometry.get_rotation_matrix_from_xyz([0, 0, np.pi/2])
        # R = 회전변환행렬 = [cos@ -sin@ 0 /
        #                  sin@  cos@ 0 /
        #                   0     0   1 ]
        xyz_o3d.rotate(R, center=(0, 0, 0)).translate((0, 0, 1.75))     # 회전, 평행이동

        raw_point = np.asarray(xyz_o3d.points)
    
        tr.draw_pcd.points = o3d.utility.Vector3dVector(raw_point)
        tr.vis.update_geometry(tr.draw_pcd)

        cur_plane_model, cur_inliers = xyz_o3d.segment_plane(distance_threshold=0.3,
                                                ransac_n=3,
                                                num_iterations=50)      # RANSAC 돌려서 plane inlier list 얻기
        cur_inlier_cloud = xyz_o3d.select_by_index(cur_inliers)
        cur_inlier_cloud.paint_uniform_color([0.0, 0.0, 0.0])       # plane inlier 검정으로 칠함
        cur_outlier_cloud = xyz_o3d.select_by_index(cur_inliers, invert=True)   # outlier points 검출 (plane 제외 나머지)
        cur_remain_point = np.asarray(cur_outlier_cloud.points)     # outlier points array

        rm_ground_pts = cur_remain_point

        tr.draw_pcd.points = o3d.utility.Vector3dVector(rm_ground_pts)
        tr.vis.update_geometry(tr.draw_pcd)


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

        tr.draw_pcd.points = voxel_pts.points              # (num_points, 3) 구조
        tr.draw_pcd.colors = voxel_pts.colors
        tr.vis.update_geometry(tr.draw_pcd)
        # o3d.visualization.draw_geometries([voxel_pts]) # dbscan visualization

        numpy_xyz= np.asarray(voxel_pts.points)
        numpy_labels = np.reshape(labels,(-1,1))        # 행 : cluster개수만큼 / 열 : 1 짜리의 array로 reshape
        xyz_labels = np.hstack((numpy_xyz, numpy_labels))   # 행 : num_points / 열 : 4 = (x, y, z, labels)


        cur_object_list, cur_box_dict = tr.make_object_list(xyz_labels)

        tracker.update(cur_object_list, 0 , 0 , xyz_labels, 0.1, cur_box_dict) #### 임의 

        cur_object = np.array([])
        

        if len(tracker.tracks) != 0:
            # idx_list = []
            box_list = []
            bbox_points = []
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
                        yaw = round(tracker.tracks[i].trace[-1][0,8],4)
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
                        index = tracker.tracks[i].index
                        print(f"index : {index}")
                        # print(f"object class : {object_class}")
                        Id = tracker.tracks[i].trackId
                        # self.state[Id] += 1
                        object_points = tracker.tracks[i].object_points

                        bbox_o3d = o3d.utility.Vector3dVector(np.array(object_points))
                        o3d_bbox = o3d.geometry.OrientedBoundingBox.create_from_points(bbox_o3d)

                        
                        # print(o3d_bbox)

                        # print(object_points)
                        # rect = tracker.tracks[i].rect
                        # if self.state[Id] > 5:
                        # idx_list.append(int(idx))
                        box_list.append(o3d_bbox)
                        center = np.asarray(o3d_bbox.center)
                        # print(center)

                        bbox_points = np.vstack(center)
                        # print(f"yaw : {yaw}")
                        # cur_object = np.append(cur_object,[Id, x, y, w, h, z, min_z,  rel_a_x, rel_a_y, object_class, yaw, rel_v_x, rel_v_y])
                        cur_object = np.append(cur_object,[Id, x, y, w, h, z, min_z,  rel_a_x, rel_a_y, object_class, yaw, i, rel_v_x, rel_v_y])
                        # print(f"ID : {Id}, how many times detected : {self.state[Id]}, relative v(x) = {rel_v_x}, relative v(y) = {rel_v_y}")
        # self.bbb = o3d.geometry.LineSet()
        # box_points = np.array()
        # box_lines = np.array()

        # if len(box_list) != 0:
        #     for box in box_list:
        #         temp_box = o3d.geometry.LineSet.create_from_oriented_bounding_box(box)
                
        #         if self.flag:
        #             box_points = temp_box.points
        #             box_lines = temp_box.lines
        #             self.flag = 0
                    
        #             # spd_vector_points = vector_points
        #             # spd_vector_lines = vector_lines

        #         else:
                    
        #             box_lines = np.vstack([box_lines,np.asarray(temp_box.lines) + len(box_points)])
        #             box_points = np.vstack([box_points, np.asarray(temp_box.points)])
        #             # spd_vector_points = np.vstack([spd_vector_points, vector_points])
        #             # spd_vector_lines = np.vstack([spd_vector_lines, vector_lines + len(spd_vector_lines) + i])

        #         # temp_box = o3d.geometry.LineSet.create_from_oriented_bounding_box(box)
        #         # print(f"lines : {np.asarray(self.draw_box.lines)}")
        #         # print(f"box point 있나? : {self.draw_box.points}")
        #         # self.bbb.points = o3d.utility.Vector3dVector(self.draw_box.points)
        #         # self.bbb.lines = o3d.utility.Vector2iVector(self.draw_box.lines)


        #     self.draw_box.points = o3d.utility.Vector3dVector(box_points)
        #     self.draw_box.lines = o3d.utility.Vector2iVector(box_lines)    
        #     self.draw_box.paint_uniform_color([255/255.0, 255/255.0, 0/255.0])
        #         # o3d.visualization.draw_geometries([line_set], zoom=0.8)
        #     # if self.flag:
        #     #     self.vis.add_geometry(self.draw_box)
        #     #     self.flag = 0
        #     # self.vis.add_geometry(self.draw_box, reset_bounding_box = True)
        #     self.vis.update_geometry(self.draw_box)

                
        

        # print(f"cur object : {len(cur_object)}")
        if len(cur_object) != 0:
            reshape_data = np.reshape(cur_object,(-1,14))
            # i = 0     
            for i in range(len(reshape_data)):
                
                # print(f"i : {idx}") 
                # box = cur_box_dict[idx]
                # o3d.geometry.OrientedBoundingBox
                points, lines = draw_3d_bbox(reshape_data[i][1], reshape_data[i][2], reshape_data[i][3], reshape_data[i][4], reshape_data[i][5], reshape_data[i][6], reshape_data[i][10])
                # vector_points , vector_lines = draw_speed_vector(reshape_data[i][6],reshape_data[i][7],reshape_data[i][-2],reshape_data[i][-1])
                vector_points , vector_lines = draw_speed_vector(reshape_data[i][1],reshape_data[i][2],reshape_data[i][-2],reshape_data[i][-1])
                
                # print(f"points : {points}")
                
                if i ==0:
                    box_points = points
                    box_lines = lines
                    # flag? = 0
                    

                    spd_vector_points = vector_points
                    spd_vector_lines = vector_lines

                else:
                    
                    box_lines = np.vstack([box_lines,lines + len(box_points)])
                    box_points = np.vstack([box_points, points])

                    spd_vector_points = np.vstack([spd_vector_points, vector_points])
                    spd_vector_lines = np.vstack([spd_vector_lines, vector_lines + len(spd_vector_lines) + i])

                # i += 1
                # points, lines = draw_3d_bbox(reshape_data[i][3][0], reshape_data[i][3][2], reshape_data[i][3][1], reshape_data[i][3][3], reshape_data[i][6], reshape_data[i][5])

            
            tr.draw_spd_vector.points = o3d.utility.Vector3dVector(spd_vector_points)
            tr.draw_spd_vector.lines = o3d.utility.Vector2iVector(spd_vector_lines)
            tr.draw_spd_vector.paint_uniform_color([255/255.0, 255/255.0, 255/255.0])
            tr.draw_box.points = o3d.utility.Vector3dVector(box_points)
            tr.draw_box.lines = o3d.utility.Vector2iVector(box_lines)
            tr.draw_box.paint_uniform_color([255/255.0, 255/255.0, 0/255.0])

            tr.vis.update_geometry(tr.draw_box)
            # self.vis.update_geometry(self.draw_spd_vector)


        tr.vis.poll_events()
        tr.vis.update_renderer()

        time.sleep(0.3)


    print('final_dt',time.time()-start)


if __name__ == '__main__':
    # M=Mot()
    # M.main() 
    Mot()