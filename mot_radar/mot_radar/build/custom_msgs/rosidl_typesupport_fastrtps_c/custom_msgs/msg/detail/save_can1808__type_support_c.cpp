// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/SaveCAN1808.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_can1808__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/save_can1808__struct.h"
#include "custom_msgs/msg/detail/save_can1808__functions.h"
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

#include "rosidl_runtime_c/string.h"  // eps_control_board_status, eps_control_status, eps_en_status, eps_err, eps_sas_err, eps_user_can_err, eps_veh_can_err, override_ignore_status, override_status
#include "rosidl_runtime_c/string_functions.h"  // eps_control_board_status, eps_control_status, eps_en_status, eps_err, eps_sas_err, eps_user_can_err, eps_veh_can_err, override_ignore_status, override_status

// forward declare type support functions


using _SaveCAN1808__ros_msg_type = custom_msgs__msg__SaveCAN1808;

static bool _SaveCAN1808__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SaveCAN1808__ros_msg_type * ros_message = static_cast<const _SaveCAN1808__ros_msg_type *>(untyped_ros_message);
  // Field name: eps_en_status
  {
    const rosidl_runtime_c__String * str = &ros_message->eps_en_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: eps_control_board_status
  {
    const rosidl_runtime_c__String * str = &ros_message->eps_control_board_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: eps_user_can_err
  {
    const rosidl_runtime_c__String * str = &ros_message->eps_user_can_err;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: eps_err
  {
    const rosidl_runtime_c__String * str = &ros_message->eps_err;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: eps_veh_can_err
  {
    const rosidl_runtime_c__String * str = &ros_message->eps_veh_can_err;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: eps_sas_err
  {
    const rosidl_runtime_c__String * str = &ros_message->eps_sas_err;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: eps_control_status
  {
    const rosidl_runtime_c__String * str = &ros_message->eps_control_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: override_ignore_status
  {
    const rosidl_runtime_c__String * str = &ros_message->override_ignore_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: override_status
  {
    const rosidl_runtime_c__String * str = &ros_message->override_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: strang
  {
    cdr << ros_message->strang;
  }

  // Field name: str_drv_tq
  {
    cdr << ros_message->str_drv_tq;
  }

  // Field name: str_out_tq
  {
    cdr << ros_message->str_out_tq;
  }

  // Field name: eps_alive_cnt
  {
    cdr << ros_message->eps_alive_cnt;
  }

  return true;
}

static bool _SaveCAN1808__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SaveCAN1808__ros_msg_type * ros_message = static_cast<_SaveCAN1808__ros_msg_type *>(untyped_ros_message);
  // Field name: eps_en_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->eps_en_status.data) {
      rosidl_runtime_c__String__init(&ros_message->eps_en_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->eps_en_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'eps_en_status'\n");
      return false;
    }
  }

  // Field name: eps_control_board_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->eps_control_board_status.data) {
      rosidl_runtime_c__String__init(&ros_message->eps_control_board_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->eps_control_board_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'eps_control_board_status'\n");
      return false;
    }
  }

  // Field name: eps_user_can_err
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->eps_user_can_err.data) {
      rosidl_runtime_c__String__init(&ros_message->eps_user_can_err);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->eps_user_can_err,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'eps_user_can_err'\n");
      return false;
    }
  }

  // Field name: eps_err
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->eps_err.data) {
      rosidl_runtime_c__String__init(&ros_message->eps_err);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->eps_err,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'eps_err'\n");
      return false;
    }
  }

  // Field name: eps_veh_can_err
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->eps_veh_can_err.data) {
      rosidl_runtime_c__String__init(&ros_message->eps_veh_can_err);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->eps_veh_can_err,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'eps_veh_can_err'\n");
      return false;
    }
  }

  // Field name: eps_sas_err
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->eps_sas_err.data) {
      rosidl_runtime_c__String__init(&ros_message->eps_sas_err);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->eps_sas_err,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'eps_sas_err'\n");
      return false;
    }
  }

  // Field name: eps_control_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->eps_control_status.data) {
      rosidl_runtime_c__String__init(&ros_message->eps_control_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->eps_control_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'eps_control_status'\n");
      return false;
    }
  }

  // Field name: override_ignore_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->override_ignore_status.data) {
      rosidl_runtime_c__String__init(&ros_message->override_ignore_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->override_ignore_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'override_ignore_status'\n");
      return false;
    }
  }

  // Field name: override_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->override_status.data) {
      rosidl_runtime_c__String__init(&ros_message->override_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->override_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'override_status'\n");
      return false;
    }
  }

  // Field name: strang
  {
    cdr >> ros_message->strang;
  }

  // Field name: str_drv_tq
  {
    cdr >> ros_message->str_drv_tq;
  }

  // Field name: str_out_tq
  {
    cdr >> ros_message->str_out_tq;
  }

  // Field name: eps_alive_cnt
  {
    cdr >> ros_message->eps_alive_cnt;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__SaveCAN1808(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SaveCAN1808__ros_msg_type * ros_message = static_cast<const _SaveCAN1808__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name eps_en_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->eps_en_status.size + 1);
  // field.name eps_control_board_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->eps_control_board_status.size + 1);
  // field.name eps_user_can_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->eps_user_can_err.size + 1);
  // field.name eps_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->eps_err.size + 1);
  // field.name eps_veh_can_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->eps_veh_can_err.size + 1);
  // field.name eps_sas_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->eps_sas_err.size + 1);
  // field.name eps_control_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->eps_control_status.size + 1);
  // field.name override_ignore_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->override_ignore_status.size + 1);
  // field.name override_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->override_status.size + 1);
  // field.name strang
  {
    size_t item_size = sizeof(ros_message->strang);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name str_drv_tq
  {
    size_t item_size = sizeof(ros_message->str_drv_tq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name str_out_tq
  {
    size_t item_size = sizeof(ros_message->str_out_tq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eps_alive_cnt
  {
    size_t item_size = sizeof(ros_message->eps_alive_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SaveCAN1808__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__SaveCAN1808(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__SaveCAN1808(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: eps_en_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: eps_control_board_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: eps_user_can_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: eps_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: eps_veh_can_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: eps_sas_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: eps_control_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: override_ignore_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: override_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: strang
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: str_drv_tq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: str_out_tq
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: eps_alive_cnt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SaveCAN1808__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__SaveCAN1808(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SaveCAN1808 = {
  "custom_msgs::msg",
  "SaveCAN1808",
  _SaveCAN1808__cdr_serialize,
  _SaveCAN1808__cdr_deserialize,
  _SaveCAN1808__get_serialized_size,
  _SaveCAN1808__max_serialized_size
};

static rosidl_message_type_support_t _SaveCAN1808__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SaveCAN1808,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1808)() {
  return &_SaveCAN1808__type_support;
}

#if defined(__cplusplus)
}
#endif
