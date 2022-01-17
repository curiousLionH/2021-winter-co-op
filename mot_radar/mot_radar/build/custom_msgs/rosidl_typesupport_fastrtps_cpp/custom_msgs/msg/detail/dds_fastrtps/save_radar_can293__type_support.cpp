// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/SaveRadarCAN293.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_radar_can293__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/save_radar_can293__struct.hpp"

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
  const custom_msgs::msg::SaveRadarCAN293 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: can_det_confid_azimuth
  cdr << ros_message.can_det_confid_azimuth;
  // Member: can_det_super_res_target
  cdr << ros_message.can_det_super_res_target;
  // Member: can_det_nd_target
  cdr << ros_message.can_det_nd_target;
  // Member: can_det_host_veh_clutter
  cdr << ros_message.can_det_host_veh_clutter;
  // Member: can_det_valid_level
  cdr << ros_message.can_det_valid_level;
  // Member: can_det_azimuth
  cdr << ros_message.can_det_azimuth;
  // Member: can_det_range
  cdr << ros_message.can_det_range;
  // Member: can_det_range_rate
  cdr << ros_message.can_det_range_rate;
  // Member: can_det_amplitude
  cdr << ros_message.can_det_amplitude;
  // Member: can_scan_index_2lsb
  cdr << ros_message.can_scan_index_2lsb;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::SaveRadarCAN293 & ros_message)
{
  // Member: can_det_confid_azimuth
  cdr >> ros_message.can_det_confid_azimuth;

  // Member: can_det_super_res_target
  cdr >> ros_message.can_det_super_res_target;

  // Member: can_det_nd_target
  cdr >> ros_message.can_det_nd_target;

  // Member: can_det_host_veh_clutter
  cdr >> ros_message.can_det_host_veh_clutter;

  // Member: can_det_valid_level
  cdr >> ros_message.can_det_valid_level;

  // Member: can_det_azimuth
  cdr >> ros_message.can_det_azimuth;

  // Member: can_det_range
  cdr >> ros_message.can_det_range;

  // Member: can_det_range_rate
  cdr >> ros_message.can_det_range_rate;

  // Member: can_det_amplitude
  cdr >> ros_message.can_det_amplitude;

  // Member: can_scan_index_2lsb
  cdr >> ros_message.can_scan_index_2lsb;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::SaveRadarCAN293 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: can_det_confid_azimuth
  {
    size_t item_size = sizeof(ros_message.can_det_confid_azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_det_super_res_target
  {
    size_t item_size = sizeof(ros_message.can_det_super_res_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_det_nd_target
  {
    size_t item_size = sizeof(ros_message.can_det_nd_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_det_host_veh_clutter
  {
    size_t item_size = sizeof(ros_message.can_det_host_veh_clutter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_det_valid_level
  {
    size_t item_size = sizeof(ros_message.can_det_valid_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_det_azimuth
  {
    size_t item_size = sizeof(ros_message.can_det_azimuth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_det_range
  {
    size_t item_size = sizeof(ros_message.can_det_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_det_range_rate
  {
    size_t item_size = sizeof(ros_message.can_det_range_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_det_amplitude
  {
    size_t item_size = sizeof(ros_message.can_det_amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_scan_index_2lsb
  {
    size_t item_size = sizeof(ros_message.can_scan_index_2lsb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_SaveRadarCAN293(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: can_det_confid_azimuth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_det_super_res_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_det_nd_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_det_host_veh_clutter
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_det_valid_level
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_det_azimuth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_det_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_det_range_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_det_amplitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_scan_index_2lsb
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SaveRadarCAN293__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SaveRadarCAN293 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SaveRadarCAN293__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::SaveRadarCAN293 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SaveRadarCAN293__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SaveRadarCAN293 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SaveRadarCAN293__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SaveRadarCAN293(full_bounded, 0);
}

static message_type_support_callbacks_t _SaveRadarCAN293__callbacks = {
  "custom_msgs::msg",
  "SaveRadarCAN293",
  _SaveRadarCAN293__cdr_serialize,
  _SaveRadarCAN293__cdr_deserialize,
  _SaveRadarCAN293__get_serialized_size,
  _SaveRadarCAN293__max_serialized_size
};

static rosidl_message_type_support_t _SaveRadarCAN293__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SaveRadarCAN293__callbacks,
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
get_message_type_support_handle<custom_msgs::msg::SaveRadarCAN293>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SaveRadarCAN293__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, SaveRadarCAN293)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SaveRadarCAN293__handle;
}

#ifdef __cplusplus
}
#endif
