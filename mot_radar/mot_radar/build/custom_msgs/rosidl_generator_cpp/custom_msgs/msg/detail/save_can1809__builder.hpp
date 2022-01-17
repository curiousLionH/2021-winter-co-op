// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SaveCAN1809.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1809__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1809__BUILDER_HPP_

#include "custom_msgs/msg/detail/save_can1809__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveCAN1809_acc_alive_cnt
{
public:
  explicit Init_SaveCAN1809_acc_alive_cnt(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SaveCAN1809 acc_alive_cnt(::custom_msgs::msg::SaveCAN1809::_acc_alive_cnt_type arg)
  {
    msg_.acc_alive_cnt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_g_sel_disp
{
public:
  explicit Init_SaveCAN1809_g_sel_disp(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_acc_alive_cnt g_sel_disp(::custom_msgs::msg::SaveCAN1809::_g_sel_disp_type arg)
  {
    msg_.g_sel_disp = std::move(arg);
    return Init_SaveCAN1809_acc_alive_cnt(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_aeb_act
{
public:
  explicit Init_SaveCAN1809_aeb_act(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_g_sel_disp aeb_act(::custom_msgs::msg::SaveCAN1809::_aeb_act_type arg)
  {
    msg_.aeb_act = std::move(arg);
    return Init_SaveCAN1809_g_sel_disp(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_turn_left_en
{
public:
  explicit Init_SaveCAN1809_turn_left_en(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_aeb_act turn_left_en(::custom_msgs::msg::SaveCAN1809::_turn_left_en_type arg)
  {
    msg_.turn_left_en = std::move(arg);
    return Init_SaveCAN1809_aeb_act(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_hazard_en
{
public:
  explicit Init_SaveCAN1809_hazard_en(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_turn_left_en hazard_en(::custom_msgs::msg::SaveCAN1809::_hazard_en_type arg)
  {
    msg_.hazard_en = std::move(arg);
    return Init_SaveCAN1809_turn_left_en(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_turn_right_en
{
public:
  explicit Init_SaveCAN1809_turn_right_en(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_hazard_en turn_right_en(::custom_msgs::msg::SaveCAN1809::_turn_right_en_type arg)
  {
    msg_.turn_right_en = std::move(arg);
    return Init_SaveCAN1809_hazard_en(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_long_accel
{
public:
  explicit Init_SaveCAN1809_long_accel(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_turn_right_en long_accel(::custom_msgs::msg::SaveCAN1809::_long_accel_type arg)
  {
    msg_.long_accel = std::move(arg);
    return Init_SaveCAN1809_turn_right_en(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_bsd_left
{
public:
  explicit Init_SaveCAN1809_bsd_left(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_long_accel bsd_left(::custom_msgs::msg::SaveCAN1809::_bsd_left_type arg)
  {
    msg_.bsd_left = std::move(arg);
    return Init_SaveCAN1809_long_accel(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_bsd_right
{
public:
  explicit Init_SaveCAN1809_bsd_right(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_bsd_left bsd_right(::custom_msgs::msg::SaveCAN1809::_bsd_right_type arg)
  {
    msg_.bsd_right = std::move(arg);
    return Init_SaveCAN1809_bsd_left(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_vs
{
public:
  explicit Init_SaveCAN1809_vs(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_bsd_right vs(::custom_msgs::msg::SaveCAN1809::_vs_type arg)
  {
    msg_.vs = std::move(arg);
    return Init_SaveCAN1809_bsd_right(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_acc_control_status
{
public:
  explicit Init_SaveCAN1809_acc_control_status(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_vs acc_control_status(::custom_msgs::msg::SaveCAN1809::_acc_control_status_type arg)
  {
    msg_.acc_control_status = std::move(arg);
    return Init_SaveCAN1809_vs(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_acc_err
{
public:
  explicit Init_SaveCAN1809_acc_err(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_acc_control_status acc_err(::custom_msgs::msg::SaveCAN1809::_acc_err_type arg)
  {
    msg_.acc_err = std::move(arg);
    return Init_SaveCAN1809_acc_control_status(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_acc_veh_err
{
public:
  explicit Init_SaveCAN1809_acc_veh_err(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_acc_err acc_veh_err(::custom_msgs::msg::SaveCAN1809::_acc_veh_err_type arg)
  {
    msg_.acc_veh_err = std::move(arg);
    return Init_SaveCAN1809_acc_err(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_acc_user_can_err
{
public:
  explicit Init_SaveCAN1809_acc_user_can_err(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_acc_veh_err acc_user_can_err(::custom_msgs::msg::SaveCAN1809::_acc_user_can_err_type arg)
  {
    msg_.acc_user_can_err = std::move(arg);
    return Init_SaveCAN1809_acc_veh_err(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_acc_control_board_status
{
public:
  explicit Init_SaveCAN1809_acc_control_board_status(::custom_msgs::msg::SaveCAN1809 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1809_acc_user_can_err acc_control_board_status(::custom_msgs::msg::SaveCAN1809::_acc_control_board_status_type arg)
  {
    msg_.acc_control_board_status = std::move(arg);
    return Init_SaveCAN1809_acc_user_can_err(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

class Init_SaveCAN1809_acc_en_status
{
public:
  Init_SaveCAN1809_acc_en_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveCAN1809_acc_control_board_status acc_en_status(::custom_msgs::msg::SaveCAN1809::_acc_en_status_type arg)
  {
    msg_.acc_en_status = std::move(arg);
    return Init_SaveCAN1809_acc_control_board_status(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1809 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SaveCAN1809>()
{
  return custom_msgs::msg::builder::Init_SaveCAN1809_acc_en_status();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1809__BUILDER_HPP_
