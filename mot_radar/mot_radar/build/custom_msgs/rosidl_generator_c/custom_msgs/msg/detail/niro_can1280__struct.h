// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/NiroCAN1280.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1280__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1280__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NiroCAN1280 in the package custom_msgs.
typedef struct custom_msgs__msg__NiroCAN1280
{
  uint8_t brk12_4_0;
} custom_msgs__msg__NiroCAN1280;

// Struct for a sequence of custom_msgs__msg__NiroCAN1280.
typedef struct custom_msgs__msg__NiroCAN1280__Sequence
{
  custom_msgs__msg__NiroCAN1280 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__NiroCAN1280__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1280__STRUCT_H_
