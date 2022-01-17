// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/NiroCAN272.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN272__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN272__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NiroCAN272 in the package custom_msgs.
typedef struct custom_msgs__msg__NiroCAN272
{
  uint8_t sft_p;
  uint8_t sft_r;
  uint8_t sft_n;
  uint8_t sft_d;
  uint8_t sft_p_reversed;
  uint8_t sft_r_reversed;
  uint8_t sft_n_reversed;
  uint8_t sft_d_reversed;
  uint8_t sft_ctl_en;
} custom_msgs__msg__NiroCAN272;

// Struct for a sequence of custom_msgs__msg__NiroCAN272.
typedef struct custom_msgs__msg__NiroCAN272__Sequence
{
  custom_msgs__msg__NiroCAN272 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__NiroCAN272__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN272__STRUCT_H_
