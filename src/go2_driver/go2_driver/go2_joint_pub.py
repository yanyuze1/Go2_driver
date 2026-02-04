import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from unitree_go.msg import LowState  

class JointNode(Node):
    def __init__(self):
        super().__init__("unitree_joint")
        
        self.joint_state_pub = self.create_publisher(
            JointState,
            "joint_states",
            10  
        )
        
        self.low_state_sub = self.create_subscription(
            LowState,
            "/lf/lowstate",
            self.low_state_cb,  
            10 
        )
        
        self.low_state_sub  

    def low_state_cb(self, low_state):
        joint_state = JointState()
        joint_state.header.stamp = self.get_clock().now().to_msg()
        joint_state.name = [
            "FL_hip_joint","FL_thigh_joint","FL_calf_joint",
            "FR_hip_joint","FR_thigh_joint","FR_calf_joint",
            "RL_hip_joint","RL_thigh_joint","RL_calf_joint",
            "RR_hip_joint","RR_thigh_joint","RR_calf_joint"
        ]
        
        for i in range(12):
            motor = low_state.motor_state[i]
            joint_state.position.append(motor.q)
        self.joint_state_pub.publish(joint_state)

def main(args=None):
    rclpy.init(args=args)
    joint_node = JointNode()
    rclpy.spin(joint_node)
    joint_node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
