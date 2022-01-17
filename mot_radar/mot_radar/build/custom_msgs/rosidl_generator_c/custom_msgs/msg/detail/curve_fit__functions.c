// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/CurveFit.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/curve_fit__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `left_x`
// Member `left_y`
// Member `right_x`
// Member `right_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
custom_msgs__msg__CurveFit__init(custom_msgs__msg__CurveFit * msg)
{
  if (!msg) {
    return false;
  }
  // left_x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->left_x, 0)) {
    custom_msgs__msg__CurveFit__fini(msg);
    return false;
  }
  // left_y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->left_y, 0)) {
    custom_msgs__msg__CurveFit__fini(msg);
    return false;
  }
  // right_x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->right_x, 0)) {
    custom_msgs__msg__CurveFit__fini(msg);
    return false;
  }
  // right_y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->right_y, 0)) {
    custom_msgs__msg__CurveFit__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__CurveFit__fini(custom_msgs__msg__CurveFit * msg)
{
  if (!msg) {
    return;
  }
  // left_x
  rosidl_runtime_c__double__Sequence__fini(&msg->left_x);
  // left_y
  rosidl_runtime_c__double__Sequence__fini(&msg->left_y);
  // right_x
  rosidl_runtime_c__double__Sequence__fini(&msg->right_x);
  // right_y
  rosidl_runtime_c__double__Sequence__fini(&msg->right_y);
}

custom_msgs__msg__CurveFit *
custom_msgs__msg__CurveFit__create()
{
  custom_msgs__msg__CurveFit * msg = (custom_msgs__msg__CurveFit *)malloc(sizeof(custom_msgs__msg__CurveFit));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__CurveFit));
  bool success = custom_msgs__msg__CurveFit__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__CurveFit__destroy(custom_msgs__msg__CurveFit * msg)
{
  if (msg) {
    custom_msgs__msg__CurveFit__fini(msg);
  }
  free(msg);
}


bool
custom_msgs__msg__CurveFit__Sequence__init(custom_msgs__msg__CurveFit__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs__msg__CurveFit * data = NULL;
  if (size) {
    data = (custom_msgs__msg__CurveFit *)calloc(size, sizeof(custom_msgs__msg__CurveFit));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__CurveFit__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__CurveFit__fini(&data[i - 1]);
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
custom_msgs__msg__CurveFit__Sequence__fini(custom_msgs__msg__CurveFit__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__CurveFit__fini(&array->data[i]);
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

custom_msgs__msg__CurveFit__Sequence *
custom_msgs__msg__CurveFit__Sequence__create(size_t size)
{
  custom_msgs__msg__CurveFit__Sequence * array = (custom_msgs__msg__CurveFit__Sequence *)malloc(sizeof(custom_msgs__msg__CurveFit__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__CurveFit__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__CurveFit__Sequence__destroy(custom_msgs__msg__CurveFit__Sequence * array)
{
  if (array) {
    custom_msgs__msg__CurveFit__Sequence__fini(array);
  }
  free(array);
}
