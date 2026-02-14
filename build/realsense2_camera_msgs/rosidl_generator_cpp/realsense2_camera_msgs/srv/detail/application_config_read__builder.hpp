// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from realsense2_camera_msgs:srv/ApplicationConfigRead.idl
// generated code does not contain a copyright notice

#ifndef REALSENSE2_CAMERA_MSGS__SRV__DETAIL__APPLICATION_CONFIG_READ__BUILDER_HPP_
#define REALSENSE2_CAMERA_MSGS__SRV__DETAIL__APPLICATION_CONFIG_READ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "realsense2_camera_msgs/srv/detail/application_config_read__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace realsense2_camera_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::realsense2_camera_msgs::srv::ApplicationConfigRead_Request>()
{
  return ::realsense2_camera_msgs::srv::ApplicationConfigRead_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace realsense2_camera_msgs


namespace realsense2_camera_msgs
{

namespace srv
{

namespace builder
{

class Init_ApplicationConfigRead_Response_application_config
{
public:
  explicit Init_ApplicationConfigRead_Response_application_config(::realsense2_camera_msgs::srv::ApplicationConfigRead_Response & msg)
  : msg_(msg)
  {}
  ::realsense2_camera_msgs::srv::ApplicationConfigRead_Response application_config(::realsense2_camera_msgs::srv::ApplicationConfigRead_Response::_application_config_type arg)
  {
    msg_.application_config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::ApplicationConfigRead_Response msg_;
};

class Init_ApplicationConfigRead_Response_error_message
{
public:
  explicit Init_ApplicationConfigRead_Response_error_message(::realsense2_camera_msgs::srv::ApplicationConfigRead_Response & msg)
  : msg_(msg)
  {}
  Init_ApplicationConfigRead_Response_application_config error_message(::realsense2_camera_msgs::srv::ApplicationConfigRead_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_ApplicationConfigRead_Response_application_config(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::ApplicationConfigRead_Response msg_;
};

class Init_ApplicationConfigRead_Response_success
{
public:
  Init_ApplicationConfigRead_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplicationConfigRead_Response_error_message success(::realsense2_camera_msgs::srv::ApplicationConfigRead_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ApplicationConfigRead_Response_error_message(msg_);
  }

private:
  ::realsense2_camera_msgs::srv::ApplicationConfigRead_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::realsense2_camera_msgs::srv::ApplicationConfigRead_Response>()
{
  return realsense2_camera_msgs::srv::builder::Init_ApplicationConfigRead_Response_success();
}

}  // namespace realsense2_camera_msgs

#endif  // REALSENSE2_CAMERA_MSGS__SRV__DETAIL__APPLICATION_CONFIG_READ__BUILDER_HPP_
