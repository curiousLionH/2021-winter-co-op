// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/SaveRadarCAN257.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_radar_can257__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/save_radar_can257__struct.h"
#include "custom_msgs/msg/detail/save_radar_can257__functions.h"
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


using _SaveRadarCAN257__ros_msg_type = custom_msgs__msg__SaveRadarCAN257;

static bool _SaveRadarCAN257__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SaveRadarCAN257__ros_msg_type * ros_message = static_cast<const _SaveRadarCAN257__ros_msg_type *>(untyped_ros_message);
  // Field name: can_interference_type
  {
    cdr << ros_message->can_interference_type;
  }

  // Field name: can_recommend_unconverge
  {
    cdr << ros_message->can_recommend_unconverge;
  }

  // Field name: can_blockage_sidelobe_filter_val
  {
    cdr << ros_message->can_blockage_sidelobe_filter_val;
  }

  // Field name: can_radar_align_incomplete
  {
    cdr << ros_message->can_radar_align_incomplete;
  }

  // Field name: can_blockage_sidelobe
  {
    cdr << ros_message->can_blockage_sidelobe;
  }

  // Field name: can_blockage_mnr
  {
    cdr << ros_message->can_blockage_mnr;
  }

  // Field name: can_radar_ext_cond_nok
  {
    cdr << ros_message->can_radar_ext_cond_nok;
  }

  // Field name: can_radar_align_out_range
  {
    cdr << ros_message->can_radar_align_out_range;
  }

  // Field name: can_radar_align_not_start
  {
    cdr << ros_message->can_radar_align_not_start;
  }

  // Field name: can_radar_overheat_error
  {
    cdr << ros_message->can_radar_overheat_error;
  }

  // Field name: can_radar_not_op
  {
    cdr << ros_message->can_radar_not_op;
  }

  // Field name: can_xcvr_operational
  {
    cdr << ros_message->can_xcvr_operational;
  }

  return true;
}

static bool _SaveRadarCAN257__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SaveRadarCAN257__ros_msg_type * ros_message = static_cast<_SaveRadarCAN257__ros_msg_type *>(untyped_ros_message);
  // Field name: can_interference_type
  {
    cdr >> ros_message->can_interference_type;
  }

  // Field name: can_recommend_unconverge
  {
    cdr >> ros_message->can_recommend_unconverge;
  }

  // Field name: can_blockage_sidelobe_filter_val
  {
    cdr >> ros_message->can_blockage_sidelobe_filter_val;
  }

  // Field name: can_radar_align_incomplete
  {
    cdr >> ros_message->can_radar_align_incomplete;
  }

  // Field name: can_blockage_sidelobe
  {
    cdr >> ros_message->can_blockage_sidelobe;
  }

  // Field name: can_blockage_mnr
  {
    cdr >> ros_message->can_blockage_mnr;
  }

  // Field name: can_radar_ext_cond_nok
  {
    cdr >> ros_message->can_radar_ext_cond_nok;
  }

  // Field name: can_radar_align_out_range
  {
    cdr >> ros_message->can_radar_align_out_range;
  }

  // Field name: can_radar_align_not_start
  {
    cdr >> ros_message->can_radar_align_not_start;
  }

  // Field name: can_radar_overheat_error
  {
    cdr >> ros_message->can_radar_overheat_error;
  }

  // Field name: can_radar_not_op
  {
    cdr >> ros_message->can_radar_not_op;
  }

  // Field name: can_xcvr_operational
  {
    cdr >> ros_message->can_xcvr_operational;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__SaveRadarCAN257(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SaveRadarCAN257__ros_msg_type * ros_message = static_cast<const _SaveRadarCAN257__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name can_interference_type
  {
    size_t item_size = sizeof(ros_message->can_interference_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_recommend_unconverge
  {
    size_t item_size = sizeof(ros_message->can_recommend_unconverge);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_blockage_sidelobe_filter_val
  {
    size_t item_size = sizeof(ros_message->can_blockage_sidelobe_filter_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_radar_align_incomplete
  {
    size_t item_size = sizeof(ros_message->can_radar_align_incomplete);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_blockage_sidelobe
  {
    size_t item_size = sizeof(ros_message->can_blockage_sidelobe);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_blockage_mnr
  {
    size_t item_size = sizeof(ros_message->can_blockage_mnr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_radar_ext_cond_nok
  {
    size_t item_size = sizeof(ros_message->can_radar_ext_cond_nok);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_radar_align_out_range
  {
    size_t item_size = sizeof(ros_message->can_radar_align_out_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_radar_align_not_start
  {
    size_t item_size = sizeof(ros_message->can_radar_align_not_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_radar_overheat_error
  {
    size_t item_size = sizeof(ros_message->can_radar_overheat_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_radar_not_op
  {
    size_t item_size = sizeof(ros_message->can_radar_not_op);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_xcvr_operational
  {
    size_t item_size = sizeof(ros_message->can_xcvr_operational);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SaveRadarCAN257__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__SaveRadarCAN257(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__SaveRadarCAN257(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: can_interference_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_recommend_unconverge
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_blockage_sidelobe_filter_val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_radar_align_incomplete
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_blockage_sidelobe
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_blockage_mnr
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_radar_ext_cond_nok
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_radar_align_out_range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_radar_align_not_start
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_radar_overheat_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_radar_not_op
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: can_xcvr_operational
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SaveRadarCAN257__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__SaveRadarCAN257(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SaveRadarCAN257 = {
  "custom_msgs::msg",
  "SaveRadarCAN257",
  _SaveRadarCAN257__cdr_serialize,
  _SaveRadarCAN257__cdr_deserialize,
  _SaveRadarCAN257__get_serialized_size,
  _SaveRadarCAN257__max_serialized_size
};

static rosidl_message_type_support_t _SaveRadarCAN257__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SaveRadarCAN257,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveRadarCAN257)() {
  return &_SaveRadarCAN257__type_support;
}

#if defined(__cplusplus)
}
#endif
