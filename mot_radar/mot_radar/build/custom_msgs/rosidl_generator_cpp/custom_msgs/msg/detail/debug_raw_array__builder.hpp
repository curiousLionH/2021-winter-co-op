// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/DebugRawArray.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__DEBUG_RAW_ARRAY__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__DEBUG_RAW_ARRAY__BUILDER_HPP_

#include "custom_msgs/msg/detail/debug_raw_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_DebugRawArray_z
{
public:
  explicit Init_DebugRawArray_z(::custom_msgs::msg::DebugRawArray & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::DebugRawArray z(::custom_msgs::msg::DebugRawArray::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::DebugRawArray msg_;
};

class Init_DebugRawArray_y
{
public:
  explicit Init_DebugRawArray_y(::custom_msgs::msg::DebugRawArray & msg)
  : msg_(msg)
  {}
  Init_DebugRawArray_z y(::custom_msgs::msg::DebugRawArray::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_DebugRawArray_z(msg_);
  }

private:
  ::custom_msgs::msg::DebugRawArray msg_;
};

class Init_DebugRawArray_x
{
public:
  Init_DebugRawArray_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugRawArray_y x(::custom_msgs::msg::DebugRawArray::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_DebugRawArray_y(msg_);
  }

private:
  ::custom_msgs::msg::DebugRawArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::DebugRawArray>()
{
  return custom_msgs::msg::builder::Init_DebugRawArray_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__DEBUG_RAW_ARRAY__BUILDER_HPP_
