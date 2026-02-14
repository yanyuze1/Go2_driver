// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from realsense2_camera_msgs:srv/HardwareMonitorCommandSend.idl
// generated code does not contain a copyright notice

#ifndef REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__STRUCT_HPP_
#define REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request __attribute__((deprecated))
#else
# define DEPRECATED__realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request __declspec(deprecated)
#endif

namespace realsense2_camera_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HardwareMonitorCommandSend_Request_
{
  using Type = HardwareMonitorCommandSend_Request_<ContainerAllocator>;

  explicit HardwareMonitorCommandSend_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->opcode = 0ul;
      this->param1 = 0ul;
      this->param2 = 0ul;
      this->param3 = 0ul;
      this->param4 = 0ul;
    }
  }

  explicit HardwareMonitorCommandSend_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->opcode = 0ul;
      this->param1 = 0ul;
      this->param2 = 0ul;
      this->param3 = 0ul;
      this->param4 = 0ul;
    }
  }

  // field types and members
  using _opcode_type =
    uint32_t;
  _opcode_type opcode;
  using _param1_type =
    uint32_t;
  _param1_type param1;
  using _param2_type =
    uint32_t;
  _param2_type param2;
  using _param3_type =
    uint32_t;
  _param3_type param3;
  using _param4_type =
    uint32_t;
  _param4_type param4;
  using _data_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__opcode(
    const uint32_t & _arg)
  {
    this->opcode = _arg;
    return *this;
  }
  Type & set__param1(
    const uint32_t & _arg)
  {
    this->param1 = _arg;
    return *this;
  }
  Type & set__param2(
    const uint32_t & _arg)
  {
    this->param2 = _arg;
    return *this;
  }
  Type & set__param3(
    const uint32_t & _arg)
  {
    this->param3 = _arg;
    return *this;
  }
  Type & set__param4(
    const uint32_t & _arg)
  {
    this->param4 = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request
    std::shared_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request
    std::shared_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HardwareMonitorCommandSend_Request_ & other) const
  {
    if (this->opcode != other.opcode) {
      return false;
    }
    if (this->param1 != other.param1) {
      return false;
    }
    if (this->param2 != other.param2) {
      return false;
    }
    if (this->param3 != other.param3) {
      return false;
    }
    if (this->param4 != other.param4) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const HardwareMonitorCommandSend_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HardwareMonitorCommandSend_Request_

// alias to use template instance with default allocator
using HardwareMonitorCommandSend_Request =
  realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace realsense2_camera_msgs


#ifndef _WIN32
# define DEPRECATED__realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response __attribute__((deprecated))
#else
# define DEPRECATED__realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response __declspec(deprecated)
#endif

namespace realsense2_camera_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct HardwareMonitorCommandSend_Response_
{
  using Type = HardwareMonitorCommandSend_Response_<ContainerAllocator>;

  explicit HardwareMonitorCommandSend_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
    }
  }

  explicit HardwareMonitorCommandSend_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  using _result_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _result_type result;
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
  Type & set__result(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->result = _arg;
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
    realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response
    std::shared_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response
    std::shared_ptr<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HardwareMonitorCommandSend_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const HardwareMonitorCommandSend_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HardwareMonitorCommandSend_Response_

// alias to use template instance with default allocator
using HardwareMonitorCommandSend_Response =
  realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace realsense2_camera_msgs

namespace realsense2_camera_msgs
{

namespace srv
{

struct HardwareMonitorCommandSend
{
  using Request = realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request;
  using Response = realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response;
};

}  // namespace srv

}  // namespace realsense2_camera_msgs

#endif  // REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__STRUCT_HPP_
