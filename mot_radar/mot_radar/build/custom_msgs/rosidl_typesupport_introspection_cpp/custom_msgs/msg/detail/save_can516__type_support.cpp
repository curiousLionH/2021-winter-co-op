// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/SaveCAN516.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_msgs/msg/detail/save_can516__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace custom_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SaveCAN516_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_msgs::msg::SaveCAN516(_init);
}

void SaveCAN516_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_msgs::msg::SaveCAN516 *>(message_memory);
  typed_message->~SaveCAN516();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SaveCAN516_message_member_array[1] = {
  {
    "take_over_alive_counter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::SaveCAN516, take_over_alive_counter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SaveCAN516_message_members = {
  "custom_msgs::msg",  // message namespace
  "SaveCAN516",  // message name
  1,  // number of fields
  sizeof(custom_msgs::msg::SaveCAN516),
  SaveCAN516_message_member_array,  // message members
  SaveCAN516_init_function,  // function to initialize message memory (memory has to be allocated)
  SaveCAN516_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SaveCAN516_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SaveCAN516_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace custom_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_msgs::msg::SaveCAN516>()
{
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::SaveCAN516_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs, msg, SaveCAN516)() {
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::SaveCAN516_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
