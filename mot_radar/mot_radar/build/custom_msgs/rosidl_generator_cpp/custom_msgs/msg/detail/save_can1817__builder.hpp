// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SaveCAN1817.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1817__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1817__BUILDER_HPP_

#include "custom_msgs/msg/detail/save_can1817__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveCAN1817_ped2_time_remain
{
public:
  explicit Init_SaveCAN1817_ped2_time_remain(::custom_msgs::msg::SaveCAN1817 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SaveCAN1817 ped2_time_remain(::custom_msgs::msg::SaveCAN1817::_ped2_time_remain_type arg)
  {
    msg_.ped2_time_remain = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1817 msg_;
};

class Init_SaveCAN1817_ped2_status
{
public:
  explicit Init_SaveCAN1817_ped2_status(::custom_msgs::msg::SaveCAN1817 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1817_ped2_time_remain ped2_status(::custom_msgs::msg::SaveCAN1817::_ped2_status_type arg)
  {
    msg_.ped2_status = std::move(arg);
    return Init_SaveCAN1817_ped2_time_remain(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1817 msg_;
};

class Init_SaveCAN1817_ped1_time_remain
{
public:
  explicit Init_SaveCAN1817_ped1_time_remain(::custom_msgs::msg::SaveCAN1817 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1817_ped2_status ped1_time_remain(::custom_msgs::msg::SaveCAN1817::_ped1_time_remain_type arg)
  {
    msg_.ped1_time_remain = std::move(arg);
    return Init_SaveCAN1817_ped2_status(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1817 msg_;
};

class Init_SaveCAN1817_ped1_status
{
public:
  explicit Init_SaveCAN1817_ped1_status(::custom_msgs::msg::SaveCAN1817 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1817_ped1_time_remain ped1_status(::custom_msgs::msg::SaveCAN1817::_ped1_status_type arg)
  {
    msg_.ped1_status = std::move(arg);
    return Init_SaveCAN1817_ped1_time_remain(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1817 msg_;
};

class Init_SaveCAN1817_left_time_remain
{
public:
  explicit Init_SaveCAN1817_left_time_remain(::custom_msgs::msg::SaveCAN1817 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1817_ped1_status left_time_remain(::custom_msgs::msg::SaveCAN1817::_left_time_remain_type arg)
  {
    msg_.left_time_remain = std::move(arg);
    return Init_SaveCAN1817_ped1_status(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1817 msg_;
};

class Init_SaveCAN1817_left_status
{
public:
  explicit Init_SaveCAN1817_left_status(::custom_msgs::msg::SaveCAN1817 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1817_left_time_remain left_status(::custom_msgs::msg::SaveCAN1817::_left_status_type arg)
  {
    msg_.left_status = std::move(arg);
    return Init_SaveCAN1817_left_time_remain(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1817 msg_;
};

class Init_SaveCAN1817_str_time_remain
{
public:
  explicit Init_SaveCAN1817_str_time_remain(::custom_msgs::msg::SaveCAN1817 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1817_left_status str_time_remain(::custom_msgs::msg::SaveCAN1817::_str_time_remain_type arg)
  {
    msg_.str_time_remain = std::move(arg);
    return Init_SaveCAN1817_left_status(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1817 msg_;
};

class Init_SaveCAN1817_str_status
{
public:
  Init_SaveCAN1817_str_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveCAN1817_str_time_remain str_status(::custom_msgs::msg::SaveCAN1817::_str_status_type arg)
  {
    msg_.str_status = std::move(arg);
    return Init_SaveCAN1817_str_time_remain(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1817 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SaveCAN1817>()
{
  return custom_msgs::msg::builder::Init_SaveCAN1817_str_status();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1817__BUILDER_HPP_
