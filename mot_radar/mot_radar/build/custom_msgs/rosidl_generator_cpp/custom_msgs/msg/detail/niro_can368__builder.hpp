// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN368.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN368__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN368__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can368__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN368_gway_gearseldisp
{
public:
  explicit Init_NiroCAN368_gway_gearseldisp(::custom_msgs::msg::NiroCAN368 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::NiroCAN368 gway_gearseldisp(::custom_msgs::msg::NiroCAN368::_gway_gearseldisp_type arg)
  {
    msg_.gway_gearseldisp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN368 msg_;
};

class Init_NiroCAN368_gway_accel_pedal_position
{
public:
  Init_NiroCAN368_gway_accel_pedal_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NiroCAN368_gway_gearseldisp gway_accel_pedal_position(::custom_msgs::msg::NiroCAN368::_gway_accel_pedal_position_type arg)
  {
    msg_.gway_accel_pedal_position = std::move(arg);
    return Init_NiroCAN368_gway_gearseldisp(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN368 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN368>()
{
  return custom_msgs::msg::builder::Init_NiroCAN368_gway_accel_pedal_position();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN368__BUILDER_HPP_
