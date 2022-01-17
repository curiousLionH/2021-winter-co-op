// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:srv/GetBezier.idl
// generated code does not contain a copyright notice
#include "custom_msgs/srv/detail/get_bezier__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/srv/detail/get_bezier__struct.h"
#include "custom_msgs/srv/detail/get_bezier__functions.h"
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


using _GetBezier_Request__ros_msg_type = custom_msgs__srv__GetBezier_Request;

static bool _GetBezier_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBezier_Request__ros_msg_type * ros_message = static_cast<const _GetBezier_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: direction
  {
    cdr << ros_message->direction;
  }

  // Field name: distance1
  {
    cdr << ros_message->distance1;
  }

  // Field name: distance2
  {
    cdr << ros_message->distance2;
  }

  // Field name: distance3
  {
    cdr << ros_message->distance3;
  }

  return true;
}

static bool _GetBezier_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBezier_Request__ros_msg_type * ros_message = static_cast<_GetBezier_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: direction
  {
    cdr >> ros_message->direction;
  }

  // Field name: distance1
  {
    cdr >> ros_message->distance1;
  }

  // Field name: distance2
  {
    cdr >> ros_message->distance2;
  }

  // Field name: distance3
  {
    cdr >> ros_message->distance3;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__srv__GetBezier_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBezier_Request__ros_msg_type * ros_message = static_cast<const _GetBezier_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name direction
  {
    size_t item_size = sizeof(ros_message->direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance1
  {
    size_t item_size = sizeof(ros_message->distance1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance2
  {
    size_t item_size = sizeof(ros_message->distance2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name distance3
  {
    size_t item_size = sizeof(ros_message->distance3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetBezier_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__srv__GetBezier_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__srv__GetBezier_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: direction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: distance1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: distance2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: distance3
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetBezier_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__srv__GetBezier_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetBezier_Request = {
  "custom_msgs::srv",
  "GetBezier_Request",
  _GetBezier_Request__cdr_serialize,
  _GetBezier_Request__cdr_deserialize,
  _GetBezier_Request__get_serialized_size,
  _GetBezier_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetBezier_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBezier_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, srv, GetBezier_Request)() {
  return &_GetBezier_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "custom_msgs/srv/detail/get_bezier__struct.h"
// already included above
// #include "custom_msgs/srv/detail/get_bezier__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "rosidl_runtime_c/primitives_sequence.h"  // path1_x, path1_y, path2_x, path2_y, path3_x, path3_y
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // path1_x, path1_y, path2_x, path2_y, path3_x, path3_y

// forward declare type support functions


using _GetBezier_Response__ros_msg_type = custom_msgs__srv__GetBezier_Response;

static bool _GetBezier_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetBezier_Response__ros_msg_type * ros_message = static_cast<const _GetBezier_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: path1_x
  {
    size_t size = ros_message->path1_x.size;
    auto array_ptr = ros_message->path1_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: path1_y
  {
    size_t size = ros_message->path1_y.size;
    auto array_ptr = ros_message->path1_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: path2_x
  {
    size_t size = ros_message->path2_x.size;
    auto array_ptr = ros_message->path2_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: path2_y
  {
    size_t size = ros_message->path2_y.size;
    auto array_ptr = ros_message->path2_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: path3_x
  {
    size_t size = ros_message->path3_x.size;
    auto array_ptr = ros_message->path3_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: path3_y
  {
    size_t size = ros_message->path3_y.size;
    auto array_ptr = ros_message->path3_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _GetBezier_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetBezier_Response__ros_msg_type * ros_message = static_cast<_GetBezier_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: path1_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->path1_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->path1_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->path1_x, size)) {
      return "failed to create array for field 'path1_x'";
    }
    auto array_ptr = ros_message->path1_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: path1_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->path1_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->path1_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->path1_y, size)) {
      return "failed to create array for field 'path1_y'";
    }
    auto array_ptr = ros_message->path1_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: path2_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->path2_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->path2_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->path2_x, size)) {
      return "failed to create array for field 'path2_x'";
    }
    auto array_ptr = ros_message->path2_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: path2_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->path2_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->path2_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->path2_y, size)) {
      return "failed to create array for field 'path2_y'";
    }
    auto array_ptr = ros_message->path2_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: path3_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->path3_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->path3_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->path3_x, size)) {
      return "failed to create array for field 'path3_x'";
    }
    auto array_ptr = ros_message->path3_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: path3_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->path3_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->path3_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->path3_y, size)) {
      return "failed to create array for field 'path3_y'";
    }
    auto array_ptr = ros_message->path3_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__srv__GetBezier_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetBezier_Response__ros_msg_type * ros_message = static_cast<const _GetBezier_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name path1_x
  {
    size_t array_size = ros_message->path1_x.size;
    auto array_ptr = ros_message->path1_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path1_y
  {
    size_t array_size = ros_message->path1_y.size;
    auto array_ptr = ros_message->path1_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path2_x
  {
    size_t array_size = ros_message->path2_x.size;
    auto array_ptr = ros_message->path2_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path2_y
  {
    size_t array_size = ros_message->path2_y.size;
    auto array_ptr = ros_message->path2_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path3_x
  {
    size_t array_size = ros_message->path3_x.size;
    auto array_ptr = ros_message->path3_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name path3_y
  {
    size_t array_size = ros_message->path3_y.size;
    auto array_ptr = ros_message->path3_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetBezier_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__srv__GetBezier_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__srv__GetBezier_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: path1_x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: path1_y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: path2_x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: path2_y
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: path3_x
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: path3_y
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

static size_t _GetBezier_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__srv__GetBezier_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetBezier_Response = {
  "custom_msgs::srv",
  "GetBezier_Response",
  _GetBezier_Response__cdr_serialize,
  _GetBezier_Response__cdr_deserialize,
  _GetBezier_Response__get_serialized_size,
  _GetBezier_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetBezier_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetBezier_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, srv, GetBezier_Response)() {
  return &_GetBezier_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/srv/get_bezier.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetBezier__callbacks = {
  "custom_msgs::srv",
  "GetBezier",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, srv, GetBezier_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, srv, GetBezier_Response)(),
};

static rosidl_service_type_support_t GetBezier__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetBezier__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, srv, GetBezier)() {
  return &GetBezier__handle;
}

#if defined(__cplusplus)
}
#endif
