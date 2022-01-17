// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/LidarMsg.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__LIDAR_MSG__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__LIDAR_MSG__BUILDER_HPP_

#include "custom_msgs/msg/detail/lidar_msg__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_LidarMsg_z
{
public:
  explicit Init_LidarMsg_z(::custom_msgs::msg::LidarMsg & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::LidarMsg z(::custom_msgs::msg::LidarMsg::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::LidarMsg msg_;
};

class Init_LidarMsg_y
{
public:
  explicit Init_LidarMsg_y(::custom_msgs::msg::LidarMsg & msg)
  : msg_(msg)
  {}
  Init_LidarMsg_z y(::custom_msgs::msg::LidarMsg::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_LidarMsg_z(msg_);
  }

private:
  ::custom_msgs::msg::LidarMsg msg_;
};

class Init_LidarMsg_x
{
public:
  Init_LidarMsg_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LidarMsg_y x(::custom_msgs::msg::LidarMsg::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_LidarMsg_y(msg_);
  }

private:
  ::custom_msgs::msg::LidarMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::LidarMsg>()
{
  return custom_msgs::msg::builder::Init_LidarMsg_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__LIDAR_MSG__BUILDER_HPP_
