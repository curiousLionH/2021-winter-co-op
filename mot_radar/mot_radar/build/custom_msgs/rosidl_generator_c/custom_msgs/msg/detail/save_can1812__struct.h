// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SaveCAN1812.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1812__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1812__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SaveCAN1812 in the package custom_msgs.
typedef struct custom_msgs__msg__SaveCAN1812
{
  uint8_t rad_objstate;
  float rad_objlatpos;
  uint8_t rad_objdist;
  float rad_objrelspd;
} custom_msgs__msg__SaveCAN1812;

// Struct for a sequence of custom_msgs__msg__SaveCAN1812.
typedef struct custom_msgs__msg__SaveCAN1812__Sequence
{
  custom_msgs__msg__SaveCAN1812 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SaveCAN1812__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1812__STRUCT_H_
