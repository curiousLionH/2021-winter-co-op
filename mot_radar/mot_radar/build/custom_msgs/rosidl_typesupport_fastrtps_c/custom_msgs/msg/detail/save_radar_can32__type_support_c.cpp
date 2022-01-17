// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/SaveRadarCAN32.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_radar_can32__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/save_radar_can32__struct.h"
#include "custom_msgs/msg/detail/save_radar_can32__functions.h"
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


using _SaveRadarCAN32__ros_msg_type = custom_msgs__msg__SaveRadarCAN32;

static bool _SaveRadarCAN32__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SaveRadarCAN32__ros_msg_type * ros_message = static_cast<const _SaveRadarCAN32__ros_msg_type *>(untyped_ros_message);
  // Field name: can_vehicle_stat
  {
    cdr << ros_message->can_vehicle_stat;
  }

  // Field name: can_day_night_status
  {
    cdr << ros_message->can_day_night_status;
  }

  // Field name: can_wiper_status
  {
    cdr << ros_message->can_wiper_status;
  }

  // Field name: can_yaw_rate_validity
  {
    cdr << ros_message->can_yaw_rate_validity;
  }

  // Field name: can_yaw_rate
  {
    cdr << ros_message->can_yaw_rate;
  }

  // Field name: can_vehicle_speed_validity
  {
    cdr << ros_message->can_vehicle_speed_validity;
  }

  // Field name: can_vehicle_speed_direction
  {
    cdr << ros_message->can_vehicle_speed_direction;
  }

  // Field name: can_vehicle_speed
  {
    cdr << ros_message->can_vehicle_speed;
  }

  return true;
}

static bool _SaveRadarCAN32__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SaveRadarCAN32__ros_msg_type * ros_message = static_cast<_SaveRadarCAN32__ros_msg_type *>(untyped_ros_message);
  // Field name: can_vehicle_stat
  {
    cdr >> ros_message->can_vehicle_stat;
  }

  // Field name: can_day_night_status
  {
    cdr >> ros_message->can_day_night_status;
  }

  // Field name: can_wiper_status
  {
    cdr >> ros_message->can_wiper_status;
  }

  // Field name: can_yaw_rate_validity
  {
    cdr >> ros_message->can_yaw_rate_validity;
  }

  // Field name: can_yaw_rate
  {
    cdr >> ros_message->can_yaw_rate;
  }

  // Field name: can_vehicle_speed_validity
  {
    cdr >> ros_message->can_vehicle_speed_validity;
  }

  // Field name: can_vehicle_speed_direction
  {
    cdr >> ros_message->can_vehicle_speed_direction;
  }

  // Field name: can_vehicle_speed
  {
    cdr >> ros_message->can_vehicle_speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__SaveRadarCAN32(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SaveRadarCAN32__ros_msg_type * ros_message = static_cast<const _SaveRadarCAN32__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name can_vehicle_stat
  {
    size_t item_size = sizeof(ros_message->can_vehicle_stat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_day_night_status
  {
    size_t item_size = sizeof(ros_message->can_day_night_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_wiper_status
  {
    size_t item_size = sizeof(ros_message->can_wiper_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_yaw_rate_validity
  {
    size_t item_size = sizeof(ros_message->can_yaw_rate_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_yaw_rate
  {
    size_t item_size = sizeof(ros_message->can_yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_vehicle_speed_validity
  {
    size_t item_size = sizeof(ros_message->can_vehicle_speed_validity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_vehicle_speed_direction
  {
    size_t item_size = sizeof(ros_message->can_vehicle_speed_direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_vehicle_speed
  {
    size_t item_size = sizeof(ros_message->can_vehicle_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SaveRadarCAN32__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__SaveRadarCAN32(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__SaveRadarCAN32(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: can_vehicle_stat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_day_night_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_wiper_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_yaw_rate_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_yaw_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_vehicle_speed_validity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_vehicle_speed_direction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_vehicle_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SaveRadarCAN32__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__SaveRadarCAN32(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SaveRadarCAN32 = {
  "custom_msgs::msg",
  "SaveRadarCAN32",
  _SaveRadarCAN32__cdr_serialize,
  _SaveRadarCAN32__cdr_deserialize,
  _SaveRadarCAN32__get_serialized_size,
  _SaveRadarCAN32__max_serialized_size
};

static rosidl_message_type_support_t _SaveRadarCAN32__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SaveRadarCAN32,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveRadarCAN32)() {
  return &_SaveRadarCAN32__type_support;
}

#if defined(__cplusplus)
}
#endif
