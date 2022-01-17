// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/SaveCAN342.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_can342__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/save_can342__struct.h"
#include "custom_msgs/msg/detail/save_can342__functions.h"
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


using _SaveCAN342__ros_msg_type = custom_msgs__msg__SaveCAN342;

static bool _SaveCAN342__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SaveCAN342__ros_msg_type * ros_message = static_cast<const _SaveCAN342__ros_msg_type *>(untyped_ros_message);
  // Field name: eps_en
  {
    cdr << (ros_message->eps_en ? true : false);
  }

  // Field name: override_ignore
  {
    cdr << (ros_message->override_ignore ? true : false);
  }

  // Field name: eps_speed
  {
    cdr << ros_message->eps_speed;
  }

  // Field name: acc_en
  {
    cdr << (ros_message->acc_en ? true : false);
  }

  // Field name: aeb_en
  {
    cdr << (ros_message->aeb_en ? true : false);
  }

  // Field name: gear_change
  {
    cdr << ros_message->gear_change;
  }

  // Field name: turn_sig_en
  {
    cdr << ros_message->turn_sig_en;
  }

  // Field name: aeb_decel_value
  {
    cdr << ros_message->aeb_decel_value;
  }

  // Field name: aliv_cnt
  {
    cdr << ros_message->aliv_cnt;
  }

  return true;
}

static bool _SaveCAN342__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SaveCAN342__ros_msg_type * ros_message = static_cast<_SaveCAN342__ros_msg_type *>(untyped_ros_message);
  // Field name: eps_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->eps_en = tmp ? true : false;
  }

  // Field name: override_ignore
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->override_ignore = tmp ? true : false;
  }

  // Field name: eps_speed
  {
    cdr >> ros_message->eps_speed;
  }

  // Field name: acc_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->acc_en = tmp ? true : false;
  }

  // Field name: aeb_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->aeb_en = tmp ? true : false;
  }

  // Field name: gear_change
  {
    cdr >> ros_message->gear_change;
  }

  // Field name: turn_sig_en
  {
    cdr >> ros_message->turn_sig_en;
  }

  // Field name: aeb_decel_value
  {
    cdr >> ros_message->aeb_decel_value;
  }

  // Field name: aliv_cnt
  {
    cdr >> ros_message->aliv_cnt;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__SaveCAN342(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SaveCAN342__ros_msg_type * ros_message = static_cast<const _SaveCAN342__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name eps_en
  {
    size_t item_size = sizeof(ros_message->eps_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name override_ignore
  {
    size_t item_size = sizeof(ros_message->override_ignore);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eps_speed
  {
    size_t item_size = sizeof(ros_message->eps_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_en
  {
    size_t item_size = sizeof(ros_message->acc_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aeb_en
  {
    size_t item_size = sizeof(ros_message->aeb_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_change
  {
    size_t item_size = sizeof(ros_message->gear_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_sig_en
  {
    size_t item_size = sizeof(ros_message->turn_sig_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aeb_decel_value
  {
    size_t item_size = sizeof(ros_message->aeb_decel_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aliv_cnt
  {
    size_t item_size = sizeof(ros_message->aliv_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SaveCAN342__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__SaveCAN342(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__SaveCAN342(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: eps_en
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: override_ignore
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eps_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acc_en
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aeb_en
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_change
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_sig_en
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aeb_decel_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: aliv_cnt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SaveCAN342__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__SaveCAN342(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SaveCAN342 = {
  "custom_msgs::msg",
  "SaveCAN342",
  _SaveCAN342__cdr_serialize,
  _SaveCAN342__cdr_deserialize,
  _SaveCAN342__get_serialized_size,
  _SaveCAN342__max_serialized_size
};

static rosidl_message_type_support_t _SaveCAN342__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SaveCAN342,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN342)() {
  return &_SaveCAN342__type_support;
}

#if defined(__cplusplus)
}
#endif
