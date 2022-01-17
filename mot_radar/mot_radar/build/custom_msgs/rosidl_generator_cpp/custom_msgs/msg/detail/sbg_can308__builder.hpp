// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN308.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN308__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN308__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can308__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN308_longitude
{
public:
  explicit Init_SbgCAN308_longitude(::custom_msgs::msg::SbgCAN308 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN308 longitude(::custom_msgs::msg::SbgCAN308::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN308 msg_;
};

class Init_SbgCAN308_latitude
{
public:
  Init_SbgCAN308_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN308_longitude latitude(::custom_msgs::msg::SbgCAN308::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_SbgCAN308_longitude(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN308 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN308>()
{
  return custom_msgs::msg::builder::Init_SbgCAN308_latitude();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN308__BUILDER_HPP_
