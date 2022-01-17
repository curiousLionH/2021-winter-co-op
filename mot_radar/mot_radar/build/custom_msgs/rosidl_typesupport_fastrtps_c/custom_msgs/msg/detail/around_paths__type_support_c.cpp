// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/AroundPaths.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/around_paths__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/around_paths__struct.h"
#include "custom_msgs/msg/detail/around_paths__functions.h"
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

#include "custom_msgs/msg/detail/paths__functions.h"  // left_lanes, right_lanes

// forward declare type support functions
size_t get_serialized_size_custom_msgs__msg__Paths(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_msgs__msg__Paths(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, Paths)();


using _AroundPaths__ros_msg_type = custom_msgs__msg__AroundPaths;

static bool _AroundPaths__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AroundPaths__ros_msg_type * ros_message = static_cast<const _AroundPaths__ros_msg_type *>(untyped_ros_message);
  // Field name: left_lane
  {
    cdr << ros_message->left_lane;
  }

  // Field name: right_lane
  {
    cdr << ros_message->right_lane;
  }

  // Field name: left_lanes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Paths
      )()->data);
    size_t size = ros_message->left_lanes.size;
    auto array_ptr = ros_message->left_lanes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: right_lanes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Paths
      )()->data);
    size_t size = ros_message->right_lanes.size;
    auto array_ptr = ros_message->right_lanes.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _AroundPaths__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AroundPaths__ros_msg_type * ros_message = static_cast<_AroundPaths__ros_msg_type *>(untyped_ros_message);
  // Field name: left_lane
  {
    cdr >> ros_message->left_lane;
  }

  // Field name: right_lane
  {
    cdr >> ros_message->right_lane;
  }

  // Field name: left_lanes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Paths
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->left_lanes.data) {
      custom_msgs__msg__Paths__Sequence__fini(&ros_message->left_lanes);
    }
    if (!custom_msgs__msg__Paths__Sequence__init(&ros_message->left_lanes, size)) {
      return "failed to create array for field 'left_lanes'";
    }
    auto array_ptr = ros_message->left_lanes.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: right_lanes
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Paths
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->right_lanes.data) {
      custom_msgs__msg__Paths__Sequence__fini(&ros_message->right_lanes);
    }
    if (!custom_msgs__msg__Paths__Sequence__init(&ros_message->right_lanes, size)) {
      return "failed to create array for field 'right_lanes'";
    }
    auto array_ptr = ros_message->right_lanes.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__AroundPaths(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AroundPaths__ros_msg_type * ros_message = static_cast<const _AroundPaths__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left_lane
  {
    size_t item_size = sizeof(ros_message->left_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right_lane
  {
    size_t item_size = sizeof(ros_message->right_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name left_lanes
  {
    size_t array_size = ros_message->left_lanes.size;
    auto array_ptr = ros_message->left_lanes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_custom_msgs__msg__Paths(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name right_lanes
  {
    size_t array_size = ros_message->right_lanes.size;
    auto array_ptr = ros_message->right_lanes.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_custom_msgs__msg__Paths(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AroundPaths__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__AroundPaths(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__AroundPaths(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: left_lane
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: right_lane
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: left_lanes
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Paths(
        full_bounded, current_alignment);
    }
  }
  // member: right_lanes
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Paths(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _AroundPaths__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__AroundPaths(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AroundPaths = {
  "custom_msgs::msg",
  "AroundPaths",
  _AroundPaths__cdr_serialize,
  _AroundPaths__cdr_deserialize,
  _AroundPaths__get_serialized_size,
  _AroundPaths__max_serialized_size
};

static rosidl_message_type_support_t _AroundPaths__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AroundPaths,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, AroundPaths)() {
  return &_AroundPaths__type_support;
}

#if defined(__cplusplus)
}
#endif
