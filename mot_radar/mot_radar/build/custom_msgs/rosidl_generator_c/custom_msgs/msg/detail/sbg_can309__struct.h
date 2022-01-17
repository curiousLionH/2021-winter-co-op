// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SbgCAN309.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN309__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN309__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SbgCAN309 in the package custom_msgs.
typedef struct custom_msgs__msg__SbgCAN309
{
  double altitude;
  double undulation;
} custom_msgs__msg__SbgCAN309;

// Struct for a sequence of custom_msgs__msg__SbgCAN309.
typedef struct custom_msgs__msg__SbgCAN309__Sequence
{
  custom_msgs__msg__SbgCAN309 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SbgCAN309__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN309__STRUCT_H_
