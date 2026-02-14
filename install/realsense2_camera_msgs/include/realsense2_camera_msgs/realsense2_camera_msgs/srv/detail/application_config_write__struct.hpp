// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from realsense2_camera_msgs:srv/ApplicationConfigWrite.idl
// generated code does not contain a copyright notice

#ifndef REALSENSE2_CAMERA_MSGS__SRV__DETAIL__APPLICATION_CONFIG_WRITE__STRUCT_HPP_
#define REALSENSE2_CAMERA_MSGS__SRV__DETAIL__APPLICATION_CONFIG_WRITE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__realsense2_camera_msgs__srv__ApplicationConfigWrite_Request __attribute__((deprecated))
#else
# define DEPRECATED__realsense2_camera_msgs__srv__ApplicationConfigWrite_Request __declspec(deprecated)
#endif

namespace realsense2_camera_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplicationConfigWrite_Request_
{
  using Type = ApplicationConfigWrite_Request_<ContainerAllocator>;

  explicit ApplicationConfigWrite_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->application_config = "";
    }
  }

  explicit ApplicationConfigWrite_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : application_config(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->application_config = "";
    }
  }

  // field types and members
  using _application_config_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _application_config_type application_config;

  // setters for named parameter idiom
  Type & set__application_config(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->application_config = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    realsense2_camera_msgs::srv::ApplicationConfigWrite_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const realsense2_camera_msgs::srv::ApplicationConfigWrite_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      realsense2_camera_msgs::srv::ApplicationConfigWrite_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      realsense2_camera_msgs::srv::ApplicationConfigWrite_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__realsense2_camera_msgs__srv__ApplicationConfigWrite_Request
    std::shared_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__realsense2_camera_msgs__srv__ApplicationConfigWrite_Request
    std::shared_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplicationConfigWrite_Request_ & other) const
  {
    if (this->application_config != other.application_config) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplicationConfigWrite_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplicationConfigWrite_Request_

// alias to use template instance with default allocator
using ApplicationConfigWrite_Request =
  realsense2_camera_msgs::srv::ApplicationConfigWrite_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace realsense2_camera_msgs


#ifndef _WIN32
# define DEPRECATED__realsense2_camera_msgs__srv__ApplicationConfigWrite_Response __attribute__((deprecated))
#else
# define DEPRECATED__realsense2_camera_msgs__srv__ApplicationConfigWrite_Response __declspec(deprecated)
#endif

namespace realsense2_camera_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplicationConfigWrite_Response_
{
  using Type = ApplicationConfigWrite_Response_<ContainerAllocator>;

  explicit ApplicationConfigWrite_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  explicit ApplicationConfigWrite_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    realsense2_camera_msgs::srv::ApplicationConfigWrite_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const realsense2_camera_msgs::srv::ApplicationConfigWrite_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      realsense2_camera_msgs::srv::ApplicationConfigWrite_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      realsense2_camera_msgs::srv::ApplicationConfigWrite_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__realsense2_camera_msgs__srv__ApplicationConfigWrite_Response
    std::shared_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__realsense2_camera_msgs__srv__ApplicationConfigWrite_Response
    std::shared_ptr<realsense2_camera_msgs::srv::ApplicationConfigWrite_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplicationConfigWrite_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplicationConfigWrite_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplicationConfigWrite_Response_

// alias to use template instance with default allocator
using ApplicationConfigWrite_Response =
  realsense2_camera_msgs::srv::ApplicationConfigWrite_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace realsense2_camera_msgs

namespace realsense2_camera_msgs
{

namespace srv
{

struct ApplicationConfigWrite
{
  using Request = realsense2_camera_msgs::srv::ApplicationConfigWrite_Request;
  using Response = realsense2_camera_msgs::srv::ApplicationConfigWrite_Response;
};

}  // namespace srv

}  // namespace realsense2_camera_msgs

#endif  // REALSENSE2_CAMERA_MSGS__SRV__DETAIL__APPLICATION_CONFIG_WRITE__STRUCT_HPP_
