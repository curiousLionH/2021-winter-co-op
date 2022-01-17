// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/CurveFit.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__CURVE_FIT__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__CURVE_FIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'left_x'
// Member 'left_y'
// Member 'right_x'
// Member 'right_y'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/CurveFit in the package custom_msgs.
typedef struct custom_msgs__msg__CurveFit
{
  rosidl_runtime_c__double__Sequence left_x;
  rosidl_runtime_c__double__Sequence left_y;
  rosidl_runtime_c__double__Sequence right_x;
  rosidl_runtime_c__double__Sequence right_y;
} custom_msgs__msg__CurveFit;

// Struct for a sequence of custom_msgs__msg__CurveFit.
typedef struct custom_msgs__msg__CurveFit__Sequence
{
  custom_msgs__msg__CurveFit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__CurveFit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__CURVE_FIT__STRUCT_H_
