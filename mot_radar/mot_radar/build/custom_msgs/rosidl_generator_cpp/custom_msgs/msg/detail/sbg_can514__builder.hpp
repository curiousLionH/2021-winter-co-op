// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN514.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN514__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN514__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can514__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN514_event_status
{
public:
  explicit Init_SbgCAN514_event_status(::custom_msgs::msg::SbgCAN514 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN514 event_status(::custom_msgs::msg::SbgCAN514::_event_status_type arg)
  {
    msg_.event_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN514 msg_;
};

class Init_SbgCAN514_time_stamp
{
public:
  Init_SbgCAN514_time_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN514_event_status time_stamp(::custom_msgs::msg::SbgCAN514::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_SbgCAN514_event_status(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN514 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN514>()
{
  return custom_msgs::msg::builder::Init_SbgCAN514_time_stamp();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN514__BUILDER_HPP_
