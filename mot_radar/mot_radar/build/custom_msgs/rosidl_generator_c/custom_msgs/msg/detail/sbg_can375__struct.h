// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SbgCAN375.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN375__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN375__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SbgCAN375 in the package custom_msgs.
typedef struct custom_msgs__msg__SbgCAN375
{
  double lat_acc;
  double long_acc;
  double alt_acc;
  uint16_t base_station_id;
} custom_msgs__msg__SbgCAN375;

// Struct for a sequence of custom_msgs__msg__SbgCAN375.
typedef struct custom_msgs__msg__SbgCAN375__Sequence
{
  custom_msgs__msg__SbgCAN375 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SbgCAN375__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN375__STRUCT_H_
