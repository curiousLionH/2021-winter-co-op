// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/AroundPaths.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/around_paths__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `left_lanes`
// Member `right_lanes`
#include "custom_msgs/msg/detail/paths__functions.h"

bool
custom_msgs__msg__AroundPaths__init(custom_msgs__msg__AroundPaths * msg)
{
  if (!msg) {
    return false;
  }
  // left_lane
  // right_lane
  // left_lanes
  if (!custom_msgs__msg__Paths__Sequence__init(&msg->left_lanes, 0)) {
    custom_msgs__msg__AroundPaths__fini(msg);
    return false;
  }
  // right_lanes
  if (!custom_msgs__msg__Paths__Sequence__init(&msg->right_lanes, 0)) {
    custom_msgs__msg__AroundPaths__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__AroundPaths__fini(custom_msgs__msg__AroundPaths * msg)
{
  if (!msg) {
    return;
  }
  // left_lane
  // right_lane
  // left_lanes
  custom_msgs__msg__Paths__Sequence__fini(&msg->left_lanes);
  // right_lanes
  custom_msgs__msg__Paths__Sequence__fini(&msg->right_lanes);
}

custom_msgs__msg__AroundPaths *
custom_msgs__msg__AroundPaths__create()
{
  custom_msgs__msg__AroundPaths * msg = (custom_msgs__msg__AroundPaths *)malloc(sizeof(custom_msgs__msg__AroundPaths));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__AroundPaths));
  bool success = custom_msgs__msg__AroundPaths__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__AroundPaths__destroy(custom_msgs__msg__AroundPaths * msg)
{
  if (msg) {
    custom_msgs__msg__AroundPaths__fini(msg);
  }
  free(msg);
}


bool
custom_msgs__msg__AroundPaths__Sequence__init(custom_msgs__msg__AroundPaths__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs__msg__AroundPaths * data = NULL;
  if (size) {
    data = (custom_msgs__msg__AroundPaths *)calloc(size, sizeof(custom_msgs__msg__AroundPaths));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__AroundPaths__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__AroundPaths__fini(&data[i - 1]);
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
custom_msgs__msg__AroundPaths__Sequence__fini(custom_msgs__msg__AroundPaths__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__AroundPaths__fini(&array->data[i]);
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

custom_msgs__msg__AroundPaths__Sequence *
custom_msgs__msg__AroundPaths__Sequence__create(size_t size)
{
  custom_msgs__msg__AroundPaths__Sequence * array = (custom_msgs__msg__AroundPaths__Sequence *)malloc(sizeof(custom_msgs__msg__AroundPaths__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__AroundPaths__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__AroundPaths__Sequence__destroy(custom_msgs__msg__AroundPaths__Sequence * array)
{
  if (array) {
    custom_msgs__msg__AroundPaths__Sequence__fini(array);
  }
  free(array);
}
