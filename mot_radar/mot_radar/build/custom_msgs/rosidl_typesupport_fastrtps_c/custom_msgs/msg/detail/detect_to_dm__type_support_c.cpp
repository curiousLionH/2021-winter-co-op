// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/DetectToDM.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/detect_to_dm__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/detect_to_dm__struct.h"
#include "custom_msgs/msg/detail/detect_to_dm__functions.h"
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

#include "custom_msgs/msg/detail/object__functions.h"  // objects_cur, objects_inter, objects_inter_left, objects_left, objects_right

// forward declare type support functions
size_t get_serialized_size_custom_msgs__msg__Object(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_msgs__msg__Object(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object)();


using _DetectToDM__ros_msg_type = custom_msgs__msg__DetectToDM;

static bool _DetectToDM__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DetectToDM__ros_msg_type * ros_message = static_cast<const _DetectToDM__ros_msg_type *>(untyped_ros_message);
  // Field name: objects_cur
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    size_t size = ros_message->objects_cur.size;
    auto array_ptr = ros_message->objects_cur.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: objects_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    size_t size = ros_message->objects_left.size;
    auto array_ptr = ros_message->objects_left.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: objects_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    size_t size = ros_message->objects_right.size;
    auto array_ptr = ros_message->objects_right.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: objects_inter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    size_t size = ros_message->objects_inter.size;
    auto array_ptr = ros_message->objects_inter.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: objects_inter_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    size_t size = ros_message->objects_inter_left.size;
    auto array_ptr = ros_message->objects_inter_left.data;
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

static bool _DetectToDM__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DetectToDM__ros_msg_type * ros_message = static_cast<_DetectToDM__ros_msg_type *>(untyped_ros_message);
  // Field name: objects_cur
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->objects_cur.data) {
      custom_msgs__msg__Object__Sequence__fini(&ros_message->objects_cur);
    }
    if (!custom_msgs__msg__Object__Sequence__init(&ros_message->objects_cur, size)) {
      return "failed to create array for field 'objects_cur'";
    }
    auto array_ptr = ros_message->objects_cur.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: objects_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->objects_left.data) {
      custom_msgs__msg__Object__Sequence__fini(&ros_message->objects_left);
    }
    if (!custom_msgs__msg__Object__Sequence__init(&ros_message->objects_left, size)) {
      return "failed to create array for field 'objects_left'";
    }
    auto array_ptr = ros_message->objects_left.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: objects_right
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->objects_right.data) {
      custom_msgs__msg__Object__Sequence__fini(&ros_message->objects_right);
    }
    if (!custom_msgs__msg__Object__Sequence__init(&ros_message->objects_right, size)) {
      return "failed to create array for field 'objects_right'";
    }
    auto array_ptr = ros_message->objects_right.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: objects_inter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->objects_inter.data) {
      custom_msgs__msg__Object__Sequence__fini(&ros_message->objects_inter);
    }
    if (!custom_msgs__msg__Object__Sequence__init(&ros_message->objects_inter, size)) {
      return "failed to create array for field 'objects_inter'";
    }
    auto array_ptr = ros_message->objects_inter.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: objects_inter_left
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->objects_inter_left.data) {
      custom_msgs__msg__Object__Sequence__fini(&ros_message->objects_inter_left);
    }
    if (!custom_msgs__msg__Object__Sequence__init(&ros_message->objects_inter_left, size)) {
      return "failed to create array for field 'objects_inter_left'";
    }
    auto array_ptr = ros_message->objects_inter_left.data;
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
size_t get_serialized_size_custom_msgs__msg__DetectToDM(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetectToDM__ros_msg_type * ros_message = static_cast<const _DetectToDM__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name objects_cur
  {
    size_t array_size = ros_message->objects_cur.size;
    auto array_ptr = ros_message->objects_cur.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_custom_msgs__msg__Object(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name objects_left
  {
    size_t array_size = ros_message->objects_left.size;
    auto array_ptr = ros_message->objects_left.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_custom_msgs__msg__Object(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name objects_right
  {
    size_t array_size = ros_message->objects_right.size;
    auto array_ptr = ros_message->objects_right.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_custom_msgs__msg__Object(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name objects_inter
  {
    size_t array_size = ros_message->objects_inter.size;
    auto array_ptr = ros_message->objects_inter.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_custom_msgs__msg__Object(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name objects_inter_left
  {
    size_t array_size = ros_message->objects_inter_left.size;
    auto array_ptr = ros_message->objects_inter_left.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_custom_msgs__msg__Object(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DetectToDM__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__DetectToDM(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__DetectToDM(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: objects_cur
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: objects_left
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: objects_right
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: objects_inter
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: objects_inter_left
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _DetectToDM__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__DetectToDM(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_DetectToDM = {
  "custom_msgs::msg",
  "DetectToDM",
  _DetectToDM__cdr_serialize,
  _DetectToDM__cdr_deserialize,
  _DetectToDM__get_serialized_size,
  _DetectToDM__max_serialized_size
};

static rosidl_message_type_support_t _DetectToDM__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetectToDM,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, DetectToDM)() {
  return &_DetectToDM__type_support;
}

#if defined(__cplusplus)
}
#endif
