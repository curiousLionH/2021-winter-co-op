// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/NiroCAN560.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN560__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN560__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NiroCAN560 in the package custom_msgs.
typedef struct custom_msgs__msg__NiroCAN560
{
  uint8_t brk22_i;
  uint8_t brk22_mode_b;
  uint8_t brk22_1_15;
  float brk22_areq1;
  uint8_t brk22_1_35;
  float brk22_areq2;
  uint8_t alivecounter22;
  uint8_t chksum22;
} custom_msgs__msg__NiroCAN560;

// Struct for a sequence of custom_msgs__msg__NiroCAN560.
typedef struct custom_msgs__msg__NiroCAN560__Sequence
{
  custom_msgs__msg__NiroCAN560 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__NiroCAN560__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN560__STRUCT_H_
