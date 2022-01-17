// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SaveCAN342.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN342__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN342__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SaveCAN342 in the package custom_msgs.
typedef struct custom_msgs__msg__SaveCAN342
{
  bool eps_en;
  bool override_ignore;
  uint8_t eps_speed;
  bool acc_en;
  bool aeb_en;
  uint8_t gear_change;
  uint8_t turn_sig_en;
  float aeb_decel_value;
  uint8_t aliv_cnt;
} custom_msgs__msg__SaveCAN342;

// Struct for a sequence of custom_msgs__msg__SaveCAN342.
typedef struct custom_msgs__msg__SaveCAN342__Sequence
{
  custom_msgs__msg__SaveCAN342 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SaveCAN342__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN342__STRUCT_H_
