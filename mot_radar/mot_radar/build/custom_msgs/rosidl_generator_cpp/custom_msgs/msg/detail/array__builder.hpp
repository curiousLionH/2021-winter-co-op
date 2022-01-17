// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/Array.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ARRAY__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__ARRAY__BUILDER_HPP_

#include "custom_msgs/msg/detail/array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_Array_id
{
public:
  explicit Init_Array_id(::custom_msgs::msg::Array & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::Array id(::custom_msgs::msg::Array::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::Array msg_;
};

class Init_Array_z
{
public:
  explicit Init_Array_z(::custom_msgs::msg::Array & msg)
  : msg_(msg)
  {}
  Init_Array_id z(::custom_msgs::msg::Array::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Array_id(msg_);
  }

private:
  ::custom_msgs::msg::Array msg_;
};

class Init_Array_h
{
public:
  explicit Init_Array_h(::custom_msgs::msg::Array & msg)
  : msg_(msg)
  {}
  Init_Array_z h(::custom_msgs::msg::Array::_h_type arg)
  {
    msg_.h = std::move(arg);
    return Init_Array_z(msg_);
  }

private:
  ::custom_msgs::msg::Array msg_;
};

class Init_Array_w
{
public:
  explicit Init_Array_w(::custom_msgs::msg::Array & msg)
  : msg_(msg)
  {}
  Init_Array_h w(::custom_msgs::msg::Array::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_Array_h(msg_);
  }

private:
  ::custom_msgs::msg::Array msg_;
};

class Init_Array_y
{
public:
  explicit Init_Array_y(::custom_msgs::msg::Array & msg)
  : msg_(msg)
  {}
  Init_Array_w y(::custom_msgs::msg::Array::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Array_w(msg_);
  }

private:
  ::custom_msgs::msg::Array msg_;
};

class Init_Array_x
{
public:
  Init_Array_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Array_y x(::custom_msgs::msg::Array::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Array_y(msg_);
  }

private:
  ::custom_msgs::msg::Array msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::Array>()
{
  return custom_msgs::msg::builder::Init_Array_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__ARRAY__BUILDER_HPP_
