// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/SaveRadarCAN257.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_radar_can257__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/save_radar_can257__struct.hpp"

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
  const custom_msgs::msg::SaveRadarCAN257 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: can_interference_type
  cdr << ros_message.can_interference_type;
  // Member: can_recommend_unconverge
  cdr << ros_message.can_recommend_unconverge;
  // Member: can_blockage_sidelobe_filter_val
  cdr << ros_message.can_blockage_sidelobe_filter_val;
  // Member: can_radar_align_incomplete
  cdr << ros_message.can_radar_align_incomplete;
  // Member: can_blockage_sidelobe
  cdr << ros_message.can_blockage_sidelobe;
  // Member: can_blockage_mnr
  cdr << ros_message.can_blockage_mnr;
  // Member: can_radar_ext_cond_nok
  cdr << ros_message.can_radar_ext_cond_nok;
  // Member: can_radar_align_out_range
  cdr << ros_message.can_radar_align_out_range;
  // Member: can_radar_align_not_start
  cdr << ros_message.can_radar_align_not_start;
  // Member: can_radar_overheat_error
  cdr << ros_message.can_radar_overheat_error;
  // Member: can_radar_not_op
  cdr << ros_message.can_radar_not_op;
  // Member: can_xcvr_operational
  cdr << ros_message.can_xcvr_operational;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::SaveRadarCAN257 & ros_message)
{
  // Member: can_interference_type
  cdr >> ros_message.can_interference_type;

  // Member: can_recommend_unconverge
  cdr >> ros_message.can_recommend_unconverge;

  // Member: can_blockage_sidelobe_filter_val
  cdr >> ros_message.can_blockage_sidelobe_filter_val;

  // Member: can_radar_align_incomplete
  cdr >> ros_message.can_radar_align_incomplete;

  // Member: can_blockage_sidelobe
  cdr >> ros_message.can_blockage_sidelobe;

  // Member: can_blockage_mnr
  cdr >> ros_message.can_blockage_mnr;

  // Member: can_radar_ext_cond_nok
  cdr >> ros_message.can_radar_ext_cond_nok;

  // Member: can_radar_align_out_range
  cdr >> ros_message.can_radar_align_out_range;

  // Member: can_radar_align_not_start
  cdr >> ros_message.can_radar_align_not_start;

  // Member: can_radar_overheat_error
  cdr >> ros_message.can_radar_overheat_error;

  // Member: can_radar_not_op
  cdr >> ros_message.can_radar_not_op;

  // Member: can_xcvr_operational
  cdr >> ros_message.can_xcvr_operational;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::SaveRadarCAN257 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: can_interference_type
  {
    size_t item_size = sizeof(ros_message.can_interference_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_recommend_unconverge
  {
    size_t item_size = sizeof(ros_message.can_recommend_unconverge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_blockage_sidelobe_filter_val
  {
    size_t item_size = sizeof(ros_message.can_blockage_sidelobe_filter_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_radar_align_incomplete
  {
    size_t item_size = sizeof(ros_message.can_radar_align_incomplete);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_blockage_sidelobe
  {
    size_t item_size = sizeof(ros_message.can_blockage_sidelobe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_blockage_mnr
  {
    size_t item_size = sizeof(ros_message.can_blockage_mnr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_radar_ext_cond_nok
  {
    size_t item_size = sizeof(ros_message.can_radar_ext_cond_nok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_radar_align_out_range
  {
    size_t item_size = sizeof(ros_message.can_radar_align_out_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_radar_align_not_start
  {
    size_t item_size = sizeof(ros_message.can_radar_align_not_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_radar_overheat_error
  {
    size_t item_size = sizeof(ros_message.can_radar_overheat_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_radar_not_op
  {
    size_t item_size = sizeof(ros_message.can_radar_not_op);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_xcvr_operational
  {
    size_t item_size = sizeof(ros_message.can_xcvr_operational);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_SaveRadarCAN257(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: can_interference_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_recommend_unconverge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_blockage_sidelobe_filter_val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_radar_align_incomplete
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_blockage_sidelobe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_blockage_mnr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_radar_ext_cond_nok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_radar_align_out_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_radar_align_not_start
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_radar_overheat_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_radar_not_op
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: can_xcvr_operational
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SaveRadarCAN257__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SaveRadarCAN257 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SaveRadarCAN257__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::SaveRadarCAN257 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SaveRadarCAN257__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SaveRadarCAN257 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SaveRadarCAN257__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SaveRadarCAN257(full_bounded, 0);
}

static message_type_support_callbacks_t _SaveRadarCAN257__callbacks = {
  "custom_msgs::msg",
  "SaveRadarCAN257",
  _SaveRadarCAN257__cdr_serialize,
  _SaveRadarCAN257__cdr_deserialize,
  _SaveRadarCAN257__get_serialized_size,
  _SaveRadarCAN257__max_serialized_size
};

static rosidl_message_type_support_t _SaveRadarCAN257__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SaveRadarCAN257__callbacks,
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
get_message_type_support_handle<custom_msgs::msg::SaveRadarCAN257>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SaveRadarCAN257__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, SaveRadarCAN257)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SaveRadarCAN257__handle;
}

#ifdef __cplusplus
}
#endif
