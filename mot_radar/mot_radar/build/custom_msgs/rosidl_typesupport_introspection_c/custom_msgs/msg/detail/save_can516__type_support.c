// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/SaveCAN516.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/save_can516__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/save_can516__functions.h"
#include "custom_msgs/msg/detail/save_can516__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SaveCAN516__rosidl_typesupport_introspection_c__SaveCAN516_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__SaveCAN516__init(message_memory);
}

void SaveCAN516__rosidl_typesupport_introspection_c__SaveCAN516_fini_function(void * message_memory)
{
  custom_msgs__msg__SaveCAN516__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SaveCAN516__rosidl_typesupport_introspection_c__SaveCAN516_message_member_array[1] = {
  {
    "take_over_alive_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__SaveCAN516, take_over_alive_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SaveCAN516__rosidl_typesupport_introspection_c__SaveCAN516_message_members = {
  "custom_msgs__msg",  // message namespace
  "SaveCAN516",  // message name
  1,  // number of fields
  sizeof(custom_msgs__msg__SaveCAN516),
  SaveCAN516__rosidl_typesupport_introspection_c__SaveCAN516_message_member_array,  // message members
  SaveCAN516__rosidl_typesupport_introspection_c__SaveCAN516_init_function,  // function to initialize message memory (memory has to be allocated)
  SaveCAN516__rosidl_typesupport_introspection_c__SaveCAN516_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SaveCAN516__rosidl_typesupport_introspection_c__SaveCAN516_message_type_support_handle = {
  0,
  &SaveCAN516__rosidl_typesupport_introspection_c__SaveCAN516_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SaveCAN516)() {
  if (!SaveCAN516__rosidl_typesupport_introspection_c__SaveCAN516_message_type_support_handle.typesupport_identifier) {
    SaveCAN516__rosidl_typesupport_introspection_c__SaveCAN516_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SaveCAN516__rosidl_typesupport_introspection_c__SaveCAN516_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
