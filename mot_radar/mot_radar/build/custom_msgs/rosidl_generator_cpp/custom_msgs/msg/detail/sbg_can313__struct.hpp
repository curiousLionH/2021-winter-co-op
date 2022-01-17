// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN313.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN313__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN313__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN313 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN313 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN313_
{
  using Type = SbgCAN313_<ContainerAllocator>;

  explicit SbgCAN313_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity_x = 0.0;
      this->velocity_y = 0.0;
      this->velocity_z = 0.0;
    }
  }

  explicit SbgCAN313_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity_x = 0.0;
      this->velocity_y = 0.0;
      this->velocity_z = 0.0;
    }
  }

  // field types and members
  using _velocity_x_type =
    double;
  _velocity_x_type velocity_x;
  using _velocity_y_type =
    double;
  _velocity_y_type velocity_y;
  using _velocity_z_type =
    double;
  _velocity_z_type velocity_z;

  // setters for named parameter idiom
  Type & set__velocity_x(
    const double & _arg)
  {
    this->velocity_x = _arg;
    return *this;
  }
  Type & set__velocity_y(
    const double & _arg)
  {
    this->velocity_y = _arg;
    return *this;
  }
  Type & set__velocity_z(
    const double & _arg)
  {
    this->velocity_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN313_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN313_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN313_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN313_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN313_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN313_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN313_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN313_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN313_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN313_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN313
    std::shared_ptr<custom_msgs::msg::SbgCAN313_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN313
    std::shared_ptr<custom_msgs::msg::SbgCAN313_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN313_ & other) const
  {
    if (this->velocity_x != other.velocity_x) {
      return false;
    }
    if (this->velocity_y != other.velocity_y) {
      return false;
    }
    if (this->velocity_z != other.velocity_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN313_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN313_

// alias to use template instance with default allocator
using SbgCAN313 =
  custom_msgs::msg::SbgCAN313_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN313__STRUCT_HPP_
