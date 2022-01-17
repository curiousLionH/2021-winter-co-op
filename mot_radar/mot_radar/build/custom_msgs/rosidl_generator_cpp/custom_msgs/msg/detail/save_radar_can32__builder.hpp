// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SaveRadarCAN32.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN32__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN32__BUILDER_HPP_

#include "custom_msgs/msg/detail/save_radar_can32__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveRadarCAN32_can_vehicle_speed
{
public:
  explicit Init_SaveRadarCAN32_can_vehicle_speed(::custom_msgs::msg::SaveRadarCAN32 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SaveRadarCAN32 can_vehicle_speed(::custom_msgs::msg::SaveRadarCAN32::_can_vehicle_speed_type arg)
  {
    msg_.can_vehicle_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN32 msg_;
};

class Init_SaveRadarCAN32_can_vehicle_speed_direction
{
public:
  explicit Init_SaveRadarCAN32_can_vehicle_speed_direction(::custom_msgs::msg::SaveRadarCAN32 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN32_can_vehicle_speed can_vehicle_speed_direction(::custom_msgs::msg::SaveRadarCAN32::_can_vehicle_speed_direction_type arg)
  {
    msg_.can_vehicle_speed_direction = std::move(arg);
    return Init_SaveRadarCAN32_can_vehicle_speed(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN32 msg_;
};

class Init_SaveRadarCAN32_can_vehicle_speed_validity
{
public:
  explicit Init_SaveRadarCAN32_can_vehicle_speed_validity(::custom_msgs::msg::SaveRadarCAN32 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN32_can_vehicle_speed_direction can_vehicle_speed_validity(::custom_msgs::msg::SaveRadarCAN32::_can_vehicle_speed_validity_type arg)
  {
    msg_.can_vehicle_speed_validity = std::move(arg);
    return Init_SaveRadarCAN32_can_vehicle_speed_direction(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN32 msg_;
};

class Init_SaveRadarCAN32_can_yaw_rate
{
public:
  explicit Init_SaveRadarCAN32_can_yaw_rate(::custom_msgs::msg::SaveRadarCAN32 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN32_can_vehicle_speed_validity can_yaw_rate(::custom_msgs::msg::SaveRadarCAN32::_can_yaw_rate_type arg)
  {
    msg_.can_yaw_rate = std::move(arg);
    return Init_SaveRadarCAN32_can_vehicle_speed_validity(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN32 msg_;
};

class Init_SaveRadarCAN32_can_yaw_rate_validity
{
public:
  explicit Init_SaveRadarCAN32_can_yaw_rate_validity(::custom_msgs::msg::SaveRadarCAN32 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN32_can_yaw_rate can_yaw_rate_validity(::custom_msgs::msg::SaveRadarCAN32::_can_yaw_rate_validity_type arg)
  {
    msg_.can_yaw_rate_validity = std::move(arg);
    return Init_SaveRadarCAN32_can_yaw_rate(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN32 msg_;
};

class Init_SaveRadarCAN32_can_wiper_status
{
public:
  explicit Init_SaveRadarCAN32_can_wiper_status(::custom_msgs::msg::SaveRadarCAN32 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN32_can_yaw_rate_validity can_wiper_status(::custom_msgs::msg::SaveRadarCAN32::_can_wiper_status_type arg)
  {
    msg_.can_wiper_status = std::move(arg);
    return Init_SaveRadarCAN32_can_yaw_rate_validity(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN32 msg_;
};

class Init_SaveRadarCAN32_can_day_night_status
{
public:
  explicit Init_SaveRadarCAN32_can_day_night_status(::custom_msgs::msg::SaveRadarCAN32 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN32_can_wiper_status can_day_night_status(::custom_msgs::msg::SaveRadarCAN32::_can_day_night_status_type arg)
  {
    msg_.can_day_night_status = std::move(arg);
    return Init_SaveRadarCAN32_can_wiper_status(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN32 msg_;
};

class Init_SaveRadarCAN32_can_vehicle_stat
{
public:
  Init_SaveRadarCAN32_can_vehicle_stat()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveRadarCAN32_can_day_night_status can_vehicle_stat(::custom_msgs::msg::SaveRadarCAN32::_can_vehicle_stat_type arg)
  {
    msg_.can_vehicle_stat = std::move(arg);
    return Init_SaveRadarCAN32_can_day_night_status(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN32 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SaveRadarCAN32>()
{
  return custom_msgs::msg::builder::Init_SaveRadarCAN32_can_vehicle_stat();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN32__BUILDER_HPP_
