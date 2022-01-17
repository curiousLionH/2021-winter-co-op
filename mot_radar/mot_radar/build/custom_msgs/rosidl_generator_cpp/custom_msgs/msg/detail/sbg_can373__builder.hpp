// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN373.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN373__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN373__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can373__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN373_longitude
{
public:
  explicit Init_SbgCAN373_longitude(::custom_msgs::msg::SbgCAN373 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN373 longitude(::custom_msgs::msg::SbgCAN373::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN373 msg_;
};

class Init_SbgCAN373_latitude
{
public:
  Init_SbgCAN373_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN373_longitude latitude(::custom_msgs::msg::SbgCAN373::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_SbgCAN373_longitude(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN373 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN373>()
{
  return custom_msgs::msg::builder::Init_SbgCAN373_latitude();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN373__BUILDER_HPP_
