// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SaveRadarCAN257.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN257__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN257__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SaveRadarCAN257 in the package custom_msgs.
typedef struct custom_msgs__msg__SaveRadarCAN257
{
  double can_interference_type;
  double can_recommend_unconverge;
  double can_blockage_sidelobe_filter_val;
  double can_radar_align_incomplete;
  double can_blockage_sidelobe;
  double can_blockage_mnr;
  double can_radar_ext_cond_nok;
  double can_radar_align_out_range;
  double can_radar_align_not_start;
  double can_radar_overheat_error;
  double can_radar_not_op;
  double can_xcvr_operational;
} custom_msgs__msg__SaveRadarCAN257;

// Struct for a sequence of custom_msgs__msg__SaveRadarCAN257.
typedef struct custom_msgs__msg__SaveRadarCAN257__Sequence
{
  custom_msgs__msg__SaveRadarCAN257 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SaveRadarCAN257__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN257__STRUCT_H_
