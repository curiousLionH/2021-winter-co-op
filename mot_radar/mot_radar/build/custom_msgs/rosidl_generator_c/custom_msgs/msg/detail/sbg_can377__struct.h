// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SbgCAN377.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN377__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN377__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SbgCAN377 in the package custom_msgs.
typedef struct custom_msgs__msg__SbgCAN377
{
  double true_heading;
  double true_heading_acc;
  double pitch;
  double pitch_acc;
} custom_msgs__msg__SbgCAN377;

// Struct for a sequence of custom_msgs__msg__SbgCAN377.
typedef struct custom_msgs__msg__SbgCAN377__Sequence
{
  custom_msgs__msg__SbgCAN377 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SbgCAN377__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN377__STRUCT_H_
