// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs:msg/SaveRadarCAN318.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_radar_can318__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
custom_msgs__msg__SaveRadarCAN318__init(custom_msgs__msg__SaveRadarCAN318 * msg)
{
  if (!msg) {
    return false;
  }
  // can_det_confid_azimuth
  // can_det_super_res_target
  // can_det_nd_target
  // can_det_host_veh_clutter
  // can_det_valid_level
  // can_det_azimuth
  // can_det_range
  // can_det_range_rate
  // can_det_amplitude
  // can_scan_index_2lsb
  return true;
}

void
custom_msgs__msg__SaveRadarCAN318__fini(custom_msgs__msg__SaveRadarCAN318 * msg)
{
  if (!msg) {
    return;
  }
  // can_det_confid_azimuth
  // can_det_super_res_target
  // can_det_nd_target
  // can_det_host_veh_clutter
  // can_det_valid_level
  // can_det_azimuth
  // can_det_range
  // can_det_range_rate
  // can_det_amplitude
  // can_scan_index_2lsb
}

custom_msgs__msg__SaveRadarCAN318 *
custom_msgs__msg__SaveRadarCAN318__create()
{
  custom_msgs__msg__SaveRadarCAN318 * msg = (custom_msgs__msg__SaveRadarCAN318 *)malloc(sizeof(custom_msgs__msg__SaveRadarCAN318));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs__msg__SaveRadarCAN318));
  bool success = custom_msgs__msg__SaveRadarCAN318__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs__msg__SaveRadarCAN318__destroy(custom_msgs__msg__SaveRadarCAN318 * msg)
{
  if (msg) {
    custom_msgs__msg__SaveRadarCAN318__fini(msg);
  }
  free(msg);
}


bool
custom_msgs__msg__SaveRadarCAN318__Sequence__init(custom_msgs__msg__SaveRadarCAN318__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs__msg__SaveRadarCAN318 * data = NULL;
  if (size) {
    data = (custom_msgs__msg__SaveRadarCAN318 *)calloc(size, sizeof(custom_msgs__msg__SaveRadarCAN318));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs__msg__SaveRadarCAN318__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs__msg__SaveRadarCAN318__fini(&data[i - 1]);
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
custom_msgs__msg__SaveRadarCAN318__Sequence__fini(custom_msgs__msg__SaveRadarCAN318__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs__msg__SaveRadarCAN318__fini(&array->data[i]);
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

custom_msgs__msg__SaveRadarCAN318__Sequence *
custom_msgs__msg__SaveRadarCAN318__Sequence__create(size_t size)
{
  custom_msgs__msg__SaveRadarCAN318__Sequence * array = (custom_msgs__msg__SaveRadarCAN318__Sequence *)malloc(sizeof(custom_msgs__msg__SaveRadarCAN318__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs__msg__SaveRadarCAN318__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs__msg__SaveRadarCAN318__Sequence__destroy(custom_msgs__msg__SaveRadarCAN318__Sequence * array)
{
  if (array) {
    custom_msgs__msg__SaveRadarCAN318__Sequence__fini(array);
  }
  free(array);
}
