// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/NiroCAN1568.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1568__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1568__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NiroCAN1568 in the package custom_msgs.
typedef struct custom_msgs__msg__NiroCAN1568
{
  uint16_t str_status;
  float str_time_remain;
  uint16_t left_status;
  float left_time_remain;
  uint16_t ped1_status;
  float ped1_time_remain;
  uint16_t ped2_status;
  float ped2_time_remain;
} custom_msgs__msg__NiroCAN1568;

// Struct for a sequence of custom_msgs__msg__NiroCAN1568.
typedef struct custom_msgs__msg__NiroCAN1568__Sequence
{
  custom_msgs__msg__NiroCAN1568 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__NiroCAN1568__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1568__STRUCT_H_
