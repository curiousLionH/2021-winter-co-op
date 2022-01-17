// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN291.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN291__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN291__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN291 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN291 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN291_
{
  using Type = SbgCAN291_<ContainerAllocator>;

  explicit SbgCAN291_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta_vel_x = 0.0;
      this->delta_vel_y = 0.0;
      this->delta_vel_z = 0.0;
    }
  }

  explicit SbgCAN291_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta_vel_x = 0.0;
      this->delta_vel_y = 0.0;
      this->delta_vel_z = 0.0;
    }
  }

  // field types and members
  using _delta_vel_x_type =
    double;
  _delta_vel_x_type delta_vel_x;
  using _delta_vel_y_type =
    double;
  _delta_vel_y_type delta_vel_y;
  using _delta_vel_z_type =
    double;
  _delta_vel_z_type delta_vel_z;

  // setters for named parameter idiom
  Type & set__delta_vel_x(
    const double & _arg)
  {
    this->delta_vel_x = _arg;
    return *this;
  }
  Type & set__delta_vel_y(
    const double & _arg)
  {
    this->delta_vel_y = _arg;
    return *this;
  }
  Type & set__delta_vel_z(
    const double & _arg)
  {
    this->delta_vel_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN291_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN291_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN291_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN291_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN291_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN291_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN291_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN291_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN291_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN291_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN291
    std::shared_ptr<custom_msgs::msg::SbgCAN291_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN291
    std::shared_ptr<custom_msgs::msg::SbgCAN291_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN291_ & other) const
  {
    if (this->delta_vel_x != other.delta_vel_x) {
      return false;
    }
    if (this->delta_vel_y != other.delta_vel_y) {
      return false;
    }
    if (this->delta_vel_z != other.delta_vel_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN291_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN291_

// alias to use template instance with default allocator
using SbgCAN291 =
  custom_msgs::msg::SbgCAN291_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN291__STRUCT_HPP_
