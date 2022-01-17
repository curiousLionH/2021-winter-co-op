// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:msg/VehicleCANmain.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CA_NMAIN__TRAITS_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CA_NMAIN__TRAITS_HPP_

#include "custom_msgs/msg/detail/vehicle_ca_nmain__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'eait_control_01'
#include "custom_msgs/msg/detail/save_can342__traits.hpp"
// Member 'eait_control_02'
#include "custom_msgs/msg/detail/save_can343__traits.hpp"
// Member 'eait_info_eps'
#include "custom_msgs/msg/detail/save_can1808__traits.hpp"
// Member 'eait_info_acc'
#include "custom_msgs/msg/detail/save_can1809__traits.hpp"
// Member 'eait_info_spd'
#include "custom_msgs/msg/detail/save_can1810__traits.hpp"
// Member 'eait_info_imu'
#include "custom_msgs/msg/detail/save_can1811__traits.hpp"
// Member 'eait_info_rad'
#include "custom_msgs/msg/detail/save_can1812__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::msg::VehicleCANmain>()
{
  return "custom_msgs::msg::VehicleCANmain";
}

template<>
inline const char * name<custom_msgs::msg::VehicleCANmain>()
{
  return "custom_msgs/msg/VehicleCANmain";
}

template<>
struct has_fixed_size<custom_msgs::msg::VehicleCANmain>
  : std::integral_constant<bool, has_fixed_size<custom_msgs::msg::SaveCAN1808>::value && has_fixed_size<custom_msgs::msg::SaveCAN1809>::value && has_fixed_size<custom_msgs::msg::SaveCAN1810>::value && has_fixed_size<custom_msgs::msg::SaveCAN1811>::value && has_fixed_size<custom_msgs::msg::SaveCAN1812>::value && has_fixed_size<custom_msgs::msg::SaveCAN342>::value && has_fixed_size<custom_msgs::msg::SaveCAN343>::value> {};

template<>
struct has_bounded_size<custom_msgs::msg::VehicleCANmain>
  : std::integral_constant<bool, has_bounded_size<custom_msgs::msg::SaveCAN1808>::value && has_bounded_size<custom_msgs::msg::SaveCAN1809>::value && has_bounded_size<custom_msgs::msg::SaveCAN1810>::value && has_bounded_size<custom_msgs::msg::SaveCAN1811>::value && has_bounded_size<custom_msgs::msg::SaveCAN1812>::value && has_bounded_size<custom_msgs::msg::SaveCAN342>::value && has_bounded_size<custom_msgs::msg::SaveCAN343>::value> {};

template<>
struct is_message<custom_msgs::msg::VehicleCANmain>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CA_NMAIN__TRAITS_HPP_
