// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN256.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN256__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN256__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can256__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN256_clock_status
{
public:
  explicit Init_SbgCAN256_clock_status(::custom_msgs::msg::SbgCAN256 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN256 clock_status(::custom_msgs::msg::SbgCAN256::_clock_status_type arg)
  {
    msg_.clock_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN256 msg_;
};

class Init_SbgCAN256_general_status
{
public:
  explicit Init_SbgCAN256_general_status(::custom_msgs::msg::SbgCAN256 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN256_clock_status general_status(::custom_msgs::msg::SbgCAN256::_general_status_type arg)
  {
    msg_.general_status = std::move(arg);
    return Init_SbgCAN256_clock_status(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN256 msg_;
};

class Init_SbgCAN256_time_stamp
{
public:
  Init_SbgCAN256_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN256_general_status time_stamp(::custom_msgs::msg::SbgCAN256::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgCAN256_general_status(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN256 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN256>()
{
  return custom_msgs::msg::builder::Init_SbgCAN256_time_stamp();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN256__BUILDER_HPP_
