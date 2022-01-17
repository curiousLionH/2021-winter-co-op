// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_msgs:msg/CamToDM.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__CAM_TO_DM__BUILDER_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__CAM_TO_DM__BUILDER_HPP_

#include "custom_msgs/msg/detail/cam_to_dm__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_msgs
{

namespace msg
{

namespace builder
{

class Init_CamToDM_objects
{
public:
  Init_CamToDM_objects()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_msgs::msg::CamToDM objects(::custom_msgs::msg::CamToDM::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_msgs::msg::CamToDM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_msgs::msg::CamToDM>()
{
  return custom_msgs::msg::builder::Init_CamToDM_objects();
}

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__CAM_TO_DM__BUILDER_HPP_
