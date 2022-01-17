// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN369.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN369__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN369__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can369__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN369_vel_d
{
public:
  explicit Init_SbgCAN369_vel_d(::custom_msgs::msg::SbgCAN369 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN369 vel_d(::custom_msgs::msg::SbgCAN369::_vel_d_type arg)
  {
    msg_.vel_d = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN369 msg_;
};

class Init_SbgCAN369_vel_e
{
public:
  explicit Init_SbgCAN369_vel_e(::custom_msgs::msg::SbgCAN369 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN369_vel_d vel_e(::custom_msgs::msg::SbgCAN369::_vel_e_type arg)
  {
    msg_.vel_e = std::move(arg);
    return Init_SbgCAN369_vel_d(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN369 msg_;
};

class Init_SbgCAN369_vel_n
{
public:
  Init_SbgCAN369_vel_n()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN369_vel_e vel_n(::custom_msgs::msg::SbgCAN369::_vel_n_type arg)
  {
    msg_.vel_n = std::move(arg);
    return Init_SbgCAN369_vel_e(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN369 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN369>()
{
  return custom_msgs::msg::builder::Init_SbgCAN369_vel_n();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN369__BUILDER_HPP_
