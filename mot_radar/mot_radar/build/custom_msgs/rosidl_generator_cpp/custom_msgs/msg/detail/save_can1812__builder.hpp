// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SaveCAN1812.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1812__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1812__BUILDER_HPP_

#include "custom_msgs/msg/detail/save_can1812__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveCAN1812_rad_objrelspd
{
public:
  explicit Init_SaveCAN1812_rad_objrelspd(::custom_msgs::msg::SaveCAN1812 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SaveCAN1812 rad_objrelspd(::custom_msgs::msg::SaveCAN1812::_rad_objrelspd_type arg)
  {
    msg_.rad_objrelspd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1812 msg_;
};

class Init_SaveCAN1812_rad_objdist
{
public:
  explicit Init_SaveCAN1812_rad_objdist(::custom_msgs::msg::SaveCAN1812 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1812_rad_objrelspd rad_objdist(::custom_msgs::msg::SaveCAN1812::_rad_objdist_type arg)
  {
    msg_.rad_objdist = std::move(arg);
    return Init_SaveCAN1812_rad_objrelspd(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1812 msg_;
};

class Init_SaveCAN1812_rad_objlatpos
{
public:
  explicit Init_SaveCAN1812_rad_objlatpos(::custom_msgs::msg::SaveCAN1812 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1812_rad_objdist rad_objlatpos(::custom_msgs::msg::SaveCAN1812::_rad_objlatpos_type arg)
  {
    msg_.rad_objlatpos = std::move(arg);
    return Init_SaveCAN1812_rad_objdist(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1812 msg_;
};

class Init_SaveCAN1812_rad_objstate
{
public:
  Init_SaveCAN1812_rad_objstate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveCAN1812_rad_objlatpos rad_objstate(::custom_msgs::msg::SaveCAN1812::_rad_objstate_type arg)
  {
    msg_.rad_objstate = std::move(arg);
    return Init_SaveCAN1812_rad_objlatpos(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1812 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SaveCAN1812>()
{
  return custom_msgs::msg::builder::Init_SaveCAN1812_rad_objstate();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1812__BUILDER_HPP_
