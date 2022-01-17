// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN560.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN560__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN560__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can560__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN560_chksum22
{
public:
  explicit Init_NiroCAN560_chksum22(::custom_msgs::msg::NiroCAN560 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::NiroCAN560 chksum22(::custom_msgs::msg::NiroCAN560::_chksum22_type arg)
  {
    msg_.chksum22 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN560 msg_;
};

class Init_NiroCAN560_alivecounter22
{
public:
  explicit Init_NiroCAN560_alivecounter22(::custom_msgs::msg::NiroCAN560 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN560_chksum22 alivecounter22(::custom_msgs::msg::NiroCAN560::_alivecounter22_type arg)
  {
    msg_.alivecounter22 = std::move(arg);
    return Init_NiroCAN560_chksum22(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN560 msg_;
};

class Init_NiroCAN560_brk22_areq2
{
public:
  explicit Init_NiroCAN560_brk22_areq2(::custom_msgs::msg::NiroCAN560 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN560_alivecounter22 brk22_areq2(::custom_msgs::msg::NiroCAN560::_brk22_areq2_type arg)
  {
    msg_.brk22_areq2 = std::move(arg);
    return Init_NiroCAN560_alivecounter22(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN560 msg_;
};

class Init_NiroCAN560_brk22_1_35
{
public:
  explicit Init_NiroCAN560_brk22_1_35(::custom_msgs::msg::NiroCAN560 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN560_brk22_areq2 brk22_1_35(::custom_msgs::msg::NiroCAN560::_brk22_1_35_type arg)
  {
    msg_.brk22_1_35 = std::move(arg);
    return Init_NiroCAN560_brk22_areq2(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN560 msg_;
};

class Init_NiroCAN560_brk22_areq1
{
public:
  explicit Init_NiroCAN560_brk22_areq1(::custom_msgs::msg::NiroCAN560 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN560_brk22_1_35 brk22_areq1(::custom_msgs::msg::NiroCAN560::_brk22_areq1_type arg)
  {
    msg_.brk22_areq1 = std::move(arg);
    return Init_NiroCAN560_brk22_1_35(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN560 msg_;
};

class Init_NiroCAN560_brk22_1_15
{
public:
  explicit Init_NiroCAN560_brk22_1_15(::custom_msgs::msg::NiroCAN560 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN560_brk22_areq1 brk22_1_15(::custom_msgs::msg::NiroCAN560::_brk22_1_15_type arg)
  {
    msg_.brk22_1_15 = std::move(arg);
    return Init_NiroCAN560_brk22_areq1(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN560 msg_;
};

class Init_NiroCAN560_brk22_mode_b
{
public:
  explicit Init_NiroCAN560_brk22_mode_b(::custom_msgs::msg::NiroCAN560 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN560_brk22_1_15 brk22_mode_b(::custom_msgs::msg::NiroCAN560::_brk22_mode_b_type arg)
  {
    msg_.brk22_mode_b = std::move(arg);
    return Init_NiroCAN560_brk22_1_15(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN560 msg_;
};

class Init_NiroCAN560_brk22_i
{
public:
  Init_NiroCAN560_brk22_i()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NiroCAN560_brk22_mode_b brk22_i(::custom_msgs::msg::NiroCAN560::_brk22_i_type arg)
  {
    msg_.brk22_i = std::move(arg);
    return Init_NiroCAN560_brk22_mode_b(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN560 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN560>()
{
  return custom_msgs::msg::builder::Init_NiroCAN560_brk22_i();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN560__BUILDER_HPP_
