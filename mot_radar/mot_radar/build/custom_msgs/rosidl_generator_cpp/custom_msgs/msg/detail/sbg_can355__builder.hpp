// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN355.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN355__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN355__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can355__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN355_altitude
{
public:
  explicit Init_SbgCAN355_altitude(::custom_msgs::msg::SbgCAN355 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN355 altitude(::custom_msgs::msg::SbgCAN355::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN355 msg_;
};

class Init_SbgCAN355_pressure_abs
{
public:
  Init_SbgCAN355_pressure_abs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN355_altitude pressure_abs(::custom_msgs::msg::SbgCAN355::_pressure_abs_type arg)
  {
    msg_.pressure_abs = std::move(arg);
    return Init_SbgCAN355_altitude(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN355 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN355>()
{
  return custom_msgs::msg::builder::Init_SbgCAN355_pressure_abs();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN355__BUILDER_HPP_
