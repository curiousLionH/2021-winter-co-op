// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SbgCAN290.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN290__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN290__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SbgCAN290 in the package custom_msgs.
typedef struct custom_msgs__msg__SbgCAN290
{
  double gyro_x;
  double gyro_y;
  double gyro_z;
} custom_msgs__msg__SbgCAN290;

// Struct for a sequence of custom_msgs__msg__SbgCAN290.
typedef struct custom_msgs__msg__SbgCAN290__Sequence
{
  custom_msgs__msg__SbgCAN290 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SbgCAN290__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN290__STRUCT_H_
