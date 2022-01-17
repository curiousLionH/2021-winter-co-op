import cv2
import numpy as np
import glob
import os
 
print(os.getcwd() + '/camera_data/img1')
file_list = sorted(os.listdir(os.getcwd() + '/camera_data/img1'))  # sorted(os.listdir('/home/amlab/SemanticKITTI_point/dataset/sequences_0.06/' + scenario_num + '/velodyne/'))


img_array = []
for filename in glob.glob(os.getcwd() + '/camera_data/img1/*.jpg'):
    # print(filename)
    img = cv2.imread(filename)
    height, width, layers = img.shape
    size = (width,height)
    img_array.append(img)
 
 
out = cv2.VideoWriter('project.avi',cv2.VideoWriter_fourcc(*'DIVX'), 15, (1241,376))
 
for i in range(len(img_array)):
    print(img_array[i])
    out.write(img_array[i])
out.release()