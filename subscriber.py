import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
# from std_msgs.msg import String
import os

from .custom_msgs import SaveRadarCAN351

print(os.getcwd)

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
        self.get_logger().info('Received message: {0}'.format(msg.data))
        self.valid_level = msg.can_det_valid_level
        self.azimuth = msg.can_det_azimuth
        self.range = msg.can_det_range
        self.range_rate = msg.can_det_range_rate
        self.amplitude = msg.can_det_amplitude
        self.radar_data = [self.valid_level, self.azimuth, self.range, self.range_rate, self.amplitude]

def main(args=None):
    rclpy.init(args=args)
    node = RadarSubscriber()    # RadarSubscriber 클래스 생성
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Keyboard Interrupt (SIGINT)')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()