// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/CurveFit.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/curve_fit__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/curve_fit__struct.h"
#include "custom_msgs/msg/detail/curve_fit__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // left_x, left_y, right_x, right_y
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // left_x, left_y, right_x, right_y

// forward declare type support functions


using _CurveFit__ros_msg_type = custom_msgs__msg__CurveFit;

static bool _CurveFit__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CurveFit__ros_msg_type * ros_message = static_cast<const _CurveFit__ros_msg_type *>(untyped_ros_message);
  // Field name: left_x
  {
    size_t size = ros_message->left_x.size;
    auto array_ptr = ros_message->left_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: left_y
  {
    size_t size = ros_message->left_y.size;
    auto array_ptr = ros_message->left_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: right_x
  {
    size_t size = ros_message->right_x.size;
    auto array_ptr = ros_message->right_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: right_y
  {
    size_t size = ros_message->right_y.size;
    auto array_ptr = ros_message->right_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CurveFit__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CurveFit__ros_msg_type * ros_message = static_cast<_CurveFit__ros_msg_type *>(untyped_ros_message);
  // Field name: left_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->left_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->left_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->left_x, size)) {
      return "failed to create array for field 'left_x'";
    }
    auto array_ptr = ros_message->left_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: left_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->left_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->left_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->left_y, size)) {
      return "failed to create array for field 'left_y'";
    }
    auto array_ptr = ros_message->left_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: right_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->right_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->right_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->right_x, size)) {
      return "failed to create array for field 'right_x'";
    }
    auto array_ptr = ros_message->right_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: right_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->right_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->right_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->right_y, size)) {
      return "failed to create array for field 'right_y'";
    }
    auto array_ptr = ros_message->right_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__CurveFit(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CurveFit__ros_msg_type * ros_message = static_cast<const _CurveFit__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_x
  {
    size_t array_size = ros_message->left_x.size;
    auto array_ptr = ros_message->left_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_y
  {
    size_t array_size = ros_message->left_y.size;
    auto array_ptr = ros_message->left_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_x
  {
    size_t array_size = ros_message->right_x.size;
    auto array_ptr = ros_message->right_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_y
  {
    size_t array_size = ros_message->right_y.size;
    auto array_ptr = ros_message->right_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CurveFit__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__CurveFit(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__CurveFit(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: left_x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: left_y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: right_y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CurveFit__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__CurveFit(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_CurveFit = {
  "custom_msgs::msg",
  "CurveFit",
  _CurveFit__cdr_serialize,
  _CurveFit__cdr_deserialize,
  _CurveFit__get_serialized_size,
  _CurveFit__max_serialized_size
};

static rosidl_message_type_support_t _CurveFit__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CurveFit,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, CurveFit)() {
  return &_CurveFit__type_support;
}

#if defined(__cplusplus)
}
#endif
