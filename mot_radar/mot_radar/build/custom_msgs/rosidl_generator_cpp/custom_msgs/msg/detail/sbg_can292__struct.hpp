// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN292.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN292__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN292__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN292 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN292 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN292_
{
  using Type = SbgCAN292_<ContainerAllocator>;

  explicit SbgCAN292_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta_angle_x = 0.0;
      this->delta_angle_y = 0.0;
      this->delta_angle_z = 0.0;
    }
  }

  explicit SbgCAN292_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->delta_angle_x = 0.0;
      this->delta_angle_y = 0.0;
      this->delta_angle_z = 0.0;
    }
  }

  // field types and members
  using _delta_angle_x_type =
    double;
  _delta_angle_x_type delta_angle_x;
  using _delta_angle_y_type =
    double;
  _delta_angle_y_type delta_angle_y;
  using _delta_angle_z_type =
    double;
  _delta_angle_z_type delta_angle_z;

  // setters for named parameter idiom
  Type & set__delta_angle_x(
    const double & _arg)
  {
    this->delta_angle_x = _arg;
    return *this;
  }
  Type & set__delta_angle_y(
    const double & _arg)
  {
    this->delta_angle_y = _arg;
    return *this;
  }
  Type & set__delta_angle_z(
    const double & _arg)
  {
    this->delta_angle_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN292_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN292_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN292_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN292_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN292_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN292_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN292_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN292_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN292_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN292_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN292
    std::shared_ptr<custom_msgs::msg::SbgCAN292_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN292
    std::shared_ptr<custom_msgs::msg::SbgCAN292_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN292_ & other) const
  {
    if (this->delta_angle_x != other.delta_angle_x) {
      return false;
    }
    if (this->delta_angle_y != other.delta_angle_y) {
      return false;
    }
    if (this->delta_angle_z != other.delta_angle_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN292_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN292_

// alias to use template instance with default allocator
using SbgCAN292 =
  custom_msgs::msg::SbgCAN292_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN292__STRUCT_HPP_
