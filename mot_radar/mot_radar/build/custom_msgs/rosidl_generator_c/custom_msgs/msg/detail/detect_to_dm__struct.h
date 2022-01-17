// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/DetectToDM.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__DETECT_TO_DM__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__DETECT_TO_DM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'objects_cur'
// Member 'objects_left'
// Member 'objects_right'
// Member 'objects_inter'
// Member 'objects_inter_left'
#include "custom_msgs/msg/detail/object__struct.h"

// Struct defined in msg/DetectToDM in the package custom_msgs.
typedef struct custom_msgs__msg__DetectToDM
{
  custom_msgs__msg__Object__Sequence objects_cur;
  custom_msgs__msg__Object__Sequence objects_left;
  custom_msgs__msg__Object__Sequence objects_right;
  custom_msgs__msg__Object__Sequence objects_inter;
  custom_msgs__msg__Object__Sequence objects_inter_left;
} custom_msgs__msg__DetectToDM;

// Struct for a sequence of custom_msgs__msg__DetectToDM.
typedef struct custom_msgs__msg__DetectToDM__Sequence
{
  custom_msgs__msg__DetectToDM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__DetectToDM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__DETECT_TO_DM__STRUCT_H_
