// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/NiroCAN368.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN368__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN368__TRAITS_HPP_

#include "custom_msgs/msg/detail/niro_can368__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::msg::NiroCAN368>()
{
  return "custom_msgs::msg::NiroCAN368";
}

template<>
inline const char * name<custom_msgs::msg::NiroCAN368>()
{
  return "custom_msgs/msg/NiroCAN368";
}

template<>
struct has_fixed_size<custom_msgs::msg::NiroCAN368>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs::msg::NiroCAN368>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs::msg::NiroCAN368>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN368__TRAITS_HPP_
