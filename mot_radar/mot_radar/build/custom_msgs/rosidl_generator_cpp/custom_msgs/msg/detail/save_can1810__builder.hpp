// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SaveCAN1810.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1810__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1810__BUILDER_HPP_

#include "custom_msgs/msg/detail/save_can1810__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveCAN1810_wheel_spd_rl
{
public:
  explicit Init_SaveCAN1810_wheel_spd_rl(::custom_msgs::msg::SaveCAN1810 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SaveCAN1810 wheel_spd_rl(::custom_msgs::msg::SaveCAN1810::_wheel_spd_rl_type arg)
  {
    msg_.wheel_spd_rl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1810 msg_;
};

class Init_SaveCAN1810_wheel_spd_rr
{
public:
  explicit Init_SaveCAN1810_wheel_spd_rr(::custom_msgs::msg::SaveCAN1810 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1810_wheel_spd_rl wheel_spd_rr(::custom_msgs::msg::SaveCAN1810::_wheel_spd_rr_type arg)
  {
    msg_.wheel_spd_rr = std::move(arg);
    return Init_SaveCAN1810_wheel_spd_rl(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1810 msg_;
};

class Init_SaveCAN1810_wheel_spd_fl
{
public:
  explicit Init_SaveCAN1810_wheel_spd_fl(::custom_msgs::msg::SaveCAN1810 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1810_wheel_spd_rr wheel_spd_fl(::custom_msgs::msg::SaveCAN1810::_wheel_spd_fl_type arg)
  {
    msg_.wheel_spd_fl = std::move(arg);
    return Init_SaveCAN1810_wheel_spd_rr(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1810 msg_;
};

class Init_SaveCAN1810_wheel_spd_fr
{
public:
  Init_SaveCAN1810_wheel_spd_fr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveCAN1810_wheel_spd_fl wheel_spd_fr(::custom_msgs::msg::SaveCAN1810::_wheel_spd_fr_type arg)
  {
    msg_.wheel_spd_fr = std::move(arg);
    return Init_SaveCAN1810_wheel_spd_fl(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1810 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SaveCAN1810>()
{
  return custom_msgs::msg::builder::Init_SaveCAN1810_wheel_spd_fr();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1810__BUILDER_HPP_
