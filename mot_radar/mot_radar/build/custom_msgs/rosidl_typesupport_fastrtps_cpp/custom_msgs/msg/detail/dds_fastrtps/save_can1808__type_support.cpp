// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/SaveCAN1808.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_can1808__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_msgs/msg/detail/save_can1808__struct.hpp"

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
  const custom_msgs::msg::SaveCAN1808 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: eps_en_status
  cdr << ros_message.eps_en_status;
  // Member: eps_control_board_status
  cdr << ros_message.eps_control_board_status;
  // Member: eps_user_can_err
  cdr << ros_message.eps_user_can_err;
  // Member: eps_err
  cdr << ros_message.eps_err;
  // Member: eps_veh_can_err
  cdr << ros_message.eps_veh_can_err;
  // Member: eps_sas_err
  cdr << ros_message.eps_sas_err;
  // Member: eps_control_status
  cdr << ros_message.eps_control_status;
  // Member: override_ignore_status
  cdr << ros_message.override_ignore_status;
  // Member: override_status
  cdr << ros_message.override_status;
  // Member: strang
  cdr << ros_message.strang;
  // Member: str_drv_tq
  cdr << ros_message.str_drv_tq;
  // Member: str_out_tq
  cdr << ros_message.str_out_tq;
  // Member: eps_alive_cnt
  cdr << ros_message.eps_alive_cnt;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_msgs::msg::SaveCAN1808 & ros_message)
{
  // Member: eps_en_status
  cdr >> ros_message.eps_en_status;

  // Member: eps_control_board_status
  cdr >> ros_message.eps_control_board_status;

  // Member: eps_user_can_err
  cdr >> ros_message.eps_user_can_err;

  // Member: eps_err
  cdr >> ros_message.eps_err;

  // Member: eps_veh_can_err
  cdr >> ros_message.eps_veh_can_err;

  // Member: eps_sas_err
  cdr >> ros_message.eps_sas_err;

  // Member: eps_control_status
  cdr >> ros_message.eps_control_status;

  // Member: override_ignore_status
  cdr >> ros_message.override_ignore_status;

  // Member: override_status
  cdr >> ros_message.override_status;

  // Member: strang
  cdr >> ros_message.strang;

  // Member: str_drv_tq
  cdr >> ros_message.str_drv_tq;

  // Member: str_out_tq
  cdr >> ros_message.str_out_tq;

  // Member: eps_alive_cnt
  cdr >> ros_message.eps_alive_cnt;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
get_serialized_size(
  const custom_msgs::msg::SaveCAN1808 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: eps_en_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.eps_en_status.size() + 1);
  // Member: eps_control_board_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.eps_control_board_status.size() + 1);
  // Member: eps_user_can_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.eps_user_can_err.size() + 1);
  // Member: eps_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.eps_err.size() + 1);
  // Member: eps_veh_can_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.eps_veh_can_err.size() + 1);
  // Member: eps_sas_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.eps_sas_err.size() + 1);
  // Member: eps_control_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.eps_control_status.size() + 1);
  // Member: override_ignore_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.override_ignore_status.size() + 1);
  // Member: override_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.override_status.size() + 1);
  // Member: strang
  {
    size_t item_size = sizeof(ros_message.strang);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: str_drv_tq
  {
    size_t item_size = sizeof(ros_message.str_drv_tq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: str_out_tq
  {
    size_t item_size = sizeof(ros_message.str_out_tq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eps_alive_cnt
  {
    size_t item_size = sizeof(ros_message.eps_alive_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_msgs
max_serialized_size_SaveCAN1808(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: eps_en_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: eps_control_board_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: eps_user_can_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: eps_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: eps_veh_can_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: eps_sas_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: eps_control_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: override_ignore_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: override_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: strang
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: str_drv_tq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: str_out_tq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: eps_alive_cnt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SaveCAN1808__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SaveCAN1808 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SaveCAN1808__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_msgs::msg::SaveCAN1808 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SaveCAN1808__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_msgs::msg::SaveCAN1808 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SaveCAN1808__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SaveCAN1808(full_bounded, 0);
}

static message_type_support_callbacks_t _SaveCAN1808__callbacks = {
  "custom_msgs::msg",
  "SaveCAN1808",
  _SaveCAN1808__cdr_serialize,
  _SaveCAN1808__cdr_deserialize,
  _SaveCAN1808__get_serialized_size,
  _SaveCAN1808__max_serialized_size
};

static rosidl_message_type_support_t _SaveCAN1808__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SaveCAN1808__callbacks,
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
get_message_type_support_handle<custom_msgs::msg::SaveCAN1808>()
{
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SaveCAN1808__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_msgs, msg, SaveCAN1808)() {
  return &custom_msgs::msg::typesupport_fastrtps_cpp::_SaveCAN1808__handle;
}

#ifdef __cplusplus
}
#endif
