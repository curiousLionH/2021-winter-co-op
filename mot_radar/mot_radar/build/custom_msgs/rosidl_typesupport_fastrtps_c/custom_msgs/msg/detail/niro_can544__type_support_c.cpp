// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/NiroCAN544.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/niro_can544__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/niro_can544__struct.h"
#include "custom_msgs/msg/detail/niro_can544__functions.h"
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


using _NiroCAN544__ros_msg_type = custom_msgs__msg__NiroCAN544;

static bool _NiroCAN544__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NiroCAN544__ros_msg_type * ros_message = static_cast<const _NiroCAN544__ros_msg_type *>(untyped_ros_message);
  // Field name: brk21_mode_a
  {
    cdr << ros_message->brk21_mode_a;
  }

  // Field name: brk21_3_1
  {
    cdr << ros_message->brk21_3_1;
  }

  // Field name: alivecounter21
  {
    cdr << ros_message->alivecounter21;
  }

  // Field name: brk21_8_8
  {
    cdr << ros_message->brk21_8_8;
  }

  // Field name: brk21_1_16
  {
    cdr << ros_message->brk21_1_16;
  }

  // Field name: brk21_2_17
  {
    cdr << ros_message->brk21_2_17;
  }

  // Field name: brk21_3_19
  {
    cdr << ros_message->brk21_3_19;
  }

  // Field name: brk21_2_22
  {
    cdr << ros_message->brk21_2_22;
  }

  // Field name: brk21_9_24
  {
    cdr << ros_message->brk21_9_24;
  }

  // Field name: brk21_11_33
  {
    cdr << ros_message->brk21_11_33;
  }

  // Field name: brk21_12_44
  {
    cdr << ros_message->brk21_12_44;
  }

  // Field name: brk21_8_56
  {
    cdr << ros_message->brk21_8_56;
  }

  return true;
}

static bool _NiroCAN544__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NiroCAN544__ros_msg_type * ros_message = static_cast<_NiroCAN544__ros_msg_type *>(untyped_ros_message);
  // Field name: brk21_mode_a
  {
    cdr >> ros_message->brk21_mode_a;
  }

  // Field name: brk21_3_1
  {
    cdr >> ros_message->brk21_3_1;
  }

  // Field name: alivecounter21
  {
    cdr >> ros_message->alivecounter21;
  }

  // Field name: brk21_8_8
  {
    cdr >> ros_message->brk21_8_8;
  }

  // Field name: brk21_1_16
  {
    cdr >> ros_message->brk21_1_16;
  }

  // Field name: brk21_2_17
  {
    cdr >> ros_message->brk21_2_17;
  }

  // Field name: brk21_3_19
  {
    cdr >> ros_message->brk21_3_19;
  }

  // Field name: brk21_2_22
  {
    cdr >> ros_message->brk21_2_22;
  }

  // Field name: brk21_9_24
  {
    cdr >> ros_message->brk21_9_24;
  }

  // Field name: brk21_11_33
  {
    cdr >> ros_message->brk21_11_33;
  }

  // Field name: brk21_12_44
  {
    cdr >> ros_message->brk21_12_44;
  }

  // Field name: brk21_8_56
  {
    cdr >> ros_message->brk21_8_56;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__NiroCAN544(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NiroCAN544__ros_msg_type * ros_message = static_cast<const _NiroCAN544__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name brk21_mode_a
  {
    size_t item_size = sizeof(ros_message->brk21_mode_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk21_3_1
  {
    size_t item_size = sizeof(ros_message->brk21_3_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alivecounter21
  {
    size_t item_size = sizeof(ros_message->alivecounter21);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk21_8_8
  {
    size_t item_size = sizeof(ros_message->brk21_8_8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk21_1_16
  {
    size_t item_size = sizeof(ros_message->brk21_1_16);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk21_2_17
  {
    size_t item_size = sizeof(ros_message->brk21_2_17);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk21_3_19
  {
    size_t item_size = sizeof(ros_message->brk21_3_19);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk21_2_22
  {
    size_t item_size = sizeof(ros_message->brk21_2_22);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk21_9_24
  {
    size_t item_size = sizeof(ros_message->brk21_9_24);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk21_11_33
  {
    size_t item_size = sizeof(ros_message->brk21_11_33);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk21_12_44
  {
    size_t item_size = sizeof(ros_message->brk21_12_44);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk21_8_56
  {
    size_t item_size = sizeof(ros_message->brk21_8_56);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NiroCAN544__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__NiroCAN544(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__NiroCAN544(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: brk21_mode_a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk21_3_1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: alivecounter21
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk21_8_8
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk21_1_16
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk21_2_17
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk21_3_19
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk21_2_22
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk21_9_24
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk21_11_33
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk21_12_44
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk21_8_56
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _NiroCAN544__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__NiroCAN544(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NiroCAN544 = {
  "custom_msgs::msg",
  "NiroCAN544",
  _NiroCAN544__cdr_serialize,
  _NiroCAN544__cdr_deserialize,
  _NiroCAN544__get_serialized_size,
  _NiroCAN544__max_serialized_size
};

static rosidl_message_type_support_t _NiroCAN544__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NiroCAN544,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, NiroCAN544)() {
  return &_NiroCAN544__type_support;
}

#if defined(__cplusplus)
}
#endif
