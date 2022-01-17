// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN338.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN338__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN338__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can338__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN338_acc_z
{
public:
  explicit Init_SbgCAN338_acc_z(::custom_msgs::msg::SbgCAN338 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN338 acc_z(::custom_msgs::msg::SbgCAN338::_acc_z_type arg)
  {
    msg_.acc_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN338 msg_;
};

class Init_SbgCAN338_acc_y
{
public:
  explicit Init_SbgCAN338_acc_y(::custom_msgs::msg::SbgCAN338 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN338_acc_z acc_y(::custom_msgs::msg::SbgCAN338::_acc_y_type arg)
  {
    msg_.acc_y = std::move(arg);
    return Init_SbgCAN338_acc_z(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN338 msg_;
};

class Init_SbgCAN338_acc_x
{
public:
  Init_SbgCAN338_acc_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN338_acc_y acc_x(::custom_msgs::msg::SbgCAN338::_acc_x_type arg)
  {
    msg_.acc_x = std::move(arg);
    return Init_SbgCAN338_acc_y(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN338 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN338>()
{
  return custom_msgs::msg::builder::Init_SbgCAN338_acc_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN338__BUILDER_HPP_
