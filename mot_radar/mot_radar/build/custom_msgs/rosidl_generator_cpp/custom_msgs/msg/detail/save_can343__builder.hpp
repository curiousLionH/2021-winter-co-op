// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SaveCAN343.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN343__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN343__BUILDER_HPP_

#include "custom_msgs/msg/detail/save_can343__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveCAN343_acc_cmd
{
public:
  explicit Init_SaveCAN343_acc_cmd(::custom_msgs::msg::SaveCAN343 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SaveCAN343 acc_cmd(::custom_msgs::msg::SaveCAN343::_acc_cmd_type arg)
  {
    msg_.acc_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN343 msg_;
};

class Init_SaveCAN343_eps_cmd
{
public:
  Init_SaveCAN343_eps_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveCAN343_acc_cmd eps_cmd(::custom_msgs::msg::SaveCAN343::_eps_cmd_type arg)
  {
    msg_.eps_cmd = std::move(arg);
    return Init_SaveCAN343_acc_cmd(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN343 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SaveCAN343>()
{
  return custom_msgs::msg::builder::Init_SaveCAN343_eps_cmd();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN343__BUILDER_HPP_
