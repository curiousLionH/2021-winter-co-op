// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SaveCAN520.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN520__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN520__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SaveCAN520 in the package custom_msgs.
typedef struct custom_msgs__msg__SaveCAN520
{
  uint8_t rtk_alive_counter;
} custom_msgs__msg__SaveCAN520;

// Struct for a sequence of custom_msgs__msg__SaveCAN520.
typedef struct custom_msgs__msg__SaveCAN520__Sequence
{
  custom_msgs__msg__SaveCAN520 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SaveCAN520__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN520__STRUCT_H_
