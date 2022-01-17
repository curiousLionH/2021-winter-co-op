// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/PathsMultiArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/paths_multi_array__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/paths_multi_array__functions.h"
#include "custom_msgs/msg/detail/paths_multi_array__struct.h"


// Include directives for member types
// Member `data`
#include "custom_msgs/msg/paths.h"
// Member `data`
#include "custom_msgs/msg/detail/paths__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PathsMultiArray__rosidl_typesupport_introspection_c__PathsMultiArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__PathsMultiArray__init(message_memory);
}

void PathsMultiArray__rosidl_typesupport_introspection_c__PathsMultiArray_fini_function(void * message_memory)
{
  custom_msgs__msg__PathsMultiArray__fini(message_memory);
}

size_t PathsMultiArray__rosidl_typesupport_introspection_c__size_function__Paths__data(
  const void * untyped_member)
{
  const custom_msgs__msg__Paths__Sequence * member =
    (const custom_msgs__msg__Paths__Sequence *)(untyped_member);
  return member->size;
}

const void * PathsMultiArray__rosidl_typesupport_introspection_c__get_const_function__Paths__data(
  const void * untyped_member, size_t index)
{
  const custom_msgs__msg__Paths__Sequence * member =
    (const custom_msgs__msg__Paths__Sequence *)(untyped_member);
  return &member->data[index];
}

void * PathsMultiArray__rosidl_typesupport_introspection_c__get_function__Paths__data(
  void * untyped_member, size_t index)
{
  custom_msgs__msg__Paths__Sequence * member =
    (custom_msgs__msg__Paths__Sequence *)(untyped_member);
  return &member->data[index];
}

bool PathsMultiArray__rosidl_typesupport_introspection_c__resize_function__Paths__data(
  void * untyped_member, size_t size)
{
  custom_msgs__msg__Paths__Sequence * member =
    (custom_msgs__msg__Paths__Sequence *)(untyped_member);
  custom_msgs__msg__Paths__Sequence__fini(member);
  return custom_msgs__msg__Paths__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember PathsMultiArray__rosidl_typesupport_introspection_c__PathsMultiArray_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__PathsMultiArray, data),  // bytes offset in struct
    NULL,  // default value
    PathsMultiArray__rosidl_typesupport_introspection_c__size_function__Paths__data,  // size() function pointer
    PathsMultiArray__rosidl_typesupport_introspection_c__get_const_function__Paths__data,  // get_const(index) function pointer
    PathsMultiArray__rosidl_typesupport_introspection_c__get_function__Paths__data,  // get(index) function pointer
    PathsMultiArray__rosidl_typesupport_introspection_c__resize_function__Paths__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PathsMultiArray__rosidl_typesupport_introspection_c__PathsMultiArray_message_members = {
  "custom_msgs__msg",  // message namespace
  "PathsMultiArray",  // message name
  1,  // number of fields
  sizeof(custom_msgs__msg__PathsMultiArray),
  PathsMultiArray__rosidl_typesupport_introspection_c__PathsMultiArray_message_member_array,  // message members
  PathsMultiArray__rosidl_typesupport_introspection_c__PathsMultiArray_init_function,  // function to initialize message memory (memory has to be allocated)
  PathsMultiArray__rosidl_typesupport_introspection_c__PathsMultiArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PathsMultiArray__rosidl_typesupport_introspection_c__PathsMultiArray_message_type_support_handle = {
  0,
  &PathsMultiArray__rosidl_typesupport_introspection_c__PathsMultiArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, PathsMultiArray)() {
  PathsMultiArray__rosidl_typesupport_introspection_c__PathsMultiArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, Paths)();
  if (!PathsMultiArray__rosidl_typesupport_introspection_c__PathsMultiArray_message_type_support_handle.typesupport_identifier) {
    PathsMultiArray__rosidl_typesupport_introspection_c__PathsMultiArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PathsMultiArray__rosidl_typesupport_introspection_c__PathsMultiArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
