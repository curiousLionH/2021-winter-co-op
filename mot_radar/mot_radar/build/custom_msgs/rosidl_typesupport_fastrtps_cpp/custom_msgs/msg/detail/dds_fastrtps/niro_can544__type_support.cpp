// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/NiroCAN544.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/niro_can544__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/niro_can544__struct.hpp"

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
  const custom_msgs::msg::NiroCAN544 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: brk21_mode_a
  cdr << ros_message.brk21_mode_a;
  // Member: brk21_3_1
  cdr << ros_message.brk21_3_1;
  // Member: alivecounter21
  cdr << ros_message.alivecounter21;
  // Member: brk21_8_8
  cdr << ros_message.brk21_8_8;
  // Member: brk21_1_16
  cdr << ros_message.brk21_1_16;
  // Member: brk21_2_17
  cdr << ros_message.brk21_2_17;
  // Member: brk21_3_19
  cdr << ros_message.brk21_3_19;
  // Member: brk21_2_22
  cdr << ros_message.brk21_2_22;
  // Member: brk21_9_24
  cdr << ros_message.brk21_9_24;
  // Member: brk21_11_33
  cdr << ros_message.brk21_11_33;
  // Member: brk21_12_44
  cdr << ros_message.brk21_12_44;
  // Member: brk21_8_56
  cdr << ros_message.brk21_8_56;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::NiroCAN544 & ros_message)
{
  // Member: brk21_mode_a
  cdr >> ros_message.brk21_mode_a;

  // Member: brk21_3_1
  cdr >> ros_message.brk21_3_1;

  // Member: alivecounter21
  cdr >> ros_message.alivecounter21;

  // Member: brk21_8_8
  cdr >> ros_message.brk21_8_8;

  // Member: brk21_1_16
  cdr >> ros_message.brk21_1_16;

  // Member: brk21_2_17
  cdr >> ros_message.brk21_2_17;

  // Member: brk21_3_19
  cdr >> ros_message.brk21_3_19;

  // Member: brk21_2_22
  cdr >> ros_message.brk21_2_22;

  // Member: brk21_9_24
  cdr >> ros_message.brk21_9_24;

  // Member: brk21_11_33
  cdr >> ros_message.brk21_11_33;

  // Member: brk21_12_44
  cdr >> ros_message.brk21_12_44;

  // Member: brk21_8_56
  cdr >> ros_message.brk21_8_56;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::NiroCAN544 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: brk21_mode_a
  {
    size_t item_size = sizeof(ros_message.brk21_mode_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk21_3_1
  {
    size_t item_size = sizeof(ros_message.brk21_3_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alivecounter21
  {
    size_t item_size = sizeof(ros_message.alivecounter21);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk21_8_8
  {
    size_t item_size = sizeof(ros_message.brk21_8_8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk21_1_16
  {
    size_t item_size = sizeof(ros_message.brk21_1_16);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk21_2_17
  {
    size_t item_size = sizeof(ros_message.brk21_2_17);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk21_3_19
  {
    size_t item_size = sizeof(ros_message.brk21_3_19);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk21_2_22
  {
    size_t item_size = sizeof(ros_message.brk21_2_22);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk21_9_24
  {
    size_t item_size = sizeof(ros_message.brk21_9_24);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk21_11_33
  {
    size_t item_size = sizeof(ros_message.brk21_11_33);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk21_12_44
  {
    size_t item_size = sizeof(ros_message.brk21_12_44);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk21_8_56
  {
    size_t item_size = sizeof(ros_message.brk21_8_56);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_NiroCAN544(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: brk21_mode_a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk21_3_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: alivecounter21
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk21_8_8
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk21_1_16
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk21_2_17
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk21_3_19
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk21_2_22
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk21_9_24
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk21_11_33
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk21_12_44
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk21_8_56
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _NiroCAN544__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::NiroCAN544 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NiroCAN544__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::NiroCAN544 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NiroCAN544__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::NiroCAN544 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NiroCAN544__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_NiroCAN544(full_bounded, 0);
}

static message_type_support_callbacks_t _NiroCAN544__callbacks = {
  "custom_msgs::msg",
  "NiroCAN544",
  _NiroCAN544__cdr_serialize,
  _NiroCAN544__cdr_deserialize,
  _NiroCAN544__get_serialized_size,
  _NiroCAN544__max_serialized_size
};

static rosidl_message_type_support_t _NiroCAN544__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NiroCAN544__callbacks,
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
get_message_type_support_handle<custom_msgs::msg::NiroCAN544>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_NiroCAN544__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, NiroCAN544)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_NiroCAN544__handle;
}

#ifdef __cplusplus
}
#endif
