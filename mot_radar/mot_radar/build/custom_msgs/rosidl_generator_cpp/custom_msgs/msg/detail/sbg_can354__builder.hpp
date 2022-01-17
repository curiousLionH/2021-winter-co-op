// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN354.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN354__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN354__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can354__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN354_air_temperature
{
public:
  explicit Init_SbgCAN354_air_temperature(::custom_msgs::msg::SbgCAN354 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN354 air_temperature(::custom_msgs::msg::SbgCAN354::_air_temperature_type arg)
  {
    msg_.air_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN354 msg_;
};

class Init_SbgCAN354_air_data_status
{
public:
  explicit Init_SbgCAN354_air_data_status(::custom_msgs::msg::SbgCAN354 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN354_air_temperature air_data_status(::custom_msgs::msg::SbgCAN354::_air_data_status_type arg)
  {
    msg_.air_data_status = std::move(arg);
    return Init_SbgCAN354_air_temperature(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN354 msg_;
};

class Init_SbgCAN354_time_stamp
{
public:
  Init_SbgCAN354_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN354_air_data_status time_stamp(::custom_msgs::msg::SbgCAN354::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgCAN354_air_data_status(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN354 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN354>()
{
  return custom_msgs::msg::builder::Init_SbgCAN354_time_stamp();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN354__BUILDER_HPP_
