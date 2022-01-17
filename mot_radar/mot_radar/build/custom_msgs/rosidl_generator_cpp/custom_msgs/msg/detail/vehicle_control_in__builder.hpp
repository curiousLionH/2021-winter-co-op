// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/VehicleControlIn.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CONTROL_IN__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CONTROL_IN__BUILDER_HPP_

#include "custom_msgs/msg/detail/vehicle_control_in__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleControlIn_gear_no
{
public:
  explicit Init_VehicleControlIn_gear_no(::custom_msgs::msg::VehicleControlIn & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::VehicleControlIn gear_no(::custom_msgs::msg::VehicleControlIn::_gear_no_type arg)
  {
    msg_.gear_no = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::VehicleControlIn msg_;
};

class Init_VehicleControlIn_steer_ang
{
public:
  explicit Init_VehicleControlIn_steer_ang(::custom_msgs::msg::VehicleControlIn & msg)
  : msg_(msg)
  {}
  Init_VehicleControlIn_gear_no steer_ang(::custom_msgs::msg::VehicleControlIn::_steer_ang_type arg)
  {
    msg_.steer_ang = std::move(arg);
    return Init_VehicleControlIn_gear_no(msg_);
  }

private:
  ::custom_msgs::msg::VehicleControlIn msg_;
};

class Init_VehicleControlIn_ax
{
public:
  explicit Init_VehicleControlIn_ax(::custom_msgs::msg::VehicleControlIn & msg)
  : msg_(msg)
  {}
  Init_VehicleControlIn_steer_ang ax(::custom_msgs::msg::VehicleControlIn::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_VehicleControlIn_steer_ang(msg_);
  }

private:
  ::custom_msgs::msg::VehicleControlIn msg_;
};

class Init_VehicleControlIn_sw
{
public:
  Init_VehicleControlIn_sw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleControlIn_ax sw(::custom_msgs::msg::VehicleControlIn::_sw_type arg)
  {
    msg_.sw = std::move(arg);
    return Init_VehicleControlIn_ax(msg_);
  }

private:
  ::custom_msgs::msg::VehicleControlIn msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::VehicleControlIn>()
{
  return custom_msgs::msg::builder::Init_VehicleControlIn_sw();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CONTROL_IN__BUILDER_HPP_
