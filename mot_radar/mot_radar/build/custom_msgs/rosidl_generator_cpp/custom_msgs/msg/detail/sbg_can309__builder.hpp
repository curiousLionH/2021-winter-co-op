// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN309.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN309__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN309__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can309__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN309_undulation
{
public:
  explicit Init_SbgCAN309_undulation(::custom_msgs::msg::SbgCAN309 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN309 undulation(::custom_msgs::msg::SbgCAN309::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN309 msg_;
};

class Init_SbgCAN309_altitude
{
public:
  Init_SbgCAN309_altitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN309_undulation altitude(::custom_msgs::msg::SbgCAN309::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_SbgCAN309_undulation(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN309 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN309>()
{
  return custom_msgs::msg::builder::Init_SbgCAN309_altitude();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN309__BUILDER_HPP_
