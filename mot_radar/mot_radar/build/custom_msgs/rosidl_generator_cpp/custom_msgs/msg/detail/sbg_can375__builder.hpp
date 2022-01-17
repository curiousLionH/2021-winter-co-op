// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN375.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN375__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN375__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can375__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN375_base_station_id
{
public:
  explicit Init_SbgCAN375_base_station_id(::custom_msgs::msg::SbgCAN375 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN375 base_station_id(::custom_msgs::msg::SbgCAN375::_base_station_id_type arg)
  {
    msg_.base_station_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN375 msg_;
};

class Init_SbgCAN375_alt_acc
{
public:
  explicit Init_SbgCAN375_alt_acc(::custom_msgs::msg::SbgCAN375 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN375_base_station_id alt_acc(::custom_msgs::msg::SbgCAN375::_alt_acc_type arg)
  {
    msg_.alt_acc = std::move(arg);
    return Init_SbgCAN375_base_station_id(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN375 msg_;
};

class Init_SbgCAN375_long_acc
{
public:
  explicit Init_SbgCAN375_long_acc(::custom_msgs::msg::SbgCAN375 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN375_alt_acc long_acc(::custom_msgs::msg::SbgCAN375::_long_acc_type arg)
  {
    msg_.long_acc = std::move(arg);
    return Init_SbgCAN375_alt_acc(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN375 msg_;
};

class Init_SbgCAN375_lat_acc
{
public:
  Init_SbgCAN375_lat_acc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN375_long_acc lat_acc(::custom_msgs::msg::SbgCAN375::_lat_acc_type arg)
  {
    msg_.lat_acc = std::move(arg);
    return Init_SbgCAN375_long_acc(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN375 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN375>()
{
  return custom_msgs::msg::builder::Init_SbgCAN375_lat_acc();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN375__BUILDER_HPP_
