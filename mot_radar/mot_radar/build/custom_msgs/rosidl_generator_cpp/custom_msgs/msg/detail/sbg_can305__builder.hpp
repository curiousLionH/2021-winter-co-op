// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN305.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN305__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN305__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can305__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN305_q3
{
public:
  explicit Init_SbgCAN305_q3(::custom_msgs::msg::SbgCAN305 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN305 q3(::custom_msgs::msg::SbgCAN305::_q3_type arg)
  {
    msg_.q3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN305 msg_;
};

class Init_SbgCAN305_q2
{
public:
  explicit Init_SbgCAN305_q2(::custom_msgs::msg::SbgCAN305 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN305_q3 q2(::custom_msgs::msg::SbgCAN305::_q2_type arg)
  {
    msg_.q2 = std::move(arg);
    return Init_SbgCAN305_q3(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN305 msg_;
};

class Init_SbgCAN305_q1
{
public:
  explicit Init_SbgCAN305_q1(::custom_msgs::msg::SbgCAN305 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN305_q2 q1(::custom_msgs::msg::SbgCAN305::_q1_type arg)
  {
    msg_.q1 = std::move(arg);
    return Init_SbgCAN305_q2(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN305 msg_;
};

class Init_SbgCAN305_q0
{
public:
  Init_SbgCAN305_q0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN305_q1 q0(::custom_msgs::msg::SbgCAN305::_q0_type arg)
  {
    msg_.q0 = std::move(arg);
    return Init_SbgCAN305_q1(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN305 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN305>()
{
  return custom_msgs::msg::builder::Init_SbgCAN305_q0();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN305__BUILDER_HPP_
