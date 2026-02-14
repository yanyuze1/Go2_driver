// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from realsense2_camera_msgs:srv/SafetyInterfaceConfigRead.idl
// generated code does not contain a copyright notice
#include "realsense2_camera_msgs/srv/detail/safety_interface_config_read__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__init(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request * msg)
{
  if (!msg) {
    return false;
  }
  // calib_location
  msg->calib_location = 2;
  return true;
}

void
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__fini(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request * msg)
{
  if (!msg) {
    return;
  }
  // calib_location
}

bool
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__are_equal(const realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request * lhs, const realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // calib_location
  if (lhs->calib_location != rhs->calib_location) {
    return false;
  }
  return true;
}

bool
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__copy(
  const realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request * input,
  realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // calib_location
  output->calib_location = input->calib_location;
  return true;
}

realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request *
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request * msg = (realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request *)allocator.allocate(sizeof(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request));
  bool success = realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__destroy(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence__init(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request * data = NULL;

  if (size) {
    data = (realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request *)allocator.zero_allocate(size, sizeof(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__fini(&data[i - 1]);
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
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence__fini(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence * array)
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
      realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__fini(&array->data[i]);
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

realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence *
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence * array = (realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence *)allocator.allocate(sizeof(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence__destroy(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence__are_equal(const realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence * lhs, const realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence__copy(
  const realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence * input,
  realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request * data =
      (realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_message`
// Member `safety_interface_config`
#include "rosidl_runtime_c/string_functions.h"

bool
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__init(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__fini(msg);
    return false;
  }
  // safety_interface_config
  if (!rosidl_runtime_c__String__init(&msg->safety_interface_config)) {
    realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__fini(msg);
    return false;
  }
  return true;
}

void
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__fini(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
  // safety_interface_config
  rosidl_runtime_c__String__fini(&msg->safety_interface_config);
}

bool
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__are_equal(const realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response * lhs, const realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  // safety_interface_config
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->safety_interface_config), &(rhs->safety_interface_config)))
  {
    return false;
  }
  return true;
}

bool
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__copy(
  const realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response * input,
  realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  // safety_interface_config
  if (!rosidl_runtime_c__String__copy(
      &(input->safety_interface_config), &(output->safety_interface_config)))
  {
    return false;
  }
  return true;
}

realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response *
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response * msg = (realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response *)allocator.allocate(sizeof(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response));
  bool success = realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__destroy(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence__init(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response * data = NULL;

  if (size) {
    data = (realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response *)allocator.zero_allocate(size, sizeof(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__fini(&data[i - 1]);
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
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence__fini(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence * array)
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
      realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__fini(&array->data[i]);
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

realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence *
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence * array = (realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence *)allocator.allocate(sizeof(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence__destroy(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence__are_equal(const realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence * lhs, const realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence__copy(
  const realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence * input,
  realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response * data =
      (realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!realsense2_camera_msgs__srv__SafetyInterfaceConfigRead_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
