// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/SbgCAN544.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/sbg_can544__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/sbg_can544__functions.h"
#include "custom_msgs/msg/detail/sbg_can544__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SbgCAN544__rosidl_typesupport_introspection_c__SbgCAN544_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__SbgCAN544__init(message_memory);
}

void SbgCAN544__rosidl_typesupport_introspection_c__SbgCAN544_fini_function(void * message_memory)
{
  custom_msgs__msg__SbgCAN544__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SbgCAN544__rosidl_typesupport_introspection_c__SbgCAN544_message_member_array[4] = {
  {
    "angle_track",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SbgCAN544, angle_track),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_slip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SbgCAN544, angle_slip),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "curvature_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SbgCAN544, curvature_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "auto_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SbgCAN544, auto_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SbgCAN544__rosidl_typesupport_introspection_c__SbgCAN544_message_members = {
  "custom_msgs__msg",  // message namespace
  "SbgCAN544",  // message name
  4,  // number of fields
  sizeof(custom_msgs__msg__SbgCAN544),
  SbgCAN544__rosidl_typesupport_introspection_c__SbgCAN544_message_member_array,  // message members
  SbgCAN544__rosidl_typesupport_introspection_c__SbgCAN544_init_function,  // function to initialize message memory (memory has to be allocated)
  SbgCAN544__rosidl_typesupport_introspection_c__SbgCAN544_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SbgCAN544__rosidl_typesupport_introspection_c__SbgCAN544_message_type_support_handle = {
  0,
  &SbgCAN544__rosidl_typesupport_introspection_c__SbgCAN544_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SbgCAN544)() {
  if (!SbgCAN544__rosidl_typesupport_introspection_c__SbgCAN544_message_type_support_handle.typesupport_identifier) {
    SbgCAN544__rosidl_typesupport_introspection_c__SbgCAN544_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SbgCAN544__rosidl_typesupport_introspection_c__SbgCAN544_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
