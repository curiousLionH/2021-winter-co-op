// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/SaveCAN342.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_can342__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/save_can342__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_serialize(
  const custom_msgs::msg::SaveCAN342 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: eps_en
  cdr << (ros_message.eps_en ? true : false);
  // Member: override_ignore
  cdr << (ros_message.override_ignore ? true : false);
  // Member: eps_speed
  cdr << ros_message.eps_speed;
  // Member: acc_en
  cdr << (ros_message.acc_en ? true : false);
  // Member: aeb_en
  cdr << (ros_message.aeb_en ? true : false);
  // Member: gear_change
  cdr << ros_message.gear_change;
  // Member: turn_sig_en
  cdr << ros_message.turn_sig_en;
  // Member: aeb_decel_value
  cdr << ros_message.aeb_decel_value;
  // Member: aliv_cnt
  cdr << ros_message.aliv_cnt;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::SaveCAN342 & ros_message)
{
  // Member: eps_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.eps_en = tmp ? true : false;
  }

  // Member: override_ignore
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.override_ignore = tmp ? true : false;
  }

  // Member: eps_speed
  cdr >> ros_message.eps_speed;

  // Member: acc_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.acc_en = tmp ? true : false;
  }

  // Member: aeb_en
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.aeb_en = tmp ? true : false;
  }

  // Member: gear_change
  cdr >> ros_message.gear_change;

  // Member: turn_sig_en
  cdr >> ros_message.turn_sig_en;

  // Member: aeb_decel_value
  cdr >> ros_message.aeb_decel_value;

  // Member: aliv_cnt
  cdr >> ros_message.aliv_cnt;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::SaveCAN342 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: eps_en
  {
    size_t item_size = sizeof(ros_message.eps_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: override_ignore
  {
    size_t item_size = sizeof(ros_message.override_ignore);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eps_speed
  {
    size_t item_size = sizeof(ros_message.eps_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_en
  {
    size_t item_size = sizeof(ros_message.acc_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aeb_en
  {
    size_t item_size = sizeof(ros_message.aeb_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_change
  {
    size_t item_size = sizeof(ros_message.gear_change);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_sig_en
  {
    size_t item_size = sizeof(ros_message.turn_sig_en);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aeb_decel_value
  {
    size_t item_size = sizeof(ros_message.aeb_decel_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: aliv_cnt
  {
    size_t item_size = sizeof(ros_message.aliv_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_SaveCAN342(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: eps_en
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: override_ignore
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eps_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acc_en
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aeb_en
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gear_change
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_sig_en
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aeb_decel_value
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: aliv_cnt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SaveCAN342__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SaveCAN342 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SaveCAN342__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::SaveCAN342 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SaveCAN342__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SaveCAN342 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SaveCAN342__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SaveCAN342(full_bounded, 0);
}

static message_type_support_callbacks_t _SaveCAN342__callbacks = {
  "custom_msgs::msg",
  "SaveCAN342",
  _SaveCAN342__cdr_serialize,
  _SaveCAN342__cdr_deserialize,
  _SaveCAN342__get_serialized_size,
  _SaveCAN342__max_serialized_size
};

static rosidl_message_type_support_t _SaveCAN342__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SaveCAN342__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs::msg::SaveCAN342>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SaveCAN342__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, SaveCAN342)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SaveCAN342__handle;
}

#ifdef __cplusplus
}
#endif
