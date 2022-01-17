// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/CurveFit.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__CURVE_FIT__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__CURVE_FIT__BUILDER_HPP_

#include "custom_msgs/msg/detail/curve_fit__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_CurveFit_right_y
{
public:
  explicit Init_CurveFit_right_y(::custom_msgs::msg::CurveFit & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::CurveFit right_y(::custom_msgs::msg::CurveFit::_right_y_type arg)
  {
    msg_.right_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::CurveFit msg_;
};

class Init_CurveFit_right_x
{
public:
  explicit Init_CurveFit_right_x(::custom_msgs::msg::CurveFit & msg)
  : msg_(msg)
  {}
  Init_CurveFit_right_y right_x(::custom_msgs::msg::CurveFit::_right_x_type arg)
  {
    msg_.right_x = std::move(arg);
    return Init_CurveFit_right_y(msg_);
  }

private:
  ::custom_msgs::msg::CurveFit msg_;
};

class Init_CurveFit_left_y
{
public:
  explicit Init_CurveFit_left_y(::custom_msgs::msg::CurveFit & msg)
  : msg_(msg)
  {}
  Init_CurveFit_right_x left_y(::custom_msgs::msg::CurveFit::_left_y_type arg)
  {
    msg_.left_y = std::move(arg);
    return Init_CurveFit_right_x(msg_);
  }

private:
  ::custom_msgs::msg::CurveFit msg_;
};

class Init_CurveFit_left_x
{
public:
  Init_CurveFit_left_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CurveFit_left_y left_x(::custom_msgs::msg::CurveFit::_left_x_type arg)
  {
    msg_.left_x = std::move(arg);
    return Init_CurveFit_left_y(msg_);
  }

private:
  ::custom_msgs::msg::CurveFit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::CurveFit>()
{
  return custom_msgs::msg::builder::Init_CurveFit_left_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__CURVE_FIT__BUILDER_HPP_
