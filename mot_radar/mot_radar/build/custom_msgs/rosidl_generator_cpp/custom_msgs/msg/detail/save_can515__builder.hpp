// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SaveCAN515.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN515__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN515__BUILDER_HPP_

#include "custom_msgs/msg/detail/save_can515__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveCAN515_bsd_alive_counter
{
public:
  Init_SaveCAN515_bsd_alive_counter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::msg::SaveCAN515 bsd_alive_counter(::custom_msgs::msg::SaveCAN515::_bsd_alive_counter_type arg)
  {
    msg_.bsd_alive_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN515 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SaveCAN515>()
{
  return custom_msgs::msg::builder::Init_SaveCAN515_bsd_alive_counter();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN515__BUILDER_HPP_
