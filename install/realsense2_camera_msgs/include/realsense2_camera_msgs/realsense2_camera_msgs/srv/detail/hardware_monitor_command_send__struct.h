// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from realsense2_camera_msgs:srv/HardwareMonitorCommandSend.idl
// generated code does not contain a copyright notice

#ifndef REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__STRUCT_H_
#define REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/HardwareMonitorCommandSend in the package realsense2_camera_msgs.
typedef struct realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request
{
  uint32_t opcode;
  uint32_t param1;
  uint32_t param2;
  uint32_t param3;
  uint32_t param4;
  rosidl_runtime_c__uint8__Sequence data;
} realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request;

// Struct for a sequence of realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request.
typedef struct realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence
{
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// Member 'error_message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/HardwareMonitorCommandSend in the package realsense2_camera_msgs.
typedef struct realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response
{
  bool success;
  rosidl_runtime_c__uint8__Sequence result;
  rosidl_runtime_c__String error_message;
} realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response;

// Struct for a sequence of realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response.
typedef struct realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence
{
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__STRUCT_H_
