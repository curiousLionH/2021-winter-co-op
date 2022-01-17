// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN289.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN289__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN289__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can289__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN289_accel_z
{
public:
  explicit Init_SbgCAN289_accel_z(::custom_msgs::msg::SbgCAN289 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN289 accel_z(::custom_msgs::msg::SbgCAN289::_accel_z_type arg)
  {
    msg_.accel_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN289 msg_;
};

class Init_SbgCAN289_accel_y
{
public:
  explicit Init_SbgCAN289_accel_y(::custom_msgs::msg::SbgCAN289 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN289_accel_z accel_y(::custom_msgs::msg::SbgCAN289::_accel_y_type arg)
  {
    msg_.accel_y = std::move(arg);
    return Init_SbgCAN289_accel_z(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN289 msg_;
};

class Init_SbgCAN289_accel_x
{
public:
  Init_SbgCAN289_accel_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN289_accel_y accel_x(::custom_msgs::msg::SbgCAN289::_accel_x_type arg)
  {
    msg_.accel_x = std::move(arg);
    return Init_SbgCAN289_accel_y(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN289 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN289>()
{
  return custom_msgs::msg::builder::Init_SbgCAN289_accel_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN289__BUILDER_HPP_
