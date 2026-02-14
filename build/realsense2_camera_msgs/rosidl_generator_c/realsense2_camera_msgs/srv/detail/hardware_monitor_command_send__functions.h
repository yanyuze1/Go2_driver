// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from realsense2_camera_msgs:srv/HardwareMonitorCommandSend.idl
// generated code does not contain a copyright notice

#ifndef REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__FUNCTIONS_H_
#define REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "realsense2_camera_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "realsense2_camera_msgs/srv/detail/hardware_monitor_command_send__struct.h"

/// Initialize srv/HardwareMonitorCommandSend message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request
 * )) before or use
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__init(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * msg);

/// Finalize srv/HardwareMonitorCommandSend message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__fini(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * msg);

/// Create srv/HardwareMonitorCommandSend message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request *
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__create();

/// Destroy srv/HardwareMonitorCommandSend message.
/**
 * It calls
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__destroy(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * msg);

/// Check for srv/HardwareMonitorCommandSend message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__are_equal(const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * lhs, const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * rhs);

/// Copy a srv/HardwareMonitorCommandSend message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__copy(
  const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * input,
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * output);

/// Initialize array of srv/HardwareMonitorCommandSend messages.
/**
 * It allocates the memory for the number of elements and calls
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__init(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * array, size_t size);

/// Finalize array of srv/HardwareMonitorCommandSend messages.
/**
 * It calls
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__fini(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * array);

/// Create array of srv/HardwareMonitorCommandSend messages.
/**
 * It allocates the memory for the array and calls
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence *
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__create(size_t size);

/// Destroy array of srv/HardwareMonitorCommandSend messages.
/**
 * It calls
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__destroy(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * array);

/// Check for srv/HardwareMonitorCommandSend message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__are_equal(const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * lhs, const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * rhs);

/// Copy an array of srv/HardwareMonitorCommandSend messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__copy(
  const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * input,
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * output);

/// Initialize srv/HardwareMonitorCommandSend message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response
 * )) before or use
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__init(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * msg);

/// Finalize srv/HardwareMonitorCommandSend message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__fini(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * msg);

/// Create srv/HardwareMonitorCommandSend message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response *
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__create();

/// Destroy srv/HardwareMonitorCommandSend message.
/**
 * It calls
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__destroy(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * msg);

/// Check for srv/HardwareMonitorCommandSend message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__are_equal(const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * lhs, const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * rhs);

/// Copy a srv/HardwareMonitorCommandSend message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__copy(
  const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * input,
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * output);

/// Initialize array of srv/HardwareMonitorCommandSend messages.
/**
 * It allocates the memory for the number of elements and calls
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__init(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * array, size_t size);

/// Finalize array of srv/HardwareMonitorCommandSend messages.
/**
 * It calls
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__fini(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * array);

/// Create array of srv/HardwareMonitorCommandSend messages.
/**
 * It allocates the memory for the array and calls
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence *
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__create(size_t size);

/// Destroy array of srv/HardwareMonitorCommandSend messages.
/**
 * It calls
 * realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__destroy(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * array);

/// Check for srv/HardwareMonitorCommandSend message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__are_equal(const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * lhs, const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * rhs);

/// Copy an array of srv/HardwareMonitorCommandSend messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_realsense2_camera_msgs
bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__copy(
  const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * input,
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // REALSENSE2_CAMERA_MSGS__SRV__DETAIL__HARDWARE_MONITOR_COMMAND_SEND__FUNCTIONS_H_
