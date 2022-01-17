// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/NiroCAN896.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN896__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN896__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NiroCAN896 in the package custom_msgs.
typedef struct custom_msgs__msg__NiroCAN896
{
  uint8_t brk23_3_0;
  uint8_t brk23_1_3;
  uint8_t brk23_2_12;
} custom_msgs__msg__NiroCAN896;

// Struct for a sequence of custom_msgs__msg__NiroCAN896.
typedef struct custom_msgs__msg__NiroCAN896__Sequence
{
  custom_msgs__msg__NiroCAN896 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__NiroCAN896__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN896__STRUCT_H_
