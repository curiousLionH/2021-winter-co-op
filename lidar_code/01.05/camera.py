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
import cv2
from scipy.spatial.qhull import ConvexHull
hostname = socket.gethostname()

from tracker import Tracker
from tracker import Tracks
from open3d_test import *

# class MOT2:
#     def __init__(self):
#         camera_path = os.getcwd() + '/camera_data/training0020/'
#         os.chdir(camera_path)
#         self.files = os.listdir(camera_path)
#         self.png_img = []
#         # for file in self.files:
#         #     if '.png' in file:
#         #         f = cv2.imread(file)
#         #         self.png_img.append(f)
                

#     def main(self):
        
#         for file in self.files:
#             if '.png' in file:
#                 f = cv2.imread(file)
#                 self.png_img.append(f)
                

#         for img in self.png_img:
#             cv2.imshow("Camera)", self.png_img)


# if __name__ == '__main__':
#     print("start")
#     M=MOT2()
#     M.main() 




import glob


camera_path = './camera_data/training0020/'
# os.chdir(camera_path)
files = os.listdir(camera_path)
img_files = [file for file in files if file.endswith('.png)')]
png_img = []

for file in files:
    f = cv2.imread(file)
    png_img.append(f)

for img in png_img:
    png = cv2.imread(img, cv2.IMREAD_COLOR)
    cv2.imshow("img", img)
    cv2.waitKey(0)
    cv2.destroyAllWindows()







