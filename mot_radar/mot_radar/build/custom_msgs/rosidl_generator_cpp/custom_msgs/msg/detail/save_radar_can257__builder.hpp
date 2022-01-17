// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/SaveRadarCAN257.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN257__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN257__BUILDER_HPP_

#include "custom_msgs/msg/detail/save_radar_can257__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_SaveRadarCAN257_can_xcvr_operational
{
public:
  explicit Init_SaveRadarCAN257_can_xcvr_operational(::custom_msgs::msg::SaveRadarCAN257 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::SaveRadarCAN257 can_xcvr_operational(::custom_msgs::msg::SaveRadarCAN257::_can_xcvr_operational_type arg)
  {
    msg_.can_xcvr_operational = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN257 msg_;
};

class Init_SaveRadarCAN257_can_radar_not_op
{
public:
  explicit Init_SaveRadarCAN257_can_radar_not_op(::custom_msgs::msg::SaveRadarCAN257 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN257_can_xcvr_operational can_radar_not_op(::custom_msgs::msg::SaveRadarCAN257::_can_radar_not_op_type arg)
  {
    msg_.can_radar_not_op = std::move(arg);
    return Init_SaveRadarCAN257_can_xcvr_operational(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN257 msg_;
};

class Init_SaveRadarCAN257_can_radar_overheat_error
{
public:
  explicit Init_SaveRadarCAN257_can_radar_overheat_error(::custom_msgs::msg::SaveRadarCAN257 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN257_can_radar_not_op can_radar_overheat_error(::custom_msgs::msg::SaveRadarCAN257::_can_radar_overheat_error_type arg)
  {
    msg_.can_radar_overheat_error = std::move(arg);
    return Init_SaveRadarCAN257_can_radar_not_op(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN257 msg_;
};

class Init_SaveRadarCAN257_can_radar_align_not_start
{
public:
  explicit Init_SaveRadarCAN257_can_radar_align_not_start(::custom_msgs::msg::SaveRadarCAN257 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN257_can_radar_overheat_error can_radar_align_not_start(::custom_msgs::msg::SaveRadarCAN257::_can_radar_align_not_start_type arg)
  {
    msg_.can_radar_align_not_start = std::move(arg);
    return Init_SaveRadarCAN257_can_radar_overheat_error(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN257 msg_;
};

class Init_SaveRadarCAN257_can_radar_align_out_range
{
public:
  explicit Init_SaveRadarCAN257_can_radar_align_out_range(::custom_msgs::msg::SaveRadarCAN257 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN257_can_radar_align_not_start can_radar_align_out_range(::custom_msgs::msg::SaveRadarCAN257::_can_radar_align_out_range_type arg)
  {
    msg_.can_radar_align_out_range = std::move(arg);
    return Init_SaveRadarCAN257_can_radar_align_not_start(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN257 msg_;
};

class Init_SaveRadarCAN257_can_radar_ext_cond_nok
{
public:
  explicit Init_SaveRadarCAN257_can_radar_ext_cond_nok(::custom_msgs::msg::SaveRadarCAN257 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN257_can_radar_align_out_range can_radar_ext_cond_nok(::custom_msgs::msg::SaveRadarCAN257::_can_radar_ext_cond_nok_type arg)
  {
    msg_.can_radar_ext_cond_nok = std::move(arg);
    return Init_SaveRadarCAN257_can_radar_align_out_range(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN257 msg_;
};

class Init_SaveRadarCAN257_can_blockage_mnr
{
public:
  explicit Init_SaveRadarCAN257_can_blockage_mnr(::custom_msgs::msg::SaveRadarCAN257 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN257_can_radar_ext_cond_nok can_blockage_mnr(::custom_msgs::msg::SaveRadarCAN257::_can_blockage_mnr_type arg)
  {
    msg_.can_blockage_mnr = std::move(arg);
    return Init_SaveRadarCAN257_can_radar_ext_cond_nok(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN257 msg_;
};

class Init_SaveRadarCAN257_can_blockage_sidelobe
{
public:
  explicit Init_SaveRadarCAN257_can_blockage_sidelobe(::custom_msgs::msg::SaveRadarCAN257 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN257_can_blockage_mnr can_blockage_sidelobe(::custom_msgs::msg::SaveRadarCAN257::_can_blockage_sidelobe_type arg)
  {
    msg_.can_blockage_sidelobe = std::move(arg);
    return Init_SaveRadarCAN257_can_blockage_mnr(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN257 msg_;
};

class Init_SaveRadarCAN257_can_radar_align_incomplete
{
public:
  explicit Init_SaveRadarCAN257_can_radar_align_incomplete(::custom_msgs::msg::SaveRadarCAN257 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN257_can_blockage_sidelobe can_radar_align_incomplete(::custom_msgs::msg::SaveRadarCAN257::_can_radar_align_incomplete_type arg)
  {
    msg_.can_radar_align_incomplete = std::move(arg);
    return Init_SaveRadarCAN257_can_blockage_sidelobe(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN257 msg_;
};

class Init_SaveRadarCAN257_can_blockage_sidelobe_filter_val
{
public:
  explicit Init_SaveRadarCAN257_can_blockage_sidelobe_filter_val(::custom_msgs::msg::SaveRadarCAN257 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN257_can_radar_align_incomplete can_blockage_sidelobe_filter_val(::custom_msgs::msg::SaveRadarCAN257::_can_blockage_sidelobe_filter_val_type arg)
  {
    msg_.can_blockage_sidelobe_filter_val = std::move(arg);
    return Init_SaveRadarCAN257_can_radar_align_incomplete(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN257 msg_;
};

class Init_SaveRadarCAN257_can_recommend_unconverge
{
public:
  explicit Init_SaveRadarCAN257_can_recommend_unconverge(::custom_msgs::msg::SaveRadarCAN257 & msg)
  : msg_(msg)
  {}
  Init_SaveRadarCAN257_can_blockage_sidelobe_filter_val can_recommend_unconverge(::custom_msgs::msg::SaveRadarCAN257::_can_recommend_unconverge_type arg)
  {
    msg_.can_recommend_unconverge = std::move(arg);
    return Init_SaveRadarCAN257_can_blockage_sidelobe_filter_val(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN257 msg_;
};

class Init_SaveRadarCAN257_can_interference_type
{
public:
  Init_SaveRadarCAN257_can_interference_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveRadarCAN257_can_recommend_unconverge can_interference_type(::custom_msgs::msg::SaveRadarCAN257::_can_interference_type_type arg)
  {
    msg_.can_interference_type = std::move(arg);
    return Init_SaveRadarCAN257_can_recommend_unconverge(msg_);
  }

private:
  ::custom_msgs::msg::SaveRadarCAN257 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::SaveRadarCAN257>()
{
  return custom_msgs::msg::builder::Init_SaveRadarCAN257_can_interference_type();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN257__BUILDER_HPP_
