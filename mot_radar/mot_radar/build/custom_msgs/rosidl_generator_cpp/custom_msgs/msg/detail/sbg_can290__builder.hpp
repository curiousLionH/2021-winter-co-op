// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN290.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN290__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN290__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can290__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN290_gyro_z
{
public:
  explicit Init_SbgCAN290_gyro_z(::custom_msgs::msg::SbgCAN290 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN290 gyro_z(::custom_msgs::msg::SbgCAN290::_gyro_z_type arg)
  {
    msg_.gyro_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN290 msg_;
};

class Init_SbgCAN290_gyro_y
{
public:
  explicit Init_SbgCAN290_gyro_y(::custom_msgs::msg::SbgCAN290 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN290_gyro_z gyro_y(::custom_msgs::msg::SbgCAN290::_gyro_y_type arg)
  {
    msg_.gyro_y = std::move(arg);
    return Init_SbgCAN290_gyro_z(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN290 msg_;
};

class Init_SbgCAN290_gyro_x
{
public:
  Init_SbgCAN290_gyro_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN290_gyro_y gyro_x(::custom_msgs::msg::SbgCAN290::_gyro_x_type arg)
  {
    msg_.gyro_x = std::move(arg);
    return Init_SbgCAN290_gyro_y(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN290 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN290>()
{
  return custom_msgs::msg::builder::Init_SbgCAN290_gyro_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN290__BUILDER_HPP_
