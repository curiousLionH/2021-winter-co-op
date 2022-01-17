// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/SbgCAN352.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/sbg_can352__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/sbg_can352__functions.h"
#include "custom_msgs/msg/detail/sbg_can352__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SbgCAN352__rosidl_typesupport_introspection_c__SbgCAN352_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__SbgCAN352__init(message_memory);
}

void SbgCAN352__rosidl_typesupport_introspection_c__SbgCAN352_fini_function(void * message_memory)
{
  custom_msgs__msg__SbgCAN352__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SbgCAN352__rosidl_typesupport_introspection_c__SbgCAN352_message_member_array[2] = {
  {
    "time_stamp4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SbgCAN352, time_stamp4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odo_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SbgCAN352, odo_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SbgCAN352__rosidl_typesupport_introspection_c__SbgCAN352_message_members = {
  "custom_msgs__msg",  // message namespace
  "SbgCAN352",  // message name
  2,  // number of fields
  sizeof(custom_msgs__msg__SbgCAN352),
  SbgCAN352__rosidl_typesupport_introspection_c__SbgCAN352_message_member_array,  // message members
  SbgCAN352__rosidl_typesupport_introspection_c__SbgCAN352_init_function,  // function to initialize message memory (memory has to be allocated)
  SbgCAN352__rosidl_typesupport_introspection_c__SbgCAN352_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SbgCAN352__rosidl_typesupport_introspection_c__SbgCAN352_message_type_support_handle = {
  0,
  &SbgCAN352__rosidl_typesupport_introspection_c__SbgCAN352_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SbgCAN352)() {
  if (!SbgCAN352__rosidl_typesupport_introspection_c__SbgCAN352_message_type_support_handle.typesupport_identifier) {
    SbgCAN352__rosidl_typesupport_introspection_c__SbgCAN352_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SbgCAN352__rosidl_typesupport_introspection_c__SbgCAN352_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
