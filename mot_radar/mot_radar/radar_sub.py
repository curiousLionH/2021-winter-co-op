import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from sensor_msgs.msg import PointCloud2
from sensor_msgs.msg import _point_cloud2
from point2numpy import *
import numpy as np
import open3d as o3d
# import util

import math as m
import os
import sys
# sys.path.append(os.path.dirname(os.path.abspath(os.path.dirname(os.path.abspath))))

from custom_msgs.msg import *

# print(os.getcwd)

class RadarSubscriber(Node):

    def __init__(self):
        super().__init__('Radar_subscriber')
        qos_profile = QoSProfile(depth = 10)
        receive_radar={
            288 : SaveRadarCAN288,
            289 : SaveRadarCAN289,
            290 : SaveRadarCAN290,
            291 : SaveRadarCAN291,
            292 : SaveRadarCAN292,
            293 : SaveRadarCAN293,
            294 : SaveRadarCAN294,
            295 : SaveRadarCAN295,
            296 : SaveRadarCAN296,
            297 : SaveRadarCAN297,
            298 : SaveRadarCAN298,
            299 : SaveRadarCAN299,
            300 : SaveRadarCAN300,
            301 : SaveRadarCAN301,
            302 : SaveRadarCAN302,
            303 : SaveRadarCAN303,
            304 : SaveRadarCAN304,
            305 : SaveRadarCAN305,
            306 : SaveRadarCAN306,
            307 : SaveRadarCAN307,
            308 : SaveRadarCAN308,
            309 : SaveRadarCAN309,
            310 : SaveRadarCAN310,
            311 : SaveRadarCAN311,
            312 : SaveRadarCAN312,
            313 : SaveRadarCAN313,
            314 : SaveRadarCAN314,
            315 : SaveRadarCAN315,
            316 : SaveRadarCAN316,
            317 : SaveRadarCAN317,
            318 : SaveRadarCAN318,
            319 : SaveRadarCAN319,
            320 : SaveRadarCAN320,
            321 : SaveRadarCAN321,
            322 : SaveRadarCAN322,
            323 : SaveRadarCAN323,
            324 : SaveRadarCAN324,
            325 : SaveRadarCAN325,
            326 : SaveRadarCAN326,
            327 : SaveRadarCAN327,
            328 : SaveRadarCAN328,
            329 : SaveRadarCAN329,
            330 : SaveRadarCAN330,
            331 : SaveRadarCAN331,
            332 : SaveRadarCAN332,
            333 : SaveRadarCAN333,
            334 : SaveRadarCAN334,
            335 : SaveRadarCAN335,
            336 : SaveRadarCAN336,
            337 : SaveRadarCAN337,
            338 : SaveRadarCAN338,
            339 : SaveRadarCAN339,
            340 : SaveRadarCAN340,
            341 : SaveRadarCAN341,
            342 : SaveRadarCAN342,
            343 : SaveRadarCAN343,
            344 : SaveRadarCAN344,
            345 : SaveRadarCAN345,
            346 : SaveRadarCAN346,
            347 : SaveRadarCAN347,
            348 : SaveRadarCAN348,
            349 : SaveRadarCAN349,
            350 : SaveRadarCAN350,
            351 : SaveRadarCAN351
        }
        self.radarVar = {}
        for radarId in receive_radar:
            sub_radar = self.create_subscription(
                receive_radar[radarId],
                'RadarCAN/id'+str(radarId),
                self.cb_radar,
                1
            )
            sub_radar
            

        self.valid_level = None
        self.azimuth = None
        self.range = None
        self.range_rate = None
        self.amplitude = None
        self.radar_data = []
        self.radarxyz = None

    def cb_radar(self, msg):
        # self.get_logger().info('Received message: {0}'.format(msg))
        msgName = msg.__class__.__name__
        self.radarVar[msgName] = msg
        self.valid_level = msg.can_det_valid_level
        self.azimuth = msg.can_det_azimuth
        self.range = msg.can_det_range
        self.range_rate = msg.can_det_range_rate
        self.amplitude = msg.can_det_amplitude
        self.radar_data = [self.valid_level, self.azimuth, self.range, self.range_rate, self.amplitude]
        # print(f"name : {msgName}, radar data : {self.radar_data}")

    def radar_parsing(self):
        x = self.radar_data[2] * np.cos(self.radar_data[1] - m.pi)
        y = self.radar_data[2] * np.sin(self.radar_data[1] - m.pi)
        




class LidarSubscriber(Node):
    def __init__(self):
        super().__init__('lidar_subscriber')
        qos_profile = QoSProfile(depth = 10)
        self.lidar_subscriber = self.create_subscription(
            PointCloud2,     # 메세지 타입
            '/pandar', # 토픽 이름
            self.cb_lidar,  # 콜백 함수
            qos_profile
        )
        self.lidar_data = None
        self.row_step = None
        self.height = None

    def cb_lidar(self, msg):
        # self.get_logger().info('Received message: {0}'.format(msg))
        self.lidar_data = np.array(msg.data)
        self.row_step = msg.row_step
        self.height = msg.height
        self.parse_lidar()
        # print(f"lidar data : {self.lidar_data}")
        # print(self.height)
        self.raw_data = msg
        self.xyz = pointcloud2_to_array(self.raw_data)
        self.xyz = get_xyz_points(self.xyz)
        print(self.xyz)
        
    def parse_lidar(self):
        # self.lidar_data = np.reshape(self.lidar_data, (self.row_step, self.height))
        pass
        


def main(args=None):
    rclpy.init(args=args)
    node = RadarSubscriber()    # RadarSubscriber 클래스 생성
    # node = LidarSubscriber()    # LidarSubscriber 클래스 생성
    print("lidar start")
    try:
        rclpy.spin(node)
        # rclpy.spin(node1)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard Interrupt (SIGINT)')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()