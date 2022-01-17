// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/IMUOut.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__IMU_OUT__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__IMU_OUT__BUILDER_HPP_

#include "custom_msgs/msg/detail/imu_out__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_IMUOut_yaw_acc
{
public:
  explicit Init_IMUOut_yaw_acc(::custom_msgs::msg::IMUOut & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::IMUOut yaw_acc(::custom_msgs::msg::IMUOut::_yaw_acc_type arg)
  {
    msg_.yaw_acc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::IMUOut msg_;
};

class Init_IMUOut_pitch_acc
{
public:
  explicit Init_IMUOut_pitch_acc(::custom_msgs::msg::IMUOut & msg)
  : msg_(msg)
  {}
  Init_IMUOut_yaw_acc pitch_acc(::custom_msgs::msg::IMUOut::_pitch_acc_type arg)
  {
    msg_.pitch_acc = std::move(arg);
    return Init_IMUOut_yaw_acc(msg_);
  }

private:
  ::custom_msgs::msg::IMUOut msg_;
};

class Init_IMUOut_roll_acc
{
public:
  explicit Init_IMUOut_roll_acc(::custom_msgs::msg::IMUOut & msg)
  : msg_(msg)
  {}
  Init_IMUOut_pitch_acc roll_acc(::custom_msgs::msg::IMUOut::_roll_acc_type arg)
  {
    msg_.roll_acc = std::move(arg);
    return Init_IMUOut_pitch_acc(msg_);
  }

private:
  ::custom_msgs::msg::IMUOut msg_;
};

class Init_IMUOut_az
{
public:
  explicit Init_IMUOut_az(::custom_msgs::msg::IMUOut & msg)
  : msg_(msg)
  {}
  Init_IMUOut_roll_acc az(::custom_msgs::msg::IMUOut::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_IMUOut_roll_acc(msg_);
  }

private:
  ::custom_msgs::msg::IMUOut msg_;
};

class Init_IMUOut_ay
{
public:
  explicit Init_IMUOut_ay(::custom_msgs::msg::IMUOut & msg)
  : msg_(msg)
  {}
  Init_IMUOut_az ay(::custom_msgs::msg::IMUOut::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_IMUOut_az(msg_);
  }

private:
  ::custom_msgs::msg::IMUOut msg_;
};

class Init_IMUOut_ax
{
public:
  explicit Init_IMUOut_ax(::custom_msgs::msg::IMUOut & msg)
  : msg_(msg)
  {}
  Init_IMUOut_ay ax(::custom_msgs::msg::IMUOut::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_IMUOut_ay(msg_);
  }

private:
  ::custom_msgs::msg::IMUOut msg_;
};

class Init_IMUOut_yaw_rate
{
public:
  explicit Init_IMUOut_yaw_rate(::custom_msgs::msg::IMUOut & msg)
  : msg_(msg)
  {}
  Init_IMUOut_ax yaw_rate(::custom_msgs::msg::IMUOut::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_IMUOut_ax(msg_);
  }

private:
  ::custom_msgs::msg::IMUOut msg_;
};

class Init_IMUOut_pitch_rate
{
public:
  explicit Init_IMUOut_pitch_rate(::custom_msgs::msg::IMUOut & msg)
  : msg_(msg)
  {}
  Init_IMUOut_yaw_rate pitch_rate(::custom_msgs::msg::IMUOut::_pitch_rate_type arg)
  {
    msg_.pitch_rate = std::move(arg);
    return Init_IMUOut_yaw_rate(msg_);
  }

private:
  ::custom_msgs::msg::IMUOut msg_;
};

class Init_IMUOut_roll_rate
{
public:
  explicit Init_IMUOut_roll_rate(::custom_msgs::msg::IMUOut & msg)
  : msg_(msg)
  {}
  Init_IMUOut_pitch_rate roll_rate(::custom_msgs::msg::IMUOut::_roll_rate_type arg)
  {
    msg_.roll_rate = std::move(arg);
    return Init_IMUOut_pitch_rate(msg_);
  }

private:
  ::custom_msgs::msg::IMUOut msg_;
};

class Init_IMUOut_vz
{
public:
  explicit Init_IMUOut_vz(::custom_msgs::msg::IMUOut & msg)
  : msg_(msg)
  {}
  Init_IMUOut_roll_rate vz(::custom_msgs::msg::IMUOut::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_IMUOut_roll_rate(msg_);
  }

private:
  ::custom_msgs::msg::IMUOut msg_;
};

class Init_IMUOut_vy
{
public:
  explicit Init_IMUOut_vy(::custom_msgs::msg::IMUOut & msg)
  : msg_(msg)
  {}
  Init_IMUOut_vz vy(::custom_msgs::msg::IMUOut::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_IMUOut_vz(msg_);
  }

private:
  ::custom_msgs::msg::IMUOut msg_;
};

class Init_IMUOut_vx
{
public:
  Init_IMUOut_vx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMUOut_vy vx(::custom_msgs::msg::IMUOut::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_IMUOut_vy(msg_);
  }

private:
  ::custom_msgs::msg::IMUOut msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::IMUOut>()
{
  return custom_msgs::msg::builder::Init_IMUOut_vx();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__IMU_OUT__BUILDER_HPP_
