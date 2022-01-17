// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:srv/GetBezier.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__GET_BEZIER__BUILDER_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__GET_BEZIER__BUILDER_HPP_

#include "custom_msgs/srv/detail/get_bezier__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBezier_Request_distance3
{
public:
  explicit Init_GetBezier_Request_distance3(::custom_msgs::srv::GetBezier_Request & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::GetBezier_Request distance3(::custom_msgs::srv::GetBezier_Request::_distance3_type arg)
  {
    msg_.distance3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::GetBezier_Request msg_;
};

class Init_GetBezier_Request_distance2
{
public:
  explicit Init_GetBezier_Request_distance2(::custom_msgs::srv::GetBezier_Request & msg)
  : msg_(msg)
  {}
  Init_GetBezier_Request_distance3 distance2(::custom_msgs::srv::GetBezier_Request::_distance2_type arg)
  {
    msg_.distance2 = std::move(arg);
    return Init_GetBezier_Request_distance3(msg_);
  }

private:
  ::custom_msgs::srv::GetBezier_Request msg_;
};

class Init_GetBezier_Request_distance1
{
public:
  explicit Init_GetBezier_Request_distance1(::custom_msgs::srv::GetBezier_Request & msg)
  : msg_(msg)
  {}
  Init_GetBezier_Request_distance2 distance1(::custom_msgs::srv::GetBezier_Request::_distance1_type arg)
  {
    msg_.distance1 = std::move(arg);
    return Init_GetBezier_Request_distance2(msg_);
  }

private:
  ::custom_msgs::srv::GetBezier_Request msg_;
};

class Init_GetBezier_Request_direction
{
public:
  Init_GetBezier_Request_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBezier_Request_distance1 direction(::custom_msgs::srv::GetBezier_Request::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_GetBezier_Request_distance1(msg_);
  }

private:
  ::custom_msgs::srv::GetBezier_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::GetBezier_Request>()
{
  return custom_msgs::srv::builder::Init_GetBezier_Request_direction();
}

}  // namespace custom_msgs


namespace custom_msgs
{

namespace srv
{

namespace builder
{

class Init_GetBezier_Response_path3_y
{
public:
  explicit Init_GetBezier_Response_path3_y(::custom_msgs::srv::GetBezier_Response & msg)
  : msg_(msg)
  {}
  ::custom_msgs::srv::GetBezier_Response path3_y(::custom_msgs::srv::GetBezier_Response::_path3_y_type arg)
  {
    msg_.path3_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::srv::GetBezier_Response msg_;
};

class Init_GetBezier_Response_path3_x
{
public:
  explicit Init_GetBezier_Response_path3_x(::custom_msgs::srv::GetBezier_Response & msg)
  : msg_(msg)
  {}
  Init_GetBezier_Response_path3_y path3_x(::custom_msgs::srv::GetBezier_Response::_path3_x_type arg)
  {
    msg_.path3_x = std::move(arg);
    return Init_GetBezier_Response_path3_y(msg_);
  }

private:
  ::custom_msgs::srv::GetBezier_Response msg_;
};

class Init_GetBezier_Response_path2_y
{
public:
  explicit Init_GetBezier_Response_path2_y(::custom_msgs::srv::GetBezier_Response & msg)
  : msg_(msg)
  {}
  Init_GetBezier_Response_path3_x path2_y(::custom_msgs::srv::GetBezier_Response::_path2_y_type arg)
  {
    msg_.path2_y = std::move(arg);
    return Init_GetBezier_Response_path3_x(msg_);
  }

private:
  ::custom_msgs::srv::GetBezier_Response msg_;
};

class Init_GetBezier_Response_path2_x
{
public:
  explicit Init_GetBezier_Response_path2_x(::custom_msgs::srv::GetBezier_Response & msg)
  : msg_(msg)
  {}
  Init_GetBezier_Response_path2_y path2_x(::custom_msgs::srv::GetBezier_Response::_path2_x_type arg)
  {
    msg_.path2_x = std::move(arg);
    return Init_GetBezier_Response_path2_y(msg_);
  }

private:
  ::custom_msgs::srv::GetBezier_Response msg_;
};

class Init_GetBezier_Response_path1_y
{
public:
  explicit Init_GetBezier_Response_path1_y(::custom_msgs::srv::GetBezier_Response & msg)
  : msg_(msg)
  {}
  Init_GetBezier_Response_path2_x path1_y(::custom_msgs::srv::GetBezier_Response::_path1_y_type arg)
  {
    msg_.path1_y = std::move(arg);
    return Init_GetBezier_Response_path2_x(msg_);
  }

private:
  ::custom_msgs::srv::GetBezier_Response msg_;
};

class Init_GetBezier_Response_path1_x
{
public:
  Init_GetBezier_Response_path1_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetBezier_Response_path1_y path1_x(::custom_msgs::srv::GetBezier_Response::_path1_x_type arg)
  {
    msg_.path1_x = std::move(arg);
    return Init_GetBezier_Response_path1_y(msg_);
  }

private:
  ::custom_msgs::srv::GetBezier_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::srv::GetBezier_Response>()
{
  return custom_msgs::srv::builder::Init_GetBezier_Response_path1_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__GET_BEZIER__BUILDER_HPP_
