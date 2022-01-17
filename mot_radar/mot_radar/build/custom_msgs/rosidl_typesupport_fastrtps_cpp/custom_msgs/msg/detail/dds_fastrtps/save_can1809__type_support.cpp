// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/SaveCAN1809.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_can1809__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/save_can1809__struct.hpp"

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
  const custom_msgs::msg::SaveCAN1809 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: acc_en_status
  cdr << ros_message.acc_en_status;
  // Member: acc_control_board_status
  cdr << ros_message.acc_control_board_status;
  // Member: acc_user_can_err
  cdr << ros_message.acc_user_can_err;
  // Member: acc_veh_err
  cdr << ros_message.acc_veh_err;
  // Member: acc_err
  cdr << ros_message.acc_err;
  // Member: acc_control_status
  cdr << ros_message.acc_control_status;
  // Member: vs
  cdr << ros_message.vs;
  // Member: bsd_right
  cdr << ros_message.bsd_right;
  // Member: bsd_left
  cdr << ros_message.bsd_left;
  // Member: long_accel
  cdr << ros_message.long_accel;
  // Member: turn_right_en
  cdr << ros_message.turn_right_en;
  // Member: hazard_en
  cdr << ros_message.hazard_en;
  // Member: turn_left_en
  cdr << ros_message.turn_left_en;
  // Member: aeb_act
  cdr << (ros_message.aeb_act ? true : false);
  // Member: g_sel_disp
  cdr << ros_message.g_sel_disp;
  // Member: acc_alive_cnt
  cdr << ros_message.acc_alive_cnt;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::SaveCAN1809 & ros_message)
{
  // Member: acc_en_status
  cdr >> ros_message.acc_en_status;

  // Member: acc_control_board_status
  cdr >> ros_message.acc_control_board_status;

  // Member: acc_user_can_err
  cdr >> ros_message.acc_user_can_err;

  // Member: acc_veh_err
  cdr >> ros_message.acc_veh_err;

  // Member: acc_err
  cdr >> ros_message.acc_err;

  // Member: acc_control_status
  cdr >> ros_message.acc_control_status;

  // Member: vs
  cdr >> ros_message.vs;

  // Member: bsd_right
  cdr >> ros_message.bsd_right;

  // Member: bsd_left
  cdr >> ros_message.bsd_left;

  // Member: long_accel
  cdr >> ros_message.long_accel;

  // Member: turn_right_en
  cdr >> ros_message.turn_right_en;

  // Member: hazard_en
  cdr >> ros_message.hazard_en;

  // Member: turn_left_en
  cdr >> ros_message.turn_left_en;

  // Member: aeb_act
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.aeb_act = tmp ? true : false;
  }

  // Member: g_sel_disp
  cdr >> ros_message.g_sel_disp;

  // Member: acc_alive_cnt
  cdr >> ros_message.acc_alive_cnt;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::SaveCAN1809 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: acc_en_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.acc_en_status.size() + 1);
  // Member: acc_control_board_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.acc_control_board_status.size() + 1);
  // Member: acc_user_can_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.acc_user_can_err.size() + 1);
  // Member: acc_veh_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.acc_veh_err.size() + 1);
  // Member: acc_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.acc_err.size() + 1);
  // Member: acc_control_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.acc_control_status.size() + 1);
  // Member: vs
  {
    size_t item_size = sizeof(ros_message.vs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bsd_right
  {
    size_t item_size = sizeof(ros_message.bsd_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bsd_left
  {
    size_t item_size = sizeof(ros_message.bsd_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: long_accel
  {
    size_t item_size = sizeof(ros_message.long_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_right_en
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.turn_right_en.size() + 1);
  // Member: hazard_en
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.hazard_en.size() + 1);
  // Member: turn_left_en
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.turn_left_en.size() + 1);
  // Member: aeb_act
  {
    size_t item_size = sizeof(ros_message.aeb_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: g_sel_disp
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.g_sel_disp.size() + 1);
  // Member: acc_alive_cnt
  {
    size_t item_size = sizeof(ros_message.acc_alive_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_SaveCAN1809(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: acc_en_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: acc_control_board_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: acc_user_can_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: acc_veh_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: acc_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: acc_control_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: vs
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bsd_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: bsd_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: long_accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: turn_right_en
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: hazard_en
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: turn_left_en
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: aeb_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: g_sel_disp
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: acc_alive_cnt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SaveCAN1809__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SaveCAN1809 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SaveCAN1809__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::SaveCAN1809 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SaveCAN1809__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SaveCAN1809 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SaveCAN1809__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SaveCAN1809(full_bounded, 0);
}

static message_type_support_callbacks_t _SaveCAN1809__callbacks = {
  "custom_msgs::msg",
  "SaveCAN1809",
  _SaveCAN1809__cdr_serialize,
  _SaveCAN1809__cdr_deserialize,
  _SaveCAN1809__get_serialized_size,
  _SaveCAN1809__max_serialized_size
};

static rosidl_message_type_support_t _SaveCAN1809__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SaveCAN1809__callbacks,
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
get_message_type_support_handle<custom_msgs::msg::SaveCAN1809>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SaveCAN1809__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, SaveCAN1809)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SaveCAN1809__handle;
}

#ifdef __cplusplus
}
#endif
