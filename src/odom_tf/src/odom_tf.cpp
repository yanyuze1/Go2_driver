#include <rclcpp/rclcpp.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <tf2/utils.h>
#include <tf2_ros/transform_broadcaster.h>

class TopicSubscribe01 : public rclcpp::Node
{
public:
  TopicSubscribe01(std::string name) : Node(name)
  {
    this -> declare_parameter("pub_tf",true);
    this -> declare_parameter("odom_frame","odom");
    this -> declare_parameter("base_frame","base_link");
    pub_tf = this->get_parameter("pub_tf").as_bool();
    odom_frame = this->get_parameter("odom_frame").as_string();
    base_frame = this->get_parameter("base_frame").as_string();
    odom_sub = this->create_subscription<nav_msgs::msg::Odometry>("odom", rclcpp::SensorDataQoS(),
                        std::bind(&TopicSubscribe01::odom_callback, this, std::placeholders::_1));
    tf_bro = std::make_unique<tf2_ros::TransformBroadcaster>(this);
  }

private:
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub;
  std::unique_ptr<tf2_ros::TransformBroadcaster> tf_bro;
  nav_msgs::msg::Odometry odom_msg;
  std::string odom_frame,base_frame;
  bool pub_tf;

  void odom_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
  {
    odom_msg.header.stamp.sec = msg->header.stamp.sec;
    odom_msg.header.stamp.nanosec = msg->header.stamp.nanosec;
    odom_msg.pose.pose.position.x = msg->pose.pose.position.x;
    odom_msg.pose.pose.position.y = msg->pose.pose.position.y;
    odom_msg.pose.pose.position.z = msg->pose.pose.position.z;

    odom_msg.pose.pose.orientation.x = msg->pose.pose.orientation.x;
    odom_msg.pose.pose.orientation.y = msg->pose.pose.orientation.y;
    odom_msg.pose.pose.orientation.z = msg->pose.pose.orientation.z;
    odom_msg.pose.pose.orientation.w = msg->pose.pose.orientation.w;
  };

public:
  void publish_tf()
  {
    if (!pub_tf){
      return;
    }

    geometry_msgs::msg::TransformStamped transform;
    // transform.header.stamp.sec = odom_msg.header.stamp.sec;
    // transform.header.stamp.nanosec = odom_msg.header.stamp.nanosec;
    transform.header.stamp = this->now(); 
    transform.header.frame_id = odom_frame;
    transform.child_frame_id = base_frame;

    transform.transform.translation.x = odom_msg.pose.pose.position.x;
    transform.transform.translation.y = odom_msg.pose.pose.position.y;
    transform.transform.translation.z = odom_msg.pose.pose.position.z;
    transform.transform.rotation = odom_msg.pose.pose.orientation;
    tf_bro->sendTransform(transform);
  }
};

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<TopicSubscribe01>("go2_odom_tf");
  rclcpp::WallRate loop_rate(20.0);
  while (rclcpp::ok())
  {
    rclcpp::spin_some(node);
    node->publish_tf();
    loop_rate.sleep();
  }
  rclcpp::shutdown();
  return 0;
}
