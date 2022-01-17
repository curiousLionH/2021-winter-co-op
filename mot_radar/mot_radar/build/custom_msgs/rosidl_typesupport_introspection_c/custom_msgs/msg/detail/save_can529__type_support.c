// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/SaveCAN529.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/save_can529__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/save_can529__functions.h"
#include "custom_msgs/msg/detail/save_can529__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SaveCAN529__rosidl_typesupport_introspection_c__SaveCAN529_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__SaveCAN529__init(message_memory);
}

void SaveCAN529__rosidl_typesupport_introspection_c__SaveCAN529_fini_function(void * message_memory)
{
  custom_msgs__msg__SaveCAN529__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SaveCAN529__rosidl_typesupport_introspection_c__SaveCAN529_message_member_array[1] = {
  {
    "avm_alive_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SaveCAN529, avm_alive_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SaveCAN529__rosidl_typesupport_introspection_c__SaveCAN529_message_members = {
  "custom_msgs__msg",  // message namespace
  "SaveCAN529",  // message name
  1,  // number of fields
  sizeof(custom_msgs__msg__SaveCAN529),
  SaveCAN529__rosidl_typesupport_introspection_c__SaveCAN529_message_member_array,  // message members
  SaveCAN529__rosidl_typesupport_introspection_c__SaveCAN529_init_function,  // function to initialize message memory (memory has to be allocated)
  SaveCAN529__rosidl_typesupport_introspection_c__SaveCAN529_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SaveCAN529__rosidl_typesupport_introspection_c__SaveCAN529_message_type_support_handle = {
  0,
  &SaveCAN529__rosidl_typesupport_introspection_c__SaveCAN529_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SaveCAN529)() {
  if (!SaveCAN529__rosidl_typesupport_introspection_c__SaveCAN529_message_type_support_handle.typesupport_identifier) {
    SaveCAN529__rosidl_typesupport_introspection_c__SaveCAN529_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SaveCAN529__rosidl_typesupport_introspection_c__SaveCAN529_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
