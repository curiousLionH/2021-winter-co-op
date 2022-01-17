// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN311.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN311__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN311__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can311__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN311_velocity_d
{
public:
  explicit Init_SbgCAN311_velocity_d(::custom_msgs::msg::SbgCAN311 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN311 velocity_d(::custom_msgs::msg::SbgCAN311::_velocity_d_type arg)
  {
    msg_.velocity_d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN311 msg_;
};

class Init_SbgCAN311_velocity_e
{
public:
  explicit Init_SbgCAN311_velocity_e(::custom_msgs::msg::SbgCAN311 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN311_velocity_d velocity_e(::custom_msgs::msg::SbgCAN311::_velocity_e_type arg)
  {
    msg_.velocity_e = std::move(arg);
    return Init_SbgCAN311_velocity_d(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN311 msg_;
};

class Init_SbgCAN311_velocity_n
{
public:
  Init_SbgCAN311_velocity_n()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN311_velocity_e velocity_n(::custom_msgs::msg::SbgCAN311::_velocity_n_type arg)
  {
    msg_.velocity_n = std::move(arg);
    return Init_SbgCAN311_velocity_e(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN311 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN311>()
{
  return custom_msgs::msg::builder::Init_SbgCAN311_velocity_n();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN311__BUILDER_HPP_
