// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SbgCAN544.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN544__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN544__BUILDER_HPP_

#include "custom_msgs/msg/detail/sbg_can544__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SbgCAN544_auto_status
{
public:
  explicit Init_SbgCAN544_auto_status(::custom_msgs::msg::SbgCAN544 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SbgCAN544 auto_status(::custom_msgs::msg::SbgCAN544::_auto_status_type arg)
  {
    msg_.auto_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN544 msg_;
};

class Init_SbgCAN544_curvature_radius
{
public:
  explicit Init_SbgCAN544_curvature_radius(::custom_msgs::msg::SbgCAN544 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN544_auto_status curvature_radius(::custom_msgs::msg::SbgCAN544::_curvature_radius_type arg)
  {
    msg_.curvature_radius = std::move(arg);
    return Init_SbgCAN544_auto_status(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN544 msg_;
};

class Init_SbgCAN544_angle_slip
{
public:
  explicit Init_SbgCAN544_angle_slip(::custom_msgs::msg::SbgCAN544 & msg)
  : msg_(msg)
  {}
  Init_SbgCAN544_curvature_radius angle_slip(::custom_msgs::msg::SbgCAN544::_angle_slip_type arg)
  {
    msg_.angle_slip = std::move(arg);
    return Init_SbgCAN544_curvature_radius(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN544 msg_;
};

class Init_SbgCAN544_angle_track
{
public:
  Init_SbgCAN544_angle_track()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SbgCAN544_angle_slip angle_track(::custom_msgs::msg::SbgCAN544::_angle_track_type arg)
  {
    msg_.angle_track = std::move(arg);
    return Init_SbgCAN544_angle_slip(msg_);
  }

private:
  ::custom_msgs::msg::SbgCAN544 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SbgCAN544>()
{
  return custom_msgs::msg::builder::Init_SbgCAN544_angle_track();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN544__BUILDER_HPP_
