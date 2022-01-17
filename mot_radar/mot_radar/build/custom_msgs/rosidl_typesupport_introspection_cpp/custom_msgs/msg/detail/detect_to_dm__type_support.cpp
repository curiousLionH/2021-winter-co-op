// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/DetectToDM.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_msgs/msg/detail/detect_to_dm__struct.hpp"
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

void DetectToDM_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_msgs::msg::DetectToDM(_init);
}

void DetectToDM_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_msgs::msg::DetectToDM *>(message_memory);
  typed_message->~DetectToDM();
}

size_t size_function__DetectToDM__objects_cur(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectToDM__objects_cur(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectToDM__objects_cur(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectToDM__objects_cur(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<custom_msgs::msg::Object> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectToDM__objects_left(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectToDM__objects_left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectToDM__objects_left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectToDM__objects_left(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<custom_msgs::msg::Object> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectToDM__objects_right(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectToDM__objects_right(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectToDM__objects_right(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectToDM__objects_right(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<custom_msgs::msg::Object> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectToDM__objects_inter(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectToDM__objects_inter(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectToDM__objects_inter(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectToDM__objects_inter(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<custom_msgs::msg::Object> *>(untyped_member);
  member->resize(size);
}

size_t size_function__DetectToDM__objects_inter_left(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DetectToDM__objects_inter_left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void * get_function__DetectToDM__objects_inter_left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<custom_msgs::msg::Object> *>(untyped_member);
  return &member[index];
}

void resize_function__DetectToDM__objects_inter_left(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<custom_msgs::msg::Object> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DetectToDM_message_member_array[5] = {
  {
    "objects_cur",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<custom_msgs::msg::Object>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::DetectToDM, objects_cur),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectToDM__objects_cur,  // size() function pointer
    get_const_function__DetectToDM__objects_cur,  // get_const(index) function pointer
    get_function__DetectToDM__objects_cur,  // get(index) function pointer
    resize_function__DetectToDM__objects_cur  // resize(index) function pointer
  },
  {
    "objects_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<custom_msgs::msg::Object>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::DetectToDM, objects_left),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectToDM__objects_left,  // size() function pointer
    get_const_function__DetectToDM__objects_left,  // get_const(index) function pointer
    get_function__DetectToDM__objects_left,  // get(index) function pointer
    resize_function__DetectToDM__objects_left  // resize(index) function pointer
  },
  {
    "objects_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<custom_msgs::msg::Object>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::DetectToDM, objects_right),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectToDM__objects_right,  // size() function pointer
    get_const_function__DetectToDM__objects_right,  // get_const(index) function pointer
    get_function__DetectToDM__objects_right,  // get(index) function pointer
    resize_function__DetectToDM__objects_right  // resize(index) function pointer
  },
  {
    "objects_inter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<custom_msgs::msg::Object>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::DetectToDM, objects_inter),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectToDM__objects_inter,  // size() function pointer
    get_const_function__DetectToDM__objects_inter,  // get_const(index) function pointer
    get_function__DetectToDM__objects_inter,  // get(index) function pointer
    resize_function__DetectToDM__objects_inter  // resize(index) function pointer
  },
  {
    "objects_inter_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<custom_msgs::msg::Object>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::DetectToDM, objects_inter_left),  // bytes offset in struct
    nullptr,  // default value
    size_function__DetectToDM__objects_inter_left,  // size() function pointer
    get_const_function__DetectToDM__objects_inter_left,  // get_const(index) function pointer
    get_function__DetectToDM__objects_inter_left,  // get(index) function pointer
    resize_function__DetectToDM__objects_inter_left  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DetectToDM_message_members = {
  "custom_msgs::msg",  // message namespace
  "DetectToDM",  // message name
  5,  // number of fields
  sizeof(custom_msgs::msg::DetectToDM),
  DetectToDM_message_member_array,  // message members
  DetectToDM_init_function,  // function to initialize message memory (memory has to be allocated)
  DetectToDM_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DetectToDM_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DetectToDM_message_members,
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
get_message_type_support_handle<custom_msgs::msg::DetectToDM>()
{
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::DetectToDM_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs, msg, DetectToDM)() {
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::DetectToDM_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
