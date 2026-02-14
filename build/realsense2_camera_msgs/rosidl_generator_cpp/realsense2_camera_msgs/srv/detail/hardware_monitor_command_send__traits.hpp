// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from realsense2_camera_msgs:srv/HardwareMonitorCommandSend.idl
// generated code does not contain a copyright notice

#ifndef REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__TRAITS_HPP_
#define REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "realsense2_camera_msgs/srv/detail/hardware_monitor_command_send__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace realsense2_camera_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HardwareMonitorCommandSend_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: opcode
  {
    out << "opcode: ";
    rosidl_generator_traits::value_to_yaml(msg.opcode, out);
    out << ", ";
  }

  // member: param1
  {
    out << "param1: ";
    rosidl_generator_traits::value_to_yaml(msg.param1, out);
    out << ", ";
  }

  // member: param2
  {
    out << "param2: ";
    rosidl_generator_traits::value_to_yaml(msg.param2, out);
    out << ", ";
  }

  // member: param3
  {
    out << "param3: ";
    rosidl_generator_traits::value_to_yaml(msg.param3, out);
    out << ", ";
  }

  // member: param4
  {
    out << "param4: ";
    rosidl_generator_traits::value_to_yaml(msg.param4, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HardwareMonitorCommandSend_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: opcode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "opcode: ";
    rosidl_generator_traits::value_to_yaml(msg.opcode, out);
    out << "\n";
  }

  // member: param1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param1: ";
    rosidl_generator_traits::value_to_yaml(msg.param1, out);
    out << "\n";
  }

  // member: param2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param2: ";
    rosidl_generator_traits::value_to_yaml(msg.param2, out);
    out << "\n";
  }

  // member: param3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param3: ";
    rosidl_generator_traits::value_to_yaml(msg.param3, out);
    out << "\n";
  }

  // member: param4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param4: ";
    rosidl_generator_traits::value_to_yaml(msg.param4, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HardwareMonitorCommandSend_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace realsense2_camera_msgs

namespace rosidl_generator_traits
{

[[deprecated("use realsense2_camera_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  realsense2_camera_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use realsense2_camera_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request & msg)
{
  return realsense2_camera_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request>()
{
  return "realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request";
}

template<>
inline const char * name<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request>()
{
  return "realsense2_camera_msgs/srv/HardwareMonitorCommandSend_Request";
}

template<>
struct has_fixed_size<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace realsense2_camera_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const HardwareMonitorCommandSend_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: result
  {
    if (msg.result.size() == 0) {
      out << "result: []";
    } else {
      out << "result: [";
      size_t pending_items = msg.result.size();
      for (auto item : msg.result) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HardwareMonitorCommandSend_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.result.size() == 0) {
      out << "result: []\n";
    } else {
      out << "result:\n";
      for (auto item : msg.result) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HardwareMonitorCommandSend_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace realsense2_camera_msgs

namespace rosidl_generator_traits
{

[[deprecated("use realsense2_camera_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  realsense2_camera_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use realsense2_camera_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response & msg)
{
  return realsense2_camera_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response>()
{
  return "realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response";
}

template<>
inline const char * name<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response>()
{
  return "realsense2_camera_msgs/srv/HardwareMonitorCommandSend_Response";
}

template<>
struct has_fixed_size<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<realsense2_camera_msgs::srv::HardwareMonitorCommandSend>()
{
  return "realsense2_camera_msgs::srv::HardwareMonitorCommandSend";
}

template<>
inline const char * name<realsense2_camera_msgs::srv::HardwareMonitorCommandSend>()
{
  return "realsense2_camera_msgs/srv/HardwareMonitorCommandSend";
}

template<>
struct has_fixed_size<realsense2_camera_msgs::srv::HardwareMonitorCommandSend>
  : std::integral_constant<
    bool,
    has_fixed_size<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request>::value &&
    has_fixed_size<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response>::value
  >
{
};

template<>
struct has_bounded_size<realsense2_camera_msgs::srv::HardwareMonitorCommandSend>
  : std::integral_constant<
    bool,
    has_bounded_size<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request>::value &&
    has_bounded_size<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response>::value
  >
{
};

template<>
struct is_service<realsense2_camera_msgs::srv::HardwareMonitorCommandSend>
  : std::true_type
{
};

template<>
struct is_service_request<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Request>
  : std::true_type
{
};

template<>
struct is_service_response<realsense2_camera_msgs::srv::HardwareMonitorCommandSend_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__TRAITS_HPP_
