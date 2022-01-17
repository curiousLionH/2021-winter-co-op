// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/VehicleInfoOut.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VEHICLE_INFO_OUT__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__VEHICLE_INFO_OUT__BUILDER_HPP_

#include "custom_msgs/msg/detail/vehicle_info_out__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleInfoOut_yaw_acc
{
public:
  explicit Init_VehicleInfoOut_yaw_acc(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::VehicleInfoOut yaw_acc(::custom_msgs::msg::VehicleInfoOut::_yaw_acc_type arg)
  {
    msg_.yaw_acc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_pitch_acc
{
public:
  explicit Init_VehicleInfoOut_pitch_acc(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_yaw_acc pitch_acc(::custom_msgs::msg::VehicleInfoOut::_pitch_acc_type arg)
  {
    msg_.pitch_acc = std::move(arg);
    return Init_VehicleInfoOut_yaw_acc(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_roll_acc
{
public:
  explicit Init_VehicleInfoOut_roll_acc(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_pitch_acc roll_acc(::custom_msgs::msg::VehicleInfoOut::_roll_acc_type arg)
  {
    msg_.roll_acc = std::move(arg);
    return Init_VehicleInfoOut_pitch_acc(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_az
{
public:
  explicit Init_VehicleInfoOut_az(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_roll_acc az(::custom_msgs::msg::VehicleInfoOut::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_VehicleInfoOut_roll_acc(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_ay
{
public:
  explicit Init_VehicleInfoOut_ay(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_az ay(::custom_msgs::msg::VehicleInfoOut::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_VehicleInfoOut_az(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_ax
{
public:
  explicit Init_VehicleInfoOut_ax(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_ay ax(::custom_msgs::msg::VehicleInfoOut::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_VehicleInfoOut_ay(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_yaw_vel
{
public:
  explicit Init_VehicleInfoOut_yaw_vel(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_ax yaw_vel(::custom_msgs::msg::VehicleInfoOut::_yaw_vel_type arg)
  {
    msg_.yaw_vel = std::move(arg);
    return Init_VehicleInfoOut_ax(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_pitch_vel
{
public:
  explicit Init_VehicleInfoOut_pitch_vel(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_yaw_vel pitch_vel(::custom_msgs::msg::VehicleInfoOut::_pitch_vel_type arg)
  {
    msg_.pitch_vel = std::move(arg);
    return Init_VehicleInfoOut_yaw_vel(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_roll_vel
{
public:
  explicit Init_VehicleInfoOut_roll_vel(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_pitch_vel roll_vel(::custom_msgs::msg::VehicleInfoOut::_roll_vel_type arg)
  {
    msg_.roll_vel = std::move(arg);
    return Init_VehicleInfoOut_pitch_vel(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_vz
{
public:
  explicit Init_VehicleInfoOut_vz(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_roll_vel vz(::custom_msgs::msg::VehicleInfoOut::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_VehicleInfoOut_roll_vel(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_vy
{
public:
  explicit Init_VehicleInfoOut_vy(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_vz vy(::custom_msgs::msg::VehicleInfoOut::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_VehicleInfoOut_vz(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_vx
{
public:
  explicit Init_VehicleInfoOut_vx(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_vy vx(::custom_msgs::msg::VehicleInfoOut::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_VehicleInfoOut_vy(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_yaw
{
public:
  explicit Init_VehicleInfoOut_yaw(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_vx yaw(::custom_msgs::msg::VehicleInfoOut::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_VehicleInfoOut_vx(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_pitch
{
public:
  explicit Init_VehicleInfoOut_pitch(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_yaw pitch(::custom_msgs::msg::VehicleInfoOut::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_VehicleInfoOut_yaw(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_roll
{
public:
  explicit Init_VehicleInfoOut_roll(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_pitch roll(::custom_msgs::msg::VehicleInfoOut::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_VehicleInfoOut_pitch(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_synthdelay
{
public:
  explicit Init_VehicleInfoOut_synthdelay(::custom_msgs::msg::VehicleInfoOut & msg)
  : msg_(msg)
  {}
  Init_VehicleInfoOut_roll synthdelay(::custom_msgs::msg::VehicleInfoOut::_synthdelay_type arg)
  {
    msg_.synthdelay = std::move(arg);
    return Init_VehicleInfoOut_roll(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

class Init_VehicleInfoOut_cycleno
{
public:
  Init_VehicleInfoOut_cycleno()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleInfoOut_synthdelay cycleno(::custom_msgs::msg::VehicleInfoOut::_cycleno_type arg)
  {
    msg_.cycleno = std::move(arg);
    return Init_VehicleInfoOut_synthdelay(msg_);
  }

private:
  ::custom_msgs::msg::VehicleInfoOut msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::VehicleInfoOut>()
{
  return custom_msgs::msg::builder::Init_VehicleInfoOut_cycleno();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__VEHICLE_INFO_OUT__BUILDER_HPP_
