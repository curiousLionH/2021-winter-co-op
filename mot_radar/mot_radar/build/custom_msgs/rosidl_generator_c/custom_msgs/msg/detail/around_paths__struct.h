// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/AroundPaths.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AROUND_PATHS__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__AROUND_PATHS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left_lanes'
// Member 'right_lanes'
#include "custom_msgs/msg/detail/paths__struct.h"

// Struct defined in msg/AroundPaths in the package custom_msgs.
typedef struct custom_msgs__msg__AroundPaths
{
  int16_t left_lane;
  int16_t right_lane;
  custom_msgs__msg__Paths__Sequence left_lanes;
  custom_msgs__msg__Paths__Sequence right_lanes;
} custom_msgs__msg__AroundPaths;

// Struct for a sequence of custom_msgs__msg__AroundPaths.
typedef struct custom_msgs__msg__AroundPaths__Sequence
{
  custom_msgs__msg__AroundPaths * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__AroundPaths__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__AROUND_PATHS__STRUCT_H_
