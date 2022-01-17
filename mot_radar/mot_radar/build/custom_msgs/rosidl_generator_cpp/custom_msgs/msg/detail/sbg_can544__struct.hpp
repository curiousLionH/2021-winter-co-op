// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN544.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN544__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN544__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN544 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN544 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN544_
{
  using Type = SbgCAN544_<ContainerAllocator>;

  explicit SbgCAN544_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_track = 0.0;
      this->angle_slip = 0.0;
      this->curvature_radius = 0.0;
      this->auto_status = 0;
    }
  }

  explicit SbgCAN544_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_track = 0.0;
      this->angle_slip = 0.0;
      this->curvature_radius = 0.0;
      this->auto_status = 0;
    }
  }

  // field types and members
  using _angle_track_type =
    double;
  _angle_track_type angle_track;
  using _angle_slip_type =
    double;
  _angle_slip_type angle_slip;
  using _curvature_radius_type =
    double;
  _curvature_radius_type curvature_radius;
  using _auto_status_type =
    uint8_t;
  _auto_status_type auto_status;

  // setters for named parameter idiom
  Type & set__angle_track(
    const double & _arg)
  {
    this->angle_track = _arg;
    return *this;
  }
  Type & set__angle_slip(
    const double & _arg)
  {
    this->angle_slip = _arg;
    return *this;
  }
  Type & set__curvature_radius(
    const double & _arg)
  {
    this->curvature_radius = _arg;
    return *this;
  }
  Type & set__auto_status(
    const uint8_t & _arg)
  {
    this->auto_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN544_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN544_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN544_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN544_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN544_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN544_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN544_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN544_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN544_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN544_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN544
    std::shared_ptr<custom_msgs::msg::SbgCAN544_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN544
    std::shared_ptr<custom_msgs::msg::SbgCAN544_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN544_ & other) const
  {
    if (this->angle_track != other.angle_track) {
      return false;
    }
    if (this->angle_slip != other.angle_slip) {
      return false;
    }
    if (this->curvature_radius != other.curvature_radius) {
      return false;
    }
    if (this->auto_status != other.auto_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN544_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN544_

// alias to use template instance with default allocator
using SbgCAN544 =
  custom_msgs::msg::SbgCAN544_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN544__STRUCT_HPP_
