// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SbgCAN289.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN289__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN289__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SbgCAN289 in the package custom_msgs.
typedef struct custom_msgs__msg__SbgCAN289
{
  double accel_x;
  double accel_y;
  double accel_z;
} custom_msgs__msg__SbgCAN289;

// Struct for a sequence of custom_msgs__msg__SbgCAN289.
typedef struct custom_msgs__msg__SbgCAN289__Sequence
{
  custom_msgs__msg__SbgCAN289 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SbgCAN289__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN289__STRUCT_H_
