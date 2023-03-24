// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/SbgCAN256.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/sbg_can256__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/sbg_can256__struct.hpp"

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
  const custom_msgs::msg::SbgCAN256 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: time_stamp
  cdr << ros_message.time_stamp;
  // Member: general_status
  cdr << ros_message.general_status;
  // Member: clock_status
  cdr << ros_message.clock_status;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::SbgCAN256 & ros_message)
{
  // Member: time_stamp
  cdr >> ros_message.time_stamp;

  // Member: general_status
  cdr >> ros_message.general_status;

  // Member: clock_status
  cdr >> ros_message.clock_status;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::SbgCAN256 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: time_stamp
  {
    size_t item_size = sizeof(ros_message.time_stamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: general_status
  {
    size_t item_size = sizeof(ros_message.general_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: clock_status
  {
    size_t item_size = sizeof(ros_message.clock_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_SbgCAN256(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: time_stamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: general_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: clock_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SbgCAN256__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SbgCAN256 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SbgCAN256__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::SbgCAN256 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SbgCAN256__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SbgCAN256 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SbgCAN256__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SbgCAN256(full_bounded, 0);
}

static message_type_support_callbacks_t _SbgCAN256__callbacks = {
  "custom_msgs::msg",
  "SbgCAN256",
  _SbgCAN256__cdr_serialize,
  _SbgCAN256__cdr_deserialize,
  _SbgCAN256__get_serialized_size,
  _SbgCAN256__max_serialized_size
};

static rosidl_message_type_support_t _SbgCAN256__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SbgCAN256__callbacks,
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
get_message_type_support_handle<custom_msgs::msg::SbgCAN256>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SbgCAN256__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, SbgCAN256)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SbgCAN256__handle;
}

#ifdef __cplusplus
}
#endif