import rclpy
import threading
from rclpy.node import Node
from geometry_msgs.msg import Twist
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import ReentrantCallbackGroup
from unitree_sdk2py.go2.sport.sport_client import SportClient
from unitree_sdk2py.core.channel import ChannelFactoryInitialize

class UnitreeGo2Controller(Node):
    def __init__(self):
        super().__init__('go2_cmd_vel_controller')

        self.ctrl_lock = threading.Lock()
        self.cmd_vel_callback_group = ReentrantCallbackGroup()

        self.declare_parameter("network_interface", "enp3s0")
        self.interface = self.get_parameter("network_interface").value
        self.get_logger().warn("WARNING: Please ensure there are no obstacles around the robot!")
        ChannelFactoryInitialize(0, self.interface)

        self.sport_client = SportClient()
        self.sport_client.SetTimeout(10.0)
        self.sport_client.Init()
        self.get_logger().info("Unitree Go2 SportClient initialized successfully")

        self.cmd_vel_sub = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.cmd_vel_callback,
            10,
            callback_group=self.cmd_vel_callback_group
        )
        self.get_logger().info(f"Go2 controller node started. Listening to /cmd_vel (network interface: {self.interface})")

    def cmd_vel_callback(self, msg: Twist):
        linear_x = msg.linear.x
        linear_y = msg.linear.y
        angular_z = msg.angular.z

        self.get_logger().debug(
            f"Received cmd_vel: linear_x={linear_x:.2f}, linear_y={linear_y:.2f}, angular_z={angular_z:.2f}"
        )

        with self.ctrl_lock:
            try:
                ret = self.sport_client.Move(linear_x, linear_y, angular_z)
                if ret == 0:
                    self.get_logger().debug("Move command executed successfully")
                else:
                    self.get_logger().error(f"Move command failed, return code: {ret}")
            except Exception as e:
                self.get_logger().error(f"Failed to send move command: {str(e)}")

    def destroy_node(self):
        self.get_logger().info("Shutting down Go2 controller node...")
        super().destroy_node()

def main(args=None):
    rclpy.init(args=args)
    controller_node = UnitreeGo2Controller()
    executor = MultiThreadedExecutor(num_threads=2)
    executor.add_node(controller_node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        controller_node.get_logger().info("Received keyboard interrupt, shutting down...")
    finally:
        executor.remove_node(controller_node)
        controller_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
