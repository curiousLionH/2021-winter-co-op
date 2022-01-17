// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:msg/VehicleCANmain.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/msg/detail/vehicle_ca_nmain__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/msg/detail/vehicle_ca_nmain__functions.h"
#include "custom_msgs/msg/detail/vehicle_ca_nmain__struct.h"


// Include directives for member types
// Member `eait_control_01`
#include "custom_msgs/msg/save_can342.h"
// Member `eait_control_01`
#include "custom_msgs/msg/detail/save_can342__rosidl_typesupport_introspection_c.h"
// Member `eait_control_02`
#include "custom_msgs/msg/save_can343.h"
// Member `eait_control_02`
#include "custom_msgs/msg/detail/save_can343__rosidl_typesupport_introspection_c.h"
// Member `eait_info_eps`
#include "custom_msgs/msg/save_can1808.h"
// Member `eait_info_eps`
#include "custom_msgs/msg/detail/save_can1808__rosidl_typesupport_introspection_c.h"
// Member `eait_info_acc`
#include "custom_msgs/msg/save_can1809.h"
// Member `eait_info_acc`
#include "custom_msgs/msg/detail/save_can1809__rosidl_typesupport_introspection_c.h"
// Member `eait_info_spd`
#include "custom_msgs/msg/save_can1810.h"
// Member `eait_info_spd`
#include "custom_msgs/msg/detail/save_can1810__rosidl_typesupport_introspection_c.h"
// Member `eait_info_imu`
#include "custom_msgs/msg/save_can1811.h"
// Member `eait_info_imu`
#include "custom_msgs/msg/detail/save_can1811__rosidl_typesupport_introspection_c.h"
// Member `eait_info_rad`
#include "custom_msgs/msg/save_can1812.h"
// Member `eait_info_rad`
#include "custom_msgs/msg/detail/save_can1812__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__msg__VehicleCANmain__init(message_memory);
}

void VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_fini_function(void * message_memory)
{
  custom_msgs__msg__VehicleCANmain__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_member_array[7] = {
  {
    "eait_control_01",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__VehicleCANmain, eait_control_01),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eait_control_02",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__VehicleCANmain, eait_control_02),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eait_info_eps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__VehicleCANmain, eait_info_eps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eait_info_acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__VehicleCANmain, eait_info_acc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eait_info_spd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__VehicleCANmain, eait_info_spd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eait_info_imu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__VehicleCANmain, eait_info_imu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eait_info_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__msg__VehicleCANmain, eait_info_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_members = {
  "custom_msgs__msg",  // message namespace
  "VehicleCANmain",  // message name
  7,  // number of fields
  sizeof(custom_msgs__msg__VehicleCANmain),
  VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_member_array,  // message members
  VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_type_support_handle = {
  0,
  &VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, VehicleCANmain)() {
  VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SaveCAN342)();
  VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SaveCAN343)();
  VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SaveCAN1808)();
  VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SaveCAN1809)();
  VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SaveCAN1810)();
  VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SaveCAN1811)();
  VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, msg, SaveCAN1812)();
  if (!VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_type_support_handle.typesupport_identifier) {
    VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleCANmain__rosidl_typesupport_introspection_c__VehicleCANmain_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
