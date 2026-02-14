// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from realsense2_camera_msgs:srv/SafetyPresetWrite.idl
// generated code does not contain a copyright notice

#ifndef REALSENSE2_CAMERA_MSGS__SRV__DETAIL__SAFETY_PRESET_WRITE__BUILDER_HPP_
#define REALSENSE2_CAMERA_MSGS__SRV__DETAIL__SAFETY_PRESET_WRITE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "realsense2_camera_msgs/srv/detail/safety_preset_write__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace realsense2_camera_msgs
{

namespace srv
{

namespace builder
{

class Init_SafetyPresetWrite_Request_index
{
public:
  explicit Init_SafetyPresetWrite_Request_index(::realsense2_camera_msgs::srv::SafetyPresetWrite_Request & msg)
  : msg_(msg)
  {}
  ::realsense2_camera_msgs::srv::SafetyPresetWrite_Request index(::realsense2_camera_msgs::srv::SafetyPresetWrite_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::SafetyPresetWrite_Request msg_;
};

class Init_SafetyPresetWrite_Request_safety_preset
{
public:
  Init_SafetyPresetWrite_Request_safety_preset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyPresetWrite_Request_index safety_preset(::realsense2_camera_msgs::srv::SafetyPresetWrite_Request::_safety_preset_type arg)
  {
    msg_.safety_preset = std::move(arg);
    return Init_SafetyPresetWrite_Request_index(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::SafetyPresetWrite_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::realsense2_camera_msgs::srv::SafetyPresetWrite_Request>()
{
  return realsense2_camera_msgs::srv::builder::Init_SafetyPresetWrite_Request_safety_preset();
}

}  // namespace realsense2_camera_msgs


namespace realsense2_camera_msgs
{

namespace srv
{

namespace builder
{

class Init_SafetyPresetWrite_Response_error_message
{
public:
  explicit Init_SafetyPresetWrite_Response_error_message(::realsense2_camera_msgs::srv::SafetyPresetWrite_Response & msg)
  : msg_(msg)
  {}
  ::realsense2_camera_msgs::srv::SafetyPresetWrite_Response error_message(::realsense2_camera_msgs::srv::SafetyPresetWrite_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::SafetyPresetWrite_Response msg_;
};

class Init_SafetyPresetWrite_Response_success
{
public:
  Init_SafetyPresetWrite_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SafetyPresetWrite_Response_error_message success(::realsense2_camera_msgs::srv::SafetyPresetWrite_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SafetyPresetWrite_Response_error_message(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::SafetyPresetWrite_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::realsense2_camera_msgs::srv::SafetyPresetWrite_Response>()
{
  return realsense2_camera_msgs::srv::builder::Init_SafetyPresetWrite_Response_success();
}

}  // namespace realsense2_camera_msgs

#endif  // REALSENSE2_CAMERA_MSGS__SRV__DETAIL__SAFETY_PRESET_WRITE__BUILDER_HPP_
