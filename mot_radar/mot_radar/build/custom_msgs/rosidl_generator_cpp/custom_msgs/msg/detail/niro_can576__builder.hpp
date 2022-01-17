// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/NiroCAN576.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN576__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN576__BUILDER_HPP_

#include "custom_msgs/msg/detail/niro_can576__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_NiroCAN576_brk24_8_56
{
public:
  explicit Init_NiroCAN576_brk24_8_56(::custom_msgs::msg::NiroCAN576 & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::NiroCAN576 brk24_8_56(::custom_msgs::msg::NiroCAN576::_brk24_8_56_type arg)
  {
    msg_.brk24_8_56 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN576 msg_;
};

class Init_NiroCAN576_chksum24
{
public:
  explicit Init_NiroCAN576_chksum24(::custom_msgs::msg::NiroCAN576 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN576_brk24_8_56 chksum24(::custom_msgs::msg::NiroCAN576::_chksum24_type arg)
  {
    msg_.chksum24 = std::move(arg);
    return Init_NiroCAN576_brk24_8_56(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN576 msg_;
};

class Init_NiroCAN576_alivecounter24
{
public:
  explicit Init_NiroCAN576_alivecounter24(::custom_msgs::msg::NiroCAN576 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN576_chksum24 alivecounter24(::custom_msgs::msg::NiroCAN576::_alivecounter24_type arg)
  {
    msg_.alivecounter24 = std::move(arg);
    return Init_NiroCAN576_chksum24(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN576 msg_;
};

class Init_NiroCAN576_brk24_3_39
{
public:
  explicit Init_NiroCAN576_brk24_3_39(::custom_msgs::msg::NiroCAN576 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN576_alivecounter24 brk24_3_39(::custom_msgs::msg::NiroCAN576::_brk24_3_39_type arg)
  {
    msg_.brk24_3_39 = std::move(arg);
    return Init_NiroCAN576_alivecounter24(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN576 msg_;
};

class Init_NiroCAN576_brk24_mode_c
{
public:
  explicit Init_NiroCAN576_brk24_mode_c(::custom_msgs::msg::NiroCAN576 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN576_brk24_3_39 brk24_mode_c(::custom_msgs::msg::NiroCAN576::_brk24_mode_c_type arg)
  {
    msg_.brk24_mode_c = std::move(arg);
    return Init_NiroCAN576_brk24_3_39(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN576 msg_;
};

class Init_NiroCAN576_brk24_7_19
{
public:
  explicit Init_NiroCAN576_brk24_7_19(::custom_msgs::msg::NiroCAN576 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN576_brk24_mode_c brk24_7_19(::custom_msgs::msg::NiroCAN576::_brk24_7_19_type arg)
  {
    msg_.brk24_7_19 = std::move(arg);
    return Init_NiroCAN576_brk24_mode_c(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN576 msg_;
};

class Init_NiroCAN576_brk24_7_12
{
public:
  explicit Init_NiroCAN576_brk24_7_12(::custom_msgs::msg::NiroCAN576 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN576_brk24_7_19 brk24_7_12(::custom_msgs::msg::NiroCAN576::_brk24_7_12_type arg)
  {
    msg_.brk24_7_12 = std::move(arg);
    return Init_NiroCAN576_brk24_7_19(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN576 msg_;
};

class Init_NiroCAN576_brk24_6_6
{
public:
  explicit Init_NiroCAN576_brk24_6_6(::custom_msgs::msg::NiroCAN576 & msg)
  : msg_(msg)
  {}
  Init_NiroCAN576_brk24_7_12 brk24_6_6(::custom_msgs::msg::NiroCAN576::_brk24_6_6_type arg)
  {
    msg_.brk24_6_6 = std::move(arg);
    return Init_NiroCAN576_brk24_7_12(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN576 msg_;
};

class Init_NiroCAN576_brk24_6_0
{
public:
  Init_NiroCAN576_brk24_6_0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NiroCAN576_brk24_6_6 brk24_6_0(::custom_msgs::msg::NiroCAN576::_brk24_6_0_type arg)
  {
    msg_.brk24_6_0 = std::move(arg);
    return Init_NiroCAN576_brk24_6_6(msg_);
  }

private:
  ::custom_msgs::msg::NiroCAN576 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::NiroCAN576>()
{
  return custom_msgs::msg::builder::Init_NiroCAN576_brk24_6_0();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN576__BUILDER_HPP_
