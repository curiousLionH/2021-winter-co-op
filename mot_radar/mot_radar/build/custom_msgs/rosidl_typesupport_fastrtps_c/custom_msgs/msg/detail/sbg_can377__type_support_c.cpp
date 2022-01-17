// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/SbgCAN377.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/sbg_can377__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/sbg_can377__struct.h"
#include "custom_msgs/msg/detail/sbg_can377__functions.h"
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


using _SbgCAN377__ros_msg_type = custom_msgs__msg__SbgCAN377;

static bool _SbgCAN377__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SbgCAN377__ros_msg_type * ros_message = static_cast<const _SbgCAN377__ros_msg_type *>(untyped_ros_message);
  // Field name: true_heading
  {
    cdr << ros_message->true_heading;
  }

  // Field name: true_heading_acc
  {
    cdr << ros_message->true_heading_acc;
  }

  // Field name: pitch
  {
    cdr << ros_message->pitch;
  }

  // Field name: pitch_acc
  {
    cdr << ros_message->pitch_acc;
  }

  return true;
}

static bool _SbgCAN377__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SbgCAN377__ros_msg_type * ros_message = static_cast<_SbgCAN377__ros_msg_type *>(untyped_ros_message);
  // Field name: true_heading
  {
    cdr >> ros_message->true_heading;
  }

  // Field name: true_heading_acc
  {
    cdr >> ros_message->true_heading_acc;
  }

  // Field name: pitch
  {
    cdr >> ros_message->pitch;
  }

  // Field name: pitch_acc
  {
    cdr >> ros_message->pitch_acc;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__SbgCAN377(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SbgCAN377__ros_msg_type * ros_message = static_cast<const _SbgCAN377__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name true_heading
  {
    size_t item_size = sizeof(ros_message->true_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name true_heading_acc
  {
    size_t item_size = sizeof(ros_message->true_heading_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch
  {
    size_t item_size = sizeof(ros_message->pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pitch_acc
  {
    size_t item_size = sizeof(ros_message->pitch_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SbgCAN377__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__SbgCAN377(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__SbgCAN377(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: true_heading
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: true_heading_acc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: pitch_acc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SbgCAN377__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__SbgCAN377(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SbgCAN377 = {
  "custom_msgs::msg",
  "SbgCAN377",
  _SbgCAN377__cdr_serialize,
  _SbgCAN377__cdr_deserialize,
  _SbgCAN377__get_serialized_size,
  _SbgCAN377__max_serialized_size
};

static rosidl_message_type_support_t _SbgCAN377__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SbgCAN377,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SbgCAN377)() {
  return &_SbgCAN377__type_support;
}

#if defined(__cplusplus)
}
#endif
