// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/VehicleCANmain.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/vehicle_ca_nmain__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/vehicle_ca_nmain__struct.h"
#include "custom_msgs/msg/detail/vehicle_ca_nmain__functions.h"
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

#include "custom_msgs/msg/detail/save_can1808__functions.h"  // eait_info_eps
#include "custom_msgs/msg/detail/save_can1809__functions.h"  // eait_info_acc
#include "custom_msgs/msg/detail/save_can1810__functions.h"  // eait_info_spd
#include "custom_msgs/msg/detail/save_can1811__functions.h"  // eait_info_imu
#include "custom_msgs/msg/detail/save_can1812__functions.h"  // eait_info_rad
#include "custom_msgs/msg/detail/save_can342__functions.h"  // eait_control_01
#include "custom_msgs/msg/detail/save_can343__functions.h"  // eait_control_02

// forward declare type support functions
size_t get_serialized_size_custom_msgs__msg__SaveCAN1808(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_msgs__msg__SaveCAN1808(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1808)();
size_t get_serialized_size_custom_msgs__msg__SaveCAN1809(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_msgs__msg__SaveCAN1809(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1809)();
size_t get_serialized_size_custom_msgs__msg__SaveCAN1810(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_msgs__msg__SaveCAN1810(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1810)();
size_t get_serialized_size_custom_msgs__msg__SaveCAN1811(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_msgs__msg__SaveCAN1811(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1811)();
size_t get_serialized_size_custom_msgs__msg__SaveCAN1812(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_msgs__msg__SaveCAN1812(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1812)();
size_t get_serialized_size_custom_msgs__msg__SaveCAN342(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_msgs__msg__SaveCAN342(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN342)();
size_t get_serialized_size_custom_msgs__msg__SaveCAN343(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_msgs__msg__SaveCAN343(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN343)();


using _VehicleCANmain__ros_msg_type = custom_msgs__msg__VehicleCANmain;

static bool _VehicleCANmain__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleCANmain__ros_msg_type * ros_message = static_cast<const _VehicleCANmain__ros_msg_type *>(untyped_ros_message);
  // Field name: eait_control_01
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN342
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->eait_control_01, cdr))
    {
      return false;
    }
  }

  // Field name: eait_control_02
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN343
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->eait_control_02, cdr))
    {
      return false;
    }
  }

  // Field name: eait_info_eps
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1808
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->eait_info_eps, cdr))
    {
      return false;
    }
  }

  // Field name: eait_info_acc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1809
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->eait_info_acc, cdr))
    {
      return false;
    }
  }

  // Field name: eait_info_spd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1810
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->eait_info_spd, cdr))
    {
      return false;
    }
  }

  // Field name: eait_info_imu
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1811
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->eait_info_imu, cdr))
    {
      return false;
    }
  }

  // Field name: eait_info_rad
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1812
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->eait_info_rad, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _VehicleCANmain__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleCANmain__ros_msg_type * ros_message = static_cast<_VehicleCANmain__ros_msg_type *>(untyped_ros_message);
  // Field name: eait_control_01
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN342
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->eait_control_01))
    {
      return false;
    }
  }

  // Field name: eait_control_02
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN343
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->eait_control_02))
    {
      return false;
    }
  }

  // Field name: eait_info_eps
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1808
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->eait_info_eps))
    {
      return false;
    }
  }

  // Field name: eait_info_acc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1809
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->eait_info_acc))
    {
      return false;
    }
  }

  // Field name: eait_info_spd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1810
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->eait_info_spd))
    {
      return false;
    }
  }

  // Field name: eait_info_imu
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1811
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->eait_info_imu))
    {
      return false;
    }
  }

  // Field name: eait_info_rad
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, SaveCAN1812
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->eait_info_rad))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__VehicleCANmain(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleCANmain__ros_msg_type * ros_message = static_cast<const _VehicleCANmain__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name eait_control_01

  current_alignment += get_serialized_size_custom_msgs__msg__SaveCAN342(
    &(ros_message->eait_control_01), current_alignment);
  // field.name eait_control_02

  current_alignment += get_serialized_size_custom_msgs__msg__SaveCAN343(
    &(ros_message->eait_control_02), current_alignment);
  // field.name eait_info_eps

  current_alignment += get_serialized_size_custom_msgs__msg__SaveCAN1808(
    &(ros_message->eait_info_eps), current_alignment);
  // field.name eait_info_acc

  current_alignment += get_serialized_size_custom_msgs__msg__SaveCAN1809(
    &(ros_message->eait_info_acc), current_alignment);
  // field.name eait_info_spd

  current_alignment += get_serialized_size_custom_msgs__msg__SaveCAN1810(
    &(ros_message->eait_info_spd), current_alignment);
  // field.name eait_info_imu

  current_alignment += get_serialized_size_custom_msgs__msg__SaveCAN1811(
    &(ros_message->eait_info_imu), current_alignment);
  // field.name eait_info_rad

  current_alignment += get_serialized_size_custom_msgs__msg__SaveCAN1812(
    &(ros_message->eait_info_rad), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleCANmain__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__VehicleCANmain(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__VehicleCANmain(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: eait_control_01
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__SaveCAN342(
        full_bounded, current_alignment);
    }
  }
  // member: eait_control_02
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__SaveCAN343(
        full_bounded, current_alignment);
    }
  }
  // member: eait_info_eps
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__SaveCAN1808(
        full_bounded, current_alignment);
    }
  }
  // member: eait_info_acc
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__SaveCAN1809(
        full_bounded, current_alignment);
    }
  }
  // member: eait_info_spd
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__SaveCAN1810(
        full_bounded, current_alignment);
    }
  }
  // member: eait_info_imu
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__SaveCAN1811(
        full_bounded, current_alignment);
    }
  }
  // member: eait_info_rad
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__SaveCAN1812(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleCANmain__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__VehicleCANmain(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleCANmain = {
  "custom_msgs::msg",
  "VehicleCANmain",
  _VehicleCANmain__cdr_serialize,
  _VehicleCANmain__cdr_deserialize,
  _VehicleCANmain__get_serialized_size,
  _VehicleCANmain__max_serialized_size
};

static rosidl_message_type_support_t _VehicleCANmain__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleCANmain,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, VehicleCANmain)() {
  return &_VehicleCANmain__type_support;
}

#if defined(__cplusplus)
}
#endif
