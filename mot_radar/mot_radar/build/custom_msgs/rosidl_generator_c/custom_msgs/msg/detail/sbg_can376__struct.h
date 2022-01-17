// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SbgCAN376.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN376__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN376__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SbgCAN376 in the package custom_msgs.
typedef struct custom_msgs__msg__SbgCAN376
{
  uint32_t time_stamp;
  uint16_t gps_hdt_status;
} custom_msgs__msg__SbgCAN376;

// Struct for a sequence of custom_msgs__msg__SbgCAN376.
typedef struct custom_msgs__msg__SbgCAN376__Sequence
{
  custom_msgs__msg__SbgCAN376 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SbgCAN376__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN376__STRUCT_H_
