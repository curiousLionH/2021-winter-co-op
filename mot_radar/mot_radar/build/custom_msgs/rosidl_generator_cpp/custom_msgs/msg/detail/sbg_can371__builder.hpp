// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN371.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN371__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN371__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can371__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN371_course_acc
{
public:
  explicit Init_SbgCAN371_course_acc(::custom_msgs::msg::SbgCAN371 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN371 course_acc(::custom_msgs::msg::SbgCAN371::_course_acc_type arg)
  {
    msg_.course_acc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN371 msg_;
};

class Init_SbgCAN371_course
{
public:
  Init_SbgCAN371_course()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN371_course_acc course(::custom_msgs::msg::SbgCAN371::_course_type arg)
  {
    msg_.course = std::move(arg);
    return Init_SbgCAN371_course_acc(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN371 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN371>()
{
  return custom_msgs::msg::builder::Init_SbgCAN371_course();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN371__BUILDER_HPP_
