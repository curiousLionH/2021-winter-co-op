// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN640.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN640__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN640__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can640__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN640_gway_wheel_velocity_fl
{
public:
  explicit Init_NiroCAN640_gway_wheel_velocity_fl(::custom_msgs::msg::NiroCAN640 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::NiroCAN640 gway_wheel_velocity_fl(::custom_msgs::msg::NiroCAN640::_gway_wheel_velocity_fl_type arg)
  {
    msg_.gway_wheel_velocity_fl = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN640 msg_;
};

class Init_NiroCAN640_gway_wheel_velocity_rr
{
public:
  explicit Init_NiroCAN640_gway_wheel_velocity_rr(::custom_msgs::msg::NiroCAN640 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN640_gway_wheel_velocity_fl gway_wheel_velocity_rr(::custom_msgs::msg::NiroCAN640::_gway_wheel_velocity_rr_type arg)
  {
    msg_.gway_wheel_velocity_rr = std::move(arg);
    return Init_NiroCAN640_gway_wheel_velocity_fl(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN640 msg_;
};

class Init_NiroCAN640_gway_wheel_velocity_rl
{
public:
  explicit Init_NiroCAN640_gway_wheel_velocity_rl(::custom_msgs::msg::NiroCAN640 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN640_gway_wheel_velocity_rr gway_wheel_velocity_rl(::custom_msgs::msg::NiroCAN640::_gway_wheel_velocity_rl_type arg)
  {
    msg_.gway_wheel_velocity_rl = std::move(arg);
    return Init_NiroCAN640_gway_wheel_velocity_rr(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN640 msg_;
};

class Init_NiroCAN640_gway_wheel_velocity_fr
{
public:
  Init_NiroCAN640_gway_wheel_velocity_fr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NiroCAN640_gway_wheel_velocity_rl gway_wheel_velocity_fr(::custom_msgs::msg::NiroCAN640::_gway_wheel_velocity_fr_type arg)
  {
    msg_.gway_wheel_velocity_fr = std::move(arg);
    return Init_NiroCAN640_gway_wheel_velocity_rl(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN640 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN640>()
{
  return custom_msgs::msg::builder::Init_NiroCAN640_gway_wheel_velocity_fr();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN640__BUILDER_HPP_
