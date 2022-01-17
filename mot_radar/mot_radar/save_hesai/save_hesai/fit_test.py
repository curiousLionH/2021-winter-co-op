import rclpy
from rclpy.node import Node
# from save_hesai.save_hesai.path_module import RoiPathGen, curveFit
from sensor_msgs.msg import PointCloud2
from std_msgs.msg import Float64MultiArray, Int16, Bool, Float64
from custom_msgs.msg import * 
import socket
hostname = socket.gethostname()

import numpy as np
import open3d as o3d
import time
import matplotlib.pyplot as plt
import os
from sklearn import linear_model
from save_hesai.tracker import Tracker
from save_hesai.path_module import *
from save_hesai.point2numpy import *

import sys
sys.path.append('/home/amlab/save_ws/src/plot_logic')
from plot_logic.open3d_test import *

import copy

# cluster_pts = o3d.io.read_point_cloud(os.getcwd() + '/src/save_hesai/save_hesai' + '/test.pcd')
topview_param = o3d.io.read_pinhole_camera_parameters('/home/' + hostname + "/save_ws/src/plot_logic/plot_logic/top_viewpoint_600x900.json")
perspectiveview_param = o3d.io.read_pinhole_camera_parameters('/home/' + hostname + "/save_ws/src/plot_logic/plot_logic/perspective_viewpoint_600x900.json")


class Fit(Node):

    def __init__(self):
        super().__init__('fit')
    
        self.path_sub = self.create_subscription(
            Paths,
            'local_path',
            self.path_callback, 
            1
        )

        self.sub_around_paths = self.create_subscription(
            AroundPaths,
            'around_paths',
            self.around_callback,
            1
        )

        self.point_sub = self.create_subscription(
            PointCloud2,
            "/pandar",
            self.point_callback_avante,
            1
        )
        self.lidar_subscriber = self.create_subscription(
            Float64MultiArray,
            'lidar_data_front',
            self.callback_lidar,
            1)

        self.lidar_subscriber = self.create_subscription(
            Float64,
            'lane_width',
            self.callback_lane_width,
            1)
        

        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.left_path_x = []
        self.left_path_y = []
        self.left_path_s = []
        self.left_path_h = []

        self.right_path_x = []
        self.right_path_y = []
        self.right_path_s = []
        self.right_path_h = []
        self.obstacle_data = np.array([])
        self.path_x = np.array([])
        self.path_y = np.array([])
        self.path_z = np.array([])
        self.path_h = np.array([])
        self.xyz_np = np.array([])
        self.xyz_avante = np.array([])
        self.lane_width = 3.2
        grid_line_set = draw_grid_line()
        transform = homogeneous_matrix(0, 0, 1.73, 0, 0, np.pi/2.0)

        print('----------------------- START PLOT -----------------------')
        ego_vehicle = o3d.io.read_triangle_mesh('/home/' + hostname + "/save_ws/src/plot_logic/plot_logic/ego.stl")
        ego_vehicle.compute_vertex_normals()

        self.vis = o3d.visualization.VisualizerWithKeyCallback()

        self.vis.register_key_callback(32, change_view_callback)

        self.vis.create_window(width=600, height=900)
        self.ctr = self.vis.get_view_control()
        
        #print(type(self.vis))
        opt = self.vis.get_render_option()
        
        opt.background_color = np.asarray([18/255.0, 19/255.0, 13/255.0])
        opt.point_size = 3.0

        self.vis.add_geometry(grid_line_set)
        self.draw_box = o3d.geometry.LineSet()
        self.draw_lane = o3d.geometry.LineSet()
        self.draw_pcd = o3d.io.read_point_cloud('/home/' + hostname + "/save_ws/src/plot_logic/plot_logic/0.pcd")
        # self.draw_ground = o3d.io.read_point_cloud('/home/' + hostname + "/save_ws/src/plot_logic/plot_logic/0.pcd")
        self.draw_path = o3d.geometry.PointCloud()
        self.draw_left = o3d.geometry.PointCloud()
        self.draw_right = o3d.geometry.PointCloud()
        self.vis.add_geometry(self.draw_box)
        self.vis.add_geometry(self.draw_pcd)
        # self.vis.add_geometry(self.draw_ground)
        self.vis.add_geometry(self.draw_lane)
        self.vis.add_geometry(self.draw_path)
        self.ctr.convert_from_pinhole_camera_parameters(topview_param)

    def RemoveEgoPoints(self, point_channel_array, X_L, X_R, Y_F, Y_R):

        ROI_X_L = X_L
        ROI_X_R = X_R
        ROI_Y_F = Y_F
        ROI_Y_R = Y_R
        point_chan_array = point_channel_array

        arg = np.where((point_chan_array[:,0] <= ROI_X_R) & \
                        (point_chan_array[:,0] >= ROI_X_L) & \
                        (point_chan_array[:,1] <= ROI_Y_F) & \
                        (point_chan_array[:,1] >= ROI_Y_R), False, True)

        point_chan_array = point_chan_array[arg]

        return point_chan_array

    def ROIPoints(self, point_channel_array, X_L, X_R, Y_F, Y_R, Z):

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
                        (point_chan_array[:,2] <= ROI_Z), True, False)

        point_chan_array = point_chan_array[arg]

        return point_chan_array

    def RemoveGround(self, point_channel_array, Z):

        ROI_Z = Z
        point_chan_array = point_channel_array

        arg = np.where((point_chan_array[:,2] >= ROI_Z) , True, False)

        point_chan_array = point_chan_array[arg]

        return point_chan_array

    def change_view_callback(self):
        self.ctr = self.vis.get_view_control()
        bool_topview = True
        if bool_topview:
            self.ctr.convert_from_pinhole_camera_parameters(topview_param)
            print("=== Press 'Space bar', change Perspective View ===")
        else:
            self.ctr.convert_from_pinhole_camera_parameters(perspectiveview_param)
            print("=== Press 'Space bar', change Top View ===")

        bool_topview = not(bool_topview)
    
    def path_callback(self, msg):
        # print(msg)
        self.path_x = np.asarray(msg.x)
        self.path_y = np.asarray(msg.y)
        self.path_s = np.asarray(msg.s)
        self.path_h = np.asarray(msg.h)

    def callback_lidar(self,msg):
        self.obstacle_data = msg.data

    def callback_lane_width(self,msg):
        self.lane_width = msg.data

    def around_callback(self,msg):
        
        left_idx = msg.left_lane
        right_idx = msg.right_lane

        if left_idx >=1:
            self.left_path_x = np.asarray(msg.left_lanes[0].x)
            self.left_path_y = np.asarray(msg.left_lanes[0].y)
            self.left_path_s = np.asarray(msg.left_lanes[0].s)
            self.left_path_h = np.asarray(msg.left_lanes[0].h)
        else:
            self.left_path_x = np.array([])
            self.left_path_y = np.array([])
            self.left_path_s = np.array([])
            self.left_path_h = np.array([])

        if right_idx >=1:
            self.right_path_x = np.asarray(msg.right_lanes[0].x)
            self.right_path_y = np.asarray(msg.right_lanes[0].y)
            self.right_path_s = np.asarray(msg.right_lanes[0].s)
            self.right_path_h = np.asarray(msg.right_lanes[0].h)
        else:
            self.right_path_x = np.array([])
            self.right_path_y = np.array([])
            self.right_path_s = np.array([])
            self.right_path_h = np.array([])

    def point_callback_avante(self,msg):
        self.raw_data = msg
        self.xyz_avante = pointcloud2_to_array(self.raw_data)
        self.xyz_avante = get_xyz_points(self.xyz_avante)
    
    def timer_callback(self):
        self.xyz_np = self.xyz_avante
        # print(self.xyz_np)
        if len(np.shape(self.xyz_np)) != 1:
            xyz_o3d = o3d.geometry.PointCloud()
            xyz_o3d.points = o3d.utility.Vector3dVector(self.xyz_np)
            R = o3d.geometry.get_rotation_matrix_from_xyz([0, 0, np.pi])
            xyz_o3d.rotate(R, center=(0, 0, 0)).translate((0, 1.1, 1.7))
            downsample = xyz_o3d.voxel_down_sample(voxel_size=0.2)
            self.draw_pcd.points = downsample.points
            self.vis.update_geometry(self.draw_pcd)   
            # print(downsample)
            self.xyz_np = np.asarray(downsample.points)
            left_offset = 0.2
            right_offset = self.lane_width/2 - 1
            line_width = self.lane_width
            path_width = line_width
            if len(self.path_x) != 0:

                bool_x_1 = self.path_x < 20
                bool_x_2 = self.path_x > -20
                bool_x_f = bool_x_1 * bool_x_2

                # print(bool_x_f)

                self.path_x = self.path_x[bool_x_f]
                self.path_y = self.path_y[bool_x_f]
                self.path_h = self.path_h[bool_x_f]

                left_lane_x = self.path_x - (line_width/2 * np.sin(self.path_h) - left_offset)
                left_lane_y = self.path_y + (line_width/2 * np.cos(self.path_h) - left_offset)
                right_lane_x = self.path_x + (line_width/2 * np.sin(self.path_h) - right_offset)
                right_lane_y = self.path_y - (line_width/2 * np.cos(self.path_h) - right_offset)
                path_h = self.path_h

                left_path_x = self.path_x - (path_width * np.sin(self.path_h))
                left_path_y = self.path_y + (path_width * np.cos(self.path_h))
                right_path_x = self.path_x + (path_width * np.sin(self.path_h))
                right_path_y = self.path_y - (path_width * np.cos(self.path_h))

                # self.path_h = self.path_h[bool_x_f]

                lleft_lane_x = left_lane_x.copy()
                lleft_lane_y = left_lane_y.copy()
                lright_lane_x = left_lane_x.copy()
                lright_lane_y = left_lane_y.copy()
                rleft_lane_x = right_lane_x.copy()
                rleft_lane_y = right_lane_y.copy()
                rright_lane_x = right_lane_x.copy()
                rright_lane_y = right_lane_y.copy()

                left_coeff, draw_left_x, draw_left_y = curveFit(left_lane_x, left_lane_y)
                right_coeff, draw_right_x, draw_right_y = curveFit(right_lane_x, right_lane_y)
                lleft_coeff, draw_lleft_x, draw_lleft_y = curveFit(lleft_lane_x, lleft_lane_y)
                lright_coeff, draw_lright_x, draw_lright_y = curveFit(lright_lane_x, lright_lane_y)
                rleft_coeff, draw_rleft_x, draw_rleft_y = curveFit(rleft_lane_x, rleft_lane_y)
                rright_coeff, draw_rright_x, draw_rright_y = curveFit(rright_lane_x, rright_lane_y)

                cur_roi_points ,points_num = curveROI(left_coeff, right_coeff, self.xyz_np,[-1,3])
                left_roi_points, left_points_num = curveROI(lleft_coeff, lright_coeff, self.xyz_np,[-1,3])
                right_roi_points, right_points_num = curveROI(rleft_coeff, rright_coeff, self.xyz_np,[-1,3])

                cur_roi_points = self.RemoveEgoPoints(cur_roi_points, -1, 1, 4, -2)
                # print(1111)
                cur_roi_points = self.ROIPoints(cur_roi_points, -5, 5, 70, 0, 4)
                # print(cur_roi_points)
                # print(222)
                left_roi_front_points = self.ROIPoints(left_roi_points, -10, -0, 60, 20, 2.5)
                left_roi_cur_points = self.ROIPoints(left_roi_points, -10, -0, 20, -20, 2.5)
                right_roi_front_points = self.ROIPoints(right_roi_points, 0, 10, 60, 20, 2.5)
                right_roi_cur_points = self.ROIPoints(right_roi_points, 0, 10, 20, -20, 2.5)


                # xyz_o3d_roi_cur = o3d.geometry.PointCloud()
                # xyz_o3d_roi_cur.points = o3d.utility.Vector3dVector(cur_roi_points)
                
                # # self.draw_pcd.points = xyz_o3d_roi_cur.points
                # # self.vis.update_geometry(self.draw_pcd)

                # cur_plane_model, cur_inliers = xyz_o3d_roi_cur.segment_plane(distance_threshold=0.2,
                #                                         ransac_n=3,
                #                                         num_iterations=40)
                # cur_outlier_cloud = xyz_o3d_roi_cur.select_by_index(cur_inliers, invert=True)
                
                # cur_outlier_cloud = np.asarray(cur_outlier_cloud.points)
                # [cur_a,cur_b,cur_c,cur_d] = cur_plane_model
                
                # cur_remain_points = cur_outlier_cloud
                # self.xyz_np = np.asarray(cur_remain_points)
            
                


                # cur_plane_vector = np.array([cur_a,cur_b,cur_c])
                # z_unit_vector = np.array([0,0,1])
                # cur_angle = np.arccos(np.dot(cur_plane_vector,z_unit_vector)/(1 * np.sqrt(cur_a**2+cur_b**2+cur_c**2)))
                # cur_angle = np.rad2deg(cur_angle)
                # if cur_angle > 30:
                #     rm_ground_points = self.RemoveGround(cur_remain_points,1)
                #     cur_remain_points = rm_ground_points
                # else:
                #     cur_remain_x = cur_a*cur_remain_points[:,0].reshape(-1,1)
                #     cur_remain_y = cur_b*cur_remain_points[:,1].reshape(-1,1)
                #     cur_remain_z = (cur_remain_x + cur_remain_y + cur_d)/cur_c
                #     th_arg = np.where(np.abs(cur_remain_points[:,2].reshape(-1,1) - cur_remain_z) >= 1, True, False)
                #     th_arg = th_arg.reshape(-1,1)
                #     th_arg = np.hstack((th_arg,th_arg,th_arg))
                #     cur_remain_points = cur_remain_points[th_arg]
                #     cur_remain_points = np.reshape(cur_remain_points,(-1,3))
                # remain_points = cur_remain_points

                # plane_points = np.asarray(remain_points)

                # outlier_cloud = o3d.geometry.PointCloud()
                # outlier_cloud.points = o3d.utility.Vector3dVector(plane_points)

                # obstacle_pts = outlier_cloud.voxel_down_sample(voxel_size=0.25)

                # if len(obstacle_pts.points) != 0:
                #     start_db = time.time()
                #     labels = np.array(obstacle_pts.cluster_dbscan(eps=1.1, min_points=10, print_progress=False))
                #     max_label = labels.max()

                #     colors = plt.get_cmap("tab20")(labels / (max_label if max_label > 0 else 1))
                #     colors[labels < 0] = 0

                #     obstacle_pts.colors = o3d.utility.Vector3dVector(colors[:, :3])
                    
                #     self.xyz_np = np.asarray(obstacle_pts.points)
                #     self.draw_pcd.points = obstacle_pts.points
                #     self.vis.update_geometry(self.draw_pcd)
            if len(left_lane_x) & len(lleft_lane_x) & len(rleft_lane_x) != 0:

                cl_points, cl_lines, cl_colors = draw_ground_line(left_lane_x,left_lane_y,[255/255.0, 255/255.0, 217/255.0])
                cr_points, cr_lines, cr_colors = draw_ground_line(right_lane_x,right_lane_y,[255/255.0, 255/255.0, 217/255.0])
                ll_points, ll_lines, ll_colors = draw_ground_line(lleft_lane_x,lleft_lane_y,[5/255.0, 91/255.0, 166/255.0])
                lr_points, lr_lines, lr_colors = draw_ground_line(lright_lane_x,lright_lane_y,[5/255.0, 91/255.0, 166/255.0])
                rl_points, rl_lines, rl_colors = draw_ground_line(rleft_lane_x,rleft_lane_y,[255/255.0, 91/255.0, 166/255.0])
                rr_points, rr_lines, rr_colors = draw_ground_line(rright_lane_x,rright_lane_y,[255/255.0, 91/255.0, 166/255.0])

                points = np.vstack([cl_points, cr_points,ll_points, lr_points, rl_points, rr_points])

                lines = np.vstack([cl_lines, 
                    cr_lines + len(cl_lines) + 1,
                    ll_lines + len(cr_lines) + 1 + len(cl_lines) + 1,
                    lr_lines + len(ll_lines) + 1 + len(cr_lines) + 1 + len(cl_lines) + 1,
                    rl_lines + len(lr_lines) + 1 + len(ll_lines) + 1 + len(cr_lines) + 1 + len(cl_lines) + 1,
                    rr_lines + len(rl_lines) + 1 + len(lr_lines) + 1 + len(ll_lines) + 1 + len(cr_lines) + 1 + len(cl_lines) + 1
                    ])

                colors = np.vstack([cl_colors, cr_colors, ll_colors, lr_colors, rl_colors, rr_colors])

                self.draw_lane.points = o3d.utility.Vector3dVector(points)
                self.draw_lane.lines = o3d.utility.Vector2iVector(lines)
                self.draw_lane.colors = o3d.utility.Vector3dVector(colors)

                self.vis.update_geometry(self.draw_lane)


        if len(self.obstacle_data) != 0:
            reshape_data = np.reshape(self.obstacle_data,(-1,9))
            for i in range(len(reshape_data)):
                points, lines = draw_3d_bbox(reshape_data[i][1],reshape_data[i][2],reshape_data[i][3],reshape_data[i][4],reshape_data[i][5], reshape_data[i][6])
                if i == 0:
                    box_points = points
                    box_lines = lines
                else:
                    box_lines = np.vstack([box_lines,lines + len(box_points)])
                    box_points = np.vstack([box_points, points])
            self.draw_box.points = o3d.utility.Vector3dVector(box_points)
            self.draw_box.lines = o3d.utility.Vector2iVector(box_lines)
            self.draw_box.paint_uniform_color([255/255.0, 255/255.0, 0/255.0])

            self.vis.update_geometry(self.draw_box)
        else:
            self.draw_box.points = o3d.utility.Vector3dVector()
            self.vis.update_geometry(self.draw_box) 
        # if len(np.shape(self.xyz_np)) != 1:
        #     xyz_o3d = o3d.geometry.PointCloud()
        #     xyz_o3d.points = o3d.utility.Vector3dVector(self.xyz_np)
        #     R = o3d.geometry.get_rotation_matrix_from_xyz([0, 0, np.pi])
        #     xyz_o3d.rotate(R, center=(0, 0, 0)).translate((0, 1.1, 1.7))
        #     self.xyz_np = np.asarray(xyz_o3d.points)

        #     line_width = 3.5
        #     offset = 0.4
        #     if len(self.path_x) != 0:
        #         print(11111111111111)
        #         draw_path_z = np.ones(len(self.path_x))*0.05

        #         path_xy = np.column_stack((self.path_x, self.path_y))
        #         path_xy_points = np.column_stack((path_xy, draw_path_z))
        #         # print(path_xy)
        #         # path_xy_points = np.column_stack((path_xy, draw_path_z))
        #         bool_x_1 = self.path_x < 25
        #         bool_x_2 = self.path_x > -25
        #         bool_x_f = bool_x_1 * bool_x_2

        #         # print(bool_x_f)

        #         self.path_x = self.path_x[bool_x_f]
        #         self.path_y = self.path_y[bool_x_f]
        #         self.path_h = self.path_h[bool_x_f]

        #         left_lane_x = self.path_x - (line_width/2 * np.sin(self.path_h) - offset)
        #         left_lane_y = self.path_y + (line_width/2 * np.cos(self.path_h) - offset)
        #         right_lane_x = self.path_x + (line_width/2 * np.sin(self.path_h) - offset)
        #         right_lane_y = self.path_y - (line_width/2 * np.cos(self.path_h) - offset)
        #         plt.plot(self.path_x,self.path_y,'ko',markersize = 10)
        #         plt.plot(self.path_x[0:10],self.path_y[0:10],'ro',markersize = 5)
        #         plt.plot(self.path_x[-10:-1],self.path_y[-10:-1],'go',markersize = 5)
        #         plt.plot(left_lane_x,left_lane_y)
        #         plt.plot(right_lane_x,right_lane_y)
        #         plt.plot(right_lane_x[-10:-1],right_lane_y[-10:-1],'bo',markersize = 5)
        #         plt.pause(0.01)
        #         plt.clf()
        #         path_h = self.path_h

        #         draw_path_z = np.ones(len(left_lane_x))*0.05
        #         point_left = np.column_stack((left_lane_x,left_lane_y))
        #         point_left = np.column_stack((point_left,draw_path_z))

        #         draw_path_z = np.ones(len(right_lane_x))*0.05
        #         point_right = np.column_stack((right_lane_x,right_lane_y))
        #         point_right = np.column_stack((point_right,draw_path_z))

        #         self.draw_left.points = o3d.utility.Vector3dVector(point_left)
        #         self.draw_right.points = o3d.utility.Vector3dVector(point_right)
        #         self.vis.update_geometry(self.draw_left)
        #         self.vis.update_geometry(self.draw_right)

        #         left_path_x = self.path_x - (line_width * np.sin(self.path_h))
        #         left_path_y = self.path_y + (line_width * np.cos(self.path_h))
        #         right_path_x = self.path_x + (line_width * np.sin(self.path_h))
        #         right_path_y = self.path_y - (line_width * np.cos(self.path_h))

        #         lleft_lane_x = left_lane_x.copy()
        #         lleft_lane_y = left_lane_y.copy()
        #         lright_lane_x = left_lane_x.copy()
        #         lright_lane_y = left_lane_y.copy()
        #         rleft_lane_x = right_lane_x.copy()
        #         rleft_lane_y = right_lane_y.copy()
        #         rright_lane_x = right_lane_x.copy()
        #         rright_lane_y = right_lane_y.copy()
        #         if len(self.left_path_x) != 0 and len(left_path_x) == len(self.path_h):
        #             max_expand_y = max(left_path_y)
        #             min_expand_y = min(left_path_y)
        #             bool_1_l = left_path_y < max_expand_y
        #             bool_2_l = left_path_y > min_expand_y
        #             bool_y_l = bool_1_l * bool_2_l

        #             lleft_lane_x[bool_y_l] = left_path_x[bool_y_l] - (line_width/2 * np.sin(self.path_h[bool_y_l]) - offset)
        #             lleft_lane_y[bool_y_l] = left_path_y[bool_y_l] + (line_width/2 * np.cos(self.path_h[bool_y_l]) - offset)
        #             lright_lane_x[bool_y_l] = left_path_x[bool_y_l] + (line_width/2 * np.sin(self.path_h[bool_y_l]) - offset)
        #             lright_lane_y[bool_y_l] = left_path_y[bool_y_l] - (line_width/2 * np.cos(self.path_h[bool_y_l]) - offset)


        #         if len(self.right_path_x) != 0 and len(right_path_x) == len(self.path_h):
        #             max_expand_y = max(right_path_y)
        #             min_expand_y = min(right_path_y)
        #             bool_1_r = right_path_y < max_expand_y
        #             bool_2_r = right_path_y > min_expand_y
        #             bool_y_r = bool_1_r * bool_2_r

        #             rleft_lane_x[bool_y_r] = right_path_x[bool_y_r] - (line_width/2 * np.sin(self.path_h[bool_y_r]) - offset)
        #             rleft_lane_y[bool_y_r] = right_path_y[bool_y_r] + (line_width/2 * np.cos(self.path_h[bool_y_r]) - offset)
        #             rright_lane_x[bool_y_r] = right_path_x[bool_y_r] + (line_width/2 * np.sin(self.path_h[bool_y_r]) - offset)
        #             rright_lane_y[bool_y_r] = right_path_y[bool_y_r] - (line_width/2 * np.cos(self.path_h[bool_y_r]) - offset)
                
        #         left_coeff, draw_left_x, draw_left_y = curveFit(left_lane_x, left_lane_y)
        #         right_coeff, draw_right_x, draw_right_y = curveFit(right_lane_x, right_lane_y)
        #         lleft_coeff, draw_lleft_x, draw_lleft_y = curveFit(lleft_lane_x, lleft_lane_y)
        #         lright_coeff, draw_lright_x, draw_lright_y = curveFit(lright_lane_x, lright_lane_y)
        #         rleft_coeff, draw_rleft_x, draw_rleft_y = curveFit(rleft_lane_x, rleft_lane_y)
        #         rright_coeff, draw_rright_x, draw_rright_y = curveFit(rright_lane_x, rright_lane_y)

                # plt.plot(draw_left_x,draw_left_y)
                # plt.plot(draw_right_x,draw_right_y)
                # plt.show()


                # cur_roi_points ,points_num = curveROI(left_coeff, right_coeff, self.xyz_np,[-1,3])
                # left_roi_points, left_points_num = curveROI(lleft_coeff, lright_coeff, self.xyz_np,[-1,3])
                # right_roi_points, right_points_num = curveROI(rleft_coeff, rright_coeff, self.xyz_np,[-1,3])

                # cur_roi_points = self.RemoveEgoPoints(cur_roi_points, -1, 1, 4, -2)

                # cur_roi_points = self.ROIPoints(cur_roi_points, -8, 8, 40, 5, 10)
                # left_roi_front_points = self.ROIPoints(left_roi_points, -20, 20, 60, 20, 4)
                # left_roi_cur_points = self.ROIPoints(left_roi_points, -8, 8, 40, 5, 10)
                # right_roi_cur_points = self.ROIPoints(right_roi_points, -8, 8, 40, 5, 10)
                # right_roi_front_points = self.ROIPoints(right_roi_points, -20, 20, 60, 20, 4)

                # roi_points = np. vstack((cur_roi_points,left_roi_points,right_roi_points))            
                # xyz_o3d_roi_cur = o3d.geometry.PointCloud()
                # print(cur_roi_points)
                # xyz_o3d_roi_cur.points = o3d.utility.Vector3dVector(cur_roi_points)

                # xyz_o3d_roi_left_front = o3d.geometry.PointCloud()
                # xyz_o3d_roi_left_front.points = o3d.utility.Vector3dVector(left_roi_front_points)

                # xyz_o3d_roi_left_cur = o3d.geometry.PointCloud()
                # xyz_o3d_roi_left_cur.points = o3d.utility.Vector3dVector(left_roi_cur_points)

                # xyz_o3d_roi_right_front = o3d.geometry.PointCloud()
                # xyz_o3d_roi_right_front.points = o3d.utility.Vector3dVector(right_roi_front_points)

                # xyz_o3d_roi_right_cur = o3d.geometry.PointCloud()
                # xyz_o3d_roi_right_cur.points = o3d.utility.Vector3dVector(right_roi_cur_points)
                # if len(left_lane_x) & len(lleft_lane_x) & len(rleft_lane_x) != 0:

                #     cl_points, cl_lines, cl_colors = draw_ground_line(left_lane_x,left_lane_y,[255/255.0, 255/255.0, 217/255.0])
                #     cr_points, cr_lines, cr_colors = draw_ground_line(right_lane_x,right_lane_y,[255/255.0, 255/255.0, 217/255.0])
                #     ll_points, ll_lines, ll_colors = draw_ground_line(lleft_lane_x,lleft_lane_y,[5/255.0, 91/255.0, 166/255.0])
                #     lr_points, lr_lines, lr_colors = draw_ground_line(lright_lane_x,lright_lane_y,[5/255.0, 91/255.0, 166/255.0])
                #     rl_points, rl_lines, rl_colors = draw_ground_line(rleft_lane_x,rleft_lane_y,[255/255.0, 91/255.0, 166/255.0])
                #     rr_points, rr_lines, rr_colors = draw_ground_line(rright_lane_x,rright_lane_y,[255/255.0, 91/255.0, 166/255.0])

                #     points = np.vstack([cl_points, cr_points,ll_points, lr_points, rl_points, rr_points])

                #     lines = np.vstack([cl_lines, 
                #         cr_lines + len(cl_lines) + 1,
                #         ll_lines + len(cr_lines) + 1 + len(cl_lines) + 1,
                #         lr_lines + len(ll_lines) + 1 + len(cr_lines) + 1 + len(cl_lines) + 1,
                #         rl_lines + len(lr_lines) + 1 + len(ll_lines) + 1 + len(cr_lines) + 1 + len(cl_lines) + 1,
                #         rr_lines + len(rl_lines) + 1 + len(lr_lines) + 1 + len(ll_lines) + 1 + len(cr_lines) + 1 + len(cl_lines) + 1
                #         ])

                #     colors = np.vstack([cl_colors, cr_colors, ll_colors, lr_colors, rl_colors, rr_colors])

                #     self.draw_lane.points = o3d.utility.Vector3dVector(points)
                #     self.draw_lane.lines = o3d.utility.Vector2iVector(lines)
                #     self.draw_lane.colors = o3d.utility.Vector3dVector(colors)

                #     self.vis.update_geometry(self.draw_lane)
                # # cur_plane_model, cur_inliers = xyz_o3d_roi_cur.segment_plane(distance_threshold=0.2,
                # #                                         ransac_n=3,
                # #                                         num_iterations=40)
                # # cur_outlier_cloud = xyz_o3d_roi_cur.select_by_index(cur_inliers, invert=True)
                # # cur_inlier_cloud = xyz_o3d_roi_cur.select_by_index(cur_inliers, invert=False)
                # # cur_outlier_cloud = np.asarray(cur_outlier_cloud.points)
                # # cur_inlier_cloud = np.asarray(cur_inlier_cloud.points)
            
                # self.draw_pcd.points = o3d.utility.Vector3dVector(cur_outlier_cloud)
                # # self.draw_ground.points = o3d.utility.Vector3dVector(cur_inlier_cloud)
                # self.vis.update_geometry(self.draw_pcd)
                # self.vis.update_geometry(self.draw_ground)
                # self.draw_path.points = o3d.utility.Vector3dVector(path_xy_points)
                # self.draw_path.paint_uniform_color([0/255.0, 114/255.0, 57/255.0])
                # self.vis.update_geometry(self.draw_path)

                # plt.plot(draw_left_x,draw_left_y)

        self.vis.poll_events()
        self.vis.update_renderer() 

def main(args=None):
    rclpy.init(args=args)
    
    lidar = Fit()

    rclpy.spin(lidar)
    
    lidar.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()