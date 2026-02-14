#!/usr/bin/env python3
# -*- coding: utf-8 -*-
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from unitree_api.msg import Request
import json  

class TwistBridge(Node):
    def __init__(self):
        super().__init__("unitree_twist")
        self.get_logger().info("cmd_vel -> api/sport/request")
        
        self.request_pub = self.create_publisher(
            Request,
            "/api/sport/request",
            10
        )
        
        self.twist_sub = self.create_subscription(
            Twist,
            "cmd_vel",
            self.twist_cb,
            10
        )

    def twist_cb(self, twist: Twist):
        request = Request()
        x = twist.linear.x
        y = twist.linear.y
        z = twist.angular.z
        api_id = 1002
        if x != 0.0 or y != 0.0 or z != 0.0:
            api_id = 1008
            js = {"x": x,"y": y,"z": z}
            request.parameter = json.dumps(js)
        request.header.identity.api_id = api_id
        self.request_pub.publish(request)

def main(args=None):
    rclpy.init(args=args)
    twist_bridge = TwistBridge()
    rclpy.spin(twist_bridge)
    twist_bridge.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
