import numpy as np	
from numpy.linalg import inv


class KalmanFilter(object):

    def __init__(self,init_pose,v_x,v_y,dt,stateVariance=1,measurementVariance=1):
        super(KalmanFilter, self).__init__()
        self.stateVariance = stateVariance
        self.measurementVariance = measurementVariance
        self.dt = dt
        self.init_pose = init_pose
        self.init_pose = np.append(self.init_pose,v_x)
        self.init_pose = np.append(self.init_pose,v_y)
        self.lastResult = np.array([[0],[0],[0],[0],[0],[0],[0],[0]])
        self.initModel()

    # def initModel_before(self): 
    #     self.A = np.array([[1,0,0,0,0,0,0,0,0,self.dt,0],
    #                         [0,1,0,0,0,0,0,0,0,0,self.dt],
    #                         [0,0,1,0,0,0,0,0,0,0,0],
    #                         [0,0,0,1,0,0,0,0,0,0,0],
    #                         [0,0,0,0,1,0,0,0,0,0,0],
    #                         [0,0,0,0,0,1,0,0,0,0,0],
    #                         [0,0,0,0,0,0,1,0,0,0,0],
    #                         [0,0,0,0,0,0,0,1,0,0,0],
    #                         [0,0,0,0,0,0,0,0,1,0,0],
    #                         [0,0,0,0,0,0,0,0,0,1,0],
    #                         [0,0,0,0,0,0,0,0,0,1,0]])
    #     self.A_T = np.transpose(self.A)

    #     # self.P = np.matrix(self.stateVariance*np.identity(self.A.shape[0]))
    #     self.P = self.stateVariance * np.array([[1,0,0,0,0,0,0,0,0,0],
    #                                             [0,1,0,0,0,0,0,0,0,0],
    #                                             [0,0,1,0,0,0,0,0,0,0],
    #                                             [0,0,0,1,0,0,0,0,0,0],
    #                                             [0,0,0,0,1,0,0,0,0,0],
    #                                             [0,0,0,0,0,1,0,0,0,0],
    #                                             [0,0,0,0,0,0,1,0,0,0],
    #                                             [0,0,0,0,0,0,0,1,0,0],
    #                                             [0,0,0,0,0,0,0,0,1,0],
    #                                             [0,0,0,0,0,0,0,0,0,1]])

    #     self.H = np.matrix([[1,0,0,0,0,0,0,0,0,0],
    #                         [0,1,0,0,0,0,0,0,0,0],
    #                         [0,0,1,0,0,0,0,0,0,0],
    #                         [0,0,0,1,0,0,0,0,0,0],
    #                         [0,0,0,0,1,0,0,0,0,0],
    #                         [0,0,0,0,0,1,0,0,0,0],
    #                         [0,0,0,0,0,0,0,0,0,0],
    #                         [0,0,0,0,0,0,0,0,0,0]])
    #     # self.R = np.matrix(self.measurementVariance*np.identity(self.H.shape[0]))
    #     self.R = self.measurementVariance * np.array([[4,0,0,0,0,0,0,0],
    #                                                     [0,4,0,0,0,0,0,0],
    #                                                     [0,0,1,0,0,0,0,0],
    #                                                     [0,0,0,1,0,0,0,0],
    #                                                     [0,0,0,0,15,0,0,0],
    #                                                     [0,0,0,0,0,15,0,0],
    #                                                     [0,0,0,0,0,0,1,0],
    #                                                     [0,0,0,0,0,0,0,1]])
    #     self.Q = np.array([[1,0,0,0,0,0,0,0,0,0],
    #                         [0,1,0,0,0,0,0,0,0,0],
    #                         [0,0,1,0,0,0,0,0,0,0],
    #                         [0,0,0,1,0,0,0,0,0,0],
    #                         [0,0,0,0,1,0,0,0,0,0],
    #                         [0,0,0,0,0,1,0,0,0,0],
    #                         [0,0,0,0,0,0,0,0,0,0],
    #                         [0,0,0,0,0,0,0,0,0,0],
    #                         [0,0,0,0,0,0,0,0,8,0],
    #                         [0,0,0,0,0,0,0,0,0,8]])

    #     self.erroCov = self.P
        
    #     self.state = self.init_pose.reshape(10,1)

    def initModel(self): 
        self.A = np.array([[1,0,0,0,0,0,0,0,0,self.dt,0],
                            [0,1,0,0,0,0,0,0,0,0,self.dt],
                            [0,0,1,0,0,0,0,0,0,0,0],
                            [0,0,0,1,0,0,0,0,0,0,0],
                            [0,0,0,0,1,0,0,0,0,0,0],
                            [0,0,0,0,0,1,0,0,0,0,0],
                            [0,0,0,0,0,0,1,0,0,0,0],
                            [0,0,0,0,0,0,0,1,0,0,0],
                            [0,0,0,0,0,0,0,0,1,0,0],
                            [0,0,0,0,0,0,0,0,0,1,0],
                            [0,0,0,0,0,0,0,0,0,0,1]])
        self.A_T = np.transpose(self.A)

        # self.P = np.matrix(self.stateVariance*np.identity(self.A.shape[0]))
        self.P = self.stateVariance * np.array([[1,0,0,0,0,0,0,0,0,0,0],
                                                [0,1,0,0,0,0,0,0,0,0,0],
                                                [0,0,1,0,0,0,0,0,0,0,0],
                                                [0,0,0,1,0,0,0,0,0,0,0],
                                                [0,0,0,0,1,0,0,0,0,0,0],
                                                [0,0,0,0,0,1,0,0,0,0,0],
                                                [0,0,0,0,0,0,1,0,0,0,0],
                                                [0,0,0,0,0,0,0,1,0,0,0],
                                                [0,0,0,0,0,0,0,0,1,0,0],
                                                [0,0,0,0,0,0,0,0,0,1,0],
                                                [0,0,0,0,0,0,0,0,0,0,1]])


        self.H = np.matrix([[1,0,0,0,0,0,0,0,0,0,0],
                            [0,1,0,0,0,0,0,0,0,0,0],
                            [0,0,1,0,0,0,0,0,0,0,0],
                            [0,0,0,1,0,0,0,0,0,0,0],
                            [0,0,0,0,1,0,0,0,0,0,0],
                            [0,0,0,0,0,1,0,0,0,0,0],
                            [0,0,0,0,0,0,1,0,0,0,0],
                            [0,0,0,0,0,0,0,0,0,0,0],
                            [0,0,0,0,0,0,0,0,0,0,0]
                            ])

        
        # self.R = np.matrix(self.measurementVariance*np.identity(self.H.shape[0]))
        self.R = self.measurementVariance * np.array([[4,0,0,0,0,0,0,0,0],
                                                        [0,4,0,0,0,0,0,0,0],
                                                        [0,0,1,0,0,0,0,0,0],
                                                        [0,0,0,1,0,0,0,0,0],
                                                        [0,0,0,0,15,0,0,0,0],
                                                        [0,0,0,0,0,15,0,0,0],
                                                        [0,0,0,0,0,0,1,0,0],
                                                        [0,0,0,0,0,0,0,1,0],
                                                        [0,0,0,0,0,0,0,0,1]])
        self.Q = np.array([[1,0,0,0,0,0,0,0,0,0,0],
                            [0,1,0,0,0,0,0,0,0,0,0],
                            [0,0,1,0,0,0,0,0,0,0,0],
                            [0,0,0,1,0,0,0,0,0,0,0],
                            [0,0,0,0,1,0,0,0,0,0,0],
                            [0,0,0,0,0,1,0,0,0,0,0],
                            [0,0,0,0,0,0,0,0,0,0,0],
                            [0,0,0,0,0,0,0,0,0,0,0],
                            [0,0,0,0,0,0,0,0,8,0,0],
                            [0,0,0,0,0,0,0,0,0,8,0],
                            [0,0,0,0,0,0,0,0,0,0,1]])

        self.erroCov = self.P # (11,11)
        
        self.state = self.init_pose.reshape(11,1)   #(11,1)
        
        
    def predict(self,dt):
        self.dt = dt
        self.predictstate = np.matmul(self.A,self.state)    #(11,1)

        self.predictedErrorCov = np.matmul(np.matmul(self.A,self.erroCov),self.A_T) + self.Q   # (11,11)

        temp = np.asarray(self.predictstate)
        self.lastResult = self.predictstate   #(11,11)

        
        # print(f"temp : {temp}")


        return temp[0],temp[1],temp[2],temp[3],temp[4],temp[5],temp[6],temp[7], temp[8]   #temp[8] = yaw

    def correct(self, currentMeasurement,flag,dt):
        self.dt = dt
        if not flag:
            currentMeasurement = self.lastResult
            # currentMeasurement = self.lastResult[0:8]   # reshape 중
            currentMeasurement = self.lastResult[0:9]
        else:
            # currentMeasurement = currentMeasurement[0:8]
            currentMeasurement = currentMeasurement[0:9] # reshape 중

        # currentMeasurement = np.reshape(currentMeasurement,(8,-1)) # reshape 중
        currentMeasurement = np.reshape(currentMeasurement,(9,-1))

        
        self.kalmanGain = np.matmul(np.matmul(self.predictedErrorCov , self.H.T),np.linalg.pinv(
                                np.matmul(np.matmul(self.H,self.predictedErrorCov),self.H.T)+self.R))
        self.state = self.predictstate + np.matmul(self.kalmanGain,(currentMeasurement - (np.matmul(self.H,self.predictstate))))
        self.erroCov = np.matmul((np.identity(self.P.shape[0]) -np.matmul(self.kalmanGain,self.H)),self.predictedErrorCov)
        # print(self.state)
        # return np.reshape(self.state,(1,10))      #reshape 중
        return np.reshape(self.state,(1,11))



#############################################################################33
