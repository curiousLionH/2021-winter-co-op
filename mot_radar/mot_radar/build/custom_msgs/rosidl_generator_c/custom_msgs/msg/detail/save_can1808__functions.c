// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/SaveCAN1808.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_can1808__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `eps_en_status`
// Member `eps_control_board_status`
// Member `eps_user_can_err`
// Member `eps_err`
// Member `eps_veh_can_err`
// Member `eps_sas_err`
// Member `eps_control_status`
// Member `override_ignore_status`
// Member `override_status`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_msgs__msg__SaveCAN1808__init(custom_msgs__msg__SaveCAN1808 * msg)
{
  if (!msg) {
    return false;
  }
  // eps_en_status
  if (!rosidl_runtime_c__String__init(&msg->eps_en_status)) {
    custom_msgs__msg__SaveCAN1808__fini(msg);
    return false;
  }
  // eps_control_board_status
  if (!rosidl_runtime_c__String__init(&msg->eps_control_board_status)) {
    custom_msgs__msg__SaveCAN1808__fini(msg);
    return false;
  }
  // eps_user_can_err
  if (!rosidl_runtime_c__String__init(&msg->eps_user_can_err)) {
    custom_msgs__msg__SaveCAN1808__fini(msg);
    return false;
  }
  // eps_err
  if (!rosidl_runtime_c__String__init(&msg->eps_err)) {
    custom_msgs__msg__SaveCAN1808__fini(msg);
    return false;
  }
  // eps_veh_can_err
  if (!rosidl_runtime_c__String__init(&msg->eps_veh_can_err)) {
    custom_msgs__msg__SaveCAN1808__fini(msg);
    return false;
  }
  // eps_sas_err
  if (!rosidl_runtime_c__String__init(&msg->eps_sas_err)) {
    custom_msgs__msg__SaveCAN1808__fini(msg);
    return false;
  }
  // eps_control_status
  if (!rosidl_runtime_c__String__init(&msg->eps_control_status)) {
    custom_msgs__msg__SaveCAN1808__fini(msg);
    return false;
  }
  // override_ignore_status
  if (!rosidl_runtime_c__String__init(&msg->override_ignore_status)) {
    custom_msgs__msg__SaveCAN1808__fini(msg);
    return false;
  }
  // override_status
  if (!rosidl_runtime_c__String__init(&msg->override_status)) {
    custom_msgs__msg__SaveCAN1808__fini(msg);
    return false;
  }
  // strang
  // str_drv_tq
  // str_out_tq
  // eps_alive_cnt
  return true;
}

void
custom_msgs__msg__SaveCAN1808__fini(custom_msgs__msg__SaveCAN1808 * msg)
{
  if (!msg) {
    return;
  }
  // eps_en_status
  rosidl_runtime_c__String__fini(&msg->eps_en_status);
  // eps_control_board_status
  rosidl_runtime_c__String__fini(&msg->eps_control_board_status);
  // eps_user_can_err
  rosidl_runtime_c__String__fini(&msg->eps_user_can_err);
  // eps_err
  rosidl_runtime_c__String__fini(&msg->eps_err);
  // eps_veh_can_err
  rosidl_runtime_c__String__fini(&msg->eps_veh_can_err);
  // eps_sas_err
  rosidl_runtime_c__String__fini(&msg->eps_sas_err);
  // eps_control_status
  rosidl_runtime_c__String__fini(&msg->eps_control_status);
  // override_ignore_status
  rosidl_runtime_c__String__fini(&msg->override_ignore_status);
  // override_status
  rosidl_runtime_c__String__fini(&msg->override_status);
  // strang
  // str_drv_tq
  // str_out_tq
  // eps_alive_cnt
}

custom_msgs__msg__SaveCAN1808 *
custom_msgs__msg__SaveCAN1808__create()
{
  custom_msgs__msg__SaveCAN1808 * msg = (custom_msgs__msg__SaveCAN1808 *)malloc(sizeof(custom_msgs__msg__SaveCAN1808));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__SaveCAN1808));
  bool success = custom_msgs__msg__SaveCAN1808__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__SaveCAN1808__destroy(custom_msgs__msg__SaveCAN1808 * msg)
{
  if (msg) {
    custom_msgs__msg__SaveCAN1808__fini(msg);
  }
  free(msg);
}


bool
custom_msgs__msg__SaveCAN1808__Sequence__init(custom_msgs__msg__SaveCAN1808__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs__msg__SaveCAN1808 * data = NULL;
  if (size) {
    data = (custom_msgs__msg__SaveCAN1808 *)calloc(size, sizeof(custom_msgs__msg__SaveCAN1808));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__SaveCAN1808__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__SaveCAN1808__fini(&data[i - 1]);
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
custom_msgs__msg__SaveCAN1808__Sequence__fini(custom_msgs__msg__SaveCAN1808__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__SaveCAN1808__fini(&array->data[i]);
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

custom_msgs__msg__SaveCAN1808__Sequence *
custom_msgs__msg__SaveCAN1808__Sequence__create(size_t size)
{
  custom_msgs__msg__SaveCAN1808__Sequence * array = (custom_msgs__msg__SaveCAN1808__Sequence *)malloc(sizeof(custom_msgs__msg__SaveCAN1808__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__SaveCAN1808__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__SaveCAN1808__Sequence__destroy(custom_msgs__msg__SaveCAN1808__Sequence * array)
{
  if (array) {
    custom_msgs__msg__SaveCAN1808__Sequence__fini(array);
  }
  free(array);
}
