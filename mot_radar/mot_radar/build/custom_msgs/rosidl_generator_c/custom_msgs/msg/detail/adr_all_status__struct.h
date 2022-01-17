// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/AdrAllStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ADR_ALL_STATUS__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__ADR_ALL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/AdrAllStatus in the package custom_msgs.
typedef struct custom_msgs__msg__AdrAllStatus
{
  bool lidar_status;
  bool ins_status;
  bool acc_status;
  bool eps_status;
  bool safety_warning_status;
  bool rtk_status;
  bool lane_keeping_status;
  bool local_waypoint_status;
} custom_msgs__msg__AdrAllStatus;

// Struct for a sequence of custom_msgs__msg__AdrAllStatus.
typedef struct custom_msgs__msg__AdrAllStatus__Sequence
{
  custom_msgs__msg__AdrAllStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__AdrAllStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__ADR_ALL_STATUS__STRUCT_H_
