// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/AroundPaths.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/around_paths__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/around_paths__functions.h"
#include "custom_msgs/msg/detail/around_paths__struct.h"


// Include directives for member types
// Member `left_lanes`
// Member `right_lanes`
#include "custom_msgs/msg/paths.h"
// Member `left_lanes`
// Member `right_lanes`
#include "custom_msgs/msg/detail/paths__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__AroundPaths__init(message_memory);
}

void AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_fini_function(void * message_memory)
{
  custom_msgs__msg__AroundPaths__fini(message_memory);
}

size_t AroundPaths__rosidl_typesupport_introspection_c__size_function__Paths__left_lanes(
  const void * untyped_member)
{
  const custom_msgs__msg__Paths__Sequence * member =
    (const custom_msgs__msg__Paths__Sequence *)(untyped_member);
  return member->size;
}

const void * AroundPaths__rosidl_typesupport_introspection_c__get_const_function__Paths__left_lanes(
  const void * untyped_member, size_t index)
{
  const custom_msgs__msg__Paths__Sequence * member =
    (const custom_msgs__msg__Paths__Sequence *)(untyped_member);
  return &member->data[index];
}

void * AroundPaths__rosidl_typesupport_introspection_c__get_function__Paths__left_lanes(
  void * untyped_member, size_t index)
{
  custom_msgs__msg__Paths__Sequence * member =
    (custom_msgs__msg__Paths__Sequence *)(untyped_member);
  return &member->data[index];
}

bool AroundPaths__rosidl_typesupport_introspection_c__resize_function__Paths__left_lanes(
  void * untyped_member, size_t size)
{
  custom_msgs__msg__Paths__Sequence * member =
    (custom_msgs__msg__Paths__Sequence *)(untyped_member);
  custom_msgs__msg__Paths__Sequence__fini(member);
  return custom_msgs__msg__Paths__Sequence__init(member, size);
}

size_t AroundPaths__rosidl_typesupport_introspection_c__size_function__Paths__right_lanes(
  const void * untyped_member)
{
  const custom_msgs__msg__Paths__Sequence * member =
    (const custom_msgs__msg__Paths__Sequence *)(untyped_member);
  return member->size;
}

const void * AroundPaths__rosidl_typesupport_introspection_c__get_const_function__Paths__right_lanes(
  const void * untyped_member, size_t index)
{
  const custom_msgs__msg__Paths__Sequence * member =
    (const custom_msgs__msg__Paths__Sequence *)(untyped_member);
  return &member->data[index];
}

void * AroundPaths__rosidl_typesupport_introspection_c__get_function__Paths__right_lanes(
  void * untyped_member, size_t index)
{
  custom_msgs__msg__Paths__Sequence * member =
    (custom_msgs__msg__Paths__Sequence *)(untyped_member);
  return &member->data[index];
}

bool AroundPaths__rosidl_typesupport_introspection_c__resize_function__Paths__right_lanes(
  void * untyped_member, size_t size)
{
  custom_msgs__msg__Paths__Sequence * member =
    (custom_msgs__msg__Paths__Sequence *)(untyped_member);
  custom_msgs__msg__Paths__Sequence__fini(member);
  return custom_msgs__msg__Paths__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_message_member_array[4] = {
  {
    "left_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__AroundPaths, left_lane),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__AroundPaths, right_lane),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__AroundPaths, left_lanes),  // bytes offset in struct
    NULL,  // default value
    AroundPaths__rosidl_typesupport_introspection_c__size_function__Paths__left_lanes,  // size() function pointer
    AroundPaths__rosidl_typesupport_introspection_c__get_const_function__Paths__left_lanes,  // get_const(index) function pointer
    AroundPaths__rosidl_typesupport_introspection_c__get_function__Paths__left_lanes,  // get(index) function pointer
    AroundPaths__rosidl_typesupport_introspection_c__resize_function__Paths__left_lanes  // resize(index) function pointer
  },
  {
    "right_lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__AroundPaths, right_lanes),  // bytes offset in struct
    NULL,  // default value
    AroundPaths__rosidl_typesupport_introspection_c__size_function__Paths__right_lanes,  // size() function pointer
    AroundPaths__rosidl_typesupport_introspection_c__get_const_function__Paths__right_lanes,  // get_const(index) function pointer
    AroundPaths__rosidl_typesupport_introspection_c__get_function__Paths__right_lanes,  // get(index) function pointer
    AroundPaths__rosidl_typesupport_introspection_c__resize_function__Paths__right_lanes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_message_members = {
  "custom_msgs__msg",  // message namespace
  "AroundPaths",  // message name
  4,  // number of fields
  sizeof(custom_msgs__msg__AroundPaths),
  AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_message_member_array,  // message members
  AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_init_function,  // function to initialize message memory (memory has to be allocated)
  AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_message_type_support_handle = {
  0,
  &AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, AroundPaths)() {
  AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, Paths)();
  AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, Paths)();
  if (!AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_message_type_support_handle.typesupport_identifier) {
    AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AroundPaths__rosidl_typesupport_introspection_c__AroundPaths_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
