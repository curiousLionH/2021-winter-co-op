// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/SaveCAN1812.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_can1812__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/save_can1812__struct.hpp"

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
  const custom_msgs::msg::SaveCAN1812 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: rad_objstate
  cdr << ros_message.rad_objstate;
  // Member: rad_objlatpos
  cdr << ros_message.rad_objlatpos;
  // Member: rad_objdist
  cdr << ros_message.rad_objdist;
  // Member: rad_objrelspd
  cdr << ros_message.rad_objrelspd;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::SaveCAN1812 & ros_message)
{
  // Member: rad_objstate
  cdr >> ros_message.rad_objstate;

  // Member: rad_objlatpos
  cdr >> ros_message.rad_objlatpos;

  // Member: rad_objdist
  cdr >> ros_message.rad_objdist;

  // Member: rad_objrelspd
  cdr >> ros_message.rad_objrelspd;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::SaveCAN1812 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: rad_objstate
  {
    size_t item_size = sizeof(ros_message.rad_objstate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rad_objlatpos
  {
    size_t item_size = sizeof(ros_message.rad_objlatpos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rad_objdist
  {
    size_t item_size = sizeof(ros_message.rad_objdist);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rad_objrelspd
  {
    size_t item_size = sizeof(ros_message.rad_objrelspd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_SaveCAN1812(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: rad_objstate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rad_objlatpos
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: rad_objdist
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rad_objrelspd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SaveCAN1812__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SaveCAN1812 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SaveCAN1812__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::SaveCAN1812 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SaveCAN1812__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SaveCAN1812 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SaveCAN1812__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SaveCAN1812(full_bounded, 0);
}

static message_type_support_callbacks_t _SaveCAN1812__callbacks = {
  "custom_msgs::msg",
  "SaveCAN1812",
  _SaveCAN1812__cdr_serialize,
  _SaveCAN1812__cdr_deserialize,
  _SaveCAN1812__get_serialized_size,
  _SaveCAN1812__max_serialized_size
};

static rosidl_message_type_support_t _SaveCAN1812__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SaveCAN1812__callbacks,
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
get_message_type_support_handle<custom_msgs::msg::SaveCAN1812>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SaveCAN1812__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, SaveCAN1812)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SaveCAN1812__handle;
}

#ifdef __cplusplus
}
#endif
