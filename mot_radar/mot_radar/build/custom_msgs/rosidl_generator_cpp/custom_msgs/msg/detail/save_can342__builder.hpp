// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SaveCAN342.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN342__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN342__BUILDER_HPP_

#include "custom_msgs/msg/detail/save_can342__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveCAN342_aliv_cnt
{
public:
  explicit Init_SaveCAN342_aliv_cnt(::custom_msgs::msg::SaveCAN342 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SaveCAN342 aliv_cnt(::custom_msgs::msg::SaveCAN342::_aliv_cnt_type arg)
  {
    msg_.aliv_cnt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN342 msg_;
};

class Init_SaveCAN342_aeb_decel_value
{
public:
  explicit Init_SaveCAN342_aeb_decel_value(::custom_msgs::msg::SaveCAN342 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN342_aliv_cnt aeb_decel_value(::custom_msgs::msg::SaveCAN342::_aeb_decel_value_type arg)
  {
    msg_.aeb_decel_value = std::move(arg);
    return Init_SaveCAN342_aliv_cnt(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN342 msg_;
};

class Init_SaveCAN342_turn_sig_en
{
public:
  explicit Init_SaveCAN342_turn_sig_en(::custom_msgs::msg::SaveCAN342 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN342_aeb_decel_value turn_sig_en(::custom_msgs::msg::SaveCAN342::_turn_sig_en_type arg)
  {
    msg_.turn_sig_en = std::move(arg);
    return Init_SaveCAN342_aeb_decel_value(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN342 msg_;
};

class Init_SaveCAN342_gear_change
{
public:
  explicit Init_SaveCAN342_gear_change(::custom_msgs::msg::SaveCAN342 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN342_turn_sig_en gear_change(::custom_msgs::msg::SaveCAN342::_gear_change_type arg)
  {
    msg_.gear_change = std::move(arg);
    return Init_SaveCAN342_turn_sig_en(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN342 msg_;
};

class Init_SaveCAN342_aeb_en
{
public:
  explicit Init_SaveCAN342_aeb_en(::custom_msgs::msg::SaveCAN342 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN342_gear_change aeb_en(::custom_msgs::msg::SaveCAN342::_aeb_en_type arg)
  {
    msg_.aeb_en = std::move(arg);
    return Init_SaveCAN342_gear_change(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN342 msg_;
};

class Init_SaveCAN342_acc_en
{
public:
  explicit Init_SaveCAN342_acc_en(::custom_msgs::msg::SaveCAN342 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN342_aeb_en acc_en(::custom_msgs::msg::SaveCAN342::_acc_en_type arg)
  {
    msg_.acc_en = std::move(arg);
    return Init_SaveCAN342_aeb_en(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN342 msg_;
};

class Init_SaveCAN342_eps_speed
{
public:
  explicit Init_SaveCAN342_eps_speed(::custom_msgs::msg::SaveCAN342 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN342_acc_en eps_speed(::custom_msgs::msg::SaveCAN342::_eps_speed_type arg)
  {
    msg_.eps_speed = std::move(arg);
    return Init_SaveCAN342_acc_en(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN342 msg_;
};

class Init_SaveCAN342_override_ignore
{
public:
  explicit Init_SaveCAN342_override_ignore(::custom_msgs::msg::SaveCAN342 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN342_eps_speed override_ignore(::custom_msgs::msg::SaveCAN342::_override_ignore_type arg)
  {
    msg_.override_ignore = std::move(arg);
    return Init_SaveCAN342_eps_speed(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN342 msg_;
};

class Init_SaveCAN342_eps_en
{
public:
  Init_SaveCAN342_eps_en()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveCAN342_override_ignore eps_en(::custom_msgs::msg::SaveCAN342::_eps_en_type arg)
  {
    msg_.eps_en = std::move(arg);
    return Init_SaveCAN342_override_ignore(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN342 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SaveCAN342>()
{
  return custom_msgs::msg::builder::Init_SaveCAN342_eps_en();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN342__BUILDER_HPP_
