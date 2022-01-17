// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SpList.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SP_LIST__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SP_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x_sp'
// Member 'x_sp_eps'
// Member 'y_sp'
// Member 'y_sp_eps'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/SpList in the package custom_msgs.
typedef struct custom_msgs__msg__SpList
{
  rosidl_runtime_c__double__Sequence x_sp;
  rosidl_runtime_c__double__Sequence x_sp_eps;
  rosidl_runtime_c__double__Sequence y_sp;
  rosidl_runtime_c__double__Sequence y_sp_eps;
} custom_msgs__msg__SpList;

// Struct for a sequence of custom_msgs__msg__SpList.
typedef struct custom_msgs__msg__SpList__Sequence
{
  custom_msgs__msg__SpList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SpList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SP_LIST__STRUCT_H_
