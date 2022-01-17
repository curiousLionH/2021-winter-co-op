// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SbgCAN374.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN374__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN374__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SbgCAN374 in the package custom_msgs.
typedef struct custom_msgs__msg__SbgCAN374
{
  double altitude;
  double undulation;
  uint8_t num_sv;
  uint8_t diff_corr_age;
} custom_msgs__msg__SbgCAN374;

// Struct for a sequence of custom_msgs__msg__SbgCAN374.
typedef struct custom_msgs__msg__SbgCAN374__Sequence
{
  custom_msgs__msg__SbgCAN374 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SbgCAN374__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN374__STRUCT_H_
