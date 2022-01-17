// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN352.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN352__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN352__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can352__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN352_odo_status
{
public:
  explicit Init_SbgCAN352_odo_status(::custom_msgs::msg::SbgCAN352 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN352 odo_status(::custom_msgs::msg::SbgCAN352::_odo_status_type arg)
  {
    msg_.odo_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN352 msg_;
};

class Init_SbgCAN352_time_stamp4
{
public:
  Init_SbgCAN352_time_stamp4()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN352_odo_status time_stamp4(::custom_msgs::msg::SbgCAN352::_time_stamp4_type arg)
  {
    msg_.time_stamp4 = std::move(arg);
    return Init_SbgCAN352_odo_status(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN352 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN352>()
{
  return custom_msgs::msg::builder::Init_SbgCAN352_time_stamp4();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN352__BUILDER_HPP_
