// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN291.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN291__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN291__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can291__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN291_delta_vel_z
{
public:
  explicit Init_SbgCAN291_delta_vel_z(::custom_msgs::msg::SbgCAN291 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN291 delta_vel_z(::custom_msgs::msg::SbgCAN291::_delta_vel_z_type arg)
  {
    msg_.delta_vel_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN291 msg_;
};

class Init_SbgCAN291_delta_vel_y
{
public:
  explicit Init_SbgCAN291_delta_vel_y(::custom_msgs::msg::SbgCAN291 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN291_delta_vel_z delta_vel_y(::custom_msgs::msg::SbgCAN291::_delta_vel_y_type arg)
  {
    msg_.delta_vel_y = std::move(arg);
    return Init_SbgCAN291_delta_vel_z(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN291 msg_;
};

class Init_SbgCAN291_delta_vel_x
{
public:
  Init_SbgCAN291_delta_vel_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN291_delta_vel_y delta_vel_x(::custom_msgs::msg::SbgCAN291::_delta_vel_x_type arg)
  {
    msg_.delta_vel_x = std::move(arg);
    return Init_SbgCAN291_delta_vel_y(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN291 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN291>()
{
  return custom_msgs::msg::builder::Init_SbgCAN291_delta_vel_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN291__BUILDER_HPP_
