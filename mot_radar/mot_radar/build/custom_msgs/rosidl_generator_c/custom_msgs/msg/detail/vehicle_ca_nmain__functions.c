// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/VehicleCANmain.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/vehicle_ca_nmain__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `eait_control_01`
#include "custom_msgs/msg/detail/save_can342__functions.h"
// Member `eait_control_02`
#include "custom_msgs/msg/detail/save_can343__functions.h"
// Member `eait_info_eps`
#include "custom_msgs/msg/detail/save_can1808__functions.h"
// Member `eait_info_acc`
#include "custom_msgs/msg/detail/save_can1809__functions.h"
// Member `eait_info_spd`
#include "custom_msgs/msg/detail/save_can1810__functions.h"
// Member `eait_info_imu`
#include "custom_msgs/msg/detail/save_can1811__functions.h"
// Member `eait_info_rad`
#include "custom_msgs/msg/detail/save_can1812__functions.h"

bool
custom_msgs__msg__VehicleCANmain__init(custom_msgs__msg__VehicleCANmain * msg)
{
  if (!msg) {
    return false;
  }
  // eait_control_01
  if (!custom_msgs__msg__SaveCAN342__init(&msg->eait_control_01)) {
    custom_msgs__msg__VehicleCANmain__fini(msg);
    return false;
  }
  // eait_control_02
  if (!custom_msgs__msg__SaveCAN343__init(&msg->eait_control_02)) {
    custom_msgs__msg__VehicleCANmain__fini(msg);
    return false;
  }
  // eait_info_eps
  if (!custom_msgs__msg__SaveCAN1808__init(&msg->eait_info_eps)) {
    custom_msgs__msg__VehicleCANmain__fini(msg);
    return false;
  }
  // eait_info_acc
  if (!custom_msgs__msg__SaveCAN1809__init(&msg->eait_info_acc)) {
    custom_msgs__msg__VehicleCANmain__fini(msg);
    return false;
  }
  // eait_info_spd
  if (!custom_msgs__msg__SaveCAN1810__init(&msg->eait_info_spd)) {
    custom_msgs__msg__VehicleCANmain__fini(msg);
    return false;
  }
  // eait_info_imu
  if (!custom_msgs__msg__SaveCAN1811__init(&msg->eait_info_imu)) {
    custom_msgs__msg__VehicleCANmain__fini(msg);
    return false;
  }
  // eait_info_rad
  if (!custom_msgs__msg__SaveCAN1812__init(&msg->eait_info_rad)) {
    custom_msgs__msg__VehicleCANmain__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs__msg__VehicleCANmain__fini(custom_msgs__msg__VehicleCANmain * msg)
{
  if (!msg) {
    return;
  }
  // eait_control_01
  custom_msgs__msg__SaveCAN342__fini(&msg->eait_control_01);
  // eait_control_02
  custom_msgs__msg__SaveCAN343__fini(&msg->eait_control_02);
  // eait_info_eps
  custom_msgs__msg__SaveCAN1808__fini(&msg->eait_info_eps);
  // eait_info_acc
  custom_msgs__msg__SaveCAN1809__fini(&msg->eait_info_acc);
  // eait_info_spd
  custom_msgs__msg__SaveCAN1810__fini(&msg->eait_info_spd);
  // eait_info_imu
  custom_msgs__msg__SaveCAN1811__fini(&msg->eait_info_imu);
  // eait_info_rad
  custom_msgs__msg__SaveCAN1812__fini(&msg->eait_info_rad);
}

custom_msgs__msg__VehicleCANmain *
custom_msgs__msg__VehicleCANmain__create()
{
  custom_msgs__msg__VehicleCANmain * msg = (custom_msgs__msg__VehicleCANmain *)malloc(sizeof(custom_msgs__msg__VehicleCANmain));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__VehicleCANmain));
  bool success = custom_msgs__msg__VehicleCANmain__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__VehicleCANmain__destroy(custom_msgs__msg__VehicleCANmain * msg)
{
  if (msg) {
    custom_msgs__msg__VehicleCANmain__fini(msg);
  }
  free(msg);
}


bool
custom_msgs__msg__VehicleCANmain__Sequence__init(custom_msgs__msg__VehicleCANmain__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs__msg__VehicleCANmain * data = NULL;
  if (size) {
    data = (custom_msgs__msg__VehicleCANmain *)calloc(size, sizeof(custom_msgs__msg__VehicleCANmain));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__VehicleCANmain__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__VehicleCANmain__fini(&data[i - 1]);
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
custom_msgs__msg__VehicleCANmain__Sequence__fini(custom_msgs__msg__VehicleCANmain__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__VehicleCANmain__fini(&array->data[i]);
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

custom_msgs__msg__VehicleCANmain__Sequence *
custom_msgs__msg__VehicleCANmain__Sequence__create(size_t size)
{
  custom_msgs__msg__VehicleCANmain__Sequence * array = (custom_msgs__msg__VehicleCANmain__Sequence *)malloc(sizeof(custom_msgs__msg__VehicleCANmain__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__VehicleCANmain__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__VehicleCANmain__Sequence__destroy(custom_msgs__msg__VehicleCANmain__Sequence * array)
{
  if (array) {
    custom_msgs__msg__VehicleCANmain__Sequence__fini(array);
  }
  free(array);
}
