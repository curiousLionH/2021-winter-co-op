// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN377.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN377__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN377__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can377__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN377_pitch_acc
{
public:
  explicit Init_SbgCAN377_pitch_acc(::custom_msgs::msg::SbgCAN377 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN377 pitch_acc(::custom_msgs::msg::SbgCAN377::_pitch_acc_type arg)
  {
    msg_.pitch_acc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN377 msg_;
};

class Init_SbgCAN377_pitch
{
public:
  explicit Init_SbgCAN377_pitch(::custom_msgs::msg::SbgCAN377 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN377_pitch_acc pitch(::custom_msgs::msg::SbgCAN377::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_SbgCAN377_pitch_acc(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN377 msg_;
};

class Init_SbgCAN377_true_heading_acc
{
public:
  explicit Init_SbgCAN377_true_heading_acc(::custom_msgs::msg::SbgCAN377 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN377_pitch true_heading_acc(::custom_msgs::msg::SbgCAN377::_true_heading_acc_type arg)
  {
    msg_.true_heading_acc = std::move(arg);
    return Init_SbgCAN377_pitch(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN377 msg_;
};

class Init_SbgCAN377_true_heading
{
public:
  Init_SbgCAN377_true_heading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN377_true_heading_acc true_heading(::custom_msgs::msg::SbgCAN377::_true_heading_type arg)
  {
    msg_.true_heading = std::move(arg);
    return Init_SbgCAN377_true_heading_acc(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN377 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN377>()
{
  return custom_msgs::msg::builder::Init_SbgCAN377_true_heading();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN377__BUILDER_HPP_
