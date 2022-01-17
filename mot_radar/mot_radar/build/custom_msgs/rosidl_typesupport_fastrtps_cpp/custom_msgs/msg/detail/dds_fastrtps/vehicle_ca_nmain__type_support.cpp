// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/VehicleCANmain.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/vehicle_ca_nmain__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/vehicle_ca_nmain__struct.hpp"

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
bool cdr_serialize(
  const custom_msgs::msg::SaveCAN342 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  custom_msgs::msg::SaveCAN342 &);
size_t get_serialized_size(
  const custom_msgs::msg::SaveCAN342 &,
  size_t current_alignment);
size_t
max_serialized_size_SaveCAN342(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace custom_msgs

namespace custom_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const custom_msgs::msg::SaveCAN343 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  custom_msgs::msg::SaveCAN343 &);
size_t get_serialized_size(
  const custom_msgs::msg::SaveCAN343 &,
  size_t current_alignment);
size_t
max_serialized_size_SaveCAN343(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace custom_msgs

namespace custom_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const custom_msgs::msg::SaveCAN1808 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  custom_msgs::msg::SaveCAN1808 &);
size_t get_serialized_size(
  const custom_msgs::msg::SaveCAN1808 &,
  size_t current_alignment);
size_t
max_serialized_size_SaveCAN1808(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace custom_msgs

namespace custom_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const custom_msgs::msg::SaveCAN1809 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  custom_msgs::msg::SaveCAN1809 &);
size_t get_serialized_size(
  const custom_msgs::msg::SaveCAN1809 &,
  size_t current_alignment);
size_t
max_serialized_size_SaveCAN1809(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace custom_msgs

namespace custom_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const custom_msgs::msg::SaveCAN1810 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  custom_msgs::msg::SaveCAN1810 &);
size_t get_serialized_size(
  const custom_msgs::msg::SaveCAN1810 &,
  size_t current_alignment);
size_t
max_serialized_size_SaveCAN1810(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace custom_msgs

namespace custom_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const custom_msgs::msg::SaveCAN1811 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  custom_msgs::msg::SaveCAN1811 &);
size_t get_serialized_size(
  const custom_msgs::msg::SaveCAN1811 &,
  size_t current_alignment);
size_t
max_serialized_size_SaveCAN1811(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace custom_msgs

namespace custom_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const custom_msgs::msg::SaveCAN1812 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  custom_msgs::msg::SaveCAN1812 &);
size_t get_serialized_size(
  const custom_msgs::msg::SaveCAN1812 &,
  size_t current_alignment);
size_t
max_serialized_size_SaveCAN1812(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace custom_msgs


namespace custom_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_serialize(
  const custom_msgs::msg::VehicleCANmain & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: eait_control_01
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.eait_control_01,
    cdr);
  // Member: eait_control_02
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.eait_control_02,
    cdr);
  // Member: eait_info_eps
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.eait_info_eps,
    cdr);
  // Member: eait_info_acc
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.eait_info_acc,
    cdr);
  // Member: eait_info_spd
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.eait_info_spd,
    cdr);
  // Member: eait_info_imu
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.eait_info_imu,
    cdr);
  // Member: eait_info_rad
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.eait_info_rad,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::VehicleCANmain & ros_message)
{
  // Member: eait_control_01
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.eait_control_01);

  // Member: eait_control_02
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.eait_control_02);

  // Member: eait_info_eps
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.eait_info_eps);

  // Member: eait_info_acc
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.eait_info_acc);

  // Member: eait_info_spd
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.eait_info_spd);

  // Member: eait_info_imu
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.eait_info_imu);

  // Member: eait_info_rad
  custom_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.eait_info_rad);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::VehicleCANmain & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: eait_control_01

  current_alignment +=
    custom_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.eait_control_01, current_alignment);
  // Member: eait_control_02

  current_alignment +=
    custom_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.eait_control_02, current_alignment);
  // Member: eait_info_eps

  current_alignment +=
    custom_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.eait_info_eps, current_alignment);
  // Member: eait_info_acc

  current_alignment +=
    custom_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.eait_info_acc, current_alignment);
  // Member: eait_info_spd

  current_alignment +=
    custom_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.eait_info_spd, current_alignment);
  // Member: eait_info_imu

  current_alignment +=
    custom_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.eait_info_imu, current_alignment);
  // Member: eait_info_rad

  current_alignment +=
    custom_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.eait_info_rad, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_VehicleCANmain(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: eait_control_01
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        custom_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SaveCAN342(
        full_bounded, current_alignment);
    }
  }

  // Member: eait_control_02
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        custom_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SaveCAN343(
        full_bounded, current_alignment);
    }
  }

  // Member: eait_info_eps
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        custom_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SaveCAN1808(
        full_bounded, current_alignment);
    }
  }

  // Member: eait_info_acc
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        custom_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SaveCAN1809(
        full_bounded, current_alignment);
    }
  }

  // Member: eait_info_spd
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        custom_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SaveCAN1810(
        full_bounded, current_alignment);
    }
  }

  // Member: eait_info_imu
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        custom_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SaveCAN1811(
        full_bounded, current_alignment);
    }
  }

  // Member: eait_info_rad
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        custom_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SaveCAN1812(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleCANmain__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::VehicleCANmain *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleCANmain__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::VehicleCANmain *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleCANmain__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::VehicleCANmain *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleCANmain__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleCANmain(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleCANmain__callbacks = {
  "custom_msgs::msg",
  "VehicleCANmain",
  _VehicleCANmain__cdr_serialize,
  _VehicleCANmain__cdr_deserialize,
  _VehicleCANmain__get_serialized_size,
  _VehicleCANmain__max_serialized_size
};

static rosidl_message_type_support_t _VehicleCANmain__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleCANmain__callbacks,
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
get_message_type_support_handle<custom_msgs::msg::VehicleCANmain>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_VehicleCANmain__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, VehicleCANmain)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_VehicleCANmain__handle;
}

#ifdef __cplusplus
}
#endif
