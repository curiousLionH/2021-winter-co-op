// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/AroundPaths.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AROUND_PATHS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__AROUND_PATHS__BUILDER_HPP_

#include "custom_msgs/msg/detail/around_paths__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_AroundPaths_right_lanes
{
public:
  explicit Init_AroundPaths_right_lanes(::custom_msgs::msg::AroundPaths & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::AroundPaths right_lanes(::custom_msgs::msg::AroundPaths::_right_lanes_type arg)
  {
    msg_.right_lanes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::AroundPaths msg_;
};

class Init_AroundPaths_left_lanes
{
public:
  explicit Init_AroundPaths_left_lanes(::custom_msgs::msg::AroundPaths & msg)
  : msg_(msg)
  {}
  Init_AroundPaths_right_lanes left_lanes(::custom_msgs::msg::AroundPaths::_left_lanes_type arg)
  {
    msg_.left_lanes = std::move(arg);
    return Init_AroundPaths_right_lanes(msg_);
  }

private:
  ::custom_msgs::msg::AroundPaths msg_;
};

class Init_AroundPaths_right_lane
{
public:
  explicit Init_AroundPaths_right_lane(::custom_msgs::msg::AroundPaths & msg)
  : msg_(msg)
  {}
  Init_AroundPaths_left_lanes right_lane(::custom_msgs::msg::AroundPaths::_right_lane_type arg)
  {
    msg_.right_lane = std::move(arg);
    return Init_AroundPaths_left_lanes(msg_);
  }

private:
  ::custom_msgs::msg::AroundPaths msg_;
};

class Init_AroundPaths_left_lane
{
public:
  Init_AroundPaths_left_lane()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AroundPaths_right_lane left_lane(::custom_msgs::msg::AroundPaths::_left_lane_type arg)
  {
    msg_.left_lane = std::move(arg);
    return Init_AroundPaths_right_lane(msg_);
  }

private:
  ::custom_msgs::msg::AroundPaths msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::AroundPaths>()
{
  return custom_msgs::msg::builder::Init_AroundPaths_left_lane();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__AROUND_PATHS__BUILDER_HPP_
