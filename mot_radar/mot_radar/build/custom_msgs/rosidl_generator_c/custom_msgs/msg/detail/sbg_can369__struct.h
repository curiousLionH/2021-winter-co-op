// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SbgCAN369.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN369__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN369__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SbgCAN369 in the package custom_msgs.
typedef struct custom_msgs__msg__SbgCAN369
{
  double vel_n;
  double vel_e;
  double vel_d;
} custom_msgs__msg__SbgCAN369;

// Struct for a sequence of custom_msgs__msg__SbgCAN369.
typedef struct custom_msgs__msg__SbgCAN369__Sequence
{
  custom_msgs__msg__SbgCAN369 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SbgCAN369__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN369__STRUCT_H_
