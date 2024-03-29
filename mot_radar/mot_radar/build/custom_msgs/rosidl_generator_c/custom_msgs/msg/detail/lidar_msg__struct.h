// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/LidarMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__LIDAR_MSG__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__LIDAR_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'z'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/LidarMsg in the package custom_msgs.
typedef struct custom_msgs__msg__LidarMsg
{
  rosidl_runtime_c__double__Sequence x;
  rosidl_runtime_c__double__Sequence y;
  rosidl_runtime_c__double__Sequence z;
} custom_msgs__msg__LidarMsg;

// Struct for a sequence of custom_msgs__msg__LidarMsg.
typedef struct custom_msgs__msg__LidarMsg__Sequence
{
  custom_msgs__msg__LidarMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__LidarMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__LIDAR_MSG__STRUCT_H_
