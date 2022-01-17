// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/AdrAllStatus.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/adr_all_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/adr_all_status__struct.h"
#include "custom_msgs/msg/detail/adr_all_status__functions.h"
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


using _AdrAllStatus__ros_msg_type = custom_msgs__msg__AdrAllStatus;

static bool _AdrAllStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AdrAllStatus__ros_msg_type * ros_message = static_cast<const _AdrAllStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: lidar_status
  {
    cdr << (ros_message->lidar_status ? true : false);
  }

  // Field name: ins_status
  {
    cdr << (ros_message->ins_status ? true : false);
  }

  // Field name: acc_status
  {
    cdr << (ros_message->acc_status ? true : false);
  }

  // Field name: eps_status
  {
    cdr << (ros_message->eps_status ? true : false);
  }

  // Field name: safety_warning_status
  {
    cdr << (ros_message->safety_warning_status ? true : false);
  }

  // Field name: rtk_status
  {
    cdr << (ros_message->rtk_status ? true : false);
  }

  // Field name: lane_keeping_status
  {
    cdr << (ros_message->lane_keeping_status ? true : false);
  }

  // Field name: local_waypoint_status
  {
    cdr << (ros_message->local_waypoint_status ? true : false);
  }

  return true;
}

static bool _AdrAllStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AdrAllStatus__ros_msg_type * ros_message = static_cast<_AdrAllStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: lidar_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lidar_status = tmp ? true : false;
  }

  // Field name: ins_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ins_status = tmp ? true : false;
  }

  // Field name: acc_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->acc_status = tmp ? true : false;
  }

  // Field name: eps_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->eps_status = tmp ? true : false;
  }

  // Field name: safety_warning_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->safety_warning_status = tmp ? true : false;
  }

  // Field name: rtk_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rtk_status = tmp ? true : false;
  }

  // Field name: lane_keeping_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lane_keeping_status = tmp ? true : false;
  }

  // Field name: local_waypoint_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_waypoint_status = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__AdrAllStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AdrAllStatus__ros_msg_type * ros_message = static_cast<const _AdrAllStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lidar_status
  {
    size_t item_size = sizeof(ros_message->lidar_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ins_status
  {
    size_t item_size = sizeof(ros_message->ins_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acc_status
  {
    size_t item_size = sizeof(ros_message->acc_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eps_status
  {
    size_t item_size = sizeof(ros_message->eps_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name safety_warning_status
  {
    size_t item_size = sizeof(ros_message->safety_warning_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rtk_status
  {
    size_t item_size = sizeof(ros_message->rtk_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lane_keeping_status
  {
    size_t item_size = sizeof(ros_message->lane_keeping_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_waypoint_status
  {
    size_t item_size = sizeof(ros_message->local_waypoint_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _AdrAllStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__AdrAllStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__AdrAllStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: lidar_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ins_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acc_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eps_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: safety_warning_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rtk_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lane_keeping_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_waypoint_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _AdrAllStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__AdrAllStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AdrAllStatus = {
  "custom_msgs::msg",
  "AdrAllStatus",
  _AdrAllStatus__cdr_serialize,
  _AdrAllStatus__cdr_deserialize,
  _AdrAllStatus__get_serialized_size,
  _AdrAllStatus__max_serialized_size
};

static rosidl_message_type_support_t _AdrAllStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AdrAllStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, AdrAllStatus)() {
  return &_AdrAllStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
