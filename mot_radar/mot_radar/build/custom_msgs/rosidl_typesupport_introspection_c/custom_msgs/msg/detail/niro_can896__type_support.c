// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/NiroCAN896.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/niro_can896__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/niro_can896__functions.h"
#include "custom_msgs/msg/detail/niro_can896__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void NiroCAN896__rosidl_typesupport_introspection_c__NiroCAN896_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__NiroCAN896__init(message_memory);
}

void NiroCAN896__rosidl_typesupport_introspection_c__NiroCAN896_fini_function(void * message_memory)
{
  custom_msgs__msg__NiroCAN896__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NiroCAN896__rosidl_typesupport_introspection_c__NiroCAN896_message_member_array[3] = {
  {
    "brk23_3_0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__NiroCAN896, brk23_3_0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brk23_1_3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__NiroCAN896, brk23_1_3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brk23_2_12",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__NiroCAN896, brk23_2_12),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NiroCAN896__rosidl_typesupport_introspection_c__NiroCAN896_message_members = {
  "custom_msgs__msg",  // message namespace
  "NiroCAN896",  // message name
  3,  // number of fields
  sizeof(custom_msgs__msg__NiroCAN896),
  NiroCAN896__rosidl_typesupport_introspection_c__NiroCAN896_message_member_array,  // message members
  NiroCAN896__rosidl_typesupport_introspection_c__NiroCAN896_init_function,  // function to initialize message memory (memory has to be allocated)
  NiroCAN896__rosidl_typesupport_introspection_c__NiroCAN896_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NiroCAN896__rosidl_typesupport_introspection_c__NiroCAN896_message_type_support_handle = {
  0,
  &NiroCAN896__rosidl_typesupport_introspection_c__NiroCAN896_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, NiroCAN896)() {
  if (!NiroCAN896__rosidl_typesupport_introspection_c__NiroCAN896_message_type_support_handle.typesupport_identifier) {
    NiroCAN896__rosidl_typesupport_introspection_c__NiroCAN896_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NiroCAN896__rosidl_typesupport_introspection_c__NiroCAN896_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
