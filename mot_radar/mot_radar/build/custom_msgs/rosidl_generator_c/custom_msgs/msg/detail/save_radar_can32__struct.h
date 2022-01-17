// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SaveRadarCAN32.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN32__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN32__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SaveRadarCAN32 in the package custom_msgs.
typedef struct custom_msgs__msg__SaveRadarCAN32
{
  double can_vehicle_stat;
  double can_day_night_status;
  double can_wiper_status;
  double can_yaw_rate_validity;
  double can_yaw_rate;
  double can_vehicle_speed_validity;
  double can_vehicle_speed_direction;
  double can_vehicle_speed;
} custom_msgs__msg__SaveRadarCAN32;

// Struct for a sequence of custom_msgs__msg__SaveRadarCAN32.
typedef struct custom_msgs__msg__SaveRadarCAN32__Sequence
{
  custom_msgs__msg__SaveRadarCAN32 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SaveRadarCAN32__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN32__STRUCT_H_
