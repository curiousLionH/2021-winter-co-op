// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SaveRadarCAN325.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN325__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN325__BUILDER_HPP_

#include "custom_msgs/msg/detail/save_radar_can325__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveRadarCAN325_can_scan_index_2lsb
{
public:
  explicit Init_SaveRadarCAN325_can_scan_index_2lsb(::custom_msgs::msg::SaveRadarCAN325 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SaveRadarCAN325 can_scan_index_2lsb(::custom_msgs::msg::SaveRadarCAN325::_can_scan_index_2lsb_type arg)
  {
    msg_.can_scan_index_2lsb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN325 msg_;
};

class Init_SaveRadarCAN325_can_det_amplitude
{
public:
  explicit Init_SaveRadarCAN325_can_det_amplitude(::custom_msgs::msg::SaveRadarCAN325 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN325_can_scan_index_2lsb can_det_amplitude(::custom_msgs::msg::SaveRadarCAN325::_can_det_amplitude_type arg)
  {
    msg_.can_det_amplitude = std::move(arg);
    return Init_SaveRadarCAN325_can_scan_index_2lsb(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN325 msg_;
};

class Init_SaveRadarCAN325_can_det_range_rate
{
public:
  explicit Init_SaveRadarCAN325_can_det_range_rate(::custom_msgs::msg::SaveRadarCAN325 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN325_can_det_amplitude can_det_range_rate(::custom_msgs::msg::SaveRadarCAN325::_can_det_range_rate_type arg)
  {
    msg_.can_det_range_rate = std::move(arg);
    return Init_SaveRadarCAN325_can_det_amplitude(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN325 msg_;
};

class Init_SaveRadarCAN325_can_det_range
{
public:
  explicit Init_SaveRadarCAN325_can_det_range(::custom_msgs::msg::SaveRadarCAN325 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN325_can_det_range_rate can_det_range(::custom_msgs::msg::SaveRadarCAN325::_can_det_range_type arg)
  {
    msg_.can_det_range = std::move(arg);
    return Init_SaveRadarCAN325_can_det_range_rate(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN325 msg_;
};

class Init_SaveRadarCAN325_can_det_azimuth
{
public:
  explicit Init_SaveRadarCAN325_can_det_azimuth(::custom_msgs::msg::SaveRadarCAN325 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN325_can_det_range can_det_azimuth(::custom_msgs::msg::SaveRadarCAN325::_can_det_azimuth_type arg)
  {
    msg_.can_det_azimuth = std::move(arg);
    return Init_SaveRadarCAN325_can_det_range(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN325 msg_;
};

class Init_SaveRadarCAN325_can_det_valid_level
{
public:
  explicit Init_SaveRadarCAN325_can_det_valid_level(::custom_msgs::msg::SaveRadarCAN325 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN325_can_det_azimuth can_det_valid_level(::custom_msgs::msg::SaveRadarCAN325::_can_det_valid_level_type arg)
  {
    msg_.can_det_valid_level = std::move(arg);
    return Init_SaveRadarCAN325_can_det_azimuth(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN325 msg_;
};

class Init_SaveRadarCAN325_can_det_host_veh_clutter
{
public:
  explicit Init_SaveRadarCAN325_can_det_host_veh_clutter(::custom_msgs::msg::SaveRadarCAN325 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN325_can_det_valid_level can_det_host_veh_clutter(::custom_msgs::msg::SaveRadarCAN325::_can_det_host_veh_clutter_type arg)
  {
    msg_.can_det_host_veh_clutter = std::move(arg);
    return Init_SaveRadarCAN325_can_det_valid_level(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN325 msg_;
};

class Init_SaveRadarCAN325_can_det_nd_target
{
public:
  explicit Init_SaveRadarCAN325_can_det_nd_target(::custom_msgs::msg::SaveRadarCAN325 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN325_can_det_host_veh_clutter can_det_nd_target(::custom_msgs::msg::SaveRadarCAN325::_can_det_nd_target_type arg)
  {
    msg_.can_det_nd_target = std::move(arg);
    return Init_SaveRadarCAN325_can_det_host_veh_clutter(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN325 msg_;
};

class Init_SaveRadarCAN325_can_det_super_res_target
{
public:
  explicit Init_SaveRadarCAN325_can_det_super_res_target(::custom_msgs::msg::SaveRadarCAN325 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN325_can_det_nd_target can_det_super_res_target(::custom_msgs::msg::SaveRadarCAN325::_can_det_super_res_target_type arg)
  {
    msg_.can_det_super_res_target = std::move(arg);
    return Init_SaveRadarCAN325_can_det_nd_target(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN325 msg_;
};

class Init_SaveRadarCAN325_can_det_confid_azimuth
{
public:
  Init_SaveRadarCAN325_can_det_confid_azimuth()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveRadarCAN325_can_det_super_res_target can_det_confid_azimuth(::custom_msgs::msg::SaveRadarCAN325::_can_det_confid_azimuth_type arg)
  {
    msg_.can_det_confid_azimuth = std::move(arg);
    return Init_SaveRadarCAN325_can_det_super_res_target(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN325 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SaveRadarCAN325>()
{
  return custom_msgs::msg::builder::Init_SaveRadarCAN325_can_det_confid_azimuth();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN325__BUILDER_HPP_
