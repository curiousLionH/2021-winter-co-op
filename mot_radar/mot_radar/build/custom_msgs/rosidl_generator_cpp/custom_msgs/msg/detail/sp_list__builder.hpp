// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SpList.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SP_LIST__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SP_LIST__BUILDER_HPP_

#include "custom_msgs/msg/detail/sp_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SpList_y_sp_eps
{
public:
  explicit Init_SpList_y_sp_eps(::custom_msgs::msg::SpList & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SpList y_sp_eps(::custom_msgs::msg::SpList::_y_sp_eps_type arg)
  {
    msg_.y_sp_eps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SpList msg_;
};

class Init_SpList_y_sp
{
public:
  explicit Init_SpList_y_sp(::custom_msgs::msg::SpList & msg)
  : msg_(msg)
  {}
  Init_SpList_y_sp_eps y_sp(::custom_msgs::msg::SpList::_y_sp_type arg)
  {
    msg_.y_sp = std::move(arg);
    return Init_SpList_y_sp_eps(msg_);
  }

private:
  ::custom_msgs::msg::SpList msg_;
};

class Init_SpList_x_sp_eps
{
public:
  explicit Init_SpList_x_sp_eps(::custom_msgs::msg::SpList & msg)
  : msg_(msg)
  {}
  Init_SpList_y_sp x_sp_eps(::custom_msgs::msg::SpList::_x_sp_eps_type arg)
  {
    msg_.x_sp_eps = std::move(arg);
    return Init_SpList_y_sp(msg_);
  }

private:
  ::custom_msgs::msg::SpList msg_;
};

class Init_SpList_x_sp
{
public:
  Init_SpList_x_sp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpList_x_sp_eps x_sp(::custom_msgs::msg::SpList::_x_sp_type arg)
  {
    msg_.x_sp = std::move(arg);
    return Init_SpList_x_sp_eps(msg_);
  }

private:
  ::custom_msgs::msg::SpList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SpList>()
{
  return custom_msgs::msg::builder::Init_SpList_x_sp();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SP_LIST__BUILDER_HPP_
