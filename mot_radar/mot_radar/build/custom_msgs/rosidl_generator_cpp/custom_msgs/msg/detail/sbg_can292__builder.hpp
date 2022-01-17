// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN292.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN292__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN292__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can292__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN292_delta_angle_z
{
public:
  explicit Init_SbgCAN292_delta_angle_z(::custom_msgs::msg::SbgCAN292 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN292 delta_angle_z(::custom_msgs::msg::SbgCAN292::_delta_angle_z_type arg)
  {
    msg_.delta_angle_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN292 msg_;
};

class Init_SbgCAN292_delta_angle_y
{
public:
  explicit Init_SbgCAN292_delta_angle_y(::custom_msgs::msg::SbgCAN292 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN292_delta_angle_z delta_angle_y(::custom_msgs::msg::SbgCAN292::_delta_angle_y_type arg)
  {
    msg_.delta_angle_y = std::move(arg);
    return Init_SbgCAN292_delta_angle_z(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN292 msg_;
};

class Init_SbgCAN292_delta_angle_x
{
public:
  Init_SbgCAN292_delta_angle_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN292_delta_angle_y delta_angle_x(::custom_msgs::msg::SbgCAN292::_delta_angle_x_type arg)
  {
    msg_.delta_angle_x = std::move(arg);
    return Init_SbgCAN292_delta_angle_y(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN292 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN292>()
{
  return custom_msgs::msg::builder::Init_SbgCAN292_delta_angle_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN292__BUILDER_HPP_
