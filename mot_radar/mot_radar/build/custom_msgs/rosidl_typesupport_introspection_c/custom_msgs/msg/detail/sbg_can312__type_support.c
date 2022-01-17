// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/SbgCAN312.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/sbg_can312__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/sbg_can312__functions.h"
#include "custom_msgs/msg/detail/sbg_can312__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SbgCAN312__rosidl_typesupport_introspection_c__SbgCAN312_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__SbgCAN312__init(message_memory);
}

void SbgCAN312__rosidl_typesupport_introspection_c__SbgCAN312_fini_function(void * message_memory)
{
  custom_msgs__msg__SbgCAN312__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SbgCAN312__rosidl_typesupport_introspection_c__SbgCAN312_message_member_array[3] = {
  {
    "velocity_acc_n",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SbgCAN312, velocity_acc_n),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_acc_e",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SbgCAN312, velocity_acc_e),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_acc_d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SbgCAN312, velocity_acc_d),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SbgCAN312__rosidl_typesupport_introspection_c__SbgCAN312_message_members = {
  "custom_msgs__msg",  // message namespace
  "SbgCAN312",  // message name
  3,  // number of fields
  sizeof(custom_msgs__msg__SbgCAN312),
  SbgCAN312__rosidl_typesupport_introspection_c__SbgCAN312_message_member_array,  // message members
  SbgCAN312__rosidl_typesupport_introspection_c__SbgCAN312_init_function,  // function to initialize message memory (memory has to be allocated)
  SbgCAN312__rosidl_typesupport_introspection_c__SbgCAN312_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SbgCAN312__rosidl_typesupport_introspection_c__SbgCAN312_message_type_support_handle = {
  0,
  &SbgCAN312__rosidl_typesupport_introspection_c__SbgCAN312_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SbgCAN312)() {
  if (!SbgCAN312__rosidl_typesupport_introspection_c__SbgCAN312_message_type_support_handle.typesupport_identifier) {
    SbgCAN312__rosidl_typesupport_introspection_c__SbgCAN312_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SbgCAN312__rosidl_typesupport_introspection_c__SbgCAN312_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
