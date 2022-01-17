// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/NiroCAN1569.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/niro_can1569__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/niro_can1569__struct.hpp"

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
  const custom_msgs::msg::NiroCAN1569 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: yyyy
  cdr << ros_message.yyyy;
  // Member: mm
  cdr << ros_message.mm;
  // Member: dd
  cdr << ros_message.dd;
  // Member: hh
  cdr << ros_message.hh;
  // Member: nn
  cdr << ros_message.nn;
  // Member: ss
  cdr << ros_message.ss;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::NiroCAN1569 & ros_message)
{
  // Member: yyyy
  cdr >> ros_message.yyyy;

  // Member: mm
  cdr >> ros_message.mm;

  // Member: dd
  cdr >> ros_message.dd;

  // Member: hh
  cdr >> ros_message.hh;

  // Member: nn
  cdr >> ros_message.nn;

  // Member: ss
  cdr >> ros_message.ss;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::NiroCAN1569 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: yyyy
  {
    size_t item_size = sizeof(ros_message.yyyy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mm
  {
    size_t item_size = sizeof(ros_message.mm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dd
  {
    size_t item_size = sizeof(ros_message.dd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hh
  {
    size_t item_size = sizeof(ros_message.hh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nn
  {
    size_t item_size = sizeof(ros_message.nn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ss
  {
    size_t item_size = sizeof(ros_message.ss);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_NiroCAN1569(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: yyyy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: mm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: dd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: hh
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: nn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: ss
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _NiroCAN1569__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::NiroCAN1569 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NiroCAN1569__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::NiroCAN1569 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NiroCAN1569__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::NiroCAN1569 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NiroCAN1569__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NiroCAN1569(full_bounded, 0);
}

static message_type_support_callbacks_t _NiroCAN1569__callbacks = {
  "custom_msgs::msg",
  "NiroCAN1569",
  _NiroCAN1569__cdr_serialize,
  _NiroCAN1569__cdr_deserialize,
  _NiroCAN1569__get_serialized_size,
  _NiroCAN1569__max_serialized_size
};

static rosidl_message_type_support_t _NiroCAN1569__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NiroCAN1569__callbacks,
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
get_message_type_support_handle<custom_msgs::msg::NiroCAN1569>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_NiroCAN1569__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, NiroCAN1569)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_NiroCAN1569__handle;
}

#ifdef __cplusplus
}
#endif
