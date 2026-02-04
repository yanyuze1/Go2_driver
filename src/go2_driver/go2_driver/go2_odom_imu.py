import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from sensor_msgs.msg import Imu
from unitree_go.msg import SportModeState  

class Odom_Imu(Node):
    def __init__(self):
        super().__init__("unitree_odom_imu")
        self.get_logger().info("unitree_odom_imu创建")
        
        self.declare_parameter("base_frame", "base_link")
        self.declare_parameter("odom_frame", "odom")
        self.declare_parameter("imu_frame", "imu")
        self.odom_frame = self.get_parameter("odom_frame").value
        self.imu_frame = self.get_parameter("imu_frame").value
        self.base_frame = self.get_parameter("base_frame").value
        
        self.mode_sub = self.create_subscription(
            SportModeState,          
            "/lf/sportmodestate",   
            self.mode_cb,            
            10                      
        )
        
        self.odom_pub = self.create_publisher(
            Odometry,                
            "odom",                 
            10                       
        )

        self.imu_pub = self.create_publisher(
            Imu,                
            "imu",                 
            10                       
        )

    def mode_cb(self, mode: SportModeState):
        # >>> odom >>>
        odom = Odometry()
        
        odom.header.stamp.sec = mode.stamp.sec
        odom.header.stamp.nanosec = mode.stamp.nanosec
        # odom.header.stamp = self.get_clock().now().to_msg()
        odom.header.frame_id = self.odom_frame
        odom.child_frame_id = self.base_frame
        
        odom.pose.pose.position.x = float(mode.position[0])
        odom.pose.pose.position.y = float(mode.position[1])
        odom.pose.pose.position.z = float(mode.position[2])
        
        odom.pose.pose.orientation.w = float(mode.imu_state.quaternion[0])
        odom.pose.pose.orientation.x = float(mode.imu_state.quaternion[1])
        odom.pose.pose.orientation.y = float(mode.imu_state.quaternion[2])
        odom.pose.pose.orientation.z = float(mode.imu_state.quaternion[3])
        
        odom.twist.twist.linear.x = float(mode.velocity[0])
        odom.twist.twist.linear.y = float(mode.velocity[1])
        odom.twist.twist.linear.z = float(mode.velocity[2])

        odom.twist.twist.angular.z = float(mode.yaw_speed)
        
        self.odom_pub.publish(odom)
        # <<< odom <<<
        
        # >>> imu >>>
        imu = Imu()
        
        # imu.header.stamp.sec = mode.stamp.sec
        # imu.header.stamp.nanosec = mode.stamp.nanosec
        imu.header.stamp = self.get_clock().now().to_msg()
        imu.header.frame_id = self.imu_frame
        
        imu.orientation.w = float(mode.imu_state.quaternion[0])
        imu.orientation.x = float(mode.imu_state.quaternion[1])
        imu.orientation.y = float(mode.imu_state.quaternion[2])
        imu.orientation.z = float(mode.imu_state.quaternion[3])

        imu.angular_velocity.x = float(mode.imu_state.gyroscope[0])
        imu.angular_velocity.y = float(mode.imu_state.gyroscope[1])
        imu.angular_velocity.z = float(mode.imu_state.gyroscope[2])
        
        imu.linear_acceleration.x = float(mode.imu_state.accelerometer[0])
        imu.linear_acceleration.y = float(mode.imu_state.accelerometer[1])
        imu.linear_acceleration.z = float(mode.imu_state.accelerometer[2])

        self.imu_pub.publish(imu)
        # <<< imu <<<

def main(args=None):
    rclpy.init(args=args)
    odom_imu_node = Odom_Imu()
    rclpy.spin(odom_imu_node)
    odom_imu_node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
