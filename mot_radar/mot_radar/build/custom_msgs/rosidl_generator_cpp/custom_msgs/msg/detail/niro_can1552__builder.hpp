// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN1552.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1552__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1552__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can1552__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN1552_gcs_long
{
public:
  explicit Init_NiroCAN1552_gcs_long(::custom_msgs::msg::NiroCAN1552 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::NiroCAN1552 gcs_long(::custom_msgs::msg::NiroCAN1552::_gcs_long_type arg)
  {
    msg_.gcs_long = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1552 msg_;
};

class Init_NiroCAN1552_gcs_lat
{
public:
  Init_NiroCAN1552_gcs_lat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NiroCAN1552_gcs_long gcs_lat(::custom_msgs::msg::NiroCAN1552::_gcs_lat_type arg)
  {
    msg_.gcs_lat = std::move(arg);
    return Init_NiroCAN1552_gcs_long(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN1552 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN1552>()
{
  return custom_msgs::msg::builder::Init_NiroCAN1552_gcs_lat();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1552__BUILDER_HPP_
