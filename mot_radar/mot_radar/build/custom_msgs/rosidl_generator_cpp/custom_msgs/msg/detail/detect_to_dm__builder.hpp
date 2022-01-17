// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/DetectToDM.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__DETECT_TO_DM__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__DETECT_TO_DM__BUILDER_HPP_

#include "custom_msgs/msg/detail/detect_to_dm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_DetectToDM_objects_inter_left
{
public:
  explicit Init_DetectToDM_objects_inter_left(::custom_msgs::msg::DetectToDM & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::DetectToDM objects_inter_left(::custom_msgs::msg::DetectToDM::_objects_inter_left_type arg)
  {
    msg_.objects_inter_left = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::DetectToDM msg_;
};

class Init_DetectToDM_objects_inter
{
public:
  explicit Init_DetectToDM_objects_inter(::custom_msgs::msg::DetectToDM & msg)
  : msg_(msg)
  {}
  Init_DetectToDM_objects_inter_left objects_inter(::custom_msgs::msg::DetectToDM::_objects_inter_type arg)
  {
    msg_.objects_inter = std::move(arg);
    return Init_DetectToDM_objects_inter_left(msg_);
  }

private:
  ::custom_msgs::msg::DetectToDM msg_;
};

class Init_DetectToDM_objects_right
{
public:
  explicit Init_DetectToDM_objects_right(::custom_msgs::msg::DetectToDM & msg)
  : msg_(msg)
  {}
  Init_DetectToDM_objects_inter objects_right(::custom_msgs::msg::DetectToDM::_objects_right_type arg)
  {
    msg_.objects_right = std::move(arg);
    return Init_DetectToDM_objects_inter(msg_);
  }

private:
  ::custom_msgs::msg::DetectToDM msg_;
};

class Init_DetectToDM_objects_left
{
public:
  explicit Init_DetectToDM_objects_left(::custom_msgs::msg::DetectToDM & msg)
  : msg_(msg)
  {}
  Init_DetectToDM_objects_right objects_left(::custom_msgs::msg::DetectToDM::_objects_left_type arg)
  {
    msg_.objects_left = std::move(arg);
    return Init_DetectToDM_objects_right(msg_);
  }

private:
  ::custom_msgs::msg::DetectToDM msg_;
};

class Init_DetectToDM_objects_cur
{
public:
  Init_DetectToDM_objects_cur()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DetectToDM_objects_left objects_cur(::custom_msgs::msg::DetectToDM::_objects_cur_type arg)
  {
    msg_.objects_cur = std::move(arg);
    return Init_DetectToDM_objects_left(msg_);
  }

private:
  ::custom_msgs::msg::DetectToDM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::DetectToDM>()
{
  return custom_msgs::msg::builder::Init_DetectToDM_objects_cur();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__DETECT_TO_DM__BUILDER_HPP_
