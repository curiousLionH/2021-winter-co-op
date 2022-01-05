import numpy as np
import os
import sys
import scipy.optimize as optimize
from scipy.interpolate import splrep, splev
import matplotlib.pyplot as plt

# line_width = 4

# def RoiPathGen(pts_X, pts_Y, pts_h):
#     left_lane_x = pts_X - (line_width/2 * np.sin(pts_h))
#     left_lane_y = pts_Y + (line_width/2 * np.cos(pts_h))
#     right_lane_x = pts_X + (line_width/2 * np.sin(pts_h))
#     right_lane_y = pts_Y - (line_width/2 * np.cos(pts_h))
#     return left_lane_x, left_lane_y, right_lane_x, right_lane_y

def curveFit(pts_X, pts_Y):

    # ROI_bool_X = np.where( (np.abs(pts_X) < 20),True,False)
    # pts_X = pts_X[ROI_bool_X]
    # pts_Y = pts_Y[ROI_bool_X]
    # # print('2',np.shape(pts_X),np.shape(pts_Y))

    preprocess_bool_Y = np.where((pts_Y > pts_Y[-1]),False,True)
    pts_X = pts_X[preprocess_bool_Y]
    pts_Y = pts_Y[preprocess_bool_Y]

    AS = np.argsort(pts_Y)
    ref = np.arange(len(pts_Y))

    sort_bool = np.where(AS != ref)

    if not np.size(sort_bool):  #전체 y 오름차순
        Final_pts_X = pts_X
        Final_pts_Y = pts_Y
    else:
        y_max = np.min(sort_bool)
        Final_pts_X = pts_X[AS]
        Final_pts_Y = pts_Y[AS]

    x = Final_pts_X[0::3]
    y = Final_pts_Y[0::3]
    # print(len(y))
    # print(y)
    # x = x[:-1]
    # y = y[:-1]
    # x = np.append(x,origin_path_x[-1])
    # y = np.append(y,origin_path_y[-1])

    spl = splrep(y, x,k=3)  #spline fitting 결과
    # print(spl)
    # draw_y = np.arange(-20, 70)
    draw_y = y
    draw_x = splev(draw_y, spl) 

    # print(draw_y)
    # print(draw_x)
    
    # draw_pts = np.column_stack([draw_x,draw_y])
    # print(spl)
    return spl, draw_x, draw_y

def curveROI(spl_L, spl_R, pts, Z_ROI):
    
    # if path_y_last_val <= 40:
    #     roi_preprocess = np.where((pts[:,1] <=40) & (pts[:,1] >= -20), True, False)
    # else:
    # print(pts)
    # print(path_y_last_val)
    # roi_preprocess = np.where((pts[:,1] <= path_y_last_val + 10 ) & (pts[:,1] >= -20), True, False)

    # pts = pts[roi_preprocess]
    # if path_y_last_val <= 70:
    #     tmp_fit_y = np.linspace(-20,80,len(pts))

    #     fit_Lx = splev(tmp_fit_y, spl_L)
    #     fit_Rx = splev(tmp_fit_y, spl_R)

    #     # plt.plot(fit_Lx,tmp_fit_y)
    #     bool1 = fit_Lx < pts[:,0]
    #     bool2 = pts[:,0] < fit_Rx
    #     bool3 = Z_ROI[0]< pts[:,2]
    #     bool4 = pts[:,2] <=Z_ROI[1]
    #     bool = bool1*bool2*bool3*bool4

    #     ROI_pts = pts[bool, :]


    #     ROI_num = len(ROI_pts[:,0])   

    # else:
    # print(pts[:,1])
    # print('--')
    # print(spl_L)

    fit_Lx = splev(pts[:,1], spl_L)
    fit_Rx = splev(pts[:,1], spl_R)

    # plt.plot(fit_Lx, pts[:,1],'ko')

    bool1 = fit_Lx < pts[:,0]
    # plt.plot(pts[bool1,:][:,0],pts[bool1,:][:,1],'ro',markersize=2)
    bool2 = pts[:,0] < fit_Rx
    # plt.plot(pts[bool2,:][:,0],pts[bool2,:][:,1],'bo',markersize=2)
    bool3 = Z_ROI[0]< pts[:,2]
    bool4 = pts[:,2] <=Z_ROI[1]
    bool = bool1*bool2*bool3*bool4

    ROI_pts = pts[bool, :]
    ROI_num = len(ROI_pts[:,0])   

    return ROI_pts, ROI_num
def RadarProcess(ROI_pts):
    # print(ROI_pts)
    # print(2222222)
    pts_distance_array = np.sqrt((ROI_pts[:,0]**2 + ROI_pts[:,1]**2))
    min_distance = np.argmin(pts_distance_array)
    # print(min_distance)
    object_info = ROI_pts[min_distance]
    return object_info