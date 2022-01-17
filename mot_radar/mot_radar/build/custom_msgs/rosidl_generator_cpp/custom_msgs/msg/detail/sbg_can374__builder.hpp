// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN374.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN374__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN374__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can374__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN374_diff_corr_age
{
public:
  explicit Init_SbgCAN374_diff_corr_age(::custom_msgs::msg::SbgCAN374 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN374 diff_corr_age(::custom_msgs::msg::SbgCAN374::_diff_corr_age_type arg)
  {
    msg_.diff_corr_age = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN374 msg_;
};

class Init_SbgCAN374_num_sv
{
public:
  explicit Init_SbgCAN374_num_sv(::custom_msgs::msg::SbgCAN374 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN374_diff_corr_age num_sv(::custom_msgs::msg::SbgCAN374::_num_sv_type arg)
  {
    msg_.num_sv = std::move(arg);
    return Init_SbgCAN374_diff_corr_age(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN374 msg_;
};

class Init_SbgCAN374_undulation
{
public:
  explicit Init_SbgCAN374_undulation(::custom_msgs::msg::SbgCAN374 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN374_num_sv undulation(::custom_msgs::msg::SbgCAN374::_undulation_type arg)
  {
    msg_.undulation = std::move(arg);
    return Init_SbgCAN374_num_sv(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN374 msg_;
};

class Init_SbgCAN374_altitude
{
public:
  Init_SbgCAN374_altitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN374_undulation altitude(::custom_msgs::msg::SbgCAN374::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_SbgCAN374_undulation(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN374 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN374>()
{
  return custom_msgs::msg::builder::Init_SbgCAN374_altitude();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN374__BUILDER_HPP_
