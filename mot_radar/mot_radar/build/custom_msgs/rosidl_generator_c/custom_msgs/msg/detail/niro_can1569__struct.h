// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/NiroCAN1569.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1569__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1569__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/NiroCAN1569 in the package custom_msgs.
typedef struct custom_msgs__msg__NiroCAN1569
{
  uint16_t yyyy;
  uint16_t mm;
  uint16_t dd;
  uint16_t hh;
  uint16_t nn;
  uint16_t ss;
} custom_msgs__msg__NiroCAN1569;

// Struct for a sequence of custom_msgs__msg__NiroCAN1569.
typedef struct custom_msgs__msg__NiroCAN1569__Sequence
{
  custom_msgs__msg__NiroCAN1569 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__NiroCAN1569__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1569__STRUCT_H_
