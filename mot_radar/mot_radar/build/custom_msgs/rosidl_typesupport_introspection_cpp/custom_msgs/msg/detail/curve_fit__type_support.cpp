// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from custom_msgs:msg/CurveFit.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "custom_msgs/msg/detail/curve_fit__struct.hpp"
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

void CurveFit_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) custom_msgs::msg::CurveFit(_init);
}

void CurveFit_fini_function(void * message_memory)
{
  auto typed_message = static_cast<custom_msgs::msg::CurveFit *>(message_memory);
  typed_message->~CurveFit();
}

size_t size_function__CurveFit__left_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CurveFit__left_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__CurveFit__left_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__CurveFit__left_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CurveFit__left_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CurveFit__left_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__CurveFit__left_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__CurveFit__left_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CurveFit__right_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CurveFit__right_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__CurveFit__right_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__CurveFit__right_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__CurveFit__right_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CurveFit__right_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__CurveFit__right_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__CurveFit__right_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CurveFit_message_member_array[4] = {
  {
    "left_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::CurveFit, left_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__CurveFit__left_x,  // size() function pointer
    get_const_function__CurveFit__left_x,  // get_const(index) function pointer
    get_function__CurveFit__left_x,  // get(index) function pointer
    resize_function__CurveFit__left_x  // resize(index) function pointer
  },
  {
    "left_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::CurveFit, left_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__CurveFit__left_y,  // size() function pointer
    get_const_function__CurveFit__left_y,  // get_const(index) function pointer
    get_function__CurveFit__left_y,  // get(index) function pointer
    resize_function__CurveFit__left_y  // resize(index) function pointer
  },
  {
    "right_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::CurveFit, right_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__CurveFit__right_x,  // size() function pointer
    get_const_function__CurveFit__right_x,  // get_const(index) function pointer
    get_function__CurveFit__right_x,  // get(index) function pointer
    resize_function__CurveFit__right_x  // resize(index) function pointer
  },
  {
    "right_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs::msg::CurveFit, right_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__CurveFit__right_y,  // size() function pointer
    get_const_function__CurveFit__right_y,  // get_const(index) function pointer
    get_function__CurveFit__right_y,  // get(index) function pointer
    resize_function__CurveFit__right_y  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CurveFit_message_members = {
  "custom_msgs::msg",  // message namespace
  "CurveFit",  // message name
  4,  // number of fields
  sizeof(custom_msgs::msg::CurveFit),
  CurveFit_message_member_array,  // message members
  CurveFit_init_function,  // function to initialize message memory (memory has to be allocated)
  CurveFit_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CurveFit_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CurveFit_message_members,
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
get_message_type_support_handle<custom_msgs::msg::CurveFit>()
{
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::CurveFit_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, custom_msgs, msg, CurveFit)() {
  return &::custom_msgs::msg::rosidl_typesupport_introspection_cpp::CurveFit_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
