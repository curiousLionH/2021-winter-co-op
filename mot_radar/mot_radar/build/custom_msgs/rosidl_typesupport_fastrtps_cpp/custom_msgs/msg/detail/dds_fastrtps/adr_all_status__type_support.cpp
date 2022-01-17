// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/AdrAllStatus.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/adr_all_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/adr_all_status__struct.hpp"

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
  const custom_msgs::msg::AdrAllStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: lidar_status
  cdr << (ros_message.lidar_status ? true : false);
  // Member: ins_status
  cdr << (ros_message.ins_status ? true : false);
  // Member: acc_status
  cdr << (ros_message.acc_status ? true : false);
  // Member: eps_status
  cdr << (ros_message.eps_status ? true : false);
  // Member: safety_warning_status
  cdr << (ros_message.safety_warning_status ? true : false);
  // Member: rtk_status
  cdr << (ros_message.rtk_status ? true : false);
  // Member: lane_keeping_status
  cdr << (ros_message.lane_keeping_status ? true : false);
  // Member: local_waypoint_status
  cdr << (ros_message.local_waypoint_status ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::AdrAllStatus & ros_message)
{
  // Member: lidar_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lidar_status = tmp ? true : false;
  }

  // Member: ins_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ins_status = tmp ? true : false;
  }

  // Member: acc_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.acc_status = tmp ? true : false;
  }

  // Member: eps_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.eps_status = tmp ? true : false;
  }

  // Member: safety_warning_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.safety_warning_status = tmp ? true : false;
  }

  // Member: rtk_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rtk_status = tmp ? true : false;
  }

  // Member: lane_keeping_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lane_keeping_status = tmp ? true : false;
  }

  // Member: local_waypoint_status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_waypoint_status = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::AdrAllStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: lidar_status
  {
    size_t item_size = sizeof(ros_message.lidar_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ins_status
  {
    size_t item_size = sizeof(ros_message.ins_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_status
  {
    size_t item_size = sizeof(ros_message.acc_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eps_status
  {
    size_t item_size = sizeof(ros_message.eps_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: safety_warning_status
  {
    size_t item_size = sizeof(ros_message.safety_warning_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rtk_status
  {
    size_t item_size = sizeof(ros_message.rtk_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lane_keeping_status
  {
    size_t item_size = sizeof(ros_message.lane_keeping_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_waypoint_status
  {
    size_t item_size = sizeof(ros_message.local_waypoint_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_AdrAllStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: lidar_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ins_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acc_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eps_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: safety_warning_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rtk_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lane_keeping_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_waypoint_status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _AdrAllStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::AdrAllStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AdrAllStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::AdrAllStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AdrAllStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::AdrAllStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AdrAllStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AdrAllStatus(full_bounded, 0);
}

static message_type_support_callbacks_t _AdrAllStatus__callbacks = {
  "custom_msgs::msg",
  "AdrAllStatus",
  _AdrAllStatus__cdr_serialize,
  _AdrAllStatus__cdr_deserialize,
  _AdrAllStatus__get_serialized_size,
  _AdrAllStatus__max_serialized_size
};

static rosidl_message_type_support_t _AdrAllStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AdrAllStatus__callbacks,
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
get_message_type_support_handle<custom_msgs::msg::AdrAllStatus>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_AdrAllStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, AdrAllStatus)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_AdrAllStatus__handle;
}

#ifdef __cplusplus
}
#endif
