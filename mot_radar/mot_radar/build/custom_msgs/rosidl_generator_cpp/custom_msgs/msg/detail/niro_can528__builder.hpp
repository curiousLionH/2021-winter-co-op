// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN528.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN528__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN528__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can528__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN528_pa_strangcmd
{
public:
  explicit Init_NiroCAN528_pa_strangcmd(::custom_msgs::msg::NiroCAN528 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::NiroCAN528 pa_strangcmd(::custom_msgs::msg::NiroCAN528::_pa_strangcmd_type arg)
  {
    msg_.pa_strangcmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN528 msg_;
};

class Init_NiroCAN528_pa_enable
{
public:
  Init_NiroCAN528_pa_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NiroCAN528_pa_strangcmd pa_enable(::custom_msgs::msg::NiroCAN528::_pa_enable_type arg)
  {
    msg_.pa_enable = std::move(arg);
    return Init_NiroCAN528_pa_strangcmd(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN528 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN528>()
{
  return custom_msgs::msg::builder::Init_NiroCAN528_pa_enable();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN528__BUILDER_HPP_
