// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/NiroCAN368.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/niro_can368__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/niro_can368__functions.h"
#include "custom_msgs/msg/detail/niro_can368__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void NiroCAN368__rosidl_typesupport_introspection_c__NiroCAN368_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__NiroCAN368__init(message_memory);
}

void NiroCAN368__rosidl_typesupport_introspection_c__NiroCAN368_fini_function(void * message_memory)
{
  custom_msgs__msg__NiroCAN368__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NiroCAN368__rosidl_typesupport_introspection_c__NiroCAN368_message_member_array[2] = {
  {
    "gway_accel_pedal_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__NiroCAN368, gway_accel_pedal_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gway_gearseldisp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__NiroCAN368, gway_gearseldisp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NiroCAN368__rosidl_typesupport_introspection_c__NiroCAN368_message_members = {
  "custom_msgs__msg",  // message namespace
  "NiroCAN368",  // message name
  2,  // number of fields
  sizeof(custom_msgs__msg__NiroCAN368),
  NiroCAN368__rosidl_typesupport_introspection_c__NiroCAN368_message_member_array,  // message members
  NiroCAN368__rosidl_typesupport_introspection_c__NiroCAN368_init_function,  // function to initialize message memory (memory has to be allocated)
  NiroCAN368__rosidl_typesupport_introspection_c__NiroCAN368_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NiroCAN368__rosidl_typesupport_introspection_c__NiroCAN368_message_type_support_handle = {
  0,
  &NiroCAN368__rosidl_typesupport_introspection_c__NiroCAN368_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, NiroCAN368)() {
  if (!NiroCAN368__rosidl_typesupport_introspection_c__NiroCAN368_message_type_support_handle.typesupport_identifier) {
    NiroCAN368__rosidl_typesupport_introspection_c__NiroCAN368_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NiroCAN368__rosidl_typesupport_introspection_c__NiroCAN368_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
