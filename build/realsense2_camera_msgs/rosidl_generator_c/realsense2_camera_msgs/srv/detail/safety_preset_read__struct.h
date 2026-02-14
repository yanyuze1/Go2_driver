// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from realsense2_camera_msgs:srv/SafetyPresetRead.idl
// generated code does not contain a copyright notice

#ifndef REALSENSE2_CAMERA_MSGS__SRV__DETAIL__SAFETY_PRESET_READ__STRUCT_H_
#define REALSENSE2_CAMERA_MSGS__SRV__DETAIL__SAFETY_PRESET_READ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SafetyPresetRead in the package realsense2_camera_msgs.
typedef struct realsense2_camera_msgs__srv__SafetyPresetRead_Request
{
  uint8_t index;
} realsense2_camera_msgs__srv__SafetyPresetRead_Request;

// Struct for a sequence of realsense2_camera_msgs__srv__SafetyPresetRead_Request.
typedef struct realsense2_camera_msgs__srv__SafetyPresetRead_Request__Sequence
{
  realsense2_camera_msgs__srv__SafetyPresetRead_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} realsense2_camera_msgs__srv__SafetyPresetRead_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_message'
// Member 'safety_preset'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SafetyPresetRead in the package realsense2_camera_msgs.
typedef struct realsense2_camera_msgs__srv__SafetyPresetRead_Response
{
  bool success;
  rosidl_runtime_c__String error_message;
  rosidl_runtime_c__String safety_preset;
} realsense2_camera_msgs__srv__SafetyPresetRead_Response;

// Struct for a sequence of realsense2_camera_msgs__srv__SafetyPresetRead_Response.
typedef struct realsense2_camera_msgs__srv__SafetyPresetRead_Response__Sequence
{
  realsense2_camera_msgs__srv__SafetyPresetRead_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} realsense2_camera_msgs__srv__SafetyPresetRead_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // REALSENSE2_CAMERA_MSGS__SRV__DETAIL__SAFETY_PRESET_READ__STRUCT_H_
