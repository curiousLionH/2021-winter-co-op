// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/Array.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ARRAY__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__ARRAY__STRUCT_H_

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
// Member 'w'
// Member 'h'
// Member 'z'
// Member 'id'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/Array in the package custom_msgs.
typedef struct custom_msgs__msg__Array
{
  rosidl_runtime_c__float__Sequence x;
  rosidl_runtime_c__float__Sequence y;
  rosidl_runtime_c__float__Sequence w;
  rosidl_runtime_c__float__Sequence h;
  rosidl_runtime_c__float__Sequence z;
  rosidl_runtime_c__float__Sequence id;
} custom_msgs__msg__Array;

// Struct for a sequence of custom_msgs__msg__Array.
typedef struct custom_msgs__msg__Array__Sequence
{
  custom_msgs__msg__Array * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__Array__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__ARRAY__STRUCT_H_
