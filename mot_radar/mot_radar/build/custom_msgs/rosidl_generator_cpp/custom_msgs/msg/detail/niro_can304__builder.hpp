// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN304.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN304__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN304__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can304__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN304_gway_yaw_rate_sensor
{
public:
  explicit Init_NiroCAN304_gway_yaw_rate_sensor(::custom_msgs::msg::NiroCAN304 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::NiroCAN304 gway_yaw_rate_sensor(::custom_msgs::msg::NiroCAN304::_gway_yaw_rate_sensor_type arg)
  {
    msg_.gway_yaw_rate_sensor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN304 msg_;
};

class Init_NiroCAN304_gway_longitudinal_accel_speed
{
public:
  explicit Init_NiroCAN304_gway_longitudinal_accel_speed(::custom_msgs::msg::NiroCAN304 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN304_gway_yaw_rate_sensor gway_longitudinal_accel_speed(::custom_msgs::msg::NiroCAN304::_gway_longitudinal_accel_speed_type arg)
  {
    msg_.gway_longitudinal_accel_speed = std::move(arg);
    return Init_NiroCAN304_gway_yaw_rate_sensor(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN304 msg_;
};

class Init_NiroCAN304_gway_brakemastercylinderpressure
{
public:
  explicit Init_NiroCAN304_gway_brakemastercylinderpressure(::custom_msgs::msg::NiroCAN304 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN304_gway_longitudinal_accel_speed gway_brakemastercylinderpressure(::custom_msgs::msg::NiroCAN304::_gway_brakemastercylinderpressure_type arg)
  {
    msg_.gway_brakemastercylinderpressure = std::move(arg);
    return Init_NiroCAN304_gway_longitudinal_accel_speed(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN304 msg_;
};

class Init_NiroCAN304_gway_lateral_accel_speed
{
public:
  Init_NiroCAN304_gway_lateral_accel_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NiroCAN304_gway_brakemastercylinderpressure gway_lateral_accel_speed(::custom_msgs::msg::NiroCAN304::_gway_lateral_accel_speed_type arg)
  {
    msg_.gway_lateral_accel_speed = std::move(arg);
    return Init_NiroCAN304_gway_brakemastercylinderpressure(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN304 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN304>()
{
  return custom_msgs::msg::builder::Init_NiroCAN304_gway_lateral_accel_speed();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN304__BUILDER_HPP_
