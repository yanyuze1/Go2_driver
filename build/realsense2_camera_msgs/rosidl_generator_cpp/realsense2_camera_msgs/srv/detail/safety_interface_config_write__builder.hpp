// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from realsense2_camera_msgs:srv/SafetyInterfaceConfigWrite.idl
// generated code does not contain a copyright notice

#ifndef REALSENSE2_CAMERA_MSGS__SRV__DETAIL__SAFETY_INTERFACE_CONFIG_WRITE__BUILDER_HPP_
#define REALSENSE2_CAMERA_MSGS__SRV__DETAIL__SAFETY_INTERFACE_CONFIG_WRITE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "realsense2_camera_msgs/srv/detail/safety_interface_config_write__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace realsense2_camera_msgs
{

namespace srv
{

namespace builder
{

class Init_SafetyInterfaceConfigWrite_Request_safety_interface_config
{
public:
  Init_SafetyInterfaceConfigWrite_Request_safety_interface_config()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::realsense2_camera_msgs::srv::SafetyInterfaceConfigWrite_Request safety_interface_config(::realsense2_camera_msgs::srv::SafetyInterfaceConfigWrite_Request::_safety_interface_config_type arg)
  {
    msg_.safety_interface_config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::SafetyInterfaceConfigWrite_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::realsense2_camera_msgs::srv::SafetyInterfaceConfigWrite_Request>()
{
  return realsense2_camera_msgs::srv::builder::Init_SafetyInterfaceConfigWrite_Request_safety_interface_config();
}

}  // namespace realsense2_camera_msgs


namespace realsense2_camera_msgs
{

namespace srv
{

namespace builder
{

class Init_SafetyInterfaceConfigWrite_Response_error_message
{
public:
  explicit Init_SafetyInterfaceConfigWrite_Response_error_message(::realsense2_camera_msgs::srv::SafetyInterfaceConfigWrite_Response & msg)
  : msg_(msg)
  {}
  ::realsense2_camera_msgs::srv::SafetyInterfaceConfigWrite_Response error_message(::realsense2_camera_msgs::srv::SafetyInterfaceConfigWrite_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::SafetyInterfaceConfigWrite_Response msg_;
};

class Init_SafetyInterfaceConfigWrite_Response_success
{
public:
  Init_SafetyInterfaceConfigWrite_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyInterfaceConfigWrite_Response_error_message success(::realsense2_camera_msgs::srv::SafetyInterfaceConfigWrite_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SafetyInterfaceConfigWrite_Response_error_message(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::SafetyInterfaceConfigWrite_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::realsense2_camera_msgs::srv::SafetyInterfaceConfigWrite_Response>()
{
  return realsense2_camera_msgs::srv::builder::Init_SafetyInterfaceConfigWrite_Response_success();
}

}  // namespace realsense2_camera_msgs

#endif  // REALSENSE2_CAMERA_MSGS__SRV__DETAIL__SAFETY_INTERFACE_CONFIG_WRITE__BUILDER_HPP_
