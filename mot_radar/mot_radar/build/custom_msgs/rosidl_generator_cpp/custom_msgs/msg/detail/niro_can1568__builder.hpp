// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN1568.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1568__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1568__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can1568__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN1568_ped2_time_remain
{
public:
  explicit Init_NiroCAN1568_ped2_time_remain(::custom_msgs::msg::NiroCAN1568 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::NiroCAN1568 ped2_time_remain(::custom_msgs::msg::NiroCAN1568::_ped2_time_remain_type arg)
  {
    msg_.ped2_time_remain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1568 msg_;
};

class Init_NiroCAN1568_ped2_status
{
public:
  explicit Init_NiroCAN1568_ped2_status(::custom_msgs::msg::NiroCAN1568 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN1568_ped2_time_remain ped2_status(::custom_msgs::msg::NiroCAN1568::_ped2_status_type arg)
  {
    msg_.ped2_status = std::move(arg);
    return Init_NiroCAN1568_ped2_time_remain(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1568 msg_;
};

class Init_NiroCAN1568_ped1_time_remain
{
public:
  explicit Init_NiroCAN1568_ped1_time_remain(::custom_msgs::msg::NiroCAN1568 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN1568_ped2_status ped1_time_remain(::custom_msgs::msg::NiroCAN1568::_ped1_time_remain_type arg)
  {
    msg_.ped1_time_remain = std::move(arg);
    return Init_NiroCAN1568_ped2_status(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1568 msg_;
};

class Init_NiroCAN1568_ped1_status
{
public:
  explicit Init_NiroCAN1568_ped1_status(::custom_msgs::msg::NiroCAN1568 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN1568_ped1_time_remain ped1_status(::custom_msgs::msg::NiroCAN1568::_ped1_status_type arg)
  {
    msg_.ped1_status = std::move(arg);
    return Init_NiroCAN1568_ped1_time_remain(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1568 msg_;
};

class Init_NiroCAN1568_left_time_remain
{
public:
  explicit Init_NiroCAN1568_left_time_remain(::custom_msgs::msg::NiroCAN1568 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN1568_ped1_status left_time_remain(::custom_msgs::msg::NiroCAN1568::_left_time_remain_type arg)
  {
    msg_.left_time_remain = std::move(arg);
    return Init_NiroCAN1568_ped1_status(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1568 msg_;
};

class Init_NiroCAN1568_left_status
{
public:
  explicit Init_NiroCAN1568_left_status(::custom_msgs::msg::NiroCAN1568 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN1568_left_time_remain left_status(::custom_msgs::msg::NiroCAN1568::_left_status_type arg)
  {
    msg_.left_status = std::move(arg);
    return Init_NiroCAN1568_left_time_remain(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1568 msg_;
};

class Init_NiroCAN1568_str_time_remain
{
public:
  explicit Init_NiroCAN1568_str_time_remain(::custom_msgs::msg::NiroCAN1568 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN1568_left_status str_time_remain(::custom_msgs::msg::NiroCAN1568::_str_time_remain_type arg)
  {
    msg_.str_time_remain = std::move(arg);
    return Init_NiroCAN1568_left_status(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1568 msg_;
};

class Init_NiroCAN1568_str_status
{
public:
  Init_NiroCAN1568_str_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NiroCAN1568_str_time_remain str_status(::custom_msgs::msg::NiroCAN1568::_str_status_type arg)
  {
    msg_.str_status = std::move(arg);
    return Init_NiroCAN1568_str_time_remain(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1568 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN1568>()
{
  return custom_msgs::msg::builder::Init_NiroCAN1568_str_status();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1568__BUILDER_HPP_
