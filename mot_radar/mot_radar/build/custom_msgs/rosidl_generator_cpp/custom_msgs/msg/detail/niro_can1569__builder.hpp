// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN1569.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1569__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1569__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can1569__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN1569_ss
{
public:
  explicit Init_NiroCAN1569_ss(::custom_msgs::msg::NiroCAN1569 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::NiroCAN1569 ss(::custom_msgs::msg::NiroCAN1569::_ss_type arg)
  {
    msg_.ss = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1569 msg_;
};

class Init_NiroCAN1569_nn
{
public:
  explicit Init_NiroCAN1569_nn(::custom_msgs::msg::NiroCAN1569 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN1569_ss nn(::custom_msgs::msg::NiroCAN1569::_nn_type arg)
  {
    msg_.nn = std::move(arg);
    return Init_NiroCAN1569_ss(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1569 msg_;
};

class Init_NiroCAN1569_hh
{
public:
  explicit Init_NiroCAN1569_hh(::custom_msgs::msg::NiroCAN1569 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN1569_nn hh(::custom_msgs::msg::NiroCAN1569::_hh_type arg)
  {
    msg_.hh = std::move(arg);
    return Init_NiroCAN1569_nn(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1569 msg_;
};

class Init_NiroCAN1569_dd
{
public:
  explicit Init_NiroCAN1569_dd(::custom_msgs::msg::NiroCAN1569 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN1569_hh dd(::custom_msgs::msg::NiroCAN1569::_dd_type arg)
  {
    msg_.dd = std::move(arg);
    return Init_NiroCAN1569_hh(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1569 msg_;
};

class Init_NiroCAN1569_mm
{
public:
  explicit Init_NiroCAN1569_mm(::custom_msgs::msg::NiroCAN1569 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN1569_dd mm(::custom_msgs::msg::NiroCAN1569::_mm_type arg)
  {
    msg_.mm = std::move(arg);
    return Init_NiroCAN1569_dd(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1569 msg_;
};

class Init_NiroCAN1569_yyyy
{
public:
  Init_NiroCAN1569_yyyy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NiroCAN1569_mm yyyy(::custom_msgs::msg::NiroCAN1569::_yyyy_type arg)
  {
    msg_.yyyy = std::move(arg);
    return Init_NiroCAN1569_mm(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1569 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN1569>()
{
  return custom_msgs::msg::builder::Init_NiroCAN1569_yyyy();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1569__BUILDER_HPP_
