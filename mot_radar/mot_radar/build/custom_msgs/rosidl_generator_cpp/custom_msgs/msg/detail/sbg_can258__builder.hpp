// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN258.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN258__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN258__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can258__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN258_heave_status
{
public:
  explicit Init_SbgCAN258_heave_status(::custom_msgs::msg::SbgCAN258 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN258 heave_status(::custom_msgs::msg::SbgCAN258::_heave_status_type arg)
  {
    msg_.heave_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN258 msg_;
};

class Init_SbgCAN258_solution_status
{
public:
  Init_SbgCAN258_solution_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN258_heave_status solution_status(::custom_msgs::msg::SbgCAN258::_solution_status_type arg)
  {
    msg_.solution_status = std::move(arg);
    return Init_SbgCAN258_heave_status(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN258 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN258>()
{
  return custom_msgs::msg::builder::Init_SbgCAN258_solution_status();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN258__BUILDER_HPP_
