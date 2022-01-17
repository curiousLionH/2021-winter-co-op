// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN272.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN272__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN272__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can272__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN272_gps_tow
{
public:
  explicit Init_SbgCAN272_gps_tow(::custom_msgs::msg::SbgCAN272 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN272 gps_tow(::custom_msgs::msg::SbgCAN272::_gps_tow_type arg)
  {
    msg_.gps_tow = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN272 msg_;
};

class Init_SbgCAN272_time_stamp
{
public:
  Init_SbgCAN272_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN272_gps_tow time_stamp(::custom_msgs::msg::SbgCAN272::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgCAN272_gps_tow(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN272 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN272>()
{
  return custom_msgs::msg::builder::Init_SbgCAN272_time_stamp();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN272__BUILDER_HPP_
