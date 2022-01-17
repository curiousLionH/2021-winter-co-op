// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN272.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN272__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN272__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can272__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN272_sft_ctl_en
{
public:
  explicit Init_NiroCAN272_sft_ctl_en(::custom_msgs::msg::NiroCAN272 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::NiroCAN272 sft_ctl_en(::custom_msgs::msg::NiroCAN272::_sft_ctl_en_type arg)
  {
    msg_.sft_ctl_en = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN272 msg_;
};

class Init_NiroCAN272_sft_d_reversed
{
public:
  explicit Init_NiroCAN272_sft_d_reversed(::custom_msgs::msg::NiroCAN272 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN272_sft_ctl_en sft_d_reversed(::custom_msgs::msg::NiroCAN272::_sft_d_reversed_type arg)
  {
    msg_.sft_d_reversed = std::move(arg);
    return Init_NiroCAN272_sft_ctl_en(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN272 msg_;
};

class Init_NiroCAN272_sft_n_reversed
{
public:
  explicit Init_NiroCAN272_sft_n_reversed(::custom_msgs::msg::NiroCAN272 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN272_sft_d_reversed sft_n_reversed(::custom_msgs::msg::NiroCAN272::_sft_n_reversed_type arg)
  {
    msg_.sft_n_reversed = std::move(arg);
    return Init_NiroCAN272_sft_d_reversed(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN272 msg_;
};

class Init_NiroCAN272_sft_r_reversed
{
public:
  explicit Init_NiroCAN272_sft_r_reversed(::custom_msgs::msg::NiroCAN272 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN272_sft_n_reversed sft_r_reversed(::custom_msgs::msg::NiroCAN272::_sft_r_reversed_type arg)
  {
    msg_.sft_r_reversed = std::move(arg);
    return Init_NiroCAN272_sft_n_reversed(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN272 msg_;
};

class Init_NiroCAN272_sft_p_reversed
{
public:
  explicit Init_NiroCAN272_sft_p_reversed(::custom_msgs::msg::NiroCAN272 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN272_sft_r_reversed sft_p_reversed(::custom_msgs::msg::NiroCAN272::_sft_p_reversed_type arg)
  {
    msg_.sft_p_reversed = std::move(arg);
    return Init_NiroCAN272_sft_r_reversed(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN272 msg_;
};

class Init_NiroCAN272_sft_d
{
public:
  explicit Init_NiroCAN272_sft_d(::custom_msgs::msg::NiroCAN272 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN272_sft_p_reversed sft_d(::custom_msgs::msg::NiroCAN272::_sft_d_type arg)
  {
    msg_.sft_d = std::move(arg);
    return Init_NiroCAN272_sft_p_reversed(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN272 msg_;
};

class Init_NiroCAN272_sft_n
{
public:
  explicit Init_NiroCAN272_sft_n(::custom_msgs::msg::NiroCAN272 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN272_sft_d sft_n(::custom_msgs::msg::NiroCAN272::_sft_n_type arg)
  {
    msg_.sft_n = std::move(arg);
    return Init_NiroCAN272_sft_d(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN272 msg_;
};

class Init_NiroCAN272_sft_r
{
public:
  explicit Init_NiroCAN272_sft_r(::custom_msgs::msg::NiroCAN272 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN272_sft_n sft_r(::custom_msgs::msg::NiroCAN272::_sft_r_type arg)
  {
    msg_.sft_r = std::move(arg);
    return Init_NiroCAN272_sft_n(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN272 msg_;
};

class Init_NiroCAN272_sft_p
{
public:
  Init_NiroCAN272_sft_p()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NiroCAN272_sft_r sft_p(::custom_msgs::msg::NiroCAN272::_sft_p_type arg)
  {
    msg_.sft_p = std::move(arg);
    return Init_NiroCAN272_sft_r(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN272 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN272>()
{
  return custom_msgs::msg::builder::Init_NiroCAN272_sft_p();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN272__BUILDER_HPP_
