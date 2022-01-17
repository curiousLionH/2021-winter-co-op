// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/NiroCAN544.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN544__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN544__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NiroCAN544 in the package custom_msgs.
typedef struct custom_msgs__msg__NiroCAN544
{
  uint8_t brk21_mode_a;
  uint8_t brk21_3_1;
  uint8_t alivecounter21;
  uint8_t brk21_8_8;
  uint8_t brk21_1_16;
  uint8_t brk21_2_17;
  uint8_t brk21_3_19;
  uint8_t brk21_2_22;
  uint8_t brk21_9_24;
  uint8_t brk21_11_33;
  uint8_t brk21_12_44;
  uint8_t brk21_8_56;
} custom_msgs__msg__NiroCAN544;

// Struct for a sequence of custom_msgs__msg__NiroCAN544.
typedef struct custom_msgs__msg__NiroCAN544__Sequence
{
  custom_msgs__msg__NiroCAN544 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__NiroCAN544__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN544__STRUCT_H_
