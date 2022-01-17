// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN515.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN515__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN515__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can515__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN515_time_offset_3
{
public:
  explicit Init_SbgCAN515_time_offset_3(::custom_msgs::msg::SbgCAN515 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN515 time_offset_3(::custom_msgs::msg::SbgCAN515::_time_offset_3_type arg)
  {
    msg_.time_offset_3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN515 msg_;
};

class Init_SbgCAN515_time_offset_2
{
public:
  explicit Init_SbgCAN515_time_offset_2(::custom_msgs::msg::SbgCAN515 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN515_time_offset_3 time_offset_2(::custom_msgs::msg::SbgCAN515::_time_offset_2_type arg)
  {
    msg_.time_offset_2 = std::move(arg);
    return Init_SbgCAN515_time_offset_3(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN515 msg_;
};

class Init_SbgCAN515_time_offset_1
{
public:
  explicit Init_SbgCAN515_time_offset_1(::custom_msgs::msg::SbgCAN515 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN515_time_offset_2 time_offset_1(::custom_msgs::msg::SbgCAN515::_time_offset_1_type arg)
  {
    msg_.time_offset_1 = std::move(arg);
    return Init_SbgCAN515_time_offset_2(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN515 msg_;
};

class Init_SbgCAN515_time_offset_0
{
public:
  Init_SbgCAN515_time_offset_0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN515_time_offset_1 time_offset_0(::custom_msgs::msg::SbgCAN515::_time_offset_0_type arg)
  {
    msg_.time_offset_0 = std::move(arg);
    return Init_SbgCAN515_time_offset_1(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN515 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN515>()
{
  return custom_msgs::msg::builder::Init_SbgCAN515_time_offset_0();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN515__BUILDER_HPP_
