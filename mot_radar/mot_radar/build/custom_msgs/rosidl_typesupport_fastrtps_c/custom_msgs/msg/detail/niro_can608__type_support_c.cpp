// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/NiroCAN608.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/niro_can608__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/niro_can608__struct.h"
#include "custom_msgs/msg/detail/niro_can608__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _NiroCAN608__ros_msg_type = custom_msgs__msg__NiroCAN608;

static bool _NiroCAN608__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NiroCAN608__ros_msg_type * ros_message = static_cast<const _NiroCAN608__ros_msg_type *>(untyped_ros_message);
  // Field name: gway_brake_active
  {
    cdr << ros_message->gway_brake_active;
  }

  return true;
}

static bool _NiroCAN608__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NiroCAN608__ros_msg_type * ros_message = static_cast<_NiroCAN608__ros_msg_type *>(untyped_ros_message);
  // Field name: gway_brake_active
  {
    cdr >> ros_message->gway_brake_active;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__NiroCAN608(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NiroCAN608__ros_msg_type * ros_message = static_cast<const _NiroCAN608__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gway_brake_active
  {
    size_t item_size = sizeof(ros_message->gway_brake_active);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NiroCAN608__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__NiroCAN608(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__NiroCAN608(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: gway_brake_active
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NiroCAN608__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__NiroCAN608(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NiroCAN608 = {
  "custom_msgs::msg",
  "NiroCAN608",
  _NiroCAN608__cdr_serialize,
  _NiroCAN608__cdr_deserialize,
  _NiroCAN608__get_serialized_size,
  _NiroCAN608__max_serialized_size
};

static rosidl_message_type_support_t _NiroCAN608__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NiroCAN608,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, NiroCAN608)() {
  return &_NiroCAN608__type_support;
}

#if defined(__cplusplus)
}
#endif
