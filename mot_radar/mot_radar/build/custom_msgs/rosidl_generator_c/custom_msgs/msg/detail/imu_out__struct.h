// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:msg/IMUOut.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__IMU_OUT__STRUCT_H_
#define CUSTOM_MSGS__MSG__DETAIL__IMU_OUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/IMUOut in the package custom_msgs.
typedef struct custom_msgs__msg__IMUOut
{
  double vx;
  double vy;
  double vz;
  double roll_rate;
  double pitch_rate;
  double yaw_rate;
  double ax;
  double ay;
  double az;
  double roll_acc;
  double pitch_acc;
  double yaw_acc;
} custom_msgs__msg__IMUOut;

// Struct for a sequence of custom_msgs__msg__IMUOut.
typedef struct custom_msgs__msg__IMUOut__Sequence
{
  custom_msgs__msg__IMUOut * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__msg__IMUOut__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__MSG__DETAIL__IMU_OUT__STRUCT_H_
