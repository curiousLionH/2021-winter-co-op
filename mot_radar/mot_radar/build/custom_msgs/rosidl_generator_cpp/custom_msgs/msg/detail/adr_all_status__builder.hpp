// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/AdrAllStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ADR_ALL_STATUS__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__ADR_ALL_STATUS__BUILDER_HPP_

#include "custom_msgs/msg/detail/adr_all_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_AdrAllStatus_local_waypoint_status
{
public:
  explicit Init_AdrAllStatus_local_waypoint_status(::custom_msgs::msg::AdrAllStatus & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::AdrAllStatus local_waypoint_status(::custom_msgs::msg::AdrAllStatus::_local_waypoint_status_type arg)
  {
    msg_.local_waypoint_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::AdrAllStatus msg_;
};

class Init_AdrAllStatus_lane_keeping_status
{
public:
  explicit Init_AdrAllStatus_lane_keeping_status(::custom_msgs::msg::AdrAllStatus & msg)
  : msg_(msg)
  {}
  Init_AdrAllStatus_local_waypoint_status lane_keeping_status(::custom_msgs::msg::AdrAllStatus::_lane_keeping_status_type arg)
  {
    msg_.lane_keeping_status = std::move(arg);
    return Init_AdrAllStatus_local_waypoint_status(msg_);
  }

private:
  ::custom_msgs::msg::AdrAllStatus msg_;
};

class Init_AdrAllStatus_rtk_status
{
public:
  explicit Init_AdrAllStatus_rtk_status(::custom_msgs::msg::AdrAllStatus & msg)
  : msg_(msg)
  {}
  Init_AdrAllStatus_lane_keeping_status rtk_status(::custom_msgs::msg::AdrAllStatus::_rtk_status_type arg)
  {
    msg_.rtk_status = std::move(arg);
    return Init_AdrAllStatus_lane_keeping_status(msg_);
  }

private:
  ::custom_msgs::msg::AdrAllStatus msg_;
};

class Init_AdrAllStatus_safety_warning_status
{
public:
  explicit Init_AdrAllStatus_safety_warning_status(::custom_msgs::msg::AdrAllStatus & msg)
  : msg_(msg)
  {}
  Init_AdrAllStatus_rtk_status safety_warning_status(::custom_msgs::msg::AdrAllStatus::_safety_warning_status_type arg)
  {
    msg_.safety_warning_status = std::move(arg);
    return Init_AdrAllStatus_rtk_status(msg_);
  }

private:
  ::custom_msgs::msg::AdrAllStatus msg_;
};

class Init_AdrAllStatus_eps_status
{
public:
  explicit Init_AdrAllStatus_eps_status(::custom_msgs::msg::AdrAllStatus & msg)
  : msg_(msg)
  {}
  Init_AdrAllStatus_safety_warning_status eps_status(::custom_msgs::msg::AdrAllStatus::_eps_status_type arg)
  {
    msg_.eps_status = std::move(arg);
    return Init_AdrAllStatus_safety_warning_status(msg_);
  }

private:
  ::custom_msgs::msg::AdrAllStatus msg_;
};

class Init_AdrAllStatus_acc_status
{
public:
  explicit Init_AdrAllStatus_acc_status(::custom_msgs::msg::AdrAllStatus & msg)
  : msg_(msg)
  {}
  Init_AdrAllStatus_eps_status acc_status(::custom_msgs::msg::AdrAllStatus::_acc_status_type arg)
  {
    msg_.acc_status = std::move(arg);
    return Init_AdrAllStatus_eps_status(msg_);
  }

private:
  ::custom_msgs::msg::AdrAllStatus msg_;
};

class Init_AdrAllStatus_ins_status
{
public:
  explicit Init_AdrAllStatus_ins_status(::custom_msgs::msg::AdrAllStatus & msg)
  : msg_(msg)
  {}
  Init_AdrAllStatus_acc_status ins_status(::custom_msgs::msg::AdrAllStatus::_ins_status_type arg)
  {
    msg_.ins_status = std::move(arg);
    return Init_AdrAllStatus_acc_status(msg_);
  }

private:
  ::custom_msgs::msg::AdrAllStatus msg_;
};

class Init_AdrAllStatus_lidar_status
{
public:
  Init_AdrAllStatus_lidar_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdrAllStatus_ins_status lidar_status(::custom_msgs::msg::AdrAllStatus::_lidar_status_type arg)
  {
    msg_.lidar_status = std::move(arg);
    return Init_AdrAllStatus_ins_status(msg_);
  }

private:
  ::custom_msgs::msg::AdrAllStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::AdrAllStatus>()
{
  return custom_msgs::msg::builder::Init_AdrAllStatus_lidar_status();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__ADR_ALL_STATUS__BUILDER_HPP_
