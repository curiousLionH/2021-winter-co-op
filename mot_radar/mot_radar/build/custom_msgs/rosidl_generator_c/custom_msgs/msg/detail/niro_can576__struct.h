// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/NiroCAN576.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN576__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN576__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NiroCAN576 in the package custom_msgs.
typedef struct custom_msgs__msg__NiroCAN576
{
  uint8_t brk24_6_0;
  uint8_t brk24_6_6;
  uint8_t brk24_7_12;
  uint8_t brk24_7_19;
  uint8_t brk24_mode_c;
  uint8_t brk24_3_39;
  uint8_t alivecounter24;
  uint8_t chksum24;
  uint8_t brk24_8_56;
} custom_msgs__msg__NiroCAN576;

// Struct for a sequence of custom_msgs__msg__NiroCAN576.
typedef struct custom_msgs__msg__NiroCAN576__Sequence
{
  custom_msgs__msg__NiroCAN576 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__NiroCAN576__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN576__STRUCT_H_
