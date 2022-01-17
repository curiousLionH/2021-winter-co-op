// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SaveRadarCAN316.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN316__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN316__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SaveRadarCAN316 in the package custom_msgs.
typedef struct custom_msgs__msg__SaveRadarCAN316
{
  double can_det_confid_azimuth;
  double can_det_super_res_target;
  double can_det_nd_target;
  double can_det_host_veh_clutter;
  double can_det_valid_level;
  double can_det_azimuth;
  double can_det_range;
  double can_det_range_rate;
  double can_det_amplitude;
  double can_scan_index_2lsb;
} custom_msgs__msg__SaveRadarCAN316;

// Struct for a sequence of custom_msgs__msg__SaveRadarCAN316.
typedef struct custom_msgs__msg__SaveRadarCAN316__Sequence
{
  custom_msgs__msg__SaveRadarCAN316 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SaveRadarCAN316__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN316__STRUCT_H_
