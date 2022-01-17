// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/SaveCAN1809.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_can1809__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `acc_en_status`
// Member `acc_control_board_status`
// Member `acc_user_can_err`
// Member `acc_veh_err`
// Member `acc_err`
// Member `acc_control_status`
// Member `turn_right_en`
// Member `hazard_en`
// Member `turn_left_en`
// Member `g_sel_disp`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_msgs__msg__SaveCAN1809__init(custom_msgs__msg__SaveCAN1809 * msg)
{
  if (!msg) {
    return false;
  }
  // acc_en_status
  if (!rosidl_runtime_c__String__init(&msg->acc_en_status)) {
    custom_msgs__msg__SaveCAN1809__fini(msg);
    return false;
  }
  // acc_control_board_status
  if (!rosidl_runtime_c__String__init(&msg->acc_control_board_status)) {
    custom_msgs__msg__SaveCAN1809__fini(msg);
    return false;
  }
  // acc_user_can_err
  if (!rosidl_runtime_c__String__init(&msg->acc_user_can_err)) {
    custom_msgs__msg__SaveCAN1809__fini(msg);
    return false;
  }
  // acc_veh_err
  if (!rosidl_runtime_c__String__init(&msg->acc_veh_err)) {
    custom_msgs__msg__SaveCAN1809__fini(msg);
    return false;
  }
  // acc_err
  if (!rosidl_runtime_c__String__init(&msg->acc_err)) {
    custom_msgs__msg__SaveCAN1809__fini(msg);
    return false;
  }
  // acc_control_status
  if (!rosidl_runtime_c__String__init(&msg->acc_control_status)) {
    custom_msgs__msg__SaveCAN1809__fini(msg);
    return false;
  }
  // vs
  // bsd_right
  // bsd_left
  // long_accel
  // turn_right_en
  if (!rosidl_runtime_c__String__init(&msg->turn_right_en)) {
    custom_msgs__msg__SaveCAN1809__fini(msg);
    return false;
  }
  // hazard_en
  if (!rosidl_runtime_c__String__init(&msg->hazard_en)) {
    custom_msgs__msg__SaveCAN1809__fini(msg);
    return false;
  }
  // turn_left_en
  if (!rosidl_runtime_c__String__init(&msg->turn_left_en)) {
    custom_msgs__msg__SaveCAN1809__fini(msg);
    return false;
  }
  // aeb_act
  // g_sel_disp
  if (!rosidl_runtime_c__String__init(&msg->g_sel_disp)) {
    custom_msgs__msg__SaveCAN1809__fini(msg);
    return false;
  }
  // acc_alive_cnt
  return true;
}

void
custom_msgs__msg__SaveCAN1809__fini(custom_msgs__msg__SaveCAN1809 * msg)
{
  if (!msg) {
    return;
  }
  // acc_en_status
  rosidl_runtime_c__String__fini(&msg->acc_en_status);
  // acc_control_board_status
  rosidl_runtime_c__String__fini(&msg->acc_control_board_status);
  // acc_user_can_err
  rosidl_runtime_c__String__fini(&msg->acc_user_can_err);
  // acc_veh_err
  rosidl_runtime_c__String__fini(&msg->acc_veh_err);
  // acc_err
  rosidl_runtime_c__String__fini(&msg->acc_err);
  // acc_control_status
  rosidl_runtime_c__String__fini(&msg->acc_control_status);
  // vs
  // bsd_right
  // bsd_left
  // long_accel
  // turn_right_en
  rosidl_runtime_c__String__fini(&msg->turn_right_en);
  // hazard_en
  rosidl_runtime_c__String__fini(&msg->hazard_en);
  // turn_left_en
  rosidl_runtime_c__String__fini(&msg->turn_left_en);
  // aeb_act
  // g_sel_disp
  rosidl_runtime_c__String__fini(&msg->g_sel_disp);
  // acc_alive_cnt
}

custom_msgs__msg__SaveCAN1809 *
custom_msgs__msg__SaveCAN1809__create()
{
  custom_msgs__msg__SaveCAN1809 * msg = (custom_msgs__msg__SaveCAN1809 *)malloc(sizeof(custom_msgs__msg__SaveCAN1809));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__SaveCAN1809));
  bool success = custom_msgs__msg__SaveCAN1809__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__SaveCAN1809__destroy(custom_msgs__msg__SaveCAN1809 * msg)
{
  if (msg) {
    custom_msgs__msg__SaveCAN1809__fini(msg);
  }
  free(msg);
}


bool
custom_msgs__msg__SaveCAN1809__Sequence__init(custom_msgs__msg__SaveCAN1809__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs__msg__SaveCAN1809 * data = NULL;
  if (size) {
    data = (custom_msgs__msg__SaveCAN1809 *)calloc(size, sizeof(custom_msgs__msg__SaveCAN1809));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__SaveCAN1809__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__SaveCAN1809__fini(&data[i - 1]);
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
custom_msgs__msg__SaveCAN1809__Sequence__fini(custom_msgs__msg__SaveCAN1809__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__SaveCAN1809__fini(&array->data[i]);
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

custom_msgs__msg__SaveCAN1809__Sequence *
custom_msgs__msg__SaveCAN1809__Sequence__create(size_t size)
{
  custom_msgs__msg__SaveCAN1809__Sequence * array = (custom_msgs__msg__SaveCAN1809__Sequence *)malloc(sizeof(custom_msgs__msg__SaveCAN1809__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__SaveCAN1809__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__SaveCAN1809__Sequence__destroy(custom_msgs__msg__SaveCAN1809__Sequence * array)
{
  if (array) {
    custom_msgs__msg__SaveCAN1809__Sequence__fini(array);
  }
  free(array);
}
