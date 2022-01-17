// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/SpList.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/sp_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/sp_list__struct.h"
#include "custom_msgs/msg/detail/sp_list__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // x_sp, x_sp_eps, y_sp, y_sp_eps
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // x_sp, x_sp_eps, y_sp, y_sp_eps

// forward declare type support functions


using _SpList__ros_msg_type = custom_msgs__msg__SpList;

static bool _SpList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpList__ros_msg_type * ros_message = static_cast<const _SpList__ros_msg_type *>(untyped_ros_message);
  // Field name: x_sp
  {
    size_t size = ros_message->x_sp.size;
    auto array_ptr = ros_message->x_sp.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: x_sp_eps
  {
    size_t size = ros_message->x_sp_eps.size;
    auto array_ptr = ros_message->x_sp_eps.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: y_sp
  {
    size_t size = ros_message->y_sp.size;
    auto array_ptr = ros_message->y_sp.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: y_sp_eps
  {
    size_t size = ros_message->y_sp_eps.size;
    auto array_ptr = ros_message->y_sp_eps.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _SpList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpList__ros_msg_type * ros_message = static_cast<_SpList__ros_msg_type *>(untyped_ros_message);
  // Field name: x_sp
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_sp.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->x_sp);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->x_sp, size)) {
      return "failed to create array for field 'x_sp'";
    }
    auto array_ptr = ros_message->x_sp.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: x_sp_eps
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->x_sp_eps.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->x_sp_eps);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->x_sp_eps, size)) {
      return "failed to create array for field 'x_sp_eps'";
    }
    auto array_ptr = ros_message->x_sp_eps.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: y_sp
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y_sp.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->y_sp);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->y_sp, size)) {
      return "failed to create array for field 'y_sp'";
    }
    auto array_ptr = ros_message->y_sp.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: y_sp_eps
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->y_sp_eps.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->y_sp_eps);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->y_sp_eps, size)) {
      return "failed to create array for field 'y_sp_eps'";
    }
    auto array_ptr = ros_message->y_sp_eps.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__SpList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpList__ros_msg_type * ros_message = static_cast<const _SpList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_sp
  {
    size_t array_size = ros_message->x_sp.size;
    auto array_ptr = ros_message->x_sp.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_sp_eps
  {
    size_t array_size = ros_message->x_sp_eps.size;
    auto array_ptr = ros_message->x_sp_eps.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_sp
  {
    size_t array_size = ros_message->y_sp.size;
    auto array_ptr = ros_message->y_sp.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_sp_eps
  {
    size_t array_size = ros_message->y_sp_eps.size;
    auto array_ptr = ros_message->y_sp_eps.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SpList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__SpList(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__SpList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x_sp
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x_sp_eps
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_sp
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_sp_eps
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

static size_t _SpList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__SpList(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SpList = {
  "custom_msgs::msg",
  "SpList",
  _SpList__cdr_serialize,
  _SpList__cdr_deserialize,
  _SpList__get_serialized_size,
  _SpList__max_serialized_size
};

static rosidl_message_type_support_t _SpList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpList,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SpList)() {
  return &_SpList__type_support;
}

#if defined(__cplusplus)
}
#endif
