// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN356.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN356__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN356__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can356__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN356_airspeed
{
public:
  explicit Init_SbgCAN356_airspeed(::custom_msgs::msg::SbgCAN356 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN356 airspeed(::custom_msgs::msg::SbgCAN356::_airspeed_type arg)
  {
    msg_.airspeed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN356 msg_;
};

class Init_SbgCAN356_pressure_diff
{
public:
  Init_SbgCAN356_pressure_diff()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN356_airspeed pressure_diff(::custom_msgs::msg::SbgCAN356::_pressure_diff_type arg)
  {
    msg_.pressure_diff = std::move(arg);
    return Init_SbgCAN356_airspeed(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN356 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN356>()
{
  return custom_msgs::msg::builder::Init_SbgCAN356_pressure_diff();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN356__BUILDER_HPP_
