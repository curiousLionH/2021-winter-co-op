// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_msgs:srv/GetBezier.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__GET_BEZIER__TRAITS_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__GET_BEZIER__TRAITS_HPP_

#include "custom_msgs/srv/detail/get_bezier__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::srv::GetBezier_Request>()
{
  return "custom_msgs::srv::GetBezier_Request";
}

template<>
inline const char * name<custom_msgs::srv::GetBezier_Request>()
{
  return "custom_msgs/srv/GetBezier_Request";
}

template<>
struct has_fixed_size<custom_msgs::srv::GetBezier_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<custom_msgs::srv::GetBezier_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<custom_msgs::srv::GetBezier_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::srv::GetBezier_Response>()
{
  return "custom_msgs::srv::GetBezier_Response";
}

template<>
inline const char * name<custom_msgs::srv::GetBezier_Response>()
{
  return "custom_msgs/srv/GetBezier_Response";
}

template<>
struct has_fixed_size<custom_msgs::srv::GetBezier_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_msgs::srv::GetBezier_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_msgs::srv::GetBezier_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<custom_msgs::srv::GetBezier>()
{
  return "custom_msgs::srv::GetBezier";
}

template<>
inline const char * name<custom_msgs::srv::GetBezier>()
{
  return "custom_msgs/srv/GetBezier";
}

template<>
struct has_fixed_size<custom_msgs::srv::GetBezier>
  : std::integral_constant<
    bool,
    has_fixed_size<custom_msgs::srv::GetBezier_Request>::value &&
    has_fixed_size<custom_msgs::srv::GetBezier_Response>::value
  >
{
};

template<>
struct has_bounded_size<custom_msgs::srv::GetBezier>
  : std::integral_constant<
    bool,
    has_bounded_size<custom_msgs::srv::GetBezier_Request>::value &&
    has_bounded_size<custom_msgs::srv::GetBezier_Response>::value
  >
{
};

template<>
struct is_service<custom_msgs::srv::GetBezier>
  : std::true_type
{
};

template<>
struct is_service_request<custom_msgs::srv::GetBezier_Request>
  : std::true_type
{
};

template<>
struct is_service_response<custom_msgs::srv::GetBezier_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_MSGS__SRV__DETAIL__GET_BEZIER__TRAITS_HPP_
