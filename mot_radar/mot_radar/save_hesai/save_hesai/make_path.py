import numpy as np
import open3d as o3d
import time
import matplotlib.pyplot as plt
import os

from save_hesai.path_module import *

def make_roi_path(path_x, path_y, path_h, line_width, default_offset, right_offset, left_idx, right_idx):

    bool_x_1 = path_x < 20
    bool_x_2 = path_x > -20
    bool_x_f = bool_x_1 * bool_x_2

    # print(bool_x_f)

    path_x = path_x[bool_x_f]
    path_y = path_y[bool_x_f]
    path_h = path_h[bool_x_f]

    left_lane_x = path_x - (line_width/2 * np.sin(path_h) - default_offset)
    left_lane_y = path_y + (line_width/2 * np.cos(path_h) - default_offset)
    right_lane_x = path_x + (line_width/2 * np.sin(path_h) - right_offset)
    right_lane_y = path_y - (line_width/2 * np.cos(path_h) - right_offset)
    path_h = path_h

    left_path_x = path_x - (line_width * np.sin(path_h))
    left_path_y = path_y + (line_width * np.cos(path_h))
    right_path_x = path_x + (line_width * np.sin(path_h))
    right_path_y = path_y - (line_width * np.cos(path_h))

    lleft_lane_x = left_lane_x.copy()
    lleft_lane_y = left_lane_y.copy()
    lright_lane_x = left_lane_x.copy()
    lright_lane_y = left_lane_y.copy()
    rleft_lane_x = right_lane_x.copy()
    rleft_lane_y = right_lane_y.copy()
    rright_lane_x = right_lane_x.copy()
    rright_lane_y = right_lane_y.copy()

    if left_idx != 0 and len(left_path_x) == len(path_h):
        max_expand_y = max(left_path_y)
        min_expand_y = min(left_path_y)

        bool_1_l = left_path_y < max_expand_y
        bool_2_l = left_path_y > min_expand_y
        bool_y_l = bool_1_l * bool_2_l


        lleft_lane_x[bool_y_l] = left_path_x[bool_y_l] - (line_width/2 * np.sin(path_h[bool_y_l]) - default_offset)
        lleft_lane_y[bool_y_l] = left_path_y[bool_y_l] + (line_width/2 * np.cos(path_h[bool_y_l]) - default_offset)
        lright_lane_x[bool_y_l] = left_path_x[bool_y_l] + (line_width/2 * np.sin(path_h[bool_y_l]) - default_offset)
        lright_lane_y[bool_y_l] = left_path_y[bool_y_l] - (line_width/2 * np.cos(path_h[bool_y_l]) - default_offset)

    if right_idx != 0 and len(right_path_x) == len(path_h):

        max_expand_y = max(right_path_y)
        min_expand_y = min(right_path_y)

        bool_1_r = right_path_y < max_expand_y
        bool_2_r = right_path_y > min_expand_y
        bool_y_r = bool_1_r * bool_2_r

        rleft_lane_x[bool_y_r] = right_path_x[bool_y_r] - (line_width/2 * np.sin(path_h[bool_y_r]) - default_offset)
        rleft_lane_y[bool_y_r] = right_path_y[bool_y_r] + (line_width/2 * np.cos(path_h[bool_y_r]) - default_offset)
        rright_lane_x[bool_y_r] = right_path_x[bool_y_r] + (line_width/2 * np.sin(path_h[bool_y_r]) - default_offset)
        rright_lane_y[bool_y_r] = right_path_y[bool_y_r] - (line_width/2 * np.cos(path_h[bool_y_r]) - default_offset)
    
    return left_lane_x, left_lane_y, right_lane_x, right_lane_y, lleft_lane_x,lleft_lane_y,lright_lane_x,lright_lane_y,rleft_lane_x,rleft_lane_y,rright_lane_x,rright_lane_y