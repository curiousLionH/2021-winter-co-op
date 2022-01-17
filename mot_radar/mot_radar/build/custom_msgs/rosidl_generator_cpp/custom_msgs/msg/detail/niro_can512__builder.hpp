// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN512.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN512__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN512__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can512__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN512_chksum11
{
public:
  explicit Init_NiroCAN512_chksum11(::custom_msgs::msg::NiroCAN512 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::NiroCAN512 chksum11(::custom_msgs::msg::NiroCAN512::_chksum11_type arg)
  {
    msg_.chksum11 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN512 msg_;
};

class Init_NiroCAN512_alivecounter11
{
public:
  explicit Init_NiroCAN512_alivecounter11(::custom_msgs::msg::NiroCAN512 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN512_chksum11 alivecounter11(::custom_msgs::msg::NiroCAN512::_alivecounter11_type arg)
  {
    msg_.alivecounter11 = std::move(arg);
    return Init_NiroCAN512_chksum11(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN512 msg_;
};

class Init_NiroCAN512_brk11_35_0
{
public:
  Init_NiroCAN512_brk11_35_0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NiroCAN512_alivecounter11 brk11_35_0(::custom_msgs::msg::NiroCAN512::_brk11_35_0_type arg)
  {
    msg_.brk11_35_0 = std::move(arg);
    return Init_NiroCAN512_alivecounter11(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN512 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN512>()
{
  return custom_msgs::msg::builder::Init_NiroCAN512_brk11_35_0();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN512__BUILDER_HPP_
