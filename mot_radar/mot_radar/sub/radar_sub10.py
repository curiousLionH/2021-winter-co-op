import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
# from std_msgs.msg import String
import os
import sys
from sensor_msgs.msg import PointCloud2
import numpy as np
import open3d as o3d
import util

# sys.path.append(os.path.dirname(os.path.abspath(os.path.dirname(os.path.abspath))))

# from custom_msgs.msg import SaveRadarCAN351

# print(os.getcwd)

class RadarSubscriber(Node):

    def __init__(self):
        super().__init__('Radar_subscriber')
        qos_profile = QoSProfile(depth = 10)
        self.radar_subscriber = self.create_subscription(
            SaveRadarCAN351,     # 메세지 타입
            '/RadarCAN', # 토픽 이름
            self.cb_radar,  # 콜백 함수
            qos_profile
        )
        self.valid_level = None
        self.azimuth = None
        self.range = None
        self.range_rate = None
        self.amplitude = None
        self.radar_data = []

    def cb_radar(self, msg):
        # self.get_logger().info('Received message: {0}'.format(msg))
        self.valid_level = msg.can_det_valid_level
        self.azimuth = msg.can_det_azimuth
        self.range = msg.can_det_range
        self.range_rate = msg.can_det_range_rate
        self.amplitude = msg.can_det_amplitude
        self.radar_data = [self.valid_level, self.azimuth, self.range, self.range_rate, self.amplitude]
        print(f"radar data : {self.radar_data}")

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
        self.xyz_avante = pointcloud2_to_array(self.raw_data)
        self.xyz_avante = get_xyz_points(self.xyz_avante)
        
    def parse_lidar(self):
        self.lidar_data = np.reshape(self.lidar_data, (self.row_step, self.height))

        


def main(args=None):
    rclpy.init(args=args)
    # node = RadarSubscriber()    # RadarSubscriber 클래스 생성
    node = LidarSubscriber()    # LidarSubscriber 클래스 생성
    print("lidar start")
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard Interrupt (SIGINT)')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()