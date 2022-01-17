// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/NiroCAN576.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/niro_can576__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/niro_can576__struct.h"
#include "custom_msgs/msg/detail/niro_can576__functions.h"
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


using _NiroCAN576__ros_msg_type = custom_msgs__msg__NiroCAN576;

static bool _NiroCAN576__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NiroCAN576__ros_msg_type * ros_message = static_cast<const _NiroCAN576__ros_msg_type *>(untyped_ros_message);
  // Field name: brk24_6_0
  {
    cdr << ros_message->brk24_6_0;
  }

  // Field name: brk24_6_6
  {
    cdr << ros_message->brk24_6_6;
  }

  // Field name: brk24_7_12
  {
    cdr << ros_message->brk24_7_12;
  }

  // Field name: brk24_7_19
  {
    cdr << ros_message->brk24_7_19;
  }

  // Field name: brk24_mode_c
  {
    cdr << ros_message->brk24_mode_c;
  }

  // Field name: brk24_3_39
  {
    cdr << ros_message->brk24_3_39;
  }

  // Field name: alivecounter24
  {
    cdr << ros_message->alivecounter24;
  }

  // Field name: chksum24
  {
    cdr << ros_message->chksum24;
  }

  // Field name: brk24_8_56
  {
    cdr << ros_message->brk24_8_56;
  }

  return true;
}

static bool _NiroCAN576__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NiroCAN576__ros_msg_type * ros_message = static_cast<_NiroCAN576__ros_msg_type *>(untyped_ros_message);
  // Field name: brk24_6_0
  {
    cdr >> ros_message->brk24_6_0;
  }

  // Field name: brk24_6_6
  {
    cdr >> ros_message->brk24_6_6;
  }

  // Field name: brk24_7_12
  {
    cdr >> ros_message->brk24_7_12;
  }

  // Field name: brk24_7_19
  {
    cdr >> ros_message->brk24_7_19;
  }

  // Field name: brk24_mode_c
  {
    cdr >> ros_message->brk24_mode_c;
  }

  // Field name: brk24_3_39
  {
    cdr >> ros_message->brk24_3_39;
  }

  // Field name: alivecounter24
  {
    cdr >> ros_message->alivecounter24;
  }

  // Field name: chksum24
  {
    cdr >> ros_message->chksum24;
  }

  // Field name: brk24_8_56
  {
    cdr >> ros_message->brk24_8_56;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__NiroCAN576(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NiroCAN576__ros_msg_type * ros_message = static_cast<const _NiroCAN576__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name brk24_6_0
  {
    size_t item_size = sizeof(ros_message->brk24_6_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk24_6_6
  {
    size_t item_size = sizeof(ros_message->brk24_6_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk24_7_12
  {
    size_t item_size = sizeof(ros_message->brk24_7_12);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk24_7_19
  {
    size_t item_size = sizeof(ros_message->brk24_7_19);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk24_mode_c
  {
    size_t item_size = sizeof(ros_message->brk24_mode_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk24_3_39
  {
    size_t item_size = sizeof(ros_message->brk24_3_39);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alivecounter24
  {
    size_t item_size = sizeof(ros_message->alivecounter24);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chksum24
  {
    size_t item_size = sizeof(ros_message->chksum24);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk24_8_56
  {
    size_t item_size = sizeof(ros_message->brk24_8_56);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NiroCAN576__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__NiroCAN576(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__NiroCAN576(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: brk24_6_0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk24_6_6
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk24_7_12
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk24_7_19
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk24_mode_c
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk24_3_39
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alivecounter24
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: chksum24
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk24_8_56
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NiroCAN576__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__NiroCAN576(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NiroCAN576 = {
  "custom_msgs::msg",
  "NiroCAN576",
  _NiroCAN576__cdr_serialize,
  _NiroCAN576__cdr_deserialize,
  _NiroCAN576__get_serialized_size,
  _NiroCAN576__max_serialized_size
};

static rosidl_message_type_support_t _NiroCAN576__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NiroCAN576,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, NiroCAN576)() {
  return &_NiroCAN576__type_support;
}

#if defined(__cplusplus)
}
#endif
