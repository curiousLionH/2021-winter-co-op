// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN337.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN337__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN337__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can337__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN337_mag_z
{
public:
  explicit Init_SbgCAN337_mag_z(::custom_msgs::msg::SbgCAN337 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN337 mag_z(::custom_msgs::msg::SbgCAN337::_mag_z_type arg)
  {
    msg_.mag_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN337 msg_;
};

class Init_SbgCAN337_mag_y
{
public:
  explicit Init_SbgCAN337_mag_y(::custom_msgs::msg::SbgCAN337 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN337_mag_z mag_y(::custom_msgs::msg::SbgCAN337::_mag_y_type arg)
  {
    msg_.mag_y = std::move(arg);
    return Init_SbgCAN337_mag_z(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN337 msg_;
};

class Init_SbgCAN337_mag_x
{
public:
  Init_SbgCAN337_mag_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN337_mag_y mag_x(::custom_msgs::msg::SbgCAN337::_mag_x_type arg)
  {
    msg_.mag_x = std::move(arg);
    return Init_SbgCAN337_mag_y(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN337 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN337>()
{
  return custom_msgs::msg::builder::Init_SbgCAN337_mag_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN337__BUILDER_HPP_
