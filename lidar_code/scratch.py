import open3d as o3d
import numpy as np
import matplotlib.pyplot as plt

# R = o3d.geometry.get_rotation_matrix_from_xyz([0, 0, np.pi/2])
# print(o3d.geometry.get_rotation_matrix_from_xyz([0, 0, np.pi/2]))

a = [1, 2]
as_a = np.asarray(a)
print(as_a)
as_a = np.asarray([1,4,5])
print(as_a)

# colors = plt.get_cmap("tab20")([1,1,1])
# plt.show(colors)

# a = np.array([[1,2,3,4], [5,6,7,8], [9,10,11,12]])
# print(a[:,0])

import open3d as o3d
import numpy as np
import struct
import os
import sys

# training 0005


size_float = 4
print(os.getcwd() + '/lidar_data/training0020')
file_list = sorted(os.listdir(os.getcwd() + '/lidar_data/training0020'))  # sorted(os.listdir('/home/amlab/SemanticKITTI_point/dataset/sequences_0.06/' + scenario_num + '/velodyne/'))
# os.chdir(os.getcwd() + '/lidar_data/')  # os.chdir('/home/amlab/SemanticKITTI_point/dataset/sequences_0.06/' + scenario_num + '/velodyne/') # change dir

for i in range(len(file_list)):
    list_pcd = []
    with open (os.getcwd() + f"/lidar_data/training0020/{file_list[i]}", "rb") as f:
        byte = f.read(size_float*4)
        while byte:
            x,y,z,intensity = struct.unpack("ffff", byte)
            print(f"x = {x}, y = {y}, z = {z}")
            list_pcd.append([x, y, z])
            byte = f.read(size_float*4)
    np_pcd = np.asarray(list_pcd)
    pcd = o3d.geometry.PointCloud()
    v3d = o3d.utility.Vector3dVector
    pcd.points = v3d(np_pcd)
    # print(file_list[i][0:6])
    o3d.io.write_point_cloud(os.getcwd() + f"/lidar_data_pcd/training0020/{file_list[i][0:6]}.pcd", pcd)


# # Load binary point cloud
# bin_pcd = np.fromfile("lidar_velodyne64.bin", dtype=np.float32)

# # Reshape and drop reflection values
# points = bin_pcd.reshape((-1, 4))[:, 0:3]

# # Convert to Open3D point cloud
# o3d_pcd = o3d.geometry.PointCloud(o3d.utility.Vector3dVector(points))

# # Save to whatever format you like
