// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN306.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN306__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN306__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can306__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN306_yaw
{
public:
  explicit Init_SbgCAN306_yaw(::custom_msgs::msg::SbgCAN306 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN306 yaw(::custom_msgs::msg::SbgCAN306::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN306 msg_;
};

class Init_SbgCAN306_pitch
{
public:
  explicit Init_SbgCAN306_pitch(::custom_msgs::msg::SbgCAN306 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN306_yaw pitch(::custom_msgs::msg::SbgCAN306::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SbgCAN306_yaw(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN306 msg_;
};

class Init_SbgCAN306_roll
{
public:
  Init_SbgCAN306_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN306_pitch roll(::custom_msgs::msg::SbgCAN306::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_SbgCAN306_pitch(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN306 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN306>()
{
  return custom_msgs::msg::builder::Init_SbgCAN306_roll();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN306__BUILDER_HPP_
