import time
import numpy as np
import open3d as o3d
import matplotlib.pyplot as plt
import os
from scipy.spatial import distance
from scipy.optimize import linear_sum_assignment

import socket
hostname = socket.gethostname()

from tracker import Tracker
from open3d_test import *


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
                    (point_chan_array[:,2] <= ROI_Z), True, False)

    point_chan_array = point_chan_array[arg]

    return point_chan_array

def make_object_list(cluster_data):

    # print('image_detect!!!!!!!!!!!!',image_detect)
    object_datas = cluster_data
    object_list = np.array([])
    max_label = int(cluster_data[:, 3].max())
    # print(max_label)
    for i in range(max_label+1):
        # print(i)
        obj_arg = np.where(object_datas[:,3] == i,True,False)
        object_data = object_datas[obj_arg]
        # print(object_data)
        if len(object_data) != 0:
            xyz_points = object_data[:,0:3]
            
            # slope_box = SlopeBBox(xyz_points)

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

        object_list = np.append(object_list,[box_x, box_y, find_max_z, find_min_z, box_w, box_h, i , 9999.0])
        object_list = np.reshape(object_list,(-1,8))

    return object_list



scenario_num = str(20)

file_list = sorted(os.listdir('/home/amlab/SemanticKITTI_point/dataset/sequences_0.06/' + scenario_num + '/velodyne/'))
os.chdir('/home/amlab/SemanticKITTI_point/dataset/sequences_0.06/' + scenario_num + '/velodyne/') # change dir


read_npy = np.load(file_list[1])

# print(np.shape(read_npy))

xyz_o3d = o3d.geometry.PointCloud()
xyz_o3d.points = o3d.utility.Vector3dVector(read_npy)

R = o3d.geometry.get_rotation_matrix_from_xyz([0, 0, np.pi/2])
xyz_o3d.rotate(R, center=(0, 0, 0)).translate((0, 0, 1.75))

start = time.time()

# o3d.visualization.draw_geometries([xyz_o3d]) # raw_data visualization

raw_point = np.asarray(xyz_o3d.points)

front_roi_point = ROIPoints(raw_point,-10,5,70,5,2)
cur_roi_point = ROIPoints(raw_point,-10,5,5,-10,2)
bhd_roi_point = ROIPoints(raw_point,-10,5,-10,-30,2)

xyz_o3d_roi_cur = o3d.geometry.PointCloud()
xyz_o3d_roi_cur.points = o3d.utility.Vector3dVector(front_roi_point)
xyz_o3d_roi_front = o3d.geometry.PointCloud()
xyz_o3d_roi_front.points = o3d.utility.Vector3dVector(cur_roi_point)
xyz_o3d_roi_back = o3d.geometry.PointCloud()
xyz_o3d_roi_back.points = o3d.utility.Vector3dVector(bhd_roi_point)

cur_plane_model, cur_inliers = xyz_o3d_roi_cur.segment_plane(distance_threshold=0.2,
                                        ransac_n=3,
                                        num_iterations=40)
cur_inlier_cloud = xyz_o3d_roi_cur.select_by_index(cur_inliers)
cur_inlier_cloud.paint_uniform_color([0.0, 0.0, 0.0])
cur_outlier_cloud = xyz_o3d_roi_cur.select_by_index(cur_inliers, invert=True)
cur_remain_point = np.asarray(cur_outlier_cloud.points)

front_plane_model, front_inliers = xyz_o3d_roi_front.segment_plane(distance_threshold=0.2,
                                        ransac_n=3,
                                        num_iterations=40)
front_inlier_cloud = xyz_o3d_roi_front.select_by_index(front_inliers)
front_inlier_cloud.paint_uniform_color([0.0, 0.0, 0.0])
front_outlier_cloud = xyz_o3d_roi_front.select_by_index(front_inliers, invert=True)
front_remain_point = np.asarray(front_outlier_cloud.points)

bhd_plane_model, bhd_inliers = xyz_o3d_roi_back.segment_plane(distance_threshold=0.2,
                                        ransac_n=3,
                                        num_iterations=40)
bhd_inlier_cloud = xyz_o3d_roi_back.select_by_index(bhd_inliers)
bhd_inlier_cloud.paint_uniform_color([0.0, 0.0, 0.0])
bhd_outlier_cloud = xyz_o3d_roi_back.select_by_index(bhd_inliers, invert=True)
bhd_remain_point = np.asarray(bhd_outlier_cloud.points)

# o3d.visualization.draw_geometries([cur_inlier_cloud,cur_outlier_cloud,
#                                     front_inlier_cloud,front_outlier_cloud,
#                                     bhd_inlier_cloud,bhd_outlier_cloud]) # ransac visualization

cur_inlier_cloud = cur_inlier_cloud.voxel_down_sample(voxel_size=0.55)
cur_outlier_cloud = cur_outlier_cloud.voxel_down_sample(voxel_size=0.55)
front_inlier_cloud = front_inlier_cloud.voxel_down_sample(voxel_size=0.55)
front_outlier_cloud = front_outlier_cloud.voxel_down_sample(voxel_size=0.55)
bhd_outlier_cloud = bhd_outlier_cloud.voxel_down_sample(voxel_size=0.55)
bhd_inlier_cloud = bhd_inlier_cloud.voxel_down_sample(voxel_size=0.55)

# o3d.visualization.draw_geometries([cur_inlier_cloud,cur_outlier_cloud,
#                                     front_inlier_cloud,front_outlier_cloud,
#                                     bhd_inlier_cloud,bhd_outlier_cloud]) # ransac visualization

rm_ground_pts = np.vstack((cur_remain_point,front_remain_point,bhd_remain_point))


rm_o3d_points = o3d.geometry.PointCloud()
rm_o3d_points.points = o3d.utility.Vector3dVector(rm_ground_pts)

voxel_pts = rm_o3d_points.voxel_down_sample(voxel_size=0.55)

# draw_pcd.points = voxel_pts.points
# vis.update_geometry(draw_pcd)

# o3d.visualization.draw_geometries([voxel_pts]) # voxel visualization

labels = np.array(voxel_pts.cluster_dbscan(eps=1.3, min_points= 8, print_progress=False))
max_label = labels.max()
# print(f"point cloud has {max_label + 1} clusters")
colors = plt.get_cmap("tab20")(labels / (max_label if max_label > 0 else 1))
colors[labels < 0] = 0
voxel_pts.colors = o3d.utility.Vector3dVector(colors[:, :3])


# o3d.visualization.draw_geometries([voxel_pts]) # dbscan visualization

print(time.time()-start)