// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SaveCAN409.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN409__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN409__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SaveCAN409 in the package custom_msgs.
typedef struct custom_msgs__msg__SaveCAN409
{
  uint8_t lidar_alive_counter;
} custom_msgs__msg__SaveCAN409;

// Struct for a sequence of custom_msgs__msg__SaveCAN409.
typedef struct custom_msgs__msg__SaveCAN409__Sequence
{
  custom_msgs__msg__SaveCAN409 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SaveCAN409__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN409__STRUCT_H_
