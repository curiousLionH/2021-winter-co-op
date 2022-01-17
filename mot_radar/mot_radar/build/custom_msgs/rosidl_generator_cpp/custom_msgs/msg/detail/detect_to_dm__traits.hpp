// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/DetectToDM.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__DETECT_TO_DM__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__DETECT_TO_DM__TRAITS_HPP_

#include "custom_msgs/msg/detail/detect_to_dm__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::msg::DetectToDM>()
{
  return "custom_msgs::msg::DetectToDM";
}

template<>
inline const char * name<custom_msgs::msg::DetectToDM>()
{
  return "custom_msgs/msg/DetectToDM";
}

template<>
struct has_fixed_size<custom_msgs::msg::DetectToDM>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs::msg::DetectToDM>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs::msg::DetectToDM>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__DETECT_TO_DM__TRAITS_HPP_
