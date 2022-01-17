import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
from std_msgs.msg import Float64MultiArray
from custom_msgs.msg import LidarMsg, Paths, CurveFit

import numpy as np
import open3d as o3d
import time
import matplotlib.pyplot as plt
import os
import cv2
from scipy.spatial import ConvexHull
from sklearn import linear_model
from save_hesai.tracker import Tracker
from save_hesai.path_module import *
from save_hesai.point2numpy import *



class TxtExtract(Node):

    def __init__(self):
        super().__init__('LidarProcess')
        self.k = 0
        # self.point_sub 

        self.path_sub = self.create_subscription(
            Paths,
            'local_path',
            self.path_callback,
            1)
        
    def path_callback(self, msg):
        self.path_x = np.asarray(msg.x)
        self.path_y = np.asarray(msg.y)
        self.path_s = np.asarray(msg.s)
        self.path_h = np.asarray(msg.h)

        os.chdir('/home/amlab/path/path_x')
        # np.savetxt('path_x_' + str(self.k) +'.txt',self.path_x,fmt='%f',delimiter=',')
        np.save('path_x_' + str(self.k),self.path_x)
        os.chdir('/home/amlab/path/path_y')
        # np.savetxt('path_y_' + str(self.k) +'.txt',self.path_y,fmt='%f',delimiter=',')
        np.save('path_y_' + str(self.k),self.path_y)
        os.chdir('/home/amlab/path/path_h')
        np.save('path_h_' + str(self.k),self.path_h)
        # np.savetxt('path_s_' + str(self.k) +'.txt',self.path_s,fmt='%f',delimiter=',')
        # np.savetxt('path_h_' + str(self.k) +'.txt',self.path_h,fmt='%f',delimiter=',')
        self.k += 1




def main(args=None):
    rclpy.init(args=args)

    txt = TxtExtract()

    rclpy.spin(txt)

    txt.destroy_node()

    # vis.destroy_window()

    rclpy.shutdown()

if __name__ == '__main__':
    main()