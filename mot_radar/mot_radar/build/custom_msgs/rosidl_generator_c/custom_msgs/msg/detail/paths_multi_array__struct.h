// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/PathsMultiArray.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PATHS_MULTI_ARRAY__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__PATHS_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "custom_msgs/msg/detail/paths__struct.h"

// Struct defined in msg/PathsMultiArray in the package custom_msgs.
typedef struct custom_msgs__msg__PathsMultiArray
{
  custom_msgs__msg__Paths__Sequence data;
} custom_msgs__msg__PathsMultiArray;

// Struct for a sequence of custom_msgs__msg__PathsMultiArray.
typedef struct custom_msgs__msg__PathsMultiArray__Sequence
{
  custom_msgs__msg__PathsMultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__PathsMultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__PATHS_MULTI_ARRAY__STRUCT_H_
