// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN273.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN273__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN273__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can273__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN273_micro_sec
{
public:
  explicit Init_SbgCAN273_micro_sec(::custom_msgs::msg::SbgCAN273 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN273 micro_sec(::custom_msgs::msg::SbgCAN273::_micro_sec_type arg)
  {
    msg_.micro_sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN273 msg_;
};

class Init_SbgCAN273_sec
{
public:
  explicit Init_SbgCAN273_sec(::custom_msgs::msg::SbgCAN273 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN273_micro_sec sec(::custom_msgs::msg::SbgCAN273::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return Init_SbgCAN273_micro_sec(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN273 msg_;
};

class Init_SbgCAN273_min
{
public:
  explicit Init_SbgCAN273_min(::custom_msgs::msg::SbgCAN273 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN273_sec min(::custom_msgs::msg::SbgCAN273::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_SbgCAN273_sec(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN273 msg_;
};

class Init_SbgCAN273_hour
{
public:
  explicit Init_SbgCAN273_hour(::custom_msgs::msg::SbgCAN273 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN273_min hour(::custom_msgs::msg::SbgCAN273::_hour_type arg)
  {
    msg_.hour = std::move(arg);
    return Init_SbgCAN273_min(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN273 msg_;
};

class Init_SbgCAN273_day
{
public:
  explicit Init_SbgCAN273_day(::custom_msgs::msg::SbgCAN273 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN273_hour day(::custom_msgs::msg::SbgCAN273::_day_type arg)
  {
    msg_.day = std::move(arg);
    return Init_SbgCAN273_hour(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN273 msg_;
};

class Init_SbgCAN273_month
{
public:
  explicit Init_SbgCAN273_month(::custom_msgs::msg::SbgCAN273 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN273_day month(::custom_msgs::msg::SbgCAN273::_month_type arg)
  {
    msg_.month = std::move(arg);
    return Init_SbgCAN273_day(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN273 msg_;
};

class Init_SbgCAN273_year
{
public:
  Init_SbgCAN273_year()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN273_month year(::custom_msgs::msg::SbgCAN273::_year_type arg)
  {
    msg_.year = std::move(arg);
    return Init_SbgCAN273_month(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN273 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN273>()
{
  return custom_msgs::msg::builder::Init_SbgCAN273_year();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN273__BUILDER_HPP_
