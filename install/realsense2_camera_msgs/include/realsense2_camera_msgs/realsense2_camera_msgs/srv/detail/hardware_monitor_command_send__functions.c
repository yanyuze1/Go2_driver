// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from realsense2_camera_msgs:srv/HardwareMonitorCommandSend.idl
// generated code does not contain a copyright notice
#include "realsense2_camera_msgs/srv/detail/hardware_monitor_command_send__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__init(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * msg)
{
  if (!msg) {
    return false;
  }
  // opcode
  // param1
  // param2
  // param3
  // param4
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__fini(msg);
    return false;
  }
  return true;
}

void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__fini(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * msg)
{
  if (!msg) {
    return;
  }
  // opcode
  // param1
  // param2
  // param3
  // param4
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__are_equal(const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * lhs, const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // opcode
  if (lhs->opcode != rhs->opcode) {
    return false;
  }
  // param1
  if (lhs->param1 != rhs->param1) {
    return false;
  }
  // param2
  if (lhs->param2 != rhs->param2) {
    return false;
  }
  // param3
  if (lhs->param3 != rhs->param3) {
    return false;
  }
  // param4
  if (lhs->param4 != rhs->param4) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__copy(
  const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * input,
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // opcode
  output->opcode = input->opcode;
  // param1
  output->param1 = input->param1;
  // param2
  output->param2 = input->param2;
  // param3
  output->param3 = input->param3;
  // param4
  output->param4 = input->param4;
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request *
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * msg = (realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request *)allocator.allocate(sizeof(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request));
  bool success = realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__destroy(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__init(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * data = NULL;

  if (size) {
    data = (realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request *)allocator.zero_allocate(size, sizeof(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__fini(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence *
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * array = (realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence *)allocator.allocate(sizeof(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__destroy(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__are_equal(const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * lhs, const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence__copy(
  const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * input,
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request * data =
      (realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"

bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__init(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // result
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->result, 0)) {
    realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__fini(msg);
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__fini(msg);
    return false;
  }
  return true;
}

void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__fini(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // result
  rosidl_runtime_c__uint8__Sequence__fini(&msg->result);
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
}

bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__are_equal(const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * lhs, const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  return true;
}

bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__copy(
  const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * input,
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // result
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  return true;
}

realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response *
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * msg = (realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response *)allocator.allocate(sizeof(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response));
  bool success = realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__destroy(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__init(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * data = NULL;

  if (size) {
    data = (realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response *)allocator.zero_allocate(size, sizeof(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__fini(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence *
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * array = (realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence *)allocator.allocate(sizeof(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__destroy(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__are_equal(const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * lhs, const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence__copy(
  const realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * input,
  realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response * data =
      (realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!realsense2_camera_msgs__srv__HardwareMonitorCommandSend_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
