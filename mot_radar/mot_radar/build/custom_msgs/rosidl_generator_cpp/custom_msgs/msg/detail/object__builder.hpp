// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include "custom_msgs/msg/detail/object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_Object_cur_lane
{
public:
  explicit Init_Object_cur_lane(::custom_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  ::custom_msgs::msg::Object cur_lane(::custom_msgs::msg::Object::_cur_lane_type arg)
  {
    msg_.cur_lane = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::Object msg_;
};

class Init_Object_id
{
public:
  explicit Init_Object_id(::custom_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_cur_lane id(::custom_msgs::msg::Object::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object_cur_lane(msg_);
  }

private:
  ::custom_msgs::msg::Object msg_;
};

class Init_Object_rel_v_y
{
public:
  explicit Init_Object_rel_v_y(::custom_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_id rel_v_y(::custom_msgs::msg::Object::_rel_v_y_type arg)
  {
    msg_.rel_v_y = std::move(arg);
    return Init_Object_id(msg_);
  }

private:
  ::custom_msgs::msg::Object msg_;
};

class Init_Object_rel_v_x
{
public:
  explicit Init_Object_rel_v_x(::custom_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_rel_v_y rel_v_x(::custom_msgs::msg::Object::_rel_v_x_type arg)
  {
    msg_.rel_v_x = std::move(arg);
    return Init_Object_rel_v_y(msg_);
  }

private:
  ::custom_msgs::msg::Object msg_;
};

class Init_Object_h
{
public:
  explicit Init_Object_h(::custom_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_rel_v_x h(::custom_msgs::msg::Object::_h_type arg)
  {
    msg_.h = std::move(arg);
    return Init_Object_rel_v_x(msg_);
  }

private:
  ::custom_msgs::msg::Object msg_;
};

class Init_Object_w
{
public:
  explicit Init_Object_w(::custom_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_h w(::custom_msgs::msg::Object::_w_type arg)
  {
    msg_.w = std::move(arg);
    return Init_Object_h(msg_);
  }

private:
  ::custom_msgs::msg::Object msg_;
};

class Init_Object_z
{
public:
  explicit Init_Object_z(::custom_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_w z(::custom_msgs::msg::Object::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Object_w(msg_);
  }

private:
  ::custom_msgs::msg::Object msg_;
};

class Init_Object_y
{
public:
  explicit Init_Object_y(::custom_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_z y(::custom_msgs::msg::Object::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Object_z(msg_);
  }

private:
  ::custom_msgs::msg::Object msg_;
};

class Init_Object_x
{
public:
  Init_Object_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_y x(::custom_msgs::msg::Object::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Object_y(msg_);
  }

private:
  ::custom_msgs::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::Object>()
{
  return custom_msgs::msg::builder::Init_Object_x();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
