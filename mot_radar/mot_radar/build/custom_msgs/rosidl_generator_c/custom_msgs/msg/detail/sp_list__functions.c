// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/SpList.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/sp_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `x_sp`
// Member `x_sp_eps`
// Member `y_sp`
// Member `y_sp_eps`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
custom_msgs__msg__SpList__init(custom_msgs__msg__SpList * msg)
{
  if (!msg) {
    return false;
  }
  // x_sp
  if (!rosidl_runtime_c__double__Sequence__init(&msg->x_sp, 0)) {
    custom_msgs__msg__SpList__fini(msg);
    return false;
  }
  // x_sp_eps
  if (!rosidl_runtime_c__double__Sequence__init(&msg->x_sp_eps, 0)) {
    custom_msgs__msg__SpList__fini(msg);
    return false;
  }
  // y_sp
  if (!rosidl_runtime_c__double__Sequence__init(&msg->y_sp, 0)) {
    custom_msgs__msg__SpList__fini(msg);
    return false;
  }
  // y_sp_eps
  if (!rosidl_runtime_c__double__Sequence__init(&msg->y_sp_eps, 0)) {
    custom_msgs__msg__SpList__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__SpList__fini(custom_msgs__msg__SpList * msg)
{
  if (!msg) {
    return;
  }
  // x_sp
  rosidl_runtime_c__double__Sequence__fini(&msg->x_sp);
  // x_sp_eps
  rosidl_runtime_c__double__Sequence__fini(&msg->x_sp_eps);
  // y_sp
  rosidl_runtime_c__double__Sequence__fini(&msg->y_sp);
  // y_sp_eps
  rosidl_runtime_c__double__Sequence__fini(&msg->y_sp_eps);
}

custom_msgs__msg__SpList *
custom_msgs__msg__SpList__create()
{
  custom_msgs__msg__SpList * msg = (custom_msgs__msg__SpList *)malloc(sizeof(custom_msgs__msg__SpList));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__SpList));
  bool success = custom_msgs__msg__SpList__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__SpList__destroy(custom_msgs__msg__SpList * msg)
{
  if (msg) {
    custom_msgs__msg__SpList__fini(msg);
  }
  free(msg);
}


bool
custom_msgs__msg__SpList__Sequence__init(custom_msgs__msg__SpList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs__msg__SpList * data = NULL;
  if (size) {
    data = (custom_msgs__msg__SpList *)calloc(size, sizeof(custom_msgs__msg__SpList));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__SpList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__SpList__fini(&data[i - 1]);
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
custom_msgs__msg__SpList__Sequence__fini(custom_msgs__msg__SpList__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__SpList__fini(&array->data[i]);
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

custom_msgs__msg__SpList__Sequence *
custom_msgs__msg__SpList__Sequence__create(size_t size)
{
  custom_msgs__msg__SpList__Sequence * array = (custom_msgs__msg__SpList__Sequence *)malloc(sizeof(custom_msgs__msg__SpList__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__SpList__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__SpList__Sequence__destroy(custom_msgs__msg__SpList__Sequence * array)
{
  if (array) {
    custom_msgs__msg__SpList__Sequence__fini(array);
  }
  free(array);
}
