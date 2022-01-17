// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN313.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN313__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN313__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can313__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN313_velocity_z
{
public:
  explicit Init_SbgCAN313_velocity_z(::custom_msgs::msg::SbgCAN313 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN313 velocity_z(::custom_msgs::msg::SbgCAN313::_velocity_z_type arg)
  {
    msg_.velocity_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN313 msg_;
};

class Init_SbgCAN313_velocity_y
{
public:
  explicit Init_SbgCAN313_velocity_y(::custom_msgs::msg::SbgCAN313 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN313_velocity_z velocity_y(::custom_msgs::msg::SbgCAN313::_velocity_y_type arg)
  {
    msg_.velocity_y = std::move(arg);
    return Init_SbgCAN313_velocity_z(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN313 msg_;
};

class Init_SbgCAN313_velocity_x
{
public:
  Init_SbgCAN313_velocity_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN313_velocity_y velocity_x(::custom_msgs::msg::SbgCAN313::_velocity_x_type arg)
  {
    msg_.velocity_x = std::move(arg);
    return Init_SbgCAN313_velocity_y(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN313 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN313>()
{
  return custom_msgs::msg::builder::Init_SbgCAN313_velocity_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN313__BUILDER_HPP_
