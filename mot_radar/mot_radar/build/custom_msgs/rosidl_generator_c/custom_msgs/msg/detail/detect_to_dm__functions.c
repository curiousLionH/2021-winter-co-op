// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/DetectToDM.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/detect_to_dm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `objects_cur`
// Member `objects_left`
// Member `objects_right`
// Member `objects_inter`
// Member `objects_inter_left`
#include "custom_msgs/msg/detail/object__functions.h"

bool
custom_msgs__msg__DetectToDM__init(custom_msgs__msg__DetectToDM * msg)
{
  if (!msg) {
    return false;
  }
  // objects_cur
  if (!custom_msgs__msg__Object__Sequence__init(&msg->objects_cur, 0)) {
    custom_msgs__msg__DetectToDM__fini(msg);
    return false;
  }
  // objects_left
  if (!custom_msgs__msg__Object__Sequence__init(&msg->objects_left, 0)) {
    custom_msgs__msg__DetectToDM__fini(msg);
    return false;
  }
  // objects_right
  if (!custom_msgs__msg__Object__Sequence__init(&msg->objects_right, 0)) {
    custom_msgs__msg__DetectToDM__fini(msg);
    return false;
  }
  // objects_inter
  if (!custom_msgs__msg__Object__Sequence__init(&msg->objects_inter, 0)) {
    custom_msgs__msg__DetectToDM__fini(msg);
    return false;
  }
  // objects_inter_left
  if (!custom_msgs__msg__Object__Sequence__init(&msg->objects_inter_left, 0)) {
    custom_msgs__msg__DetectToDM__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__DetectToDM__fini(custom_msgs__msg__DetectToDM * msg)
{
  if (!msg) {
    return;
  }
  // objects_cur
  custom_msgs__msg__Object__Sequence__fini(&msg->objects_cur);
  // objects_left
  custom_msgs__msg__Object__Sequence__fini(&msg->objects_left);
  // objects_right
  custom_msgs__msg__Object__Sequence__fini(&msg->objects_right);
  // objects_inter
  custom_msgs__msg__Object__Sequence__fini(&msg->objects_inter);
  // objects_inter_left
  custom_msgs__msg__Object__Sequence__fini(&msg->objects_inter_left);
}

custom_msgs__msg__DetectToDM *
custom_msgs__msg__DetectToDM__create()
{
  custom_msgs__msg__DetectToDM * msg = (custom_msgs__msg__DetectToDM *)malloc(sizeof(custom_msgs__msg__DetectToDM));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__DetectToDM));
  bool success = custom_msgs__msg__DetectToDM__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__DetectToDM__destroy(custom_msgs__msg__DetectToDM * msg)
{
  if (msg) {
    custom_msgs__msg__DetectToDM__fini(msg);
  }
  free(msg);
}


bool
custom_msgs__msg__DetectToDM__Sequence__init(custom_msgs__msg__DetectToDM__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs__msg__DetectToDM * data = NULL;
  if (size) {
    data = (custom_msgs__msg__DetectToDM *)calloc(size, sizeof(custom_msgs__msg__DetectToDM));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__DetectToDM__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__DetectToDM__fini(&data[i - 1]);
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
custom_msgs__msg__DetectToDM__Sequence__fini(custom_msgs__msg__DetectToDM__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__DetectToDM__fini(&array->data[i]);
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

custom_msgs__msg__DetectToDM__Sequence *
custom_msgs__msg__DetectToDM__Sequence__create(size_t size)
{
  custom_msgs__msg__DetectToDM__Sequence * array = (custom_msgs__msg__DetectToDM__Sequence *)malloc(sizeof(custom_msgs__msg__DetectToDM__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__DetectToDM__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__DetectToDM__Sequence__destroy(custom_msgs__msg__DetectToDM__Sequence * array)
{
  if (array) {
    custom_msgs__msg__DetectToDM__Sequence__fini(array);
  }
  free(array);
}
