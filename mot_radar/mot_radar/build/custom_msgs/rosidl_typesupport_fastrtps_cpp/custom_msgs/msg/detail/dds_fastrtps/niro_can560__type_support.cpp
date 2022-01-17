// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/NiroCAN560.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/niro_can560__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/niro_can560__struct.hpp"

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
  const custom_msgs::msg::NiroCAN560 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: brk22_i
  cdr << ros_message.brk22_i;
  // Member: brk22_mode_b
  cdr << ros_message.brk22_mode_b;
  // Member: brk22_1_15
  cdr << ros_message.brk22_1_15;
  // Member: brk22_areq1
  cdr << ros_message.brk22_areq1;
  // Member: brk22_1_35
  cdr << ros_message.brk22_1_35;
  // Member: brk22_areq2
  cdr << ros_message.brk22_areq2;
  // Member: alivecounter22
  cdr << ros_message.alivecounter22;
  // Member: chksum22
  cdr << ros_message.chksum22;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::NiroCAN560 & ros_message)
{
  // Member: brk22_i
  cdr >> ros_message.brk22_i;

  // Member: brk22_mode_b
  cdr >> ros_message.brk22_mode_b;

  // Member: brk22_1_15
  cdr >> ros_message.brk22_1_15;

  // Member: brk22_areq1
  cdr >> ros_message.brk22_areq1;

  // Member: brk22_1_35
  cdr >> ros_message.brk22_1_35;

  // Member: brk22_areq2
  cdr >> ros_message.brk22_areq2;

  // Member: alivecounter22
  cdr >> ros_message.alivecounter22;

  // Member: chksum22
  cdr >> ros_message.chksum22;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::NiroCAN560 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: brk22_i
  {
    size_t item_size = sizeof(ros_message.brk22_i);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk22_mode_b
  {
    size_t item_size = sizeof(ros_message.brk22_mode_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk22_1_15
  {
    size_t item_size = sizeof(ros_message.brk22_1_15);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk22_areq1
  {
    size_t item_size = sizeof(ros_message.brk22_areq1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk22_1_35
  {
    size_t item_size = sizeof(ros_message.brk22_1_35);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk22_areq2
  {
    size_t item_size = sizeof(ros_message.brk22_areq2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alivecounter22
  {
    size_t item_size = sizeof(ros_message.alivecounter22);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chksum22
  {
    size_t item_size = sizeof(ros_message.chksum22);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_NiroCAN560(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: brk22_i
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk22_mode_b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk22_1_15
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk22_areq1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brk22_1_35
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk22_areq2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: alivecounter22
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: chksum22
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _NiroCAN560__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::NiroCAN560 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NiroCAN560__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::NiroCAN560 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NiroCAN560__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::NiroCAN560 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NiroCAN560__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NiroCAN560(full_bounded, 0);
}

static message_type_support_callbacks_t _NiroCAN560__callbacks = {
  "custom_msgs::msg",
  "NiroCAN560",
  _NiroCAN560__cdr_serialize,
  _NiroCAN560__cdr_deserialize,
  _NiroCAN560__get_serialized_size,
  _NiroCAN560__max_serialized_size
};

static rosidl_message_type_support_t _NiroCAN560__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NiroCAN560__callbacks,
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
get_message_type_support_handle<custom_msgs::msg::NiroCAN560>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_NiroCAN560__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, NiroCAN560)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_NiroCAN560__handle;
}

#ifdef __cplusplus
}
#endif
