// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/SbgCAN356.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/sbg_can356__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/sbg_can356__functions.h"
#include "custom_msgs/msg/detail/sbg_can356__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SbgCAN356__rosidl_typesupport_introspection_c__SbgCAN356_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__SbgCAN356__init(message_memory);
}

void SbgCAN356__rosidl_typesupport_introspection_c__SbgCAN356_fini_function(void * message_memory)
{
  custom_msgs__msg__SbgCAN356__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SbgCAN356__rosidl_typesupport_introspection_c__SbgCAN356_message_member_array[2] = {
  {
    "pressure_diff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SbgCAN356, pressure_diff),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "airspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SbgCAN356, airspeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SbgCAN356__rosidl_typesupport_introspection_c__SbgCAN356_message_members = {
  "custom_msgs__msg",  // message namespace
  "SbgCAN356",  // message name
  2,  // number of fields
  sizeof(custom_msgs__msg__SbgCAN356),
  SbgCAN356__rosidl_typesupport_introspection_c__SbgCAN356_message_member_array,  // message members
  SbgCAN356__rosidl_typesupport_introspection_c__SbgCAN356_init_function,  // function to initialize message memory (memory has to be allocated)
  SbgCAN356__rosidl_typesupport_introspection_c__SbgCAN356_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SbgCAN356__rosidl_typesupport_introspection_c__SbgCAN356_message_type_support_handle = {
  0,
  &SbgCAN356__rosidl_typesupport_introspection_c__SbgCAN356_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SbgCAN356)() {
  if (!SbgCAN356__rosidl_typesupport_introspection_c__SbgCAN356_message_type_support_handle.typesupport_identifier) {
    SbgCAN356__rosidl_typesupport_introspection_c__SbgCAN356_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SbgCAN356__rosidl_typesupport_introspection_c__SbgCAN356_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
