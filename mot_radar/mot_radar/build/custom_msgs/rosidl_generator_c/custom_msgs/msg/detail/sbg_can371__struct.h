// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SbgCAN371.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN371__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN371__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SbgCAN371 in the package custom_msgs.
typedef struct custom_msgs__msg__SbgCAN371
{
  double course;
  double course_acc;
} custom_msgs__msg__SbgCAN371;

// Struct for a sequence of custom_msgs__msg__SbgCAN371.
typedef struct custom_msgs__msg__SbgCAN371__Sequence
{
  custom_msgs__msg__SbgCAN371 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SbgCAN371__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN371__STRUCT_H_
