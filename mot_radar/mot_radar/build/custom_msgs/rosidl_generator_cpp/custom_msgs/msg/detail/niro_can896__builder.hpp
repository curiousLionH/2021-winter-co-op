// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN896.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN896__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN896__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can896__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN896_brk23_2_12
{
public:
  explicit Init_NiroCAN896_brk23_2_12(::custom_msgs::msg::NiroCAN896 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::NiroCAN896 brk23_2_12(::custom_msgs::msg::NiroCAN896::_brk23_2_12_type arg)
  {
    msg_.brk23_2_12 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN896 msg_;
};

class Init_NiroCAN896_brk23_1_3
{
public:
  explicit Init_NiroCAN896_brk23_1_3(::custom_msgs::msg::NiroCAN896 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN896_brk23_2_12 brk23_1_3(::custom_msgs::msg::NiroCAN896::_brk23_1_3_type arg)
  {
    msg_.brk23_1_3 = std::move(arg);
    return Init_NiroCAN896_brk23_2_12(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN896 msg_;
};

class Init_NiroCAN896_brk23_3_0
{
public:
  Init_NiroCAN896_brk23_3_0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NiroCAN896_brk23_1_3 brk23_3_0(::custom_msgs::msg::NiroCAN896::_brk23_3_0_type arg)
  {
    msg_.brk23_3_0 = std::move(arg);
    return Init_NiroCAN896_brk23_1_3(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN896 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN896>()
{
  return custom_msgs::msg::builder::Init_NiroCAN896_brk23_3_0();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN896__BUILDER_HPP_
