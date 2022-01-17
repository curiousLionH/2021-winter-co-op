// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/SaveCAN1809.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/save_can1809__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/save_can1809__struct.h"
#include "custom_msgs/msg/detail/save_can1809__functions.h"
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

#include "rosidl_runtime_c/string.h"  // acc_control_board_status, acc_control_status, acc_en_status, acc_err, acc_user_can_err, acc_veh_err, g_sel_disp, hazard_en, turn_left_en, turn_right_en
#include "rosidl_runtime_c/string_functions.h"  // acc_control_board_status, acc_control_status, acc_en_status, acc_err, acc_user_can_err, acc_veh_err, g_sel_disp, hazard_en, turn_left_en, turn_right_en

// forward declare type support functions


using _SaveCAN1809__ros_msg_type = custom_msgs__msg__SaveCAN1809;

static bool _SaveCAN1809__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SaveCAN1809__ros_msg_type * ros_message = static_cast<const _SaveCAN1809__ros_msg_type *>(untyped_ros_message);
  // Field name: acc_en_status
  {
    const rosidl_runtime_c__String * str = &ros_message->acc_en_status;
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

  // Field name: acc_control_board_status
  {
    const rosidl_runtime_c__String * str = &ros_message->acc_control_board_status;
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

  // Field name: acc_user_can_err
  {
    const rosidl_runtime_c__String * str = &ros_message->acc_user_can_err;
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

  // Field name: acc_veh_err
  {
    const rosidl_runtime_c__String * str = &ros_message->acc_veh_err;
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

  // Field name: acc_err
  {
    const rosidl_runtime_c__String * str = &ros_message->acc_err;
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

  // Field name: acc_control_status
  {
    const rosidl_runtime_c__String * str = &ros_message->acc_control_status;
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

  // Field name: vs
  {
    cdr << ros_message->vs;
  }

  // Field name: bsd_right
  {
    cdr << ros_message->bsd_right;
  }

  // Field name: bsd_left
  {
    cdr << ros_message->bsd_left;
  }

  // Field name: long_accel
  {
    cdr << ros_message->long_accel;
  }

  // Field name: turn_right_en
  {
    const rosidl_runtime_c__String * str = &ros_message->turn_right_en;
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

  // Field name: hazard_en
  {
    const rosidl_runtime_c__String * str = &ros_message->hazard_en;
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

  // Field name: turn_left_en
  {
    const rosidl_runtime_c__String * str = &ros_message->turn_left_en;
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

  // Field name: aeb_act
  {
    cdr << (ros_message->aeb_act ? true : false);
  }

  // Field name: g_sel_disp
  {
    const rosidl_runtime_c__String * str = &ros_message->g_sel_disp;
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

  // Field name: acc_alive_cnt
  {
    cdr << ros_message->acc_alive_cnt;
  }

  return true;
}

static bool _SaveCAN1809__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SaveCAN1809__ros_msg_type * ros_message = static_cast<_SaveCAN1809__ros_msg_type *>(untyped_ros_message);
  // Field name: acc_en_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->acc_en_status.data) {
      rosidl_runtime_c__String__init(&ros_message->acc_en_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->acc_en_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'acc_en_status'\n");
      return false;
    }
  }

  // Field name: acc_control_board_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->acc_control_board_status.data) {
      rosidl_runtime_c__String__init(&ros_message->acc_control_board_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->acc_control_board_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'acc_control_board_status'\n");
      return false;
    }
  }

  // Field name: acc_user_can_err
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->acc_user_can_err.data) {
      rosidl_runtime_c__String__init(&ros_message->acc_user_can_err);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->acc_user_can_err,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'acc_user_can_err'\n");
      return false;
    }
  }

  // Field name: acc_veh_err
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->acc_veh_err.data) {
      rosidl_runtime_c__String__init(&ros_message->acc_veh_err);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->acc_veh_err,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'acc_veh_err'\n");
      return false;
    }
  }

  // Field name: acc_err
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->acc_err.data) {
      rosidl_runtime_c__String__init(&ros_message->acc_err);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->acc_err,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'acc_err'\n");
      return false;
    }
  }

  // Field name: acc_control_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->acc_control_status.data) {
      rosidl_runtime_c__String__init(&ros_message->acc_control_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->acc_control_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'acc_control_status'\n");
      return false;
    }
  }

  // Field name: vs
  {
    cdr >> ros_message->vs;
  }

  // Field name: bsd_right
  {
    cdr >> ros_message->bsd_right;
  }

  // Field name: bsd_left
  {
    cdr >> ros_message->bsd_left;
  }

  // Field name: long_accel
  {
    cdr >> ros_message->long_accel;
  }

  // Field name: turn_right_en
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->turn_right_en.data) {
      rosidl_runtime_c__String__init(&ros_message->turn_right_en);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->turn_right_en,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'turn_right_en'\n");
      return false;
    }
  }

  // Field name: hazard_en
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->hazard_en.data) {
      rosidl_runtime_c__String__init(&ros_message->hazard_en);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->hazard_en,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'hazard_en'\n");
      return false;
    }
  }

  // Field name: turn_left_en
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->turn_left_en.data) {
      rosidl_runtime_c__String__init(&ros_message->turn_left_en);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->turn_left_en,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'turn_left_en'\n");
      return false;
    }
  }

  // Field name: aeb_act
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->aeb_act = tmp ? true : false;
  }

  // Field name: g_sel_disp
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->g_sel_disp.data) {
      rosidl_runtime_c__String__init(&ros_message->g_sel_disp);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->g_sel_disp,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'g_sel_disp'\n");
      return false;
    }
  }

  // Field name: acc_alive_cnt
  {
    cdr >> ros_message->acc_alive_cnt;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__SaveCAN1809(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SaveCAN1809__ros_msg_type * ros_message = static_cast<const _SaveCAN1809__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name acc_en_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->acc_en_status.size + 1);
  // field.name acc_control_board_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->acc_control_board_status.size + 1);
  // field.name acc_user_can_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->acc_user_can_err.size + 1);
  // field.name acc_veh_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->acc_veh_err.size + 1);
  // field.name acc_err
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->acc_err.size + 1);
  // field.name acc_control_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->acc_control_status.size + 1);
  // field.name vs
  {
    size_t item_size = sizeof(ros_message->vs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bsd_right
  {
    size_t item_size = sizeof(ros_message->bsd_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bsd_left
  {
    size_t item_size = sizeof(ros_message->bsd_left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name long_accel
  {
    size_t item_size = sizeof(ros_message->long_accel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_right_en
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->turn_right_en.size + 1);
  // field.name hazard_en
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->hazard_en.size + 1);
  // field.name turn_left_en
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->turn_left_en.size + 1);
  // field.name aeb_act
  {
    size_t item_size = sizeof(ros_message->aeb_act);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name g_sel_disp
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->g_sel_disp.size + 1);
  // field.name acc_alive_cnt
  {
    size_t item_size = sizeof(ros_message->acc_alive_cnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SaveCAN1809__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__SaveCAN1809(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__SaveCAN1809(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: acc_en_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: acc_control_board_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: acc_user_can_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: acc_veh_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: acc_err
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: acc_control_status
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: vs
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bsd_right
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bsd_left
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: long_accel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: turn_right_en
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: hazard_en
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: turn_left_en
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: aeb_act
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: g_sel_disp
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: acc_alive_cnt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SaveCAN1809__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__SaveCAN1809(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SaveCAN1809 = {
  "custom_msgs::msg",
  "SaveCAN1809",
  _SaveCAN1809__cdr_serialize,
  _SaveCAN1809__cdr_deserialize,
  _SaveCAN1809__get_serialized_size,
  _SaveCAN1809__max_serialized_size
};

static rosidl_message_type_support_t _SaveCAN1809__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SaveCAN1809,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1809)() {
  return &_SaveCAN1809__type_support;
}

#if defined(__cplusplus)
}
#endif
