// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/SignalLightIn.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SIGNAL_LIGHT_IN__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__SIGNAL_LIGHT_IN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SignalLightIn in the package custom_msgs.
typedef struct custom_msgs__msg__SignalLightIn
{
  int8_t signal_light;
  bool hazard;
} custom_msgs__msg__SignalLightIn;

// Struct for a sequence of custom_msgs__msg__SignalLightIn.
typedef struct custom_msgs__msg__SignalLightIn__Sequence
{
  custom_msgs__msg__SignalLightIn * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__SignalLightIn__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__SIGNAL_LIGHT_IN__STRUCT_H_
