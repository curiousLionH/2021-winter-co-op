// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SaveCAN1808.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1808__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1808__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'eps_en_status'
// Member 'eps_control_board_status'
// Member 'eps_user_can_err'
// Member 'eps_err'
// Member 'eps_veh_can_err'
// Member 'eps_sas_err'
// Member 'eps_control_status'
// Member 'override_ignore_status'
// Member 'override_status'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/SaveCAN1808 in the package custom_msgs.
typedef struct custom_msgs__msg__SaveCAN1808
{
  rosidl_runtime_c__String eps_en_status;
  rosidl_runtime_c__String eps_control_board_status;
  rosidl_runtime_c__String eps_user_can_err;
  rosidl_runtime_c__String eps_err;
  rosidl_runtime_c__String eps_veh_can_err;
  rosidl_runtime_c__String eps_sas_err;
  rosidl_runtime_c__String eps_control_status;
  rosidl_runtime_c__String override_ignore_status;
  rosidl_runtime_c__String override_status;
  float strang;
  float str_drv_tq;
  float str_out_tq;
  uint8_t eps_alive_cnt;
} custom_msgs__msg__SaveCAN1808;

// Struct for a sequence of custom_msgs__msg__SaveCAN1808.
typedef struct custom_msgs__msg__SaveCAN1808__Sequence
{
  custom_msgs__msg__SaveCAN1808 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SaveCAN1808__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1808__STRUCT_H_
