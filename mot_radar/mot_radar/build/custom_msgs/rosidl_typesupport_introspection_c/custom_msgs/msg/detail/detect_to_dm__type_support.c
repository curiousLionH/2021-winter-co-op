// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/DetectToDM.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/detect_to_dm__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/detect_to_dm__functions.h"
#include "custom_msgs/msg/detail/detect_to_dm__struct.h"


// Include directives for member types
// Member `objects_cur`
// Member `objects_left`
// Member `objects_right`
// Member `objects_inter`
// Member `objects_inter_left`
#include "custom_msgs/msg/object.h"
// Member `objects_cur`
// Member `objects_left`
// Member `objects_right`
// Member `objects_inter`
// Member `objects_inter_left`
#include "custom_msgs/msg/detail/object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__DetectToDM__init(message_memory);
}

void DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_fini_function(void * message_memory)
{
  custom_msgs__msg__DetectToDM__fini(message_memory);
}

size_t DetectToDM__rosidl_typesupport_introspection_c__size_function__Object__objects_cur(
  const void * untyped_member)
{
  const custom_msgs__msg__Object__Sequence * member =
    (const custom_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectToDM__rosidl_typesupport_introspection_c__get_const_function__Object__objects_cur(
  const void * untyped_member, size_t index)
{
  const custom_msgs__msg__Object__Sequence * member =
    (const custom_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectToDM__rosidl_typesupport_introspection_c__get_function__Object__objects_cur(
  void * untyped_member, size_t index)
{
  custom_msgs__msg__Object__Sequence * member =
    (custom_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectToDM__rosidl_typesupport_introspection_c__resize_function__Object__objects_cur(
  void * untyped_member, size_t size)
{
  custom_msgs__msg__Object__Sequence * member =
    (custom_msgs__msg__Object__Sequence *)(untyped_member);
  custom_msgs__msg__Object__Sequence__fini(member);
  return custom_msgs__msg__Object__Sequence__init(member, size);
}

size_t DetectToDM__rosidl_typesupport_introspection_c__size_function__Object__objects_left(
  const void * untyped_member)
{
  const custom_msgs__msg__Object__Sequence * member =
    (const custom_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectToDM__rosidl_typesupport_introspection_c__get_const_function__Object__objects_left(
  const void * untyped_member, size_t index)
{
  const custom_msgs__msg__Object__Sequence * member =
    (const custom_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectToDM__rosidl_typesupport_introspection_c__get_function__Object__objects_left(
  void * untyped_member, size_t index)
{
  custom_msgs__msg__Object__Sequence * member =
    (custom_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectToDM__rosidl_typesupport_introspection_c__resize_function__Object__objects_left(
  void * untyped_member, size_t size)
{
  custom_msgs__msg__Object__Sequence * member =
    (custom_msgs__msg__Object__Sequence *)(untyped_member);
  custom_msgs__msg__Object__Sequence__fini(member);
  return custom_msgs__msg__Object__Sequence__init(member, size);
}

size_t DetectToDM__rosidl_typesupport_introspection_c__size_function__Object__objects_right(
  const void * untyped_member)
{
  const custom_msgs__msg__Object__Sequence * member =
    (const custom_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectToDM__rosidl_typesupport_introspection_c__get_const_function__Object__objects_right(
  const void * untyped_member, size_t index)
{
  const custom_msgs__msg__Object__Sequence * member =
    (const custom_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectToDM__rosidl_typesupport_introspection_c__get_function__Object__objects_right(
  void * untyped_member, size_t index)
{
  custom_msgs__msg__Object__Sequence * member =
    (custom_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectToDM__rosidl_typesupport_introspection_c__resize_function__Object__objects_right(
  void * untyped_member, size_t size)
{
  custom_msgs__msg__Object__Sequence * member =
    (custom_msgs__msg__Object__Sequence *)(untyped_member);
  custom_msgs__msg__Object__Sequence__fini(member);
  return custom_msgs__msg__Object__Sequence__init(member, size);
}

size_t DetectToDM__rosidl_typesupport_introspection_c__size_function__Object__objects_inter(
  const void * untyped_member)
{
  const custom_msgs__msg__Object__Sequence * member =
    (const custom_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectToDM__rosidl_typesupport_introspection_c__get_const_function__Object__objects_inter(
  const void * untyped_member, size_t index)
{
  const custom_msgs__msg__Object__Sequence * member =
    (const custom_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectToDM__rosidl_typesupport_introspection_c__get_function__Object__objects_inter(
  void * untyped_member, size_t index)
{
  custom_msgs__msg__Object__Sequence * member =
    (custom_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectToDM__rosidl_typesupport_introspection_c__resize_function__Object__objects_inter(
  void * untyped_member, size_t size)
{
  custom_msgs__msg__Object__Sequence * member =
    (custom_msgs__msg__Object__Sequence *)(untyped_member);
  custom_msgs__msg__Object__Sequence__fini(member);
  return custom_msgs__msg__Object__Sequence__init(member, size);
}

size_t DetectToDM__rosidl_typesupport_introspection_c__size_function__Object__objects_inter_left(
  const void * untyped_member)
{
  const custom_msgs__msg__Object__Sequence * member =
    (const custom_msgs__msg__Object__Sequence *)(untyped_member);
  return member->size;
}

const void * DetectToDM__rosidl_typesupport_introspection_c__get_const_function__Object__objects_inter_left(
  const void * untyped_member, size_t index)
{
  const custom_msgs__msg__Object__Sequence * member =
    (const custom_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DetectToDM__rosidl_typesupport_introspection_c__get_function__Object__objects_inter_left(
  void * untyped_member, size_t index)
{
  custom_msgs__msg__Object__Sequence * member =
    (custom_msgs__msg__Object__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DetectToDM__rosidl_typesupport_introspection_c__resize_function__Object__objects_inter_left(
  void * untyped_member, size_t size)
{
  custom_msgs__msg__Object__Sequence * member =
    (custom_msgs__msg__Object__Sequence *)(untyped_member);
  custom_msgs__msg__Object__Sequence__fini(member);
  return custom_msgs__msg__Object__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_message_member_array[5] = {
  {
    "objects_cur",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__DetectToDM, objects_cur),  // bytes offset in struct
    NULL,  // default value
    DetectToDM__rosidl_typesupport_introspection_c__size_function__Object__objects_cur,  // size() function pointer
    DetectToDM__rosidl_typesupport_introspection_c__get_const_function__Object__objects_cur,  // get_const(index) function pointer
    DetectToDM__rosidl_typesupport_introspection_c__get_function__Object__objects_cur,  // get(index) function pointer
    DetectToDM__rosidl_typesupport_introspection_c__resize_function__Object__objects_cur  // resize(index) function pointer
  },
  {
    "objects_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__DetectToDM, objects_left),  // bytes offset in struct
    NULL,  // default value
    DetectToDM__rosidl_typesupport_introspection_c__size_function__Object__objects_left,  // size() function pointer
    DetectToDM__rosidl_typesupport_introspection_c__get_const_function__Object__objects_left,  // get_const(index) function pointer
    DetectToDM__rosidl_typesupport_introspection_c__get_function__Object__objects_left,  // get(index) function pointer
    DetectToDM__rosidl_typesupport_introspection_c__resize_function__Object__objects_left  // resize(index) function pointer
  },
  {
    "objects_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__DetectToDM, objects_right),  // bytes offset in struct
    NULL,  // default value
    DetectToDM__rosidl_typesupport_introspection_c__size_function__Object__objects_right,  // size() function pointer
    DetectToDM__rosidl_typesupport_introspection_c__get_const_function__Object__objects_right,  // get_const(index) function pointer
    DetectToDM__rosidl_typesupport_introspection_c__get_function__Object__objects_right,  // get(index) function pointer
    DetectToDM__rosidl_typesupport_introspection_c__resize_function__Object__objects_right  // resize(index) function pointer
  },
  {
    "objects_inter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__DetectToDM, objects_inter),  // bytes offset in struct
    NULL,  // default value
    DetectToDM__rosidl_typesupport_introspection_c__size_function__Object__objects_inter,  // size() function pointer
    DetectToDM__rosidl_typesupport_introspection_c__get_const_function__Object__objects_inter,  // get_const(index) function pointer
    DetectToDM__rosidl_typesupport_introspection_c__get_function__Object__objects_inter,  // get(index) function pointer
    DetectToDM__rosidl_typesupport_introspection_c__resize_function__Object__objects_inter  // resize(index) function pointer
  },
  {
    "objects_inter_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__DetectToDM, objects_inter_left),  // bytes offset in struct
    NULL,  // default value
    DetectToDM__rosidl_typesupport_introspection_c__size_function__Object__objects_inter_left,  // size() function pointer
    DetectToDM__rosidl_typesupport_introspection_c__get_const_function__Object__objects_inter_left,  // get_const(index) function pointer
    DetectToDM__rosidl_typesupport_introspection_c__get_function__Object__objects_inter_left,  // get(index) function pointer
    DetectToDM__rosidl_typesupport_introspection_c__resize_function__Object__objects_inter_left  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_message_members = {
  "custom_msgs__msg",  // message namespace
  "DetectToDM",  // message name
  5,  // number of fields
  sizeof(custom_msgs__msg__DetectToDM),
  DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_message_member_array,  // message members
  DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_message_type_support_handle = {
  0,
  &DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, DetectToDM)() {
  DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, Object)();
  DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, Object)();
  DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, Object)();
  DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, Object)();
  DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, Object)();
  if (!DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_message_type_support_handle.typesupport_identifier) {
    DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DetectToDM__rosidl_typesupport_introspection_c__DetectToDM_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
