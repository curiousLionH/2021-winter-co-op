// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN1312.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1312__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1312__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can1312__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN1312_gway_cluster_odometer
{
public:
  Init_NiroCAN1312_gway_cluster_odometer()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::msg::NiroCAN1312 gway_cluster_odometer(::custom_msgs::msg::NiroCAN1312::_gway_cluster_odometer_type arg)
  {
    msg_.gway_cluster_odometer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1312 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN1312>()
{
  return custom_msgs::msg::builder::Init_NiroCAN1312_gway_cluster_odometer();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1312__BUILDER_HPP_
