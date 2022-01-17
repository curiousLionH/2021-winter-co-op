// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/DebugRawArray.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/debug_raw_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `x`
// Member `y`
// Member `z`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
custom_msgs__msg__DebugRawArray__init(custom_msgs__msg__DebugRawArray * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__init(&msg->x, 0)) {
    custom_msgs__msg__DebugRawArray__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__init(&msg->y, 0)) {
    custom_msgs__msg__DebugRawArray__fini(msg);
    return false;
  }
  // z
  if (!rosidl_runtime_c__float__Sequence__init(&msg->z, 0)) {
    custom_msgs__msg__DebugRawArray__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__DebugRawArray__fini(custom_msgs__msg__DebugRawArray * msg)
{
  if (!msg) {
    return;
  }
  // x
  rosidl_runtime_c__float__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__float__Sequence__fini(&msg->y);
  // z
  rosidl_runtime_c__float__Sequence__fini(&msg->z);
}

custom_msgs__msg__DebugRawArray *
custom_msgs__msg__DebugRawArray__create()
{
  custom_msgs__msg__DebugRawArray * msg = (custom_msgs__msg__DebugRawArray *)malloc(sizeof(custom_msgs__msg__DebugRawArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__DebugRawArray));
  bool success = custom_msgs__msg__DebugRawArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__DebugRawArray__destroy(custom_msgs__msg__DebugRawArray * msg)
{
  if (msg) {
    custom_msgs__msg__DebugRawArray__fini(msg);
  }
  free(msg);
}


bool
custom_msgs__msg__DebugRawArray__Sequence__init(custom_msgs__msg__DebugRawArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs__msg__DebugRawArray * data = NULL;
  if (size) {
    data = (custom_msgs__msg__DebugRawArray *)calloc(size, sizeof(custom_msgs__msg__DebugRawArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__DebugRawArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__DebugRawArray__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_msgs__msg__DebugRawArray__Sequence__fini(custom_msgs__msg__DebugRawArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__DebugRawArray__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_msgs__msg__DebugRawArray__Sequence *
custom_msgs__msg__DebugRawArray__Sequence__create(size_t size)
{
  custom_msgs__msg__DebugRawArray__Sequence * array = (custom_msgs__msg__DebugRawArray__Sequence *)malloc(sizeof(custom_msgs__msg__DebugRawArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__DebugRawArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__DebugRawArray__Sequence__destroy(custom_msgs__msg__DebugRawArray__Sequence * array)
{
  if (array) {
    custom_msgs__msg__DebugRawArray__Sequence__fini(array);
  }
  free(array);
}
