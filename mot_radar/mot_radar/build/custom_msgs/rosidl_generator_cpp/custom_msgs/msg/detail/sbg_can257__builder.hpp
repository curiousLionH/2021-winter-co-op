// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN257.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN257__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN257__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can257__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN257_aiding_status
{
public:
  explicit Init_SbgCAN257_aiding_status(::custom_msgs::msg::SbgCAN257 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN257 aiding_status(::custom_msgs::msg::SbgCAN257::_aiding_status_type arg)
  {
    msg_.aiding_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN257 msg_;
};

class Init_SbgCAN257_com_status
{
public:
  Init_SbgCAN257_com_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN257_aiding_status com_status(::custom_msgs::msg::SbgCAN257::_com_status_type arg)
  {
    msg_.com_status = std::move(arg);
    return Init_SbgCAN257_aiding_status(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN257 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN257>()
{
  return custom_msgs::msg::builder::Init_SbgCAN257_com_status();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN257__BUILDER_HPP_
