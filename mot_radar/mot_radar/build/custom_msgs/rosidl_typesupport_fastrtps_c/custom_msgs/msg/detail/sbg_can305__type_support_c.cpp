// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/SbgCAN305.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/sbg_can305__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/sbg_can305__struct.h"
#include "custom_msgs/msg/detail/sbg_can305__functions.h"
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


using _SbgCAN305__ros_msg_type = custom_msgs__msg__SbgCAN305;

static bool _SbgCAN305__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SbgCAN305__ros_msg_type * ros_message = static_cast<const _SbgCAN305__ros_msg_type *>(untyped_ros_message);
  // Field name: q0
  {
    cdr << ros_message->q0;
  }

  // Field name: q1
  {
    cdr << ros_message->q1;
  }

  // Field name: q2
  {
    cdr << ros_message->q2;
  }

  // Field name: q3
  {
    cdr << ros_message->q3;
  }

  return true;
}

static bool _SbgCAN305__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SbgCAN305__ros_msg_type * ros_message = static_cast<_SbgCAN305__ros_msg_type *>(untyped_ros_message);
  // Field name: q0
  {
    cdr >> ros_message->q0;
  }

  // Field name: q1
  {
    cdr >> ros_message->q1;
  }

  // Field name: q2
  {
    cdr >> ros_message->q2;
  }

  // Field name: q3
  {
    cdr >> ros_message->q3;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__SbgCAN305(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SbgCAN305__ros_msg_type * ros_message = static_cast<const _SbgCAN305__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name q0
  {
    size_t item_size = sizeof(ros_message->q0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name q1
  {
    size_t item_size = sizeof(ros_message->q1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name q2
  {
    size_t item_size = sizeof(ros_message->q2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name q3
  {
    size_t item_size = sizeof(ros_message->q3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SbgCAN305__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__SbgCAN305(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__SbgCAN305(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: q0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: q1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: q2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: q3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SbgCAN305__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__SbgCAN305(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SbgCAN305 = {
  "custom_msgs::msg",
  "SbgCAN305",
  _SbgCAN305__cdr_serialize,
  _SbgCAN305__cdr_deserialize,
  _SbgCAN305__get_serialized_size,
  _SbgCAN305__max_serialized_size
};

static rosidl_message_type_support_t _SbgCAN305__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SbgCAN305,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SbgCAN305)() {
  return &_SbgCAN305__type_support;
}

#if defined(__cplusplus)
}
#endif
