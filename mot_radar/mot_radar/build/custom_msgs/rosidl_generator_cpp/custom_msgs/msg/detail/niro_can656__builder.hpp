// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN656.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN656__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN656__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can656__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN656_gway_steering_status
{
public:
  explicit Init_NiroCAN656_gway_steering_status(::custom_msgs::msg::NiroCAN656 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::NiroCAN656 gway_steering_status(::custom_msgs::msg::NiroCAN656::_gway_steering_status_type arg)
  {
    msg_.gway_steering_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN656 msg_;
};

class Init_NiroCAN656_gway_steering_tq
{
public:
  explicit Init_NiroCAN656_gway_steering_tq(::custom_msgs::msg::NiroCAN656 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN656_gway_steering_status gway_steering_tq(::custom_msgs::msg::NiroCAN656::_gway_steering_tq_type arg)
  {
    msg_.gway_steering_tq = std::move(arg);
    return Init_NiroCAN656_gway_steering_status(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN656 msg_;
};

class Init_NiroCAN656_gway_steering_angle
{
public:
  Init_NiroCAN656_gway_steering_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NiroCAN656_gway_steering_tq gway_steering_angle(::custom_msgs::msg::NiroCAN656::_gway_steering_angle_type arg)
  {
    msg_.gway_steering_angle = std::move(arg);
    return Init_NiroCAN656_gway_steering_tq(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN656 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN656>()
{
  return custom_msgs::msg::builder::Init_NiroCAN656_gway_steering_angle();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN656__BUILDER_HPP_
