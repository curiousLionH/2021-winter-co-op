// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/VehicleControlIn.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/vehicle_control_in__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/vehicle_control_in__struct.h"
#include "custom_msgs/msg/detail/vehicle_control_in__functions.h"
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


using _VehicleControlIn__ros_msg_type = custom_msgs__msg__VehicleControlIn;

static bool _VehicleControlIn__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleControlIn__ros_msg_type * ros_message = static_cast<const _VehicleControlIn__ros_msg_type *>(untyped_ros_message);
  // Field name: sw
  {
    cdr << ros_message->sw;
  }

  // Field name: ax
  {
    cdr << ros_message->ax;
  }

  // Field name: steer_ang
  {
    cdr << ros_message->steer_ang;
  }

  // Field name: gear_no
  {
    cdr << ros_message->gear_no;
  }

  return true;
}

static bool _VehicleControlIn__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleControlIn__ros_msg_type * ros_message = static_cast<_VehicleControlIn__ros_msg_type *>(untyped_ros_message);
  // Field name: sw
  {
    cdr >> ros_message->sw;
  }

  // Field name: ax
  {
    cdr >> ros_message->ax;
  }

  // Field name: steer_ang
  {
    cdr >> ros_message->steer_ang;
  }

  // Field name: gear_no
  {
    cdr >> ros_message->gear_no;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__VehicleControlIn(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleControlIn__ros_msg_type * ros_message = static_cast<const _VehicleControlIn__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sw
  {
    size_t item_size = sizeof(ros_message->sw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ax
  {
    size_t item_size = sizeof(ros_message->ax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_ang
  {
    size_t item_size = sizeof(ros_message->steer_ang);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_no
  {
    size_t item_size = sizeof(ros_message->gear_no);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleControlIn__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__VehicleControlIn(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__VehicleControlIn(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: steer_ang
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: gear_no
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleControlIn__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__VehicleControlIn(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleControlIn = {
  "custom_msgs::msg",
  "VehicleControlIn",
  _VehicleControlIn__cdr_serialize,
  _VehicleControlIn__cdr_deserialize,
  _VehicleControlIn__get_serialized_size,
  _VehicleControlIn__max_serialized_size
};

static rosidl_message_type_support_t _VehicleControlIn__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleControlIn,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, VehicleControlIn)() {
  return &_VehicleControlIn__type_support;
}

#if defined(__cplusplus)
}
#endif
