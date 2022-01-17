// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN370.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN370__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN370__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can370__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN370_vel_acc_d
{
public:
  explicit Init_SbgCAN370_vel_acc_d(::custom_msgs::msg::SbgCAN370 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN370 vel_acc_d(::custom_msgs::msg::SbgCAN370::_vel_acc_d_type arg)
  {
    msg_.vel_acc_d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN370 msg_;
};

class Init_SbgCAN370_vel_acc_e
{
public:
  explicit Init_SbgCAN370_vel_acc_e(::custom_msgs::msg::SbgCAN370 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN370_vel_acc_d vel_acc_e(::custom_msgs::msg::SbgCAN370::_vel_acc_e_type arg)
  {
    msg_.vel_acc_e = std::move(arg);
    return Init_SbgCAN370_vel_acc_d(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN370 msg_;
};

class Init_SbgCAN370_vel_acc_n
{
public:
  Init_SbgCAN370_vel_acc_n()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN370_vel_acc_e vel_acc_n(::custom_msgs::msg::SbgCAN370::_vel_acc_n_type arg)
  {
    msg_.vel_acc_n = std::move(arg);
    return Init_SbgCAN370_vel_acc_e(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN370 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN370>()
{
  return custom_msgs::msg::builder::Init_SbgCAN370_vel_acc_n();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN370__BUILDER_HPP_
