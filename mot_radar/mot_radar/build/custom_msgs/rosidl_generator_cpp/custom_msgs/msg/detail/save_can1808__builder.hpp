// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SaveCAN1808.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1808__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1808__BUILDER_HPP_

#include "custom_msgs/msg/detail/save_can1808__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveCAN1808_eps_alive_cnt
{
public:
  explicit Init_SaveCAN1808_eps_alive_cnt(::custom_msgs::msg::SaveCAN1808 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SaveCAN1808 eps_alive_cnt(::custom_msgs::msg::SaveCAN1808::_eps_alive_cnt_type arg)
  {
    msg_.eps_alive_cnt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1808 msg_;
};

class Init_SaveCAN1808_str_out_tq
{
public:
  explicit Init_SaveCAN1808_str_out_tq(::custom_msgs::msg::SaveCAN1808 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1808_eps_alive_cnt str_out_tq(::custom_msgs::msg::SaveCAN1808::_str_out_tq_type arg)
  {
    msg_.str_out_tq = std::move(arg);
    return Init_SaveCAN1808_eps_alive_cnt(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1808 msg_;
};

class Init_SaveCAN1808_str_drv_tq
{
public:
  explicit Init_SaveCAN1808_str_drv_tq(::custom_msgs::msg::SaveCAN1808 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1808_str_out_tq str_drv_tq(::custom_msgs::msg::SaveCAN1808::_str_drv_tq_type arg)
  {
    msg_.str_drv_tq = std::move(arg);
    return Init_SaveCAN1808_str_out_tq(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1808 msg_;
};

class Init_SaveCAN1808_strang
{
public:
  explicit Init_SaveCAN1808_strang(::custom_msgs::msg::SaveCAN1808 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1808_str_drv_tq strang(::custom_msgs::msg::SaveCAN1808::_strang_type arg)
  {
    msg_.strang = std::move(arg);
    return Init_SaveCAN1808_str_drv_tq(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1808 msg_;
};

class Init_SaveCAN1808_override_status
{
public:
  explicit Init_SaveCAN1808_override_status(::custom_msgs::msg::SaveCAN1808 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1808_strang override_status(::custom_msgs::msg::SaveCAN1808::_override_status_type arg)
  {
    msg_.override_status = std::move(arg);
    return Init_SaveCAN1808_strang(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1808 msg_;
};

class Init_SaveCAN1808_override_ignore_status
{
public:
  explicit Init_SaveCAN1808_override_ignore_status(::custom_msgs::msg::SaveCAN1808 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1808_override_status override_ignore_status(::custom_msgs::msg::SaveCAN1808::_override_ignore_status_type arg)
  {
    msg_.override_ignore_status = std::move(arg);
    return Init_SaveCAN1808_override_status(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1808 msg_;
};

class Init_SaveCAN1808_eps_control_status
{
public:
  explicit Init_SaveCAN1808_eps_control_status(::custom_msgs::msg::SaveCAN1808 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1808_override_ignore_status eps_control_status(::custom_msgs::msg::SaveCAN1808::_eps_control_status_type arg)
  {
    msg_.eps_control_status = std::move(arg);
    return Init_SaveCAN1808_override_ignore_status(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1808 msg_;
};

class Init_SaveCAN1808_eps_sas_err
{
public:
  explicit Init_SaveCAN1808_eps_sas_err(::custom_msgs::msg::SaveCAN1808 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1808_eps_control_status eps_sas_err(::custom_msgs::msg::SaveCAN1808::_eps_sas_err_type arg)
  {
    msg_.eps_sas_err = std::move(arg);
    return Init_SaveCAN1808_eps_control_status(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1808 msg_;
};

class Init_SaveCAN1808_eps_veh_can_err
{
public:
  explicit Init_SaveCAN1808_eps_veh_can_err(::custom_msgs::msg::SaveCAN1808 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1808_eps_sas_err eps_veh_can_err(::custom_msgs::msg::SaveCAN1808::_eps_veh_can_err_type arg)
  {
    msg_.eps_veh_can_err = std::move(arg);
    return Init_SaveCAN1808_eps_sas_err(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1808 msg_;
};

class Init_SaveCAN1808_eps_err
{
public:
  explicit Init_SaveCAN1808_eps_err(::custom_msgs::msg::SaveCAN1808 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1808_eps_veh_can_err eps_err(::custom_msgs::msg::SaveCAN1808::_eps_err_type arg)
  {
    msg_.eps_err = std::move(arg);
    return Init_SaveCAN1808_eps_veh_can_err(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1808 msg_;
};

class Init_SaveCAN1808_eps_user_can_err
{
public:
  explicit Init_SaveCAN1808_eps_user_can_err(::custom_msgs::msg::SaveCAN1808 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1808_eps_err eps_user_can_err(::custom_msgs::msg::SaveCAN1808::_eps_user_can_err_type arg)
  {
    msg_.eps_user_can_err = std::move(arg);
    return Init_SaveCAN1808_eps_err(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1808 msg_;
};

class Init_SaveCAN1808_eps_control_board_status
{
public:
  explicit Init_SaveCAN1808_eps_control_board_status(::custom_msgs::msg::SaveCAN1808 & msg)
  : msg_(msg)
  {}
  Init_SaveCAN1808_eps_user_can_err eps_control_board_status(::custom_msgs::msg::SaveCAN1808::_eps_control_board_status_type arg)
  {
    msg_.eps_control_board_status = std::move(arg);
    return Init_SaveCAN1808_eps_user_can_err(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1808 msg_;
};

class Init_SaveCAN1808_eps_en_status
{
public:
  Init_SaveCAN1808_eps_en_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveCAN1808_eps_control_board_status eps_en_status(::custom_msgs::msg::SaveCAN1808::_eps_en_status_type arg)
  {
    msg_.eps_en_status = std::move(arg);
    return Init_SaveCAN1808_eps_control_board_status(msg_);
  }

private:
  ::custom_msgs::msg::SaveCAN1808 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SaveCAN1808>()
{
  return custom_msgs::msg::builder::Init_SaveCAN1808_eps_en_status();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1808__BUILDER_HPP_
