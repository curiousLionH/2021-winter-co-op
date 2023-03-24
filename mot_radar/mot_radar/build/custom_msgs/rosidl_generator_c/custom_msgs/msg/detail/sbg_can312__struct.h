// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SbgCAN312.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN312__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN312__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SbgCAN312 in the package custom_msgs.
typedef struct custom_msgs__msg__SbgCAN312
{
  double velocity_acc_n;
  double velocity_acc_e;
  double velocity_acc_d;
} custom_msgs__msg__SbgCAN312;

// Struct for a sequence of custom_msgs__msg__SbgCAN312.
typedef struct custom_msgs__msg__SbgCAN312__Sequence
{
  custom_msgs__msg__SbgCAN312 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SbgCAN312__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN312__STRUCT_H_