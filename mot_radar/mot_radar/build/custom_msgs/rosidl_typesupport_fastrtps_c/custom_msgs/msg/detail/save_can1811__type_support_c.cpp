// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/SaveCAN1811.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_can1811__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/save_can1811__struct.h"
#include "custom_msgs/msg/detail/save_can1811__functions.h"
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


using _SaveCAN1811__ros_msg_type = custom_msgs__msg__SaveCAN1811;

static bool _SaveCAN1811__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SaveCAN1811__ros_msg_type * ros_message = static_cast<const _SaveCAN1811__ros_msg_type *>(untyped_ros_message);
  // Field name: lat_accel
  {
    cdr << ros_message->lat_accel;
  }

  // Field name: long_accel
  {
    cdr << ros_message->long_accel;
  }

  // Field name: yaw_rate
  {
    cdr << ros_message->yaw_rate;
  }

  // Field name: brk_cylinder
  {
    cdr << ros_message->brk_cylinder;
  }

  return true;
}

static bool _SaveCAN1811__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SaveCAN1811__ros_msg_type * ros_message = static_cast<_SaveCAN1811__ros_msg_type *>(untyped_ros_message);
  // Field name: lat_accel
  {
    cdr >> ros_message->lat_accel;
  }

  // Field name: long_accel
  {
    cdr >> ros_message->long_accel;
  }

  // Field name: yaw_rate
  {
    cdr >> ros_message->yaw_rate;
  }

  // Field name: brk_cylinder
  {
    cdr >> ros_message->brk_cylinder;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__SaveCAN1811(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SaveCAN1811__ros_msg_type * ros_message = static_cast<const _SaveCAN1811__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lat_accel
  {
    size_t item_size = sizeof(ros_message->lat_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name long_accel
  {
    size_t item_size = sizeof(ros_message->long_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate
  {
    size_t item_size = sizeof(ros_message->yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk_cylinder
  {
    size_t item_size = sizeof(ros_message->brk_cylinder);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SaveCAN1811__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__SaveCAN1811(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__SaveCAN1811(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: lat_accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: long_accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brk_cylinder
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SaveCAN1811__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__SaveCAN1811(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SaveCAN1811 = {
  "custom_msgs::msg",
  "SaveCAN1811",
  _SaveCAN1811__cdr_serialize,
  _SaveCAN1811__cdr_deserialize,
  _SaveCAN1811__get_serialized_size,
  _SaveCAN1811__max_serialized_size
};

static rosidl_message_type_support_t _SaveCAN1811__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SaveCAN1811,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1811)() {
  return &_SaveCAN1811__type_support;
}

#if defined(__cplusplus)
}
#endif
