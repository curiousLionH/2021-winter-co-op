import rclpy
from rclpy.node import Node

from sensor_msgs.msg import PointCloud2
from std_msgs.msg import Float64MultiArray, Int16, Bool, Float64
from custom_msgs.msg import * 

import numpy as np
import open3d as o3d
import time
import matplotlib.pyplot as plt
import os

from sklearn import linear_model
from save_hesai.tracker import Tracker
from save_hesai.path_module import *
from save_hesai.point2numpy import *
from save_hesai.make_path import *

cluster_pts = o3d.io.read_point_cloud(os.getcwd() + '/src/save_hesai/save_hesai' + '/test.pcd')

class Main(Node):

    def __init__(self):
        super().__init__('LidarProcess')

        self.point_sub = self.create_subscription(
            PointCloud2,
            "/pointcloud/os1_pc2",
            self.point_callback_cm,
            1
        )
        #---------------Avnate
        self.point_sub = self.create_subscription(
            PointCloud2,
            "/pandar",
            self.point_callback_avante,
            1
        )
        self.local_subscriber = self.create_subscription(
            Float64MultiArray, 
            'ego_location',
            self.localization_callback,
            1)

        self.map_mode_sub = self.create_subscription(
            Int16,
            '/map',
            self.map_mode_callback,
            1)

        self.path_sub = self.create_subscription(
            Paths,
            'local_path',
            self.path_callback,
            1)

        self.sub_rqt_version = self.create_subscription(
            Int16, '/version', self.version_callback, 1
        )       
        self.vehicle_info_subscriber = self.create_subscription(
            Float64MultiArray, 'vehicle_info_out2', self.callback_vehicle_info, 1
        )
        
        self.sub_wheel_spd = self.create_subscription(
            SaveCAN1810, 'CAN/id1810', self.wheel_spd_callback, 1
        )
        
        self.sub_around_paths = self.create_subscription(
            AroundPaths, 'around_paths',self.around_callback,1
        )

        self.lidar_subscriber = self.create_subscription(
            Float64,
            'lane_width',
            self.callback_lane_width,
            1) 

        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.point_sub
        self.tracker = Tracker(13,5,7)
        self.install_loc = 2.2
        self.path_x = np.array([])
        self.path_y = np.array([])
        self.path_z = np.array([])
        self.path_h = np.array([])
        self.xyz_avante = np.array([])
        self.xyz_cm = np.array([])
        self.xyz_niro = np.array([])
        self.xyz_np = np.array([])
        self.version = 0
        self.car_vx = 0
        self.pitch = 0
        self.GTH = 0

        self.left_idx = 0
        self.right_idx = 0

        self.raw_data = PointCloud2()
        self.ex_lidar_shape = 0
        self.lidar_error_msg = 0
        self.err_idx = 0
        self.dt = 0.1
        self.map_mode = 0
        self.cur_v = 0
        self.current_id_subscribed = 0
        self.lane_width = 3.2

        self.left_path_x = []
        self.left_path_y = []
        self.left_path_s = []
        self.left_path_h = []

        self.right_path_x = []
        self.right_path_y = []
        self.right_path_s = []
        self.right_path_h = []

        self.lidar_pub = self.create_publisher(
            Float64MultiArray,
            'lidar_data_front',
            1)

        self.lidar_left_pub = self.create_publisher(
            Float64MultiArray,
            'lidar_data_left',
            1)   

        self.lidar_right_pub = self.create_publisher(
            Float64MultiArray,
            'lidar_data_right',
            1) 

        self.raw_pub = self.create_publisher(
            LidarMsg,
            'lidar_point',
            1
        )
        self.curvefit_pub = self.create_publisher(
            CurveFit,
            'Fitting',
            1
        )
        self.left_curvefit_pub = self.create_publisher(
            CurveFit,
            'LeftFitting',
            1
        )
        self.right_curvefit_pub = self.create_publisher(
            CurveFit,
            'RightFitting',
            1
        )

        self.err_pub = self.create_publisher(
            Bool,
            'lidar_status',
            1
        )

    def RemoveEgoPoints(self, point_array, X_L, X_R, Y_F, Y_R, MAX_Z):

        ROI_X_L = X_L
        ROI_X_R = X_R
        ROI_Y_F = Y_F
        ROI_Y_R = Y_R
        ROI_MAX_Z = MAX_Z
        point_array = point_array

        arg = np.where((point_array[:,0] <= ROI_X_R) & \
                        (point_array[:,0] >= ROI_X_L) & \
                        (point_array[:,1] <= ROI_Y_F) & \
                        (point_array[:,1] >= ROI_Y_R) & \
                        (point_array[:,2] <= ROI_MAX_Z), False, True)

        point_array = point_array[arg]

        return point_array

    def RemoveGround(self, point_array, Z):

        ROI_Z = Z
        point_array = point_array

        arg = np.where((point_array[:,2] >= ROI_Z) , True, False)

        point_array = point_array[arg]

        return point_array

    def ROIPoints(self, point_array, X_L, X_R, Y_F, Y_R, Z):

        ROI_X_L = X_L
        ROI_X_R = X_R
        ROI_Y_F = Y_F
        ROI_Y_R = Y_R
        ROI_Z = Z
        point_array = point_array

        arg = np.where((point_array[:,0] <= ROI_X_R) & \
                        (point_array[:,0] >= ROI_X_L) & \
                        (point_array[:,1] <= ROI_Y_F) & \
                        (point_array[:,1] >= ROI_Y_R) &\
                        (point_array[:,2] <= ROI_Z), True, False)

        point_array = point_array[arg]

        return point_array

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

    def path_callback(self, msg):
        self.path_x = np.asarray(msg.x)
        self.path_y = np.asarray(msg.y)
        self.path_s = np.asarray(msg.s)
        self.path_h = np.asarray(msg.h)
        # if len(msg.x) == 0:


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


    def localization_callback(self, msg):
        self.current_id_subscribed = int(msg.data[3])
        # print(self.current_id_subscribed)

    def version_callback(self, msg):
        # print(msg)
        self.version = msg.data
    
    def point_callback_avante(self,msg):
        self.raw_data = msg
        self.xyz_avante = pointcloud2_to_array(self.raw_data)
        self.xyz_avante = get_xyz_points(self.xyz_avante)

    def point_callback_cm(self,msg):
        self.raw_data = msg
        self.xyz_cm = pointcloud2_to_array(self.raw_data)
        self.xyz_cm = get_xyz_points(self.xyz_cm)

    def callback_vehicle_info(self, msg):
        self.cur_v = msg.data[3]
        self.pitch = msg.data[1]
        self.GTH = msg.data[2]

    def wheel_spd_callback(self, msg):
        self.cur_v = ((msg.wheel_spd_rl + msg.wheel_spd_rr) / 2) / 3.6

    def map_mode_callback(self, msg):
        self.map_mode = int(msg.data)

    def callback_lane_width(self,msg):
        self.lane_width = msg.data

    def timer_callback(self):
        start = time.time()
        default_offset = 0.2
        right_offset = self.lane_width/2 - 1

        line_width = self.lane_width
        path_width = line_width

        if self.version == 1:   #Avante
            # print(self.raw_data.header.stamp.nanosec)
            self.xyz_np = self.xyz_avante
            car_v = self.cur_v/3.6
        elif self.version == 3: #CM
            self.xyz_np = self.xyz_cm
            car_v = self.cur_v
        if self.version == 0:

            print('No version msg')
            if self.map_mode == 0:
                print('No map_mode msg')
        else:

            if self.ex_lidar_shape == np.shape(self.xyz_np):
                self.err_idx += 1
                self.self_error_msg = Bool()
                self.self_error_msg.data = True
                self.err_pub.publish(self.self_error_msg)

                if self.err_idx >= 20:

                    self.self_error_msg = Bool()
                    self.self_error_msg.data = False
                    self.err_pub.publish(self.self_error_msg)
            else:
                self.err_idx = 0

            if len(np.shape(self.xyz_np)) != 1:
                
                try:
                    xyz_o3d = o3d.geometry.PointCloud()
                    xyz_o3d.points = o3d.utility.Vector3dVector(self.xyz_np)

                    # print(xyz_o3d)

                    # calibration to ego vehicle
                    if self.version == 1:
                        R = o3d.geometry.get_rotation_matrix_from_xyz([0, 0, np.pi])
                        xyz_o3d.rotate(R, center=(0, 0, 0)).translate((0, 1.1, 1.7))
                        self.xyz_np = np.asarray(xyz_o3d.points)
                    elif self.version ==3:
                        R = o3d.geometry.get_rotation_matrix_from_xyz([0, 0, np.pi/2])
                        xyz_o3d.rotate(R, center=(0, 0, 0)).translate((0, 1.1,2.2))
                        self.xyz_np = np.asarray(xyz_o3d.points)
                    
                    if len(self.path_x) != 0:
                        left_lane_x, \
                        left_lane_y, \
                        right_lane_x, \
                        right_lane_y, \
                        lleft_lane_x, \
                        lleft_lane_y, \
                        lright_lane_x, \
                        lright_lane_y, \
                        rleft_lane_x, \
                        rleft_lane_y, \
                        rright_lane_x, \
                        rright_lane_y = make_roi_path(self.path_x, self.path_y, self.path_h, line_width, default_offset, right_offset, self.left_idx, self.right_idx)
                        
                        left_coeff, draw_left_x, draw_left_y = curveFit(left_lane_x, left_lane_y)
                        right_coeff, draw_right_x, draw_right_y = curveFit(right_lane_x, right_lane_y)
                        lleft_coeff, draw_lleft_x, draw_lleft_y = curveFit(lleft_lane_x, lleft_lane_y)
                        lright_coeff, draw_lright_x, draw_lright_y = curveFit(lright_lane_x, lright_lane_y)
                        rleft_coeff, draw_rleft_x, draw_rleft_y = curveFit(rleft_lane_x, rleft_lane_y)
                        rright_coeff, draw_rright_x, draw_rright_y = curveFit(rright_lane_x, rright_lane_y)

                        if self.map_mode >=5 and self.current_id_subscribed <=2:
                            default_offset = 0.5
                            line_width = 3
                            left_lane_x = self.path_x - (line_width/2 * np.sin(self.path_h) - default_offset)
                            left_lane_y = self.path_y + (line_width/2 * np.cos(self.path_h) - default_offset)
                            right_lane_x = self.path_x + (line_width/2 * np.sin(self.path_h) - default_offset)
                            right_lane_y = self.path_y - (line_width/2 * np.cos(self.path_h) - default_offset)

                            left_coeff, draw_left_x, draw_left_y = curveFit(left_lane_x, left_lane_y)
                            right_coeff, draw_right_x, draw_right_y = curveFit(right_lane_x, right_lane_y)
                            lleft_coeff, draw_lleft_x, draw_lleft_y = curveFit(lleft_lane_x, lleft_lane_y)
                            lright_coeff, draw_lright_x, draw_lright_y = curveFit(lright_lane_x, lright_lane_y)
                            rleft_coeff, draw_rleft_x, draw_rleft_y = curveFit(rleft_lane_x, rleft_lane_y)
                            rright_coeff, draw_rright_x, draw_rright_y = curveFit(rright_lane_x, rright_lane_y)

                            cur_roi_points ,points_num = curveROI(left_coeff, right_coeff, self.xyz_np,[-1,3])
                            left_roi_points, left_points_num = curveROI(lleft_coeff, lright_coeff, self.xyz_np,[-1,3])
                            right_roi_points, right_points_num = curveROI(rleft_coeff, rright_coeff, self.xyz_np,[-1,3])

                            cur_roi_points = self.RemoveEgoPoints(cur_roi_points, -1, 1, 4, -2, 1.5)

                            cur_roi_points = self.ROIPoints(cur_roi_points, -8, 8, 40, 5, 10)
                            left_roi_front_points = self.ROIPoints(left_roi_points, -20, 20, 60, 20, 4)
                            left_roi_cur_points = self.ROIPoints(left_roi_points, -8, 8, 40, 5, 10)
                            right_roi_cur_points = self.ROIPoints(right_roi_points, -8, 8, 40, 5, 10)
                            right_roi_front_points = self.ROIPoints(right_roi_points, -20, 20, 60, 20, 4)
                        else:
                            cur_roi_points ,points_num = curveROI(left_coeff, right_coeff, self.xyz_np,[-1,3])
                            left_roi_points, left_points_num = curveROI(lleft_coeff, lright_coeff, self.xyz_np,[-1,3])
                            right_roi_points, right_points_num = curveROI(rleft_coeff, rright_coeff, self.xyz_np,[-1,3])

                            cur_roi_points = self.RemoveEgoPoints(cur_roi_points, -1, 1, 4, -2, 1.5)
                            cur_roi_points = self.ROIPoints(cur_roi_points, -10, 10, 100, 0, 4)
                            left_roi_front_points = self.ROIPoints(left_roi_points, -15, 0, 90, 20, 4)
                            left_roi_cur_points = self.ROIPoints(left_roi_points, -15, 0, 20, -20, 4)
                            right_roi_front_points = self.ROIPoints(right_roi_points, 0, 15, 90, 20, 4)
                            right_roi_cur_points = self.ROIPoints(right_roi_points, 0, 15, 20, -20, 4)
                        
                        fitting_msg = CurveFit()
                        fitting_msg.left_x = list(draw_left_x)
                        fitting_msg.left_y = list(draw_left_y * 1.0)
                        fitting_msg.right_x = list(draw_right_x)
                        fitting_msg.right_y = list(draw_right_y*1.0)
                        
                        self.curvefit_pub.publish(fitting_msg)

                        left_fitting_msg = CurveFit()
                        left_fitting_msg.left_x = list(draw_lleft_x)
                        left_fitting_msg.left_y = list(draw_lleft_y * 1.0)
                        left_fitting_msg.right_x = list(draw_lright_x)
                        left_fitting_msg.right_y = list(draw_lright_y*1.0)
                        
                        self.left_curvefit_pub.publish(left_fitting_msg)

                        right_fitting_msg = CurveFit()
                        right_fitting_msg.left_x = list(draw_rleft_x)
                        right_fitting_msg.left_y = list(draw_rleft_y * 1.0)
                        right_fitting_msg.right_x = list(draw_rright_x)
                        right_fitting_msg.right_y = list(draw_rright_y*1.0)
                        
                        self.right_curvefit_pub.publish(right_fitting_msg)
                        start_ransac = time.time()
                        xyz_o3d_roi_cur = o3d.geometry.PointCloud()
                        xyz_o3d_roi_cur.points = o3d.utility.Vector3dVector(cur_roi_points)

                        xyz_o3d_roi_left_front = o3d.geometry.PointCloud()
                        xyz_o3d_roi_left_front.points = o3d.utility.Vector3dVector(left_roi_front_points)

                        xyz_o3d_roi_left_cur = o3d.geometry.PointCloud()
                        xyz_o3d_roi_left_cur.points = o3d.utility.Vector3dVector(left_roi_cur_points)

                        xyz_o3d_roi_right_front = o3d.geometry.PointCloud()
                        xyz_o3d_roi_right_front.points = o3d.utility.Vector3dVector(right_roi_front_points)

                        xyz_o3d_roi_right_cur = o3d.geometry.PointCloud()
                        xyz_o3d_roi_right_cur.points = o3d.utility.Vector3dVector(right_roi_cur_points)

                        z_unit_vector = np.array([0,0,1])
                        cur_plane_model, cur_inliers = xyz_o3d_roi_cur.segment_plane(distance_threshold=0.2,
                                                                ransac_n=3,
                                                                num_iterations=40)
                        cur_outlier_cloud = xyz_o3d_roi_cur.select_by_index(cur_inliers, invert=True)
                        cur_outlier_cloud = np.asarray(cur_outlier_cloud.points)

                        if len(left_roi_points) != 0:
                            
                            cur_left_plane_model, left_inliers = xyz_o3d_roi_left_cur.segment_plane(distance_threshold=0.2,
                                                                    ransac_n=3,
                                                                    num_iterations=40)
                            cur_left_outlier_cloud = xyz_o3d_roi_left_cur.select_by_index(left_inliers, invert=True)
                            cur_left_outlier_cloud = np.asarray(cur_left_outlier_cloud.points)
                            
                            [cur_left_a,cur_left_b,cur_left_c,left_d] = cur_left_plane_model

                            cur_left_plane_vector = np.array([cur_left_a,cur_left_b,cur_left_c])

                            cur_left_remain_points = cur_left_outlier_cloud

                            cur_left_angle = np.arccos(np.dot(cur_left_plane_vector,z_unit_vector)/(1 * np.sqrt(cur_left_a**2+cur_left_b**2+cur_left_c**2)))
                            cur_left_angle = np.rad2deg(cur_left_angle)
                            print(cur_left_angle)
                            if cur_left_angle > 4:
                                
                                rm_ground_points = self.RemoveGround(cur_left_remain_points,0.7)
                                cur_left_remain_points = rm_ground_points
                            else:
                                left_remain_x = cur_left_a*cur_left_remain_points[:,0].reshape(-1,1)
                                left_remain_y = cur_left_b*cur_left_remain_points[:,1].reshape(-1,1)
                                left_remain_z = (left_remain_x + left_remain_y + left_d)/cur_left_c
                                th_arg = np.where(cur_left_remain_points[:,2].reshape(-1,1) - left_remain_z >= 0.1, True, False)
                                th_arg = th_arg.reshape(-1,1)
                                th_arg = np.hstack((th_arg,th_arg,th_arg))
                                cur_left_remain_points = cur_left_remain_points[th_arg]
                                cur_left_remain_points = np.reshape(cur_left_remain_points,(-1,3))

                            front_left_plane_model, left_inliers = xyz_o3d_roi_left_front.segment_plane(distance_threshold=0.2,
                                                                    ransac_n=3,
                                                                    num_iterations=40)
                            front_left_outlier_cloud = xyz_o3d_roi_left_front.select_by_index(left_inliers, invert=True)

                            front_left_outlier_cloud = np.asarray(front_left_outlier_cloud.points)
                            front_left_remain_points = front_left_outlier_cloud
                            [front_left_a,front_left_b,front_left_c,front_left_d] = front_left_plane_model

                            front_left_plane_vector = np.array([front_left_a,front_left_b,front_left_c])

                            front_left_angle = np.arccos(np.dot(front_left_plane_vector,z_unit_vector)/(1 * np.sqrt(front_left_a**2+front_left_b**2+front_left_c**2)))
                            front_left_angle = np.rad2deg(front_left_angle)


                            if front_left_angle > 15:
                                rm_ground_points = self.RemoveGround(front_left_remain_points,1.2)
                                front_left_remain_points = rm_ground_points
                            else:
                                left_remain_x = front_left_a*front_left_remain_points[:,0].reshape(-1,1)
                                left_remain_y = front_left_b*front_left_remain_points[:,1].reshape(-1,1)
                                left_remain_z = (left_remain_x + left_remain_y + front_left_d)/front_left_c
                                th_arg = np.where(front_left_remain_points[:,2].reshape(-1,1) - left_remain_z >= 0.3, True, False)
                                th_arg = th_arg.reshape(-1,1)
                                th_arg = np.hstack((th_arg,th_arg,th_arg))
                                front_left_remain_points = front_left_remain_points[th_arg]
                                front_left_remain_points = np.reshape(front_left_remain_points,(-1,3))

                            left_remain_points = np.vstack((cur_left_remain_points,front_left_remain_points))
                        else:
                            left_remain_points = np.array([0, 0, 0])

                        if len(right_roi_points) != 0:
                            cur_right_plane_model, right_inliers = xyz_o3d_roi_right_cur.segment_plane(distance_threshold=0.2,
                                                                    ransac_n=3,
                                                                    num_iterations=50)
                            cur_right_outlier_cloud = xyz_o3d_roi_right_cur.select_by_index(right_inliers, invert=True)
                            cur_right_outlier_cloud = np.asarray(cur_right_outlier_cloud.points)

                            [cur_right_a,cur_right_b,cur_right_c,right_d] = cur_right_plane_model

                            cur_right_plane_vector = np.array([cur_right_a,cur_right_b,cur_right_c])

                            cur_right_remain_points = cur_right_outlier_cloud

                            cur_right_angle = np.arccos(np.dot(cur_right_plane_vector,z_unit_vector)/(1 * np.sqrt(cur_right_a**2+cur_right_b**2+cur_right_c**2)))
                            cur_right_angle = np.rad2deg(cur_right_angle)

                            if cur_right_angle > 4:
                                rm_ground_points = self.RemoveGround(cur_right_remain_points,0.7)
                                cur_right_remain_points = rm_ground_points
                            else:
                                right_remain_x = cur_right_a*cur_right_remain_points[:,0].reshape(-1,1)
                                right_remain_y = cur_right_b*cur_right_remain_points[:,1].reshape(-1,1)
                                right_remain_z = (right_remain_x + right_remain_y + right_d)/cur_right_c
                                th_arg = np.where(cur_right_remain_points[:,2].reshape(-1,1) - right_remain_z >= 0.1, True, False)
                                th_arg = th_arg.reshape(-1,1)
                                th_arg = np.hstack((th_arg,th_arg,th_arg))
                                cur_right_remain_points = cur_right_remain_points[th_arg]
                                cur_right_remain_points = np.reshape(cur_right_remain_points,(-1,3))

                            front_right_plane_model, right_inliers = xyz_o3d_roi_right_front.segment_plane(distance_threshold=0.2,
                                                                    ransac_n=3,
                                                                    num_iterations=50)
                            front_right_outlier_cloud = xyz_o3d_roi_right_front.select_by_index(right_inliers, invert=True)
                            front_right_outlier_cloud = np.asarray(front_right_outlier_cloud.points)
                            front_right_remain_points = front_right_outlier_cloud
                            [front_right_a,front_right_b,front_right_c,front_right_d] = front_right_plane_model

                            front_right_plane_vector = np.array([front_right_a,front_right_b,front_right_c])

                            front_right_angle = np.arccos(np.dot(front_right_plane_vector,z_unit_vector)/(1 * np.sqrt(front_right_a**2+front_right_b**2+front_right_c**2)))
                            front_right_angle = np.rad2deg(front_right_angle)
                            
                            # print('right_front_ang',front_right_angle)

                            if front_right_angle > 15:
                                rm_ground_points = self.RemoveGround(front_right_remain_points,1.2)
                                front_right_remain_points = rm_ground_points
                            else:
                                right_remain_x = front_right_a*front_right_remain_points[:,0].reshape(-1,1)
                                right_remain_y = front_right_b*front_right_remain_points[:,1].reshape(-1,1)
                                right_remain_z = (right_remain_x + right_remain_y + front_right_d)/front_right_c
                                th_arg = np.where(front_right_remain_points[:,2].reshape(-1,1) - right_remain_z >= 0.3, True, False)
                                th_arg = th_arg.reshape(-1,1)
                                th_arg = np.hstack((th_arg,th_arg,th_arg))
                                front_right_remain_points = front_right_remain_points[th_arg]
                                front_right_remain_points = np.reshape(front_right_remain_points,(-1,3))

                            right_remain_points = np.vstack((cur_right_remain_points,front_right_remain_points))
                        else:
                            right_remain_points = np.array([0, 0, 0])

                        [cur_a,cur_b,cur_c,cur_d] = cur_plane_model
                        
                        cur_remain_points = cur_outlier_cloud
                        
                        cur_plane_vector = np.array([cur_a,cur_b,cur_c])

                        cur_angle = np.arccos(np.dot(cur_plane_vector,z_unit_vector)/(1 * np.sqrt(cur_a**2+cur_b**2+cur_c**2)))
                        cur_angle = np.rad2deg(cur_angle)

                        if cur_angle > 30:
                            rm_ground_points = self.RemoveGround(cur_remain_points,1)
                            cur_remain_points = rm_ground_points
                        else:
                            cur_remain_x = cur_a*cur_remain_points[:,0].reshape(-1,1)
                            cur_remain_y = cur_b*cur_remain_points[:,1].reshape(-1,1)
                            cur_remain_z = (cur_remain_x + cur_remain_y + cur_d)/cur_c
                            th_arg = np.where(cur_remain_points[:,2].reshape(-1,1) - cur_remain_z >= 0.3, True, False)
                            th_arg = th_arg.reshape(-1,1)
                            th_arg = np.hstack((th_arg,th_arg,th_arg))
                            cur_remain_points = cur_remain_points[th_arg]
                            cur_remain_points = np.reshape(cur_remain_points,(-1,3))

                        remain_points = np.vstack((cur_remain_points,left_remain_points,right_remain_points))

                        plane_points = np.asarray(remain_points)


                        outlier_cloud = o3d.geometry.PointCloud()
                        outlier_cloud.points = o3d.utility.Vector3dVector(plane_points)

                        obstacle_pts = outlier_cloud.voxel_down_sample(voxel_size=0.2)

                        voxel_points = np.asarray(obstacle_pts.points)

                        raw_point_msg = LidarMsg()

                        raw_point_msg.x = list(voxel_points[:,0])
                        raw_point_msg.y = list(voxel_points[:,1])
                        raw_point_msg.z = list(voxel_points[:,2])
                        self.raw_pub.publish(raw_point_msg)

                        if len(obstacle_pts.points) != 0:
                            cur_object = np.array([])
                            left_object = np.array([])
                            right_object = np.array([])
                            start_db = time.time()
                            labels = np.array(obstacle_pts.cluster_dbscan(eps=2.0, min_points= 10, print_progress=False))
                            # print(labels)
                            max_label = labels.max()

                            colors = plt.get_cmap("tab20")(labels / (max_label if max_label > 0 else 1))
                            colors[labels < 0] = 0
                            
                            cluster_pts.points = obstacle_pts.points

                            cluster_pts.colors = o3d.utility.Vector3dVector(colors[:, :3])

                            numpy_xyz= np.asarray(cluster_pts.points)


                            numpy_labels = np.reshape(labels,(-1,1))

                            cur_object_list = np.array([])
                            slope_list = np.array([])

                            xyz_labels = np.hstack((numpy_xyz, numpy_labels))
                            if len(xyz_labels) != 0:
                                cur_object_list = self.make_object_list(xyz_labels)

                                # print(cur_object_list)
                                if len(cur_object_list) != 0:
                                    gar_arg = np.where(cur_object_list[:,0] != 9999, True,False)
                                    cur_object_list = cur_object_list[gar_arg]
                                    self.tracker.update(cur_object_list, 0 , -car_v/2, xyz_labels, self.dt) #### 임의 


                                    if len(self.tracker.tracks) != 0:
                                        for i in range(len(self.tracker.tracks)):
                                            if (len(self.tracker.tracks[i].trace) >= 1):
                                                x = self.tracker.tracks[i].trace[-1][0,0]
                                                y = self.tracker.tracks[i].trace[-1][0,1]
                                                z = self.tracker.tracks[i].trace[-1][0,2]
                                                min_z = self.tracker.tracks[i].trace[-1][0,3]
                                                w = self.tracker.tracks[i].trace[-1][0,4]
                                                h = self.tracker.tracks[i].trace[-1][0,5]
                                                idx = self.tracker.tracks[i].trace[-1][0,6]
                                                
                                                rel_v_x = self.tracker.tracks[i].trace[-1][0,-2]
                                                rel_v_y = self.tracker.tracks[i].trace[-1][0,-1]
                                                Id = self.tracker.tracks[i].trackId

                                                object_points = self.tracker.tracks[i].object_points
                                                cur_points ,points_num = curveROI(left_coeff, right_coeff, object_points,[-1,3])
                                                left_points, left_points_num = curveROI(lleft_coeff,lright_coeff, object_points,[-1,3])
                                                left_points, right_points_num = curveROI(rleft_coeff,rright_coeff, object_points,[-1,3])

                                                if points_num < left_points_num:
                                                    left_object = np.append(left_object,[Id, x, y, w, h, z, min_z, rel_v_x, rel_v_y])
                                                if points_num < right_points_num:
                                                    right_object = np.append(right_object,[Id, x, y, w, h, z, min_z, rel_v_x, rel_v_y])
                                                if points_num > left_points_num and points_num > right_points_num:
                                                    cur_object = np.append(cur_object,[Id, x, y, w, h, z, min_z, rel_v_x, rel_v_y])
                        else:
                            self.tracker.update([], 0 , -car_v/2, [], self.dt)
                            cur_object = np.array([])
                            left_object = np.array([])
                            right_object = np.array([])
                            if len(self.tracker.tracks) != 0:
                                for i in range(len(self.tracker.tracks)):
                                    if (len(self.tracker.tracks[i].trace) >= 1):
                                        x = self.tracker.tracks[i].trace[-1][0,0]
                                        y = self.tracker.tracks[i].trace[-1][0,1]
                                        z = self.tracker.tracks[i].trace[-1][0,2]
                                        min_z = self.tracker.tracks[i].trace[-1][0,3]
                                        w = self.tracker.tracks[i].trace[-1][0,4]
                                        h = self.tracker.tracks[i].trace[-1][0,5]
                                        idx = self.tracker.tracks[i].trace[-1][0,6]
                                        
                                        rel_v_x = self.tracker.tracks[i].trace[-1][0,-2]
                                        rel_v_y = self.tracker.tracks[i].trace[-1][0,-1]
                                        Id = self.tracker.tracks[i].trackId

                                        object_points = self.tracker.tracks[i].object_points
                                        cur_points ,points_num = curveROI(left_coeff, right_coeff, object_points,[-1,3])
                                        left_points, left_points_num = curveROI(lleft_coeff,lright_coeff, object_points,[-1,3])
                                        left_points, right_points_num = curveROI(rleft_coeff,rright_coeff, object_points,[-1,3])

                                        if points_num < left_points_num:
                                            left_object = np.append(left_object,[Id, x, y, w, h, z, min_z, rel_v_x, rel_v_y])
                                        if points_num < right_points_num:
                                            right_object = np.append(right_object,[Id, x, y, w, h, z, min_z, rel_v_x, rel_v_y])
                                        if points_num > left_points_num and points_num > right_points_num:
                                            cur_object = np.append(cur_object,[Id, x, y, w, h, z, min_z, rel_v_x, rel_v_y])
                        
                        if len(right_object) !=0: 
                            right_obstacle_array = Float64MultiArray()
                            right_obstacle_array.data = list(np.squeeze(right_object))
                            self.lidar_right_pub.publish(right_obstacle_array)                                
                        elif len(right_object) == 0:
                            right_obstacle_array = Float64MultiArray()
                            right_obstacle_array.data = [9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0]
                            self.lidar_right_pub.publish(right_obstacle_array) 

                        if len(left_object) !=0: 
                            left_obstacle_array = Float64MultiArray()
                            left_obstacle_array.data = list(np.squeeze(left_object))
                            self.lidar_left_pub.publish(left_obstacle_array)                                
                        elif len(left_object) == 0:
                            left_obstacle_array = Float64MultiArray()
                            left_obstacle_array.data = [9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0]
                            self.lidar_left_pub.publish(left_obstacle_array) 

                        if len(cur_object) !=0: 
                            obstacle_array = Float64MultiArray()
                            obstacle_array.data = list(np.squeeze(cur_object))
                            print('-------------------------')
                            print('cur_obj:','x',cur_object[1],'y',cur_object[2],'z',cur_object[5],'min_z',cur_object[6],'rel_v_y',cur_object[-1])
                            print('-------------------------')
                            self.lidar_pub.publish(obstacle_array)                                
                        elif len(cur_object) == 0:
                            obstacle_array = Float64MultiArray()
                            obstacle_array.data = [9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0]
                            self.lidar_pub.publish(obstacle_array)
                    else:
                        print('Path not found')

                except Exception as e:
                    right_obstacle_array = Float64MultiArray()
                    right_obstacle_array.data = [9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0]
                    self.lidar_right_pub.publish(right_obstacle_array) 
                    left_obstacle_array = Float64MultiArray()
                    left_obstacle_array.data = [9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0]
                    self.lidar_left_pub.publish(left_obstacle_array) 
                    obstacle_array = Float64MultiArray()
                    obstacle_array.data = [9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0,9999.0]
                    self.lidar_pub.publish(obstacle_array)
                    raw_point_msg = LidarMsg()
                    raw_point_msg.x = [0.0]
                    raw_point_msg.y = [0.0]
                    raw_point_msg.z = [0.0]
                    self.raw_pub.publish(raw_point_msg)
                    print('exception: ', e)
            else:

                print('No callback msg')
                pass
        self.dt = time.time()-start
        # print('code time',time.time()-start)

def main(args=None):
    rclpy.init(args=args)

    lidar = Main()

    rclpy.spin(lidar)
    # self.self_error_msg.data = False

    lidar.err_pub.publish(False)
    
    lidar.destroy_node()
    # thread = threading.Thread(target=rclpy.spin, args=(lidar, ), daemon=True)
    # thread.start()
    # rate = lidar.create_rate(10,clock=None)
    # while rclpy.ok():       
    rclpy.shutdown()
    # thread.join()

if __name__ == '__main__':
    main()
