// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/SaveRadarCAN321.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN321__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN321__TRAITS_HPP_

#include "custom_msgs/msg/detail/save_radar_can321__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::msg::SaveRadarCAN321>()
{
  return "custom_msgs::msg::SaveRadarCAN321";
}

template<>
inline const char * name<custom_msgs::msg::SaveRadarCAN321>()
{
  return "custom_msgs/msg/SaveRadarCAN321";
}

template<>
struct has_fixed_size<custom_msgs::msg::SaveRadarCAN321>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs::msg::SaveRadarCAN321>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs::msg::SaveRadarCAN321>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN321__TRAITS_HPP_
