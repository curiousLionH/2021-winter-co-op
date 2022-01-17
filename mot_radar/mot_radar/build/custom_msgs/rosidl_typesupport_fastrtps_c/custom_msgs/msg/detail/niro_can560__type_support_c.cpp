// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/NiroCAN560.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/niro_can560__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/niro_can560__struct.h"
#include "custom_msgs/msg/detail/niro_can560__functions.h"
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


using _NiroCAN560__ros_msg_type = custom_msgs__msg__NiroCAN560;

static bool _NiroCAN560__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NiroCAN560__ros_msg_type * ros_message = static_cast<const _NiroCAN560__ros_msg_type *>(untyped_ros_message);
  // Field name: brk22_i
  {
    cdr << ros_message->brk22_i;
  }

  // Field name: brk22_mode_b
  {
    cdr << ros_message->brk22_mode_b;
  }

  // Field name: brk22_1_15
  {
    cdr << ros_message->brk22_1_15;
  }

  // Field name: brk22_areq1
  {
    cdr << ros_message->brk22_areq1;
  }

  // Field name: brk22_1_35
  {
    cdr << ros_message->brk22_1_35;
  }

  // Field name: brk22_areq2
  {
    cdr << ros_message->brk22_areq2;
  }

  // Field name: alivecounter22
  {
    cdr << ros_message->alivecounter22;
  }

  // Field name: chksum22
  {
    cdr << ros_message->chksum22;
  }

  return true;
}

static bool _NiroCAN560__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NiroCAN560__ros_msg_type * ros_message = static_cast<_NiroCAN560__ros_msg_type *>(untyped_ros_message);
  // Field name: brk22_i
  {
    cdr >> ros_message->brk22_i;
  }

  // Field name: brk22_mode_b
  {
    cdr >> ros_message->brk22_mode_b;
  }

  // Field name: brk22_1_15
  {
    cdr >> ros_message->brk22_1_15;
  }

  // Field name: brk22_areq1
  {
    cdr >> ros_message->brk22_areq1;
  }

  // Field name: brk22_1_35
  {
    cdr >> ros_message->brk22_1_35;
  }

  // Field name: brk22_areq2
  {
    cdr >> ros_message->brk22_areq2;
  }

  // Field name: alivecounter22
  {
    cdr >> ros_message->alivecounter22;
  }

  // Field name: chksum22
  {
    cdr >> ros_message->chksum22;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__NiroCAN560(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NiroCAN560__ros_msg_type * ros_message = static_cast<const _NiroCAN560__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name brk22_i
  {
    size_t item_size = sizeof(ros_message->brk22_i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk22_mode_b
  {
    size_t item_size = sizeof(ros_message->brk22_mode_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk22_1_15
  {
    size_t item_size = sizeof(ros_message->brk22_1_15);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk22_areq1
  {
    size_t item_size = sizeof(ros_message->brk22_areq1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk22_1_35
  {
    size_t item_size = sizeof(ros_message->brk22_1_35);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk22_areq2
  {
    size_t item_size = sizeof(ros_message->brk22_areq2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alivecounter22
  {
    size_t item_size = sizeof(ros_message->alivecounter22);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name chksum22
  {
    size_t item_size = sizeof(ros_message->chksum22);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NiroCAN560__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__NiroCAN560(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__NiroCAN560(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: brk22_i
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk22_mode_b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk22_1_15
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk22_areq1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brk22_1_35
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk22_areq2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: alivecounter22
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: chksum22
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NiroCAN560__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__NiroCAN560(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NiroCAN560 = {
  "custom_msgs::msg",
  "NiroCAN560",
  _NiroCAN560__cdr_serialize,
  _NiroCAN560__cdr_deserialize,
  _NiroCAN560__get_serialized_size,
  _NiroCAN560__max_serialized_size
};

static rosidl_message_type_support_t _NiroCAN560__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NiroCAN560,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, NiroCAN560)() {
  return &_NiroCAN560__type_support;
}

#if defined(__cplusplus)
}
#endif
