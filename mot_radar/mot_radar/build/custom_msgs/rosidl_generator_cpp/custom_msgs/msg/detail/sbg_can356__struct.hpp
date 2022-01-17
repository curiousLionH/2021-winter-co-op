// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN356.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN356__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN356__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN356 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN356 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN356_
{
  using Type = SbgCAN356_<ContainerAllocator>;

  explicit SbgCAN356_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pressure_diff = 0.0;
      this->airspeed = 0.0;
    }
  }

  explicit SbgCAN356_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pressure_diff = 0.0;
      this->airspeed = 0.0;
    }
  }

  // field types and members
  using _pressure_diff_type =
    double;
  _pressure_diff_type pressure_diff;
  using _airspeed_type =
    double;
  _airspeed_type airspeed;

  // setters for named parameter idiom
  Type & set__pressure_diff(
    const double & _arg)
  {
    this->pressure_diff = _arg;
    return *this;
  }
  Type & set__airspeed(
    const double & _arg)
  {
    this->airspeed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN356_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN356_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN356_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN356_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN356_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN356_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN356_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN356_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN356_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN356_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN356
    std::shared_ptr<custom_msgs::msg::SbgCAN356_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN356
    std::shared_ptr<custom_msgs::msg::SbgCAN356_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN356_ & other) const
  {
    if (this->pressure_diff != other.pressure_diff) {
      return false;
    }
    if (this->airspeed != other.airspeed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN356_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN356_

// alias to use template instance with default allocator
using SbgCAN356 =
  custom_msgs::msg::SbgCAN356_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN356__STRUCT_HPP_
