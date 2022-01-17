// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN310.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN310__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN310__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can310__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN310_altitude_acc
{
public:
  explicit Init_SbgCAN310_altitude_acc(::custom_msgs::msg::SbgCAN310 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN310 altitude_acc(::custom_msgs::msg::SbgCAN310::_altitude_acc_type arg)
  {
    msg_.altitude_acc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN310 msg_;
};

class Init_SbgCAN310_longitude_acc
{
public:
  explicit Init_SbgCAN310_longitude_acc(::custom_msgs::msg::SbgCAN310 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN310_altitude_acc longitude_acc(::custom_msgs::msg::SbgCAN310::_longitude_acc_type arg)
  {
    msg_.longitude_acc = std::move(arg);
    return Init_SbgCAN310_altitude_acc(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN310 msg_;
};

class Init_SbgCAN310_latitude_acc
{
public:
  Init_SbgCAN310_latitude_acc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN310_longitude_acc latitude_acc(::custom_msgs::msg::SbgCAN310::_latitude_acc_type arg)
  {
    msg_.latitude_acc = std::move(arg);
    return Init_SbgCAN310_longitude_acc(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN310 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN310>()
{
  return custom_msgs::msg::builder::Init_SbgCAN310_latitude_acc();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN310__BUILDER_HPP_
