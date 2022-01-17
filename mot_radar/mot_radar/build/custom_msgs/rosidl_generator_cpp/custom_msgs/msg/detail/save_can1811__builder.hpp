// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SaveCAN1811.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1811__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1811__BUILDER_HPP_

#include "custom_msgs/msg/detail/save_can1811__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveCAN1811_brk_cylinder
{
public:
  explicit Init_SaveCAN1811_brk_cylinder(::custom_msgs::msg::SaveCAN1811 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SaveCAN1811 brk_cylinder(::custom_msgs::msg::SaveCAN1811::_brk_cylinder_type arg)
  {
    msg_.brk_cylinder = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1811 msg_;
};

class Init_SaveCAN1811_yaw_rate
{
public:
  explicit Init_SaveCAN1811_yaw_rate(::custom_msgs::msg::SaveCAN1811 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1811_brk_cylinder yaw_rate(::custom_msgs::msg::SaveCAN1811::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_SaveCAN1811_brk_cylinder(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1811 msg_;
};

class Init_SaveCAN1811_long_accel
{
public:
  explicit Init_SaveCAN1811_long_accel(::custom_msgs::msg::SaveCAN1811 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1811_yaw_rate long_accel(::custom_msgs::msg::SaveCAN1811::_long_accel_type arg)
  {
    msg_.long_accel = std::move(arg);
    return Init_SaveCAN1811_yaw_rate(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1811 msg_;
};

class Init_SaveCAN1811_lat_accel
{
public:
  Init_SaveCAN1811_lat_accel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveCAN1811_long_accel lat_accel(::custom_msgs::msg::SaveCAN1811::_lat_accel_type arg)
  {
    msg_.lat_accel = std::move(arg);
    return Init_SaveCAN1811_long_accel(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1811 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SaveCAN1811>()
{
  return custom_msgs::msg::builder::Init_SaveCAN1811_lat_accel();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1811__BUILDER_HPP_
