// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SaveCAN519.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN519__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN519__BUILDER_HPP_

#include "custom_msgs/msg/detail/save_can519__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveCAN519_safety_warning_alive_counter
{
public:
  Init_SaveCAN519_safety_warning_alive_counter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::msg::SaveCAN519 safety_warning_alive_counter(::custom_msgs::msg::SaveCAN519::_safety_warning_alive_counter_type arg)
  {
    msg_.safety_warning_alive_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN519 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SaveCAN519>()
{
  return custom_msgs::msg::builder::Init_SaveCAN519_safety_warning_alive_counter();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN519__BUILDER_HPP_
