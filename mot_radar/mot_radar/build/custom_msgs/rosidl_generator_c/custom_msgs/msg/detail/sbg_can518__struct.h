// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SbgCAN518.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN518__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN518__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SbgCAN518 in the package custom_msgs.
typedef struct custom_msgs__msg__SbgCAN518
{
  uint32_t time_stamp;
  uint16_t event_status;
} custom_msgs__msg__SbgCAN518;

// Struct for a sequence of custom_msgs__msg__SbgCAN518.
typedef struct custom_msgs__msg__SbgCAN518__Sequence
{
  custom_msgs__msg__SbgCAN518 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SbgCAN518__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN518__STRUCT_H_
