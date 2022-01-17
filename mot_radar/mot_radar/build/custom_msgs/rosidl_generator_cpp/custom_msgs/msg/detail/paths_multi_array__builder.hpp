// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/PathsMultiArray.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PATHS_MULTI_ARRAY__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__PATHS_MULTI_ARRAY__BUILDER_HPP_

#include "custom_msgs/msg/detail/paths_multi_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_PathsMultiArray_data
{
public:
  Init_PathsMultiArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::msg::PathsMultiArray data(::custom_msgs::msg::PathsMultiArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::PathsMultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::PathsMultiArray>()
{
  return custom_msgs::msg::builder::Init_PathsMultiArray_data();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__PATHS_MULTI_ARRAY__BUILDER_HPP_
