// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN608.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN608__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN608__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can608__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN608_gway_brake_active
{
public:
  Init_NiroCAN608_gway_brake_active()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::msg::NiroCAN608 gway_brake_active(::custom_msgs::msg::NiroCAN608::_gway_brake_active_type arg)
  {
    msg_.gway_brake_active = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN608 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN608>()
{
  return custom_msgs::msg::builder::Init_NiroCAN608_gway_brake_active();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN608__BUILDER_HPP_
