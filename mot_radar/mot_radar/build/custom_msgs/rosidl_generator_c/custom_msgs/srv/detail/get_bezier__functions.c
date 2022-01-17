// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:srv/GetBezier.idl
// generated code does not contain a copyright notice
#include "custom_msgs/srv/detail/get_bezier__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
custom_msgs__srv__GetBezier_Request__init(custom_msgs__srv__GetBezier_Request * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  // distance1
  // distance2
  // distance3
  return true;
}

void
custom_msgs__srv__GetBezier_Request__fini(custom_msgs__srv__GetBezier_Request * msg)
{
  if (!msg) {
    return;
  }
  // direction
  // distance1
  // distance2
  // distance3
}

custom_msgs__srv__GetBezier_Request *
custom_msgs__srv__GetBezier_Request__create()
{
  custom_msgs__srv__GetBezier_Request * msg = (custom_msgs__srv__GetBezier_Request *)malloc(sizeof(custom_msgs__srv__GetBezier_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__srv__GetBezier_Request));
  bool success = custom_msgs__srv__GetBezier_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs__srv__GetBezier_Request__destroy(custom_msgs__srv__GetBezier_Request * msg)
{
  if (msg) {
    custom_msgs__srv__GetBezier_Request__fini(msg);
  }
  free(msg);
}


bool
custom_msgs__srv__GetBezier_Request__Sequence__init(custom_msgs__srv__GetBezier_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs__srv__GetBezier_Request * data = NULL;
  if (size) {
    data = (custom_msgs__srv__GetBezier_Request *)calloc(size, sizeof(custom_msgs__srv__GetBezier_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__srv__GetBezier_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__srv__GetBezier_Request__fini(&data[i - 1]);
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
custom_msgs__srv__GetBezier_Request__Sequence__fini(custom_msgs__srv__GetBezier_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__srv__GetBezier_Request__fini(&array->data[i]);
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

custom_msgs__srv__GetBezier_Request__Sequence *
custom_msgs__srv__GetBezier_Request__Sequence__create(size_t size)
{
  custom_msgs__srv__GetBezier_Request__Sequence * array = (custom_msgs__srv__GetBezier_Request__Sequence *)malloc(sizeof(custom_msgs__srv__GetBezier_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__srv__GetBezier_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs__srv__GetBezier_Request__Sequence__destroy(custom_msgs__srv__GetBezier_Request__Sequence * array)
{
  if (array) {
    custom_msgs__srv__GetBezier_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `path1_x`
// Member `path1_y`
// Member `path2_x`
// Member `path2_y`
// Member `path3_x`
// Member `path3_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
custom_msgs__srv__GetBezier_Response__init(custom_msgs__srv__GetBezier_Response * msg)
{
  if (!msg) {
    return false;
  }
  // path1_x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->path1_x, 0)) {
    custom_msgs__srv__GetBezier_Response__fini(msg);
    return false;
  }
  // path1_y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->path1_y, 0)) {
    custom_msgs__srv__GetBezier_Response__fini(msg);
    return false;
  }
  // path2_x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->path2_x, 0)) {
    custom_msgs__srv__GetBezier_Response__fini(msg);
    return false;
  }
  // path2_y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->path2_y, 0)) {
    custom_msgs__srv__GetBezier_Response__fini(msg);
    return false;
  }
  // path3_x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->path3_x, 0)) {
    custom_msgs__srv__GetBezier_Response__fini(msg);
    return false;
  }
  // path3_y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->path3_y, 0)) {
    custom_msgs__srv__GetBezier_Response__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__srv__GetBezier_Response__fini(custom_msgs__srv__GetBezier_Response * msg)
{
  if (!msg) {
    return;
  }
  // path1_x
  rosidl_runtime_c__double__Sequence__fini(&msg->path1_x);
  // path1_y
  rosidl_runtime_c__double__Sequence__fini(&msg->path1_y);
  // path2_x
  rosidl_runtime_c__double__Sequence__fini(&msg->path2_x);
  // path2_y
  rosidl_runtime_c__double__Sequence__fini(&msg->path2_y);
  // path3_x
  rosidl_runtime_c__double__Sequence__fini(&msg->path3_x);
  // path3_y
  rosidl_runtime_c__double__Sequence__fini(&msg->path3_y);
}

custom_msgs__srv__GetBezier_Response *
custom_msgs__srv__GetBezier_Response__create()
{
  custom_msgs__srv__GetBezier_Response * msg = (custom_msgs__srv__GetBezier_Response *)malloc(sizeof(custom_msgs__srv__GetBezier_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__srv__GetBezier_Response));
  bool success = custom_msgs__srv__GetBezier_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs__srv__GetBezier_Response__destroy(custom_msgs__srv__GetBezier_Response * msg)
{
  if (msg) {
    custom_msgs__srv__GetBezier_Response__fini(msg);
  }
  free(msg);
}


bool
custom_msgs__srv__GetBezier_Response__Sequence__init(custom_msgs__srv__GetBezier_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs__srv__GetBezier_Response * data = NULL;
  if (size) {
    data = (custom_msgs__srv__GetBezier_Response *)calloc(size, sizeof(custom_msgs__srv__GetBezier_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__srv__GetBezier_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__srv__GetBezier_Response__fini(&data[i - 1]);
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
custom_msgs__srv__GetBezier_Response__Sequence__fini(custom_msgs__srv__GetBezier_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__srv__GetBezier_Response__fini(&array->data[i]);
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

custom_msgs__srv__GetBezier_Response__Sequence *
custom_msgs__srv__GetBezier_Response__Sequence__create(size_t size)
{
  custom_msgs__srv__GetBezier_Response__Sequence * array = (custom_msgs__srv__GetBezier_Response__Sequence *)malloc(sizeof(custom_msgs__srv__GetBezier_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__srv__GetBezier_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs__srv__GetBezier_Response__Sequence__destroy(custom_msgs__srv__GetBezier_Response__Sequence * array)
{
  if (array) {
    custom_msgs__srv__GetBezier_Response__Sequence__fini(array);
  }
  free(array);
}
