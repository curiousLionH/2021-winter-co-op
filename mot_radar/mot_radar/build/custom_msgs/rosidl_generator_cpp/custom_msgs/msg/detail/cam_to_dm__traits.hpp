// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/CamToDM.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__CAM_TO_DM__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__CAM_TO_DM__TRAITS_HPP_

#include "custom_msgs/msg/detail/cam_to_dm__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'objects'
#include "custom_msgs/msg/detail/object__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::msg::CamToDM>()
{
  return "custom_msgs::msg::CamToDM";
}

template<>
inline const char * name<custom_msgs::msg::CamToDM>()
{
  return "custom_msgs/msg/CamToDM";
}

template<>
struct has_fixed_size<custom_msgs::msg::CamToDM>
  : std::integral_constant<bool, has_fixed_size<custom_msgs::msg::Object>::value> {};

template<>
struct has_bounded_size<custom_msgs::msg::CamToDM>
  : std::integral_constant<bool, has_bounded_size<custom_msgs::msg::Object>::value> {};

template<>
struct is_message<custom_msgs::msg::CamToDM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__CAM_TO_DM__TRAITS_HPP_
