// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN307.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN307__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN307__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can307__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN307_yaw_acc
{
public:
  explicit Init_SbgCAN307_yaw_acc(::custom_msgs::msg::SbgCAN307 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN307 yaw_acc(::custom_msgs::msg::SbgCAN307::_yaw_acc_type arg)
  {
    msg_.yaw_acc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN307 msg_;
};

class Init_SbgCAN307_pitch_acc
{
public:
  explicit Init_SbgCAN307_pitch_acc(::custom_msgs::msg::SbgCAN307 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN307_yaw_acc pitch_acc(::custom_msgs::msg::SbgCAN307::_pitch_acc_type arg)
  {
    msg_.pitch_acc = std::move(arg);
    return Init_SbgCAN307_yaw_acc(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN307 msg_;
};

class Init_SbgCAN307_roll_acc
{
public:
  Init_SbgCAN307_roll_acc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN307_pitch_acc roll_acc(::custom_msgs::msg::SbgCAN307::_roll_acc_type arg)
  {
    msg_.roll_acc = std::move(arg);
    return Init_SbgCAN307_pitch_acc(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN307 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN307>()
{
  return custom_msgs::msg::builder::Init_SbgCAN307_roll_acc();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN307__BUILDER_HPP_
