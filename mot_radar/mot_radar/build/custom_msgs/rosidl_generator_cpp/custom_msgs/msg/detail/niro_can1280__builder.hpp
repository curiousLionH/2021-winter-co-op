// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN1280.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1280__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1280__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can1280__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN1280_brk12_4_0
{
public:
  Init_NiroCAN1280_brk12_4_0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::msg::NiroCAN1280 brk12_4_0(::custom_msgs::msg::NiroCAN1280::_brk12_4_0_type arg)
  {
    msg_.brk12_4_0 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1280 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN1280>()
{
  return custom_msgs::msg::builder::Init_NiroCAN1280_brk12_4_0();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1280__BUILDER_HPP_
