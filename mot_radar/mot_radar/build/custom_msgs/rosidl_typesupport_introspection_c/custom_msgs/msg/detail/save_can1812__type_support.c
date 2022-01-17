// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/SaveCAN1812.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/save_can1812__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/save_can1812__functions.h"
#include "custom_msgs/msg/detail/save_can1812__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SaveCAN1812__rosidl_typesupport_introspection_c__SaveCAN1812_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__SaveCAN1812__init(message_memory);
}

void SaveCAN1812__rosidl_typesupport_introspection_c__SaveCAN1812_fini_function(void * message_memory)
{
  custom_msgs__msg__SaveCAN1812__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SaveCAN1812__rosidl_typesupport_introspection_c__SaveCAN1812_message_member_array[4] = {
  {
    "rad_objstate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SaveCAN1812, rad_objstate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rad_objlatpos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SaveCAN1812, rad_objlatpos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rad_objdist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SaveCAN1812, rad_objdist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rad_objrelspd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SaveCAN1812, rad_objrelspd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SaveCAN1812__rosidl_typesupport_introspection_c__SaveCAN1812_message_members = {
  "custom_msgs__msg",  // message namespace
  "SaveCAN1812",  // message name
  4,  // number of fields
  sizeof(custom_msgs__msg__SaveCAN1812),
  SaveCAN1812__rosidl_typesupport_introspection_c__SaveCAN1812_message_member_array,  // message members
  SaveCAN1812__rosidl_typesupport_introspection_c__SaveCAN1812_init_function,  // function to initialize message memory (memory has to be allocated)
  SaveCAN1812__rosidl_typesupport_introspection_c__SaveCAN1812_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SaveCAN1812__rosidl_typesupport_introspection_c__SaveCAN1812_message_type_support_handle = {
  0,
  &SaveCAN1812__rosidl_typesupport_introspection_c__SaveCAN1812_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SaveCAN1812)() {
  if (!SaveCAN1812__rosidl_typesupport_introspection_c__SaveCAN1812_message_type_support_handle.typesupport_identifier) {
    SaveCAN1812__rosidl_typesupport_introspection_c__SaveCAN1812_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SaveCAN1812__rosidl_typesupport_introspection_c__SaveCAN1812_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
