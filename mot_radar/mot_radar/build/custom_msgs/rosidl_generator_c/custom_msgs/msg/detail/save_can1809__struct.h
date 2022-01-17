// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SaveCAN1809.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1809__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1809__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'acc_en_status'
// Member 'acc_control_board_status'
// Member 'acc_user_can_err'
// Member 'acc_veh_err'
// Member 'acc_err'
// Member 'acc_control_status'
// Member 'turn_right_en'
// Member 'hazard_en'
// Member 'turn_left_en'
// Member 'g_sel_disp'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/SaveCAN1809 in the package custom_msgs.
typedef struct custom_msgs__msg__SaveCAN1809
{
  rosidl_runtime_c__String acc_en_status;
  rosidl_runtime_c__String acc_control_board_status;
  rosidl_runtime_c__String acc_user_can_err;
  rosidl_runtime_c__String acc_veh_err;
  rosidl_runtime_c__String acc_err;
  rosidl_runtime_c__String acc_control_status;
  uint8_t vs;
  uint8_t bsd_right;
  uint8_t bsd_left;
  double long_accel;
  rosidl_runtime_c__String turn_right_en;
  rosidl_runtime_c__String hazard_en;
  rosidl_runtime_c__String turn_left_en;
  bool aeb_act;
  rosidl_runtime_c__String g_sel_disp;
  uint8_t acc_alive_cnt;
} custom_msgs__msg__SaveCAN1809;

// Struct for a sequence of custom_msgs__msg__SaveCAN1809.
typedef struct custom_msgs__msg__SaveCAN1809__Sequence
{
  custom_msgs__msg__SaveCAN1809 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SaveCAN1809__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1809__STRUCT_H_
