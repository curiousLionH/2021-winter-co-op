// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/SbgCAN544.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/sbg_can544__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
custom_msgs__msg__SbgCAN544__init(custom_msgs__msg__SbgCAN544 * msg)
{
  if (!msg) {
    return false;
  }
  // angle_track
  // angle_slip
  // curvature_radius
  // auto_status
  return true;
}

void
custom_msgs__msg__SbgCAN544__fini(custom_msgs__msg__SbgCAN544 * msg)
{
  if (!msg) {
    return;
  }
  // angle_track
  // angle_slip
  // curvature_radius
  // auto_status
}

custom_msgs__msg__SbgCAN544 *
custom_msgs__msg__SbgCAN544__create()
{
  custom_msgs__msg__SbgCAN544 * msg = (custom_msgs__msg__SbgCAN544 *)malloc(sizeof(custom_msgs__msg__SbgCAN544));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__SbgCAN544));
  bool success = custom_msgs__msg__SbgCAN544__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__SbgCAN544__destroy(custom_msgs__msg__SbgCAN544 * msg)
{
  if (msg) {
    custom_msgs__msg__SbgCAN544__fini(msg);
  }
  free(msg);
}


bool
custom_msgs__msg__SbgCAN544__Sequence__init(custom_msgs__msg__SbgCAN544__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs__msg__SbgCAN544 * data = NULL;
  if (size) {
    data = (custom_msgs__msg__SbgCAN544 *)calloc(size, sizeof(custom_msgs__msg__SbgCAN544));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__SbgCAN544__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__SbgCAN544__fini(&data[i - 1]);
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
custom_msgs__msg__SbgCAN544__Sequence__fini(custom_msgs__msg__SbgCAN544__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__SbgCAN544__fini(&array->data[i]);
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

custom_msgs__msg__SbgCAN544__Sequence *
custom_msgs__msg__SbgCAN544__Sequence__create(size_t size)
{
  custom_msgs__msg__SbgCAN544__Sequence * array = (custom_msgs__msg__SbgCAN544__Sequence *)malloc(sizeof(custom_msgs__msg__SbgCAN544__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__SbgCAN544__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__SbgCAN544__Sequence__destroy(custom_msgs__msg__SbgCAN544__Sequence * array)
{
  if (array) {
    custom_msgs__msg__SbgCAN544__Sequence__fini(array);
  }
  free(array);
}
