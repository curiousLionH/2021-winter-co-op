import time
import numpy as np
import open3d as o3d  # type: ignore
import matplotlib.pyplot as plt
# from colormaps import normalize, colorize
import math

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
from std_msgs.msg import Float64MultiArray, Int16, Bool, Float64
from custom_msgs.msg import * 

from save_ouster.tracker import Tracker
from save_ouster.path_module import *
from save_ouster.make_path import *
from save_ouster.path_module import *
from save_ouster.open3d_test import *
from save_ouster.point2numpy import *
import os

bool_topview = True
cluster_pts = o3d.io.read_point_cloud(os.getcwd() + '/src/save_hesai/save_ouster' + '/test.pcd')
topview_param = o3d.io.read_pinhole_camera_parameters('/home/' + 'amlab' + "/save_ws/src/plot_logic/plot_logic/top_viewpoint_600x900.json")
perspectiveview_param = o3d.io.read_pinhole_camera_parameters('/home/' + 'amlab' + "/save_ws/src/plot_logic/plot_logic/perspective_viewpoint_600x900.json")

class Main(Node):

    def __init__(self):
        super().__init__('OusterSub')

        self.raw_data = []
        self.dt = 0.1
        self.tracker = Tracker(13,5,5)
        self.left_path_x = []
        self.left_path_y = []
        self.left_path_s = []
        self.left_path_h = []
        self.xyz_np = np.array([])
        self.right_path_x = []
        self.right_path_y = []
        self.right_path_s = []
        self.right_path_h = []
        self.path_x = np.array([])
        self.path_y = np.array([])
        self.path_z = np.array([])
        self.path_h = np.array([])
        self.xyz_cm = np.array([])
        self.lane_width = 3.2
        self.cur_v = 0


        self.left_idx = 0
        self.right_idx = 0

        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)


        self.vis = o3d.visualization.VisualizerWithKeyCallback()

        self.vis.register_key_callback(32, self.change_view_callback)
        grid_line_set = draw_grid_line()
        self.vis.create_window(width=600, height=900)
        self.vis.add_geometry(grid_line_set)


        opt = self.vis.get_render_option()
        
        opt.background_color = np.asarray([18/255.0, 19/255.0, 13/255.0])
        opt.point_size = 3.0

        ctr = self.vis.get_view_control()
        self.draw_pcd = o3d.io.read_point_cloud('/home/' + 'amlab' + "/save_ws/src/plot_logic/plot_logic/0.pcd")
        self.draw_cur = o3d.geometry.PointCloud()
        self.draw_cur_front = o3d.geometry.PointCloud()
        self.draw_left_front = o3d.geometry.PointCloud()
        self.draw_left = o3d.geometry.PointCloud()
        self.draw_left_back = o3d.geometry.PointCloud()
        self.draw_right_front = o3d.geometry.PointCloud()
        self.draw_right = o3d.geometry.PointCloud()
        self.draw_right_back = o3d.geometry.PointCloud()

        self.draw_lane = o3d.geometry.LineSet()

        self.vis.add_geometry(self.draw_lane)
        self.vis.add_geometry(self.draw_pcd)
        self.vis.add_geometry(self.draw_cur)
        self.vis.add_geometry(self.draw_cur_front)
        self.vis.add_geometry(self.draw_left_front)
        self.vis.add_geometry(self.draw_left)
        self.vis.add_geometry(self.draw_left_back)
        self.vis.add_geometry(self.draw_right_front)
        self.vis.add_geometry(self.draw_right)
        self.vis.add_geometry(self.draw_right_back)

############################ Sub #######################################

        # self.lidar_sub = self.create_subscription(
        #     Float64MultiArray,
        #     '/ouster',
        #     self.point_callback_os,
        #     1
        # )

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
            "/pointcloud/os1_pc2",
            self.point_callback_cm,
            1
        )
#########################################################################

############################# Pub #######################################
        
        self.right_curvefit_pub = self.create_publisher(
            CurveFit,
            'RightFitting',
            1
        )

        self.left_curvefit_pub = self.create_publisher(
            CurveFit,
            'LeftFitting',
            1
        )

        self.curvefit_pub = self.create_publisher(
            CurveFit,
            'Fitting',
            1
        )   

        self.raw_pub = self.create_publisher(
            LidarMsg,
            'lidar_point',
            1
        )
        self.lidar_pub = self.create_publisher(
            Float64MultiArray,
            'lidar_data_front',
            1
        )
        self.lidar_left_pub = self.create_publisher(
            Float64MultiArray,
            'lidar_data_left',
            1
        )   

        self.lidar_right_pub = self.create_publisher(
            Float64MultiArray,
            'lidar_data_right',
            1
        )

###########################################################################
    def change_view_callback(self, vis):
        ctr = vis.get_view_control()
        global bool_topview

        if bool_topview:
            ctr.convert_from_pinhole_camera_parameters(topview_param)
            print("=== Press 'Space bar', change Perspective View ===")
        else:
            ctr.convert_from_pinhole_camera_parameters(perspectiveview_param)
            print("=== Press 'Space bar', change Top View ===")

        bool_topview = not(bool_topview)

    def RemoveEgoPoints(self, point_array, X_L, X_R, Y_F, Y_R):

        ROI_X_L = X_L
        ROI_X_R = X_R
        ROI_Y_F = Y_F
        ROI_Y_R = Y_R
        # ROI_MAX_Z = MAX_Z
        point_array = point_array

        arg = np.where((point_array[:,0] <= ROI_X_R) & \
                        (point_array[:,0] >= ROI_X_L) & \
                        (point_array[:,1] <= ROI_Y_F) & \
                        (point_array[:,1] >= ROI_Y_R), False, True)
                        # (point_array[:,2] <= ROI_MAX_Z), False, True)

        point_array = point_array[arg]

        return point_array

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

    def make_object_list(self,cluster_data):
        object_datas = cluster_data
        object_list = np.array([])
        slope_list = np.array([])
        max_label = int(cluster_data[:, 3].max())
        # print(max_label)
        for i in range(max_label+1):
            # print(i)
            obj_arg = np.where(object_datas[:,3] == i,True,False)
            object_data = object_datas[obj_arg]
            # print(object_data)
            if len(object_data) != 0:
                xyz_points = object_data[:,0:3]
                
                # slope_box = self.SlopeBBox(xyz_points)

                find_min_x = np.min(object_data[:,0])
                find_max_x = np.max(object_data[:,0])
                find_min_y = np.min(object_data[:,1])
                find_max_y = np.max(object_data[:,1])
                find_max_z = np.max(object_data[:,2])
                find_min_z = np.min(object_data[:,2])
                box_h = find_max_y-find_min_y
                box_w = find_max_x-find_min_x
                box_y = find_max_y - box_h/2
                box_x = find_max_x - box_w/2

            object_list = np.append(object_list,[box_x, box_y, find_max_z, find_min_z, box_w, box_h, i])
            object_list = np.reshape(object_list,(-1,7))

        return object_list#, slope_list
        
    # def point_callback_os(self,msg):
    #     self.raw_data = msg.data
    #     self.xyz_np = np.reshape(self.raw_data,(-1,3))
    #     self.xyz_o3d = o3d.geometry.PointCloud()
    #     self.xyz_o3d.points = o3d.utility.Vector3dVector(self.xyz_np)
    #     R = o3d.geometry.get_rotation_matrix_from_xyz([0, 0, np.pi/2])
    #     self.xyz_o3d.rotate(R, center=(0, 0, 0)).translate((0, 1.1, 1.88))
    #     # print(self.xyz_np)
    #     # print(len(msg.data))

    def path_callback(self, msg):
        self.path_x = np.asarray(msg.x)
        self.path_y = np.asarray(msg.y)
        self.path_s = np.asarray(msg.s)
        self.path_h = np.asarray(msg.h)

    def around_callback(self,msg):
        
        self.left_idx = msg.left_lane
        self.right_idx = msg.right_lane

        if self.left_idx >=1:
            self.left_path_x = np.asarray(msg.left_lanes[0].x)
            self.left_path_y = np.asarray(msg.left_lanes[0].y)
            self.left_path_s = np.asarray(msg.left_lanes[0].s)
            self.left_path_h = np.asarray(msg.left_lanes[0].h)
        else:
            self.left_path_x = np.array([])
            self.left_path_y = np.array([])
            self.left_path_s = np.array([])
            self.left_path_h = np.array([])

        if self.right_idx >=1:
            self.right_path_x = np.asarray(msg.right_lanes[0].x)
            self.right_path_y = np.asarray(msg.right_lanes[0].y)
            self.right_path_s = np.asarray(msg.right_lanes[0].s)
            self.right_path_h = np.asarray(msg.right_lanes[0].h)
        else:
            self.right_path_x = np.array([])
            self.right_path_y = np.array([])
            self.right_path_s = np.array([])
            self.right_path_h = np.array([])

    def point_callback_cm(self,msg):
        # self.raw_data = msg
        # print(msg)
        self.xyz_cm = pointcloud2_to_array(msg)
        self.xyz_cm = get_xyz_points(self.xyz_cm)
        # print(self.xyz_cm)
        # self.xyz_np = np.reshape(self.raw_data,(-1,3))
        self.xyz_o3d = o3d.geometry.PointCloud()
        self.xyz_o3d.points = o3d.utility.Vector3dVector(self.xyz_cm)
        R = o3d.geometry.get_rotation_matrix_from_xyz([0, 0, np.pi/2])
        self.xyz_o3d.rotate(R, center=(0, 0, 0)).translate((0, 1.1, 1.88))

    def timer_callback(self):
        start = time.time()
        default_offset = 0.2
        right_offset = self.lane_width/2 - 1

        line_width = self.lane_width
        path_width = line_width

        if len(np.shape(self.xyz_cm)) != 1:
            # print('point')

            self.draw_pcd.points = self.xyz_o3d.points
            self.draw_pcd.paint_uniform_color([100/255.0, 100/255.0, 100/255.0])
            
            self.xyz_np = np.asarray(self.xyz_o3d.points)
            plt.plot(self.xyz_np[:,0],self.xyz_np[:,1],'ro')
            plt.pause(0.01)
            # if len(self.path_x) != 0:
            #     left_lane_x, \
            #     left_lane_y, \
            #     right_lane_x, \
            #     right_lane_y, \
            #     lleft_lane_x, \
            #     lleft_lane_y, \
            #     lright_lane_x, \
            #     lright_lane_y, \
            #     rleft_lane_x, \
            #     rleft_lane_y, \
            #     rright_lane_x, \
            #     rright_lane_y = make_roi_path(self.path_x, self.path_y, self.path_h, line_width, default_offset, right_offset, self.left_idx, self.right_idx)
                
            #     left_coeff, draw_left_x, draw_left_y = curveFit(left_lane_x, left_lane_y)
            #     right_coeff, draw_right_x, draw_right_y = curveFit(right_lane_x, right_lane_y)
            #     lleft_coeff, draw_lleft_x, draw_lleft_y = curveFit(lleft_lane_x, lleft_lane_y)
            #     lright_coeff, draw_lright_x, draw_lright_y = curveFit(lright_lane_x, lright_lane_y)
            #     rleft_coeff, draw_rleft_x, draw_rleft_y = curveFit(rleft_lane_x, rleft_lane_y)
            #     rright_coeff, draw_rright_x, draw_rright_y = curveFit(rright_lane_x, rright_lane_y)

            #     if len(draw_left_x) & len(draw_lleft_x) & len(draw_rleft_x) != 0:

            #         cl_points, cl_lines, cl_colors = draw_ground_line(draw_left_x,draw_left_y,[255/255.0, 255/255.0, 217/255.0])
            #         cr_points, cr_lines, cr_colors = draw_ground_line(draw_right_x,draw_right_y,[255/255.0, 255/255.0, 217/255.0])
            #         ll_points, ll_lines, ll_colors = draw_ground_line(draw_lleft_x,draw_lleft_y,[5/255.0, 91/255.0, 166/255.0])
            #         lr_points, lr_lines, lr_colors = draw_ground_line(draw_lright_x,draw_lright_y,[5/255.0, 91/255.0, 166/255.0])
            #         rl_points, rl_lines, rl_colors = draw_ground_line(draw_rleft_x,draw_rleft_y,[255/255.0, 91/255.0, 166/255.0])
            #         rr_points, rr_lines, rr_colors = draw_ground_line(draw_rright_x,draw_rright_y,[255/255.0, 91/255.0, 166/255.0])

            #         points = np.vstack([cl_points, cr_points,ll_points, lr_points, rl_points, rr_points])

            #         lines = np.vstack([cl_lines, 
            #             cr_lines + len(cl_lines) + 1,
            #             ll_lines + len(cr_lines) + 1 + len(cl_lines) + 1,
            #             lr_lines + len(ll_lines) + 1 + len(cr_lines) + 1 + len(cl_lines) + 1,
            #             rl_lines + len(lr_lines) + 1 + len(ll_lines) + 1 + len(cr_lines) + 1 + len(cl_lines) + 1,
            #             rr_lines + len(rl_lines) + 1 + len(lr_lines) + 1 + len(ll_lines) + 1 + len(cr_lines) + 1 + len(cl_lines) + 1
            #             ])

            #         colors = np.vstack([cl_colors, cr_colors, ll_colors, lr_colors, rl_colors, rr_colors])

            #         self.draw_lane.points = o3d.utility.Vector3dVector(points)
            #         self.draw_lane.lines = o3d.utility.Vector2iVector(lines)
            #         self.draw_lane.colors = o3d.utility.Vector3dVector(colors)

            #         self.vis.update_geometry(self.draw_lane)

            #     cur_roi_points ,points_num = curveROI(left_coeff, right_coeff, self.xyz_np,[-1,3])
            #     left_roi_points, left_points_num = curveROI(lleft_coeff, lright_coeff, self.xyz_np,[-1,3])
            #     right_roi_points, right_points_num = curveROI(rleft_coeff, rright_coeff, self.xyz_np,[-1,3])

            #     cur_roi_points = self.RemoveEgoPoints(cur_roi_points, -1, 1, 4, -2)
            #     cur_roi_fornt_points = self.ROIPoints(cur_roi_points, -20, 20, 60, 10, 4)
            #     cur_roi_cur_points = self.ROIPoints(cur_roi_points, -20, 20, 10, -10, 4)
            #     # print(cur_roi_front_points)
            #     left_roi_front_points = self.ROIPoints(left_roi_points, -20, 20, 60, 10, 4)
            #     left_roi_cur_points = self.ROIPoints(left_roi_points, -20, 20, 10, -10, 4)
            #     left_roi_back_points = self.ROIPoints(left_roi_points, -20, 20, -10, -30, 4)
            #     right_roi_front_points = self.ROIPoints(right_roi_points, -20, 20, 60, 10, 4)
            #     right_roi_cur_points = self.ROIPoints(right_roi_points, -20, 20, 10, -10, 4)
            #     right_roi_back_points = self.ROIPoints(right_roi_points, -20, 20, -10, -30, 4)
            #     # print(right_roi_back_points)

            #     start_ransac = time.time()
            #     xyz_o3d_roi_cur = o3d.geometry.PointCloud()
            #     xyz_o3d_roi_cur.points = o3d.utility.Vector3dVector(cur_roi_cur_points)

            #     xyz_o3d_roi_cur_front = o3d.geometry.PointCloud()
            #     xyz_o3d_roi_cur_front.points = o3d.utility.Vector3dVector(cur_roi_fornt_points)

            #     xyz_o3d_roi_left_front = o3d.geometry.PointCloud()
            #     xyz_o3d_roi_left_front.points = o3d.utility.Vector3dVector(left_roi_front_points)

            #     xyz_o3d_roi_left_cur = o3d.geometry.PointCloud()
            #     xyz_o3d_roi_left_cur.points = o3d.utility.Vector3dVector(left_roi_cur_points)

            #     xyz_o3d_roi_left_back = o3d.geometry.PointCloud()
            #     xyz_o3d_roi_left_back.points = o3d.utility.Vector3dVector(left_roi_back_points)

            #     xyz_o3d_roi_right_front = o3d.geometry.PointCloud()
            #     xyz_o3d_roi_right_front.points = o3d.utility.Vector3dVector(right_roi_front_points)

            #     xyz_o3d_roi_right_cur = o3d.geometry.PointCloud()
            #     xyz_o3d_roi_right_cur.points = o3d.utility.Vector3dVector(right_roi_cur_points)

            #     xyz_o3d_roi_right_back = o3d.geometry.PointCloud()
            #     xyz_o3d_roi_right_back.points = o3d.utility.Vector3dVector(right_roi_back_points)

            #     z_unit_vector = np.array([0,0,1])

            #     cur_plane_model, cur_inliers = xyz_o3d_roi_cur.segment_plane(distance_threshold=0.2,
            #                                             ransac_n=3,
            #                                             num_iterations=40)
            #     cur_outlier_cloud = xyz_o3d_roi_cur.select_by_index(cur_inliers, invert=True)

            #     cur_outlier_cloud = np.asarray(cur_outlier_cloud.points)

            #     [cur_a,cur_b,cur_c,cur_d] = cur_plane_model
                
            #     cur_remain_points = cur_outlier_cloud
                
            #     cur_plane_vector = np.array([cur_a,cur_b,cur_c])

            #     cur_angle = np.arccos(np.dot(cur_plane_vector,z_unit_vector)/(1 * np.sqrt(cur_a**2+cur_b**2+cur_c**2)))
            #     cur_angle = np.rad2deg(cur_angle)
            #     # print(cur_angle)

            #     if cur_angle > 4:
            #         rm_ground_points = self.RemoveGround(cur_remain_points,1)
            #         cur_remain_points = rm_ground_points
            #     else:
            #         cur_remain_x = cur_a*cur_remain_points[:,0].reshape(-1,1)
            #         cur_remain_y = cur_b*cur_remain_points[:,1].reshape(-1,1)
            #         cur_remain_z = (cur_remain_x + cur_remain_y + cur_d)/-cur_c
            #         th_arg = np.where(cur_remain_points[:,2].reshape(-1,1) - cur_remain_z >= 0.3, True, False)
            #         th_arg = th_arg.reshape(-1,1)
            #         th_arg = np.hstack((th_arg,th_arg,th_arg))
            #         cur_remain_points = cur_remain_points[th_arg]
            #         cur_remain_points = np.reshape(cur_remain_points,(-1,3))


            #     cur_front_plane_model, cur_front_inliers = xyz_o3d_roi_cur_front.segment_plane(distance_threshold=0.2,
            #                                             ransac_n=3,
            #                                             num_iterations=40)
            #     cur_front_inliers_cloud = xyz_o3d_roi_cur_front.select_by_index(cur_front_inliers, invert=False)
            #     cur_front_outlier_cloud = xyz_o3d_roi_cur_front.select_by_index(cur_front_inliers, invert=True)
            #     # cur_front_inliers_cloud = xyz_o3d_roi_cur_front.select_by_index(cur_front_inliers, invert=False)
            #     [cur_front_a,cur_front_b,cur_front_c,cur_front_d] = cur_front_plane_model

            #     cur_front_plane_vector = np.array([cur_front_a,cur_front_b,cur_front_c])

            #     cur_front_angle = np.arccos(np.dot(cur_front_plane_vector,z_unit_vector)/(1 * np.sqrt(cur_front_a**2+cur_front_b**2+cur_front_c**2)))
            #     cur_front_angle = np.rad2deg(cur_front_angle)

            #     cur_front_outlier_cloud = np.asarray(cur_front_outlier_cloud.points)

            #     cur_front_remain_points = cur_front_outlier_cloud

            #     if cur_front_angle > 4:
            #         rm_ground_points = self.RemoveGround(cur_front_remain_points,0.7)
            #         cur_front_remain_points = rm_ground_points
            #     else:
            #         cur_front_remain_x = cur_front_a*cur_front_remain_points[:,0].reshape(-1,1)
            #         cur_front_remain_y = cur_front_b*cur_front_remain_points[:,1].reshape(-1,1)
            #         cur_front_remain_z = (cur_front_remain_x + cur_front_remain_y + cur_front_d)/-cur_front_c
            #         th_arg = np.where(cur_front_remain_points[:,2].reshape(-1,1) - cur_front_remain_z >= 0.5, True, False)
            #         th_arg = th_arg.reshape(-1,1)
            #         th_arg = np.hstack((th_arg,th_arg,th_arg))
            #         cur_front_remain_points = cur_front_remain_points[th_arg]
            #         cur_front_remain_points = np.reshape(cur_front_remain_points,(-1,3))


            #     self.draw_cur_front.points = o3d.utility.Vector3dVector(cur_front_remain_points)
            #     self.draw_cur_front.paint_uniform_color([255/255.0, 255/255.0, 10/255.0])

            #     # self.draw_cur.points = o3d.utility.Vector3dVector(cur_remain_points)
            #     self.draw_cur.points = cur_front_inliers_cloud.points
            #     self.draw_cur.paint_uniform_color([255/255.0, 255/255.0, 255/255.0])


            #     if len(left_roi_points) != 0:
            #         if np.asarray(len(xyz_o3d_roi_left_cur.points)) > 4:
            #             cur_left_plane_model, left_inliers = xyz_o3d_roi_left_cur.segment_plane(distance_threshold=0.2,
            #                                                     ransac_n=3,
            #                                                     num_iterations=40)
            #             cur_left_outlier_cloud = xyz_o3d_roi_left_cur.select_by_index(left_inliers, invert=True)
            #             cur_left_outlier_cloud = np.asarray(cur_left_outlier_cloud.points)
                        
            #             [cur_left_a,cur_left_b,cur_left_c,left_d] = cur_left_plane_model

            #             cur_left_plane_vector = np.array([cur_left_a,cur_left_b,cur_left_c])

            #             cur_left_remain_points = cur_left_outlier_cloud

            #             cur_left_angle = np.arccos(np.dot(cur_left_plane_vector,z_unit_vector)/(1 * np.sqrt(cur_left_a**2+cur_left_b**2+cur_left_c**2)))
            #             cur_left_angle = np.rad2deg(cur_left_angle)
            #             # print('cur_left_angle:',cur_left_angle)
            #             if cur_left_angle > 2:
                            
            #                 rm_ground_points = self.RemoveGround(cur_left_remain_points,0.5)
            #                 cur_left_remain_points = rm_ground_points
            #             else:
            #                 left_remain_x = cur_left_a*cur_left_remain_points[:,0].reshape(-1,1)
            #                 left_remain_y = cur_left_b*cur_left_remain_points[:,1].reshape(-1,1)
            #                 left_remain_z = (left_remain_x + left_remain_y + left_d)/-cur_left_c
            #                 th_arg = np.where(cur_left_remain_points[:,2].reshape(-1,1) - left_remain_z >= 0.1, True, False)
            #                 th_arg = th_arg.reshape(-1,1)
            #                 th_arg = np.hstack((th_arg,th_arg,th_arg))
            #                 cur_left_remain_points = cur_left_remain_points[th_arg]
            #                 cur_left_remain_points = np.reshape(cur_left_remain_points,(-1,3))

            #             self.draw_left.points = o3d.utility.Vector3dVector(cur_left_remain_points)
            #             self.draw_left.paint_uniform_color([255/255.0, 255/255.0, 255/255.0])  

            #         if np.asarray(len(xyz_o3d_roi_left_front.points)) > 4:

            #             front_left_plane_model, left_inliers = xyz_o3d_roi_left_front.segment_plane(distance_threshold=0.2,
            #                                                     ransac_n=3,
            #                                                     num_iterations=40)
            #             front_left_outlier_cloud = xyz_o3d_roi_left_front.select_by_index(left_inliers, invert=True)

            #             front_left_outlier_cloud = np.asarray(front_left_outlier_cloud.points)
            #             front_left_remain_points = front_left_outlier_cloud
            #             [front_left_a,front_left_b,front_left_c,front_left_d] = front_left_plane_model

            #             front_left_plane_vector = np.array([front_left_a,front_left_b,front_left_c])

            #             front_left_angle = np.arccos(np.dot(front_left_plane_vector,z_unit_vector)/(1 * np.sqrt(front_left_a**2+front_left_b**2+front_left_c**2)))
            #             front_left_angle = np.rad2deg(front_left_angle)


            #             if front_left_angle > 15:
            #                 rm_ground_points = self.RemoveGround(front_left_remain_points,1.0)
            #                 front_left_remain_points = rm_ground_points
            #             else:
            #                 front_left_remain_x = front_left_a*front_left_remain_points[:,0].reshape(-1,1)
            #                 front_left_remain_y = front_left_b*front_left_remain_points[:,1].reshape(-1,1)
            #                 front_left_remain_z = (front_left_remain_x + front_left_remain_y + front_left_d)/-front_left_c
            #                 th_arg = np.where(front_left_remain_points[:,2].reshape(-1,1) - front_left_remain_z >= 0.3, True, False)
            #                 th_arg = th_arg.reshape(-1,1)
            #                 th_arg = np.hstack((th_arg,th_arg,th_arg))
            #                 front_left_remain_points = front_left_remain_points[th_arg]
            #                 front_left_remain_points = np.reshape(front_left_remain_points,(-1,3))

            #             self.draw_left_front.points = o3d.utility.Vector3dVector(front_left_remain_points)
            #             self.draw_left_front.paint_uniform_color([255/255.0, 10/255.0, 10/255.0])

            #         if np.asarray(len(xyz_o3d_roi_left_back.points)) > 4:
            #             back_left_plane_model, left_inliers = xyz_o3d_roi_left_back.segment_plane(distance_threshold=0.2,
            #                                                     ransac_n=3,
            #                                                     num_iterations=40)
            #             back_left_outlier_cloud = xyz_o3d_roi_left_back.select_by_index(left_inliers, invert=True)

            #             back_left_outlier_cloud = np.asarray(back_left_outlier_cloud.points)
            #             back_left_remain_points = back_left_outlier_cloud
            #             [back_left_a,back_left_b,back_left_c,back_left_d] = back_left_plane_model

            #             back_left_plane_vector = np.array([back_left_a,back_left_b,back_left_c])

            #             back_left_angle = np.arccos(np.dot(back_left_plane_vector,z_unit_vector)/(1 * np.sqrt(back_left_a**2+back_left_b**2+back_left_c**2)))
            #             back_left_angle = np.rad2deg(back_left_angle)

            #             if back_left_angle > 15:
            #                 rm_ground_points = self.RemoveGround(back_left_remain_points,1.0)
            #                 back_left_remain_points = rm_ground_points
            #             else:
            #                 back_left_remain_x = back_left_a*back_left_remain_points[:,0].reshape(-1,1)
            #                 back_left_remain_y = back_left_b*back_left_remain_points[:,1].reshape(-1,1)
            #                 back_left_remain_z = (back_left_remain_x + back_left_remain_y + back_left_d)/-back_left_c
            #                 th_arg = np.where(back_left_remain_points[:,2].reshape(-1,1) - back_left_remain_z >= 0.3, True, False)
            #                 th_arg = th_arg.reshape(-1,1)
            #                 th_arg = np.hstack((th_arg,th_arg,th_arg))
            #                 back_left_remain_points = back_left_remain_points[th_arg]
            #                 back_left_remain_points = np.reshape(back_left_remain_points,(-1,3))
            #             self.draw_left_back.points = o3d.utility.Vector3dVector(back_left_remain_points)
            #             self.draw_left_back.paint_uniform_color([255/255.0, 100/255.0, 100/255.0])

            #         # left_remain_points = np.vstack((cur_left_remain_points,front_left_remain_points,back_left_remain_points))
            #     else:
            #         left_remain_points = np.array([0, 0, 0])
            #         self.draw_left.points = o3d.utility.Vector3dVector()
            #         self.draw_left_front.points = o3d.utility.Vector3dVector()
            #         self.draw_left_back.points = o3d.utility.Vector3dVector()

            #     if len(right_roi_points) != 0:
            #         if np.asarray(len(xyz_o3d_roi_cur.points)) > 4:
            #             cur_right_plane_model, right_inliers = xyz_o3d_roi_right_cur.segment_plane(distance_threshold=0.2,
            #                                                     ransac_n=3,
            #                                                     num_iterations=50)
            #             cur_right_outlier_cloud = xyz_o3d_roi_right_cur.select_by_index(right_inliers, invert=True)
            #             cur_right_outlier_cloud = np.asarray(cur_right_outlier_cloud.points)

            #             [cur_right_a,cur_right_b,cur_right_c,right_d] = cur_right_plane_model

            #             cur_right_plane_vector = np.array([cur_right_a,cur_right_b,cur_right_c])

            #             cur_right_remain_points = cur_right_outlier_cloud

            #             cur_right_angle = np.arccos(np.dot(cur_right_plane_vector,z_unit_vector)/(1 * np.sqrt(cur_right_a**2+cur_right_b**2+cur_right_c**2)))
            #             cur_right_angle = np.rad2deg(cur_right_angle)

            #             if cur_right_angle > 2:
            #                 rm_ground_points = self.RemoveGround(cur_right_remain_points,0.5)
            #                 cur_right_remain_points = rm_ground_points
            #             else:
            #                 right_remain_x = cur_right_a*cur_right_remain_points[:,0].reshape(-1,1)
            #                 right_remain_y = cur_right_b*cur_right_remain_points[:,1].reshape(-1,1)
            #                 right_remain_z = (right_remain_x + right_remain_y + right_d)/-cur_right_c
            #                 th_arg = np.where(cur_right_remain_points[:,2].reshape(-1,1) - right_remain_z >= 0.1, True, False)
            #                 th_arg = th_arg.reshape(-1,1)
            #                 th_arg = np.hstack((th_arg,th_arg,th_arg))
            #                 cur_right_remain_points = cur_right_remain_points[th_arg]
            #                 cur_right_remain_points = np.reshape(cur_right_remain_points,(-1,3))

            #             self.draw_right.points = o3d.utility.Vector3dVector(cur_right_remain_points)
            #             self.draw_right.paint_uniform_color([255/255.0, 255/255.0, 255/255.0])

            #         if np.asarray(len(xyz_o3d_roi_right_front.points)) > 4:
            #             front_right_plane_model, right_inliers = xyz_o3d_roi_right_front.segment_plane(distance_threshold=0.2,
            #                                                     ransac_n=3,
            #                                                     num_iterations=50)
            #             front_right_outlier_cloud = xyz_o3d_roi_right_front.select_by_index(right_inliers, invert=True)
            #             front_right_outlier_cloud = np.asarray(front_right_outlier_cloud.points)
            #             front_right_remain_points = front_right_outlier_cloud

            #             [front_right_a,front_right_b,front_right_c,front_right_d] = front_right_plane_model

            #             front_right_plane_vector = np.array([front_right_a,front_right_b,front_right_c])

            #             front_right_angle = np.arccos(np.dot(front_right_plane_vector,z_unit_vector)/(1 * np.sqrt(front_right_a**2+front_right_b**2+front_right_c**2)))
            #             front_right_angle = np.rad2deg(front_right_angle)
                        
            #             # print('right_front_ang',front_right_angle)

            #             if front_right_angle > 15:
            #                 rm_ground_points = self.RemoveGround(front_right_remain_points,1.0)
            #                 front_right_remain_points = rm_ground_points
            #             else:
            #                 front_right_remain_x = front_right_a*front_right_remain_points[:,0].reshape(-1,1)
            #                 front_right_remain_y = front_right_b*front_right_remain_points[:,1].reshape(-1,1)
            #                 front_right_remain_z = (front_right_remain_x + front_right_remain_y + front_right_d)/-front_right_c
            #                 th_arg = np.where(front_right_remain_points[:,2].reshape(-1,1) - front_right_remain_z >= 0.3, True, False)
            #                 th_arg = th_arg.reshape(-1,1)
            #                 th_arg = np.hstack((th_arg,th_arg,th_arg))
            #                 front_right_remain_points = front_right_remain_points[th_arg]
            #                 front_right_remain_points = np.reshape(front_right_remain_points,(-1,3))

            #             self.draw_right_front.points = o3d.utility.Vector3dVector(front_right_remain_points)
            #             self.draw_right_front.paint_uniform_color([10/255.0, 10/255.0, 255/255.0])

            #         if np.asarray(len(xyz_o3d_roi_right_back.points)) > 4:
            #             back_right_plane_model, back_right_inliers = xyz_o3d_roi_right_back.segment_plane(distance_threshold=0.2,
            #                                                     ransac_n=3,
            #                                                     num_iterations=50)

            #             back_right_outlier_cloud = xyz_o3d_roi_right_back.select_by_index(back_right_inliers, invert=True)
            #             back_right_outlier_cloud = np.asarray(back_right_outlier_cloud.points)
            #             back_right_remain_points = back_right_outlier_cloud

            #             [back_right_a,back_right_b,back_right_c,back_right_d] = back_right_plane_model

            #             back_right_plane_vector = np.array([back_right_a,back_right_b,back_right_c])

            #             back_right_angle = np.arccos(np.dot(back_right_plane_vector,z_unit_vector)/(1 * np.sqrt(back_right_a**2+back_right_b**2+back_right_c**2)))
            #             back_right_angle = np.rad2deg(back_right_angle)
                        
            #             # print('right_back_ang',back_right_angle)

            #             if back_right_angle > 15:
            #                 rm_ground_points = self.RemoveGround(back_right_remain_points,1.0)
            #                 back_right_remain_points = rm_ground_points
            #             else:
            #                 back_right_remain_x = back_right_a*back_right_remain_points[:,0].reshape(-1,1)
            #                 back_right_remain_y = back_right_b*back_right_remain_points[:,1].reshape(-1,1)
            #                 back_right_remain_z = (back_right_remain_x + back_right_remain_y + back_right_d)/-back_right_c
            #                 # print(back_right_remain_z)
            #                 # print(back_right_remain_points[:,2].reshape(-1,1) - back_right_remain_z)
            #                 th_arg = np.where(back_right_remain_points[:,2].reshape(-1,1) - back_right_remain_z >= 0.3, True, False)
            #                 th_arg = th_arg.reshape(-1,1)
            #                 th_arg = np.hstack((th_arg,th_arg,th_arg))
            #                 back_right_remain_points = back_right_remain_points[th_arg]
            #                 back_right_remain_points = np.reshape(back_right_remain_points,(-1,3))
            #             self.draw_right_back.points = o3d.utility.Vector3dVector(back_right_remain_points)
            #             self.draw_right_back.paint_uniform_color([100/255.0, 100/255.0, 255/255.0])

            #         # right_remain_points = np.vstack((cur_right_remain_points, front_right_remain_points, back_right_remain_points))
            #     else:
            #         right_remain_points = np.array([0, 0, 0])
            #         self.draw_right_front.points = o3d.utility.Vector3dVector()
            #         self.draw_right.points = o3d.utility.Vector3dVector()
            #         self.draw_right_back.points = o3d.utility.Vector3dVector()


        self.vis.update_geometry(self.draw_pcd)
        self.vis.update_geometry(self.draw_cur)
        self.vis.update_geometry(self.draw_cur_front)
        self.vis.update_geometry(self.draw_left_front)
        self.vis.update_geometry(self.draw_left)
        self.vis.update_geometry(self.draw_left_back)
        self.vis.update_geometry(self.draw_right_front)
        self.vis.update_geometry(self.draw_right)
        self.vis.update_geometry(self.draw_right_back)
        self.vis.poll_events()
        self.vis.update_renderer()
        total_time = time.time()-start 
        print('code_time : {}'.format(total_time))

def main(args=None):
    rclpy.init(args=args)

    lidar = Main()

    rclpy.spin(lidar)

    lidar.destroy_node()

if __name__ == "__main__":
    main()