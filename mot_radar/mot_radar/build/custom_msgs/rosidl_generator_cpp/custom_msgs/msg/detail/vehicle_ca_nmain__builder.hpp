// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/VehicleCANmain.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CA_NMAIN__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CA_NMAIN__BUILDER_HPP_

#include "custom_msgs/msg/detail/vehicle_ca_nmain__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleCANmain_eait_info_rad
{
public:
  explicit Init_VehicleCANmain_eait_info_rad(::custom_msgs::msg::VehicleCANmain & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::VehicleCANmain eait_info_rad(::custom_msgs::msg::VehicleCANmain::_eait_info_rad_type arg)
  {
    msg_.eait_info_rad = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::VehicleCANmain msg_;
};

class Init_VehicleCANmain_eait_info_imu
{
public:
  explicit Init_VehicleCANmain_eait_info_imu(::custom_msgs::msg::VehicleCANmain & msg)
  : msg_(msg)
  {}
  Init_VehicleCANmain_eait_info_rad eait_info_imu(::custom_msgs::msg::VehicleCANmain::_eait_info_imu_type arg)
  {
    msg_.eait_info_imu = std::move(arg);
    return Init_VehicleCANmain_eait_info_rad(msg_);
  }

private:
  ::custom_msgs::msg::VehicleCANmain msg_;
};

class Init_VehicleCANmain_eait_info_spd
{
public:
  explicit Init_VehicleCANmain_eait_info_spd(::custom_msgs::msg::VehicleCANmain & msg)
  : msg_(msg)
  {}
  Init_VehicleCANmain_eait_info_imu eait_info_spd(::custom_msgs::msg::VehicleCANmain::_eait_info_spd_type arg)
  {
    msg_.eait_info_spd = std::move(arg);
    return Init_VehicleCANmain_eait_info_imu(msg_);
  }

private:
  ::custom_msgs::msg::VehicleCANmain msg_;
};

class Init_VehicleCANmain_eait_info_acc
{
public:
  explicit Init_VehicleCANmain_eait_info_acc(::custom_msgs::msg::VehicleCANmain & msg)
  : msg_(msg)
  {}
  Init_VehicleCANmain_eait_info_spd eait_info_acc(::custom_msgs::msg::VehicleCANmain::_eait_info_acc_type arg)
  {
    msg_.eait_info_acc = std::move(arg);
    return Init_VehicleCANmain_eait_info_spd(msg_);
  }

private:
  ::custom_msgs::msg::VehicleCANmain msg_;
};

class Init_VehicleCANmain_eait_info_eps
{
public:
  explicit Init_VehicleCANmain_eait_info_eps(::custom_msgs::msg::VehicleCANmain & msg)
  : msg_(msg)
  {}
  Init_VehicleCANmain_eait_info_acc eait_info_eps(::custom_msgs::msg::VehicleCANmain::_eait_info_eps_type arg)
  {
    msg_.eait_info_eps = std::move(arg);
    return Init_VehicleCANmain_eait_info_acc(msg_);
  }

private:
  ::custom_msgs::msg::VehicleCANmain msg_;
};

class Init_VehicleCANmain_eait_control_02
{
public:
  explicit Init_VehicleCANmain_eait_control_02(::custom_msgs::msg::VehicleCANmain & msg)
  : msg_(msg)
  {}
  Init_VehicleCANmain_eait_info_eps eait_control_02(::custom_msgs::msg::VehicleCANmain::_eait_control_02_type arg)
  {
    msg_.eait_control_02 = std::move(arg);
    return Init_VehicleCANmain_eait_info_eps(msg_);
  }

private:
  ::custom_msgs::msg::VehicleCANmain msg_;
};

class Init_VehicleCANmain_eait_control_01
{
public:
  Init_VehicleCANmain_eait_control_01()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleCANmain_eait_control_02 eait_control_01(::custom_msgs::msg::VehicleCANmain::_eait_control_01_type arg)
  {
    msg_.eait_control_01 = std::move(arg);
    return Init_VehicleCANmain_eait_control_02(msg_);
  }

private:
  ::custom_msgs::msg::VehicleCANmain msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::VehicleCANmain>()
{
  return custom_msgs::msg::builder::Init_VehicleCANmain_eait_control_01();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CA_NMAIN__BUILDER_HPP_
