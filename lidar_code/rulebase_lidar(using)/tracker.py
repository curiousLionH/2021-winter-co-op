# 기존 tracker

import numpy as np 
from kalmanFilter import KalmanFilter
# from KalmanFilter_v2 import KalmanFilter
from scipy.optimize import linear_sum_assignment
from collections import deque
from scipy.spatial import distance


class Tracks(object):
    """docstring for Tracks"""
    def __init__(self, detection, trackId,v_x,v_y,object_points,dt, box_dict = None):
        super(Tracks, self).__init__()

        self.KF = KalmanFilter(detection.reshape(8,1),v_x,v_y,dt)
        self.KF.predict(dt)
        self.KF.correct(detection.reshape(8,1),1,dt)
        self.object_points = object_points
        # self.KF.correct(np.matrix(detection).reshape(2,1))
        self.trace = deque(maxlen=10)
        self.prediction = detection.reshape(1,8)
        # self.prediction = detection.reshape(1,2)

        self.trackId = trackId
        self.skipped_frames = 0
        self.start_frames = 0

    # def predict(self,detection):
    #     self.prediction = np.array(self.KF.predict()).reshape(1,4)
    #     # self.prediction = np.array(self.predict(detection)).reshape(1,6)
    #     self.KF.correct(detection.reshape(4,1),1)
    #     # self.prediction = np.array(self.KF.predict()).reshape(1,2)
    #     # self.KF.correct(np.matrix(detection).reshape(2,1))

class Tracker(object):
    """docstring for Tracker"""
    def __init__(self, dist_threshold, max_frame_skipped, max_trace_length):
        super(Tracker, self).__init__()
        self.dist_threshold = dist_threshold
        self.max_frame_skipped = max_frame_skipped
        self.max_trace_length = max_trace_length
        self.trackId = 0
        self.tracks = []


    def update(self, detections,v_x, v_y, cluster_data,dt, box_dict = None):
        # print('dt : ',dt)
        if len(self.tracks) == 0:
            for i in range(detections.shape[0]):
                obj_arg = np.where(cluster_data[:,3]== i , True, False)
                object_points = cluster_data[obj_arg]
                # print(detections[i])
                track = Tracks(detections[i], self.trackId,v_x, v_y, object_points[:,:3],dt)
                print(track)
                self.trackId +=1
                self.tracks.append(track)

        N = len(self.tracks)
        M = len(detections)
        assignment = [-1]*N

        if N != 0 and M ==0:
            assignment = [-1]*N

        else:
            cost = []
            for i in range(N):
                if np.size(detections) != 0:
                    for j in range(M):
                        # diff = np.linalg.norm(self.tracks[i].prediction[0,:2] - detections[:,0:2], axis=1)
                        diff = distance.minkowski(self.tracks[i].prediction[0,:2],detections[j,0:2],2)
                        if diff <=2.5:
                            diff = diff * 3.5
                        elif diff > 2.5 and diff <= 6:
                            diff = diff * 3.5
                        elif diff > 6 and diff <= 10:
                            diff = diff * 3
                        elif diff > 10 and diff <= 15:
                            diff = diff * 2.5
                        elif diff > 15 and diff <= 22:
                            diff = diff * 1.5
                        elif diff > 22 and diff <= 32:
                            diff = diff 
                        else:
                            diff = diff * 0.5
                        cost.append(diff)
            # for i in range(N):
            #     if np.size(detections) !=0:
            #         diff = np.linalg.norm(self.tracks[i].prediction[0,:2] - detections[:,0:2], axis=1)
            #         cost.append(diff)

            if len(cost) !=0:
                cost = np.array(cost)
                cost = np.reshape(cost,(N,M))
                cost = cost * 0.5
                row, col = linear_sum_assignment(cost)
                assignment = [-1]*N
                for i in range(len(row)):
                    assignment[row[i]] = col[i]

        un_assigned_tracks = []
        for i in range(len(assignment)):
            if assignment[i] != -1:
                if (cost[i][assignment[i]] > self.dist_threshold):
                    assignment[i] = -1
                    un_assigned_tracks.append(i)
            else:
                self.tracks[i].skipped_frames +=1
                self.tracks[i].start_frames -= 1

        un_assigned_detects = []
        for i in range(len(detections)):
            if i not in assignment:
                un_assigned_detects.append(i)
            

        del_tracks = []
        for i in range(len(self.tracks)):
            if self.tracks[i].skipped_frames > self.max_frame_skipped :
                del_tracks.append(i)

        if len(del_tracks) > 0:
            # for i in range(len(del_tracks)):
            for i in del_tracks:
                if i < len(self.tracks):
                    del self.tracks[i]
                    del assignment[i]

        if(len(un_assigned_detects) != 0):
            for i in range(len(un_assigned_detects)):
                obj_arg_2 = np.where(cluster_data[:,3]== un_assigned_detects[i] , True, False)
                object_points_2 = cluster_data[obj_arg_2]
                track = Tracks(detections[un_assigned_detects[i]], self.trackId,v_x,v_y,object_points_2[:,:3],dt)
                self.trackId +=1
                self.tracks.append(track)
                

        for i in range(len(assignment)+len(un_assigned_detects)):
            if self.tracks[i].start_frames <5:
                self.tracks[i].start_frames += 1
            self.tracks[i].prediction = self.tracks[i].KF.predict(dt)
            self.tracks[i].prediction = np.reshape(self.tracks[i].prediction,(1,-1))

        for j in range(len(assignment)):
            if(assignment[j] != -1):
                self.tracks[j].skipped_frames = 0
                self.tracks[j].prediction = self.tracks[j].KF.correct(detections[assignment[j]],1,dt)
                obj_arg_3 = np.where(cluster_data[:,3]== assignment[j] , True, False)
                object_points_3 = cluster_data[obj_arg_3]
                self.tracks[j].object_points = object_points_3[:,:3]
            else:
                self.tracks[j].prediction = self.tracks[j].KF.correct(np.array([[0],[0],[0],[0],[0],[0],[0]]),0,dt)
                # print(self.tracks[j].prediction)
                # print(self.tracks[j].prediction[-1][0,-2])
                self.tracks[j].object_points[:,0] = self.tracks[j].object_points[:,0] + self.tracks[j].prediction[-1][0,-2]*0.1
                self.tracks[j].object_points[:,1] = self.tracks[j].object_points[:,1] + self.tracks[j].prediction[-1][0,-1]*0.1
                # print(np.shape(self.tracks[j].object_points))
                # print('shape--------------')
        for i in range(len(assignment)):
            if(len(self.tracks[i].trace) > self.max_trace_length):
                for j in range(len(self.tracks[i].trace) -self.max_trace_length):
                    del self.tracks[i].trace[j]

        for i in range(len(assignment)+len(un_assigned_detects)):
            
            self.tracks[i].trace.append(self.tracks[i].prediction)
            self.tracks[i].KF.lastResult = self.tracks[i].prediction


