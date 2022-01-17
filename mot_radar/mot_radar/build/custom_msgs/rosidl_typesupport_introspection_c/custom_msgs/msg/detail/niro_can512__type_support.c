// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/NiroCAN512.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/niro_can512__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/niro_can512__functions.h"
#include "custom_msgs/msg/detail/niro_can512__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void NiroCAN512__rosidl_typesupport_introspection_c__NiroCAN512_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__NiroCAN512__init(message_memory);
}

void NiroCAN512__rosidl_typesupport_introspection_c__NiroCAN512_fini_function(void * message_memory)
{
  custom_msgs__msg__NiroCAN512__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember NiroCAN512__rosidl_typesupport_introspection_c__NiroCAN512_message_member_array[3] = {
  {
    "brk11_35_0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__NiroCAN512, brk11_35_0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alivecounter11",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__NiroCAN512, alivecounter11),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "chksum11",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__NiroCAN512, chksum11),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers NiroCAN512__rosidl_typesupport_introspection_c__NiroCAN512_message_members = {
  "custom_msgs__msg",  // message namespace
  "NiroCAN512",  // message name
  3,  // number of fields
  sizeof(custom_msgs__msg__NiroCAN512),
  NiroCAN512__rosidl_typesupport_introspection_c__NiroCAN512_message_member_array,  // message members
  NiroCAN512__rosidl_typesupport_introspection_c__NiroCAN512_init_function,  // function to initialize message memory (memory has to be allocated)
  NiroCAN512__rosidl_typesupport_introspection_c__NiroCAN512_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t NiroCAN512__rosidl_typesupport_introspection_c__NiroCAN512_message_type_support_handle = {
  0,
  &NiroCAN512__rosidl_typesupport_introspection_c__NiroCAN512_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, NiroCAN512)() {
  if (!NiroCAN512__rosidl_typesupport_introspection_c__NiroCAN512_message_type_support_handle.typesupport_identifier) {
    NiroCAN512__rosidl_typesupport_introspection_c__NiroCAN512_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &NiroCAN512__rosidl_typesupport_introspection_c__NiroCAN512_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
