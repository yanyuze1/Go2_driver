// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from realsense2_camera_msgs:srv/HardwareMonitorCommandSend.idl
// generated code does not contain a copyright notice

#ifndef REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__BUILDER_HPP_
#define REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "realsense2_camera_msgs/srv/detail/hardware_monitor_command_send__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace realsense2_camera_msgs
{

namespace srv
{

namespace builder
{

class Init_HardwareMonitorCommandSend_Request_data
{
public:
  explicit Init_HardwareMonitorCommandSend_Request_data(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request & msg)
  : msg_(msg)
  {}
  ::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request data(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request msg_;
};

class Init_HardwareMonitorCommandSend_Request_param4
{
public:
  explicit Init_HardwareMonitorCommandSend_Request_param4(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request & msg)
  : msg_(msg)
  {}
  Init_HardwareMonitorCommandSend_Request_data param4(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request::_param4_type arg)
  {
    msg_.param4 = std::move(arg);
    return Init_HardwareMonitorCommandSend_Request_data(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request msg_;
};

class Init_HardwareMonitorCommandSend_Request_param3
{
public:
  explicit Init_HardwareMonitorCommandSend_Request_param3(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request & msg)
  : msg_(msg)
  {}
  Init_HardwareMonitorCommandSend_Request_param4 param3(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request::_param3_type arg)
  {
    msg_.param3 = std::move(arg);
    return Init_HardwareMonitorCommandSend_Request_param4(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request msg_;
};

class Init_HardwareMonitorCommandSend_Request_param2
{
public:
  explicit Init_HardwareMonitorCommandSend_Request_param2(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request & msg)
  : msg_(msg)
  {}
  Init_HardwareMonitorCommandSend_Request_param3 param2(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request::_param2_type arg)
  {
    msg_.param2 = std::move(arg);
    return Init_HardwareMonitorCommandSend_Request_param3(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request msg_;
};

class Init_HardwareMonitorCommandSend_Request_param1
{
public:
  explicit Init_HardwareMonitorCommandSend_Request_param1(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request & msg)
  : msg_(msg)
  {}
  Init_HardwareMonitorCommandSend_Request_param2 param1(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request::_param1_type arg)
  {
    msg_.param1 = std::move(arg);
    return Init_HardwareMonitorCommandSend_Request_param2(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request msg_;
};

class Init_HardwareMonitorCommandSend_Request_opcode
{
public:
  Init_HardwareMonitorCommandSend_Request_opcode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareMonitorCommandSend_Request_param1 opcode(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request::_opcode_type arg)
  {
    msg_.opcode = std::move(arg);
    return Init_HardwareMonitorCommandSend_Request_param1(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request>()
{
  return realsense2_camera_msgs::srv::builder::Init_HardwareMonitorCommandSend_Request_opcode();
}

}  // namespace realsense2_camera_msgs


namespace realsense2_camera_msgs
{

namespace srv
{

namespace builder
{

class Init_HardwareMonitorCommandSend_Response_error_message
{
public:
  explicit Init_HardwareMonitorCommandSend_Response_error_message(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response & msg)
  : msg_(msg)
  {}
  ::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response error_message(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response msg_;
};

class Init_HardwareMonitorCommandSend_Response_result
{
public:
  explicit Init_HardwareMonitorCommandSend_Response_result(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response & msg)
  : msg_(msg)
  {}
  Init_HardwareMonitorCommandSend_Response_error_message result(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_HardwareMonitorCommandSend_Response_error_message(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response msg_;
};

class Init_HardwareMonitorCommandSend_Response_success
{
public:
  Init_HardwareMonitorCommandSend_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareMonitorCommandSend_Response_result success(::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_HardwareMonitorCommandSend_Response_result(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response>()
{
  return realsense2_camera_msgs::srv::builder::Init_HardwareMonitorCommandSend_Response_success();
}

}  // namespace realsense2_camera_msgs

#endif  // REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__BUILDER_HPP_
