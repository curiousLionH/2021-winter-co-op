// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_msgs:srv/GetBezier.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__GET_BEZIER__STRUCT_H_
#define CUSTOM_MSGS__SRV__DETAIL__GET_BEZIER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetBezier in the package custom_msgs.
typedef struct custom_msgs__srv__GetBezier_Request
{
  int16_t direction;
  double distance1;
  double distance2;
  double distance3;
} custom_msgs__srv__GetBezier_Request;

// Struct for a sequence of custom_msgs__srv__GetBezier_Request.
typedef struct custom_msgs__srv__GetBezier_Request__Sequence
{
  custom_msgs__srv__GetBezier_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__srv__GetBezier_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'path1_x'
// Member 'path1_y'
// Member 'path2_x'
// Member 'path2_y'
// Member 'path3_x'
// Member 'path3_y'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in srv/GetBezier in the package custom_msgs.
typedef struct custom_msgs__srv__GetBezier_Response
{
  rosidl_runtime_c__double__Sequence path1_x;
  rosidl_runtime_c__double__Sequence path1_y;
  rosidl_runtime_c__double__Sequence path2_x;
  rosidl_runtime_c__double__Sequence path2_y;
  rosidl_runtime_c__double__Sequence path3_x;
  rosidl_runtime_c__double__Sequence path3_y;
} custom_msgs__srv__GetBezier_Response;

// Struct for a sequence of custom_msgs__srv__GetBezier_Response.
typedef struct custom_msgs__srv__GetBezier_Response__Sequence
{
  custom_msgs__srv__GetBezier_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_msgs__srv__GetBezier_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_MSGS__SRV__DETAIL__GET_BEZIER__STRUCT_H_
