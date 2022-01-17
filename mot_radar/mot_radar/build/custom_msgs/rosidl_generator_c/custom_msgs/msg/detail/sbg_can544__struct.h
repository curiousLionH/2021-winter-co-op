// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SbgCAN544.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN544__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN544__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SbgCAN544 in the package custom_msgs.
typedef struct custom_msgs__msg__SbgCAN544
{
  double angle_track;
  double angle_slip;
  double curvature_radius;
  uint8_t auto_status;
} custom_msgs__msg__SbgCAN544;

// Struct for a sequence of custom_msgs__msg__SbgCAN544.
typedef struct custom_msgs__msg__SbgCAN544__Sequence
{
  custom_msgs__msg__SbgCAN544 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SbgCAN544__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN544__STRUCT_H_
