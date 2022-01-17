// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/VehicleCANmain.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CA_NMAIN__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CA_NMAIN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'eait_control_01'
#include "custom_msgs/msg/detail/save_can342__struct.h"
// Member 'eait_control_02'
#include "custom_msgs/msg/detail/save_can343__struct.h"
// Member 'eait_info_eps'
#include "custom_msgs/msg/detail/save_can1808__struct.h"
// Member 'eait_info_acc'
#include "custom_msgs/msg/detail/save_can1809__struct.h"
// Member 'eait_info_spd'
#include "custom_msgs/msg/detail/save_can1810__struct.h"
// Member 'eait_info_imu'
#include "custom_msgs/msg/detail/save_can1811__struct.h"
// Member 'eait_info_rad'
#include "custom_msgs/msg/detail/save_can1812__struct.h"

// Struct defined in msg/VehicleCANmain in the package custom_msgs.
typedef struct custom_msgs__msg__VehicleCANmain
{
  custom_msgs__msg__SaveCAN342 eait_control_01;
  custom_msgs__msg__SaveCAN343 eait_control_02;
  custom_msgs__msg__SaveCAN1808 eait_info_eps;
  custom_msgs__msg__SaveCAN1809 eait_info_acc;
  custom_msgs__msg__SaveCAN1810 eait_info_spd;
  custom_msgs__msg__SaveCAN1811 eait_info_imu;
  custom_msgs__msg__SaveCAN1812 eait_info_rad;
} custom_msgs__msg__VehicleCANmain;

// Struct for a sequence of custom_msgs__msg__VehicleCANmain.
typedef struct custom_msgs__msg__VehicleCANmain__Sequence
{
  custom_msgs__msg__VehicleCANmain * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__VehicleCANmain__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CA_NMAIN__STRUCT_H_
