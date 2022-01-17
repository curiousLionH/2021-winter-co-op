// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/SaveCAN1812.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_can1812__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/save_can1812__struct.h"
#include "custom_msgs/msg/detail/save_can1812__functions.h"
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


using _SaveCAN1812__ros_msg_type = custom_msgs__msg__SaveCAN1812;

static bool _SaveCAN1812__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SaveCAN1812__ros_msg_type * ros_message = static_cast<const _SaveCAN1812__ros_msg_type *>(untyped_ros_message);
  // Field name: rad_objstate
  {
    cdr << ros_message->rad_objstate;
  }

  // Field name: rad_objlatpos
  {
    cdr << ros_message->rad_objlatpos;
  }

  // Field name: rad_objdist
  {
    cdr << ros_message->rad_objdist;
  }

  // Field name: rad_objrelspd
  {
    cdr << ros_message->rad_objrelspd;
  }

  return true;
}

static bool _SaveCAN1812__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SaveCAN1812__ros_msg_type * ros_message = static_cast<_SaveCAN1812__ros_msg_type *>(untyped_ros_message);
  // Field name: rad_objstate
  {
    cdr >> ros_message->rad_objstate;
  }

  // Field name: rad_objlatpos
  {
    cdr >> ros_message->rad_objlatpos;
  }

  // Field name: rad_objdist
  {
    cdr >> ros_message->rad_objdist;
  }

  // Field name: rad_objrelspd
  {
    cdr >> ros_message->rad_objrelspd;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__SaveCAN1812(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SaveCAN1812__ros_msg_type * ros_message = static_cast<const _SaveCAN1812__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rad_objstate
  {
    size_t item_size = sizeof(ros_message->rad_objstate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rad_objlatpos
  {
    size_t item_size = sizeof(ros_message->rad_objlatpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rad_objdist
  {
    size_t item_size = sizeof(ros_message->rad_objdist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rad_objrelspd
  {
    size_t item_size = sizeof(ros_message->rad_objrelspd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SaveCAN1812__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__SaveCAN1812(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__SaveCAN1812(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: rad_objstate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rad_objlatpos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rad_objdist
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rad_objrelspd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SaveCAN1812__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__SaveCAN1812(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SaveCAN1812 = {
  "custom_msgs::msg",
  "SaveCAN1812",
  _SaveCAN1812__cdr_serialize,
  _SaveCAN1812__cdr_deserialize,
  _SaveCAN1812__get_serialized_size,
  _SaveCAN1812__max_serialized_size
};

static rosidl_message_type_support_t _SaveCAN1812__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SaveCAN1812,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1812)() {
  return &_SaveCAN1812__type_support;
}

#if defined(__cplusplus)
}
#endif
