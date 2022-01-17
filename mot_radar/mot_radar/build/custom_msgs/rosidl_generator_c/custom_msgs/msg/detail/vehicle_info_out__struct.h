// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/VehicleInfoOut.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VEHICLE_INFO_OUT__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__VEHICLE_INFO_OUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VehicleInfoOut in the package custom_msgs.
typedef struct custom_msgs__msg__VehicleInfoOut
{
  int64_t cycleno;
  double synthdelay;
  double roll;
  double pitch;
  double yaw;
  double vx;
  double vy;
  double vz;
  double roll_vel;
  double pitch_vel;
  double yaw_vel;
  double ax;
  double ay;
  double az;
  double roll_acc;
  double pitch_acc;
  double yaw_acc;
} custom_msgs__msg__VehicleInfoOut;

// Struct for a sequence of custom_msgs__msg__VehicleInfoOut.
typedef struct custom_msgs__msg__VehicleInfoOut__Sequence
{
  custom_msgs__msg__VehicleInfoOut * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__VehicleInfoOut__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__VEHICLE_INFO_OUT__STRUCT_H_
