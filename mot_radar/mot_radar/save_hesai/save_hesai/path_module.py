import numpy as np
import os
import sys
import scipy.optimize as optimize
from scipy.interpolate import splrep, splev


# c_L_spl, c_L_draw_X, c_L_draw_Y = self.curveFit(c_left_lane_x, c_left_lane_y)
# c_R_spl, c_R_draw_X, c_R_draw_Y = self.curveFit(c_right_lane_x, c_right_lane_y)
# L_L_spl, L_L_draw_X, L_L_draw_Y = self.curveFit(lleft_lane_x, lleft_lane_y)
# L_R_spl, L_R_draw_X, L_R_draw_Y = self.curveFit(lright_lane_x, lright_lane_y)
# R_L_spl, R_L_draw_X, R_L_draw_Y = self.curveFit(rleft_lane_x, rleft_lane_y)
# R_R_spl, R_R_draw_X, R_R_draw_Y = self.curveFit(rright_lane_x, rright_lane_y)


# c_left_lane_x = np.array(self.lane_x)  - (line_width/2- offset)* np.sin(np.array(self.lane_h))
# c_left_lane_y = np.array(self.lane_y)  + (line_width/2- offset)* np.cos(np.array(self.lane_h))
# c_right_lane_x = np.array(self.lane_x) + (line_width/2- offset)* np.sin(np.array(self.lane_h))
# c_right_lane_y = np.array(self.lane_y) - (line_width/2- offset)* np.cos(np.array(self.lane_h))


#  ROI_pts, ROI_num = self.curveROI(L_spl, R_spl, self.point_chan_data, [-50,0.5])

line_width = 4

def RoiPathGen(pts_X, pts_Y, pts_h):
    left_lane_x = pts_X - (line_width/2 * np.sin(pts_h))
    left_lane_y = pts_Y + (line_width/2 * np.cos(pts_h))
    right_lane_x = pts_X + (line_width/2 * np.sin(pts_h))
    right_lane_y = pts_Y - (line_width/2 * np.cos(pts_h))
    return left_lane_x, left_lane_y, right_lane_x, right_lane_y

def curveFit(pts_X, pts_Y):
    ROI_bool_Y = np.where((pts_Y < 80) & (pts_Y >-30),True,False)
    pts_X = pts_X[ROI_bool_Y]
    pts_Y = pts_Y[ROI_bool_Y]

    ROI_bool_X = np.where( (np.abs(pts_X) < 20),True,False)
    pts_X = pts_X[ROI_bool_X]
    pts_Y = pts_Y[ROI_bool_X]
    # print('2',np.shape(pts_X),np.shape(pts_Y))

    preprocess_bool_Y = np.where((pts_Y >= pts_Y[-1]),False,True)
    pts_X = pts_X[preprocess_bool_Y]
    pts_Y = pts_Y[preprocess_bool_Y]

    AS = np.argsort(pts_Y)
    # print(AS)
    ref = np.arange(len(pts_Y))
    # print(ref)

    sort_bool = np.where(AS != ref)

    if not np.size(sort_bool):  #전체 y 오름차순
        Final_pts_X = pts_X
        Final_pts_Y = pts_Y
    else:
        y_max = np.min(sort_bool)
        Final_pts_X = pts_X[AS]
        Final_pts_Y = pts_Y[AS]

    x = Final_pts_X
    y = Final_pts_Y
    # x = pts_X
    # y = pts_Y
    spl = splrep(y, x)  #spline fitting 결과

    # draw_y = np.arange(-20, 70)
    draw_y = y
    draw_x = splev(draw_y, spl) 

    # print(draw_y)
    # print(draw_x)
    draw_pts = np.column_stack([draw_x,draw_y])

    return spl, draw_x, draw_y

def curveROI(spl_L, spl_R, pts, Z_ROI, path_y_last_val):
    
    if path_y_last_val <= 70:
        tmp_fit_y = np.linspace(-20,70,len(pts))
        fit_Lx = splev(tmp_fit_y, spl_L)
        fit_Rx = splev(tmp_fit_y, spl_R)

        bool1 = fit_Lx < pts[:,0]
        bool2 = pts[:,0] < fit_Rx
        bool3 = Z_ROI[0]< pts[:,2]
        bool4 = pts[:,2] <=Z_ROI[1]
        bool = bool1*bool2*bool3*bool4
        
    else:
        fit_Lx = splev(pts[:,1], spl_L)
        fit_Rx = splev(pts[:,1], spl_R)

        bool1 = fit_Lx < pts[:,0]
        bool2 = pts[:,0] < fit_Rx
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