// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/NiroCAN640.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN640__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN640__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__NiroCAN640 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__NiroCAN640 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NiroCAN640_
{
  using Type = NiroCAN640_<ContainerAllocator>;

  explicit NiroCAN640_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gway_wheel_velocity_fr = 0.0f;
      this->gway_wheel_velocity_rl = 0.0f;
      this->gway_wheel_velocity_rr = 0.0f;
      this->gway_wheel_velocity_fl = 0.0f;
    }
  }

  explicit NiroCAN640_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gway_wheel_velocity_fr = 0.0f;
      this->gway_wheel_velocity_rl = 0.0f;
      this->gway_wheel_velocity_rr = 0.0f;
      this->gway_wheel_velocity_fl = 0.0f;
    }
  }

  // field types and members
  using _gway_wheel_velocity_fr_type =
    float;
  _gway_wheel_velocity_fr_type gway_wheel_velocity_fr;
  using _gway_wheel_velocity_rl_type =
    float;
  _gway_wheel_velocity_rl_type gway_wheel_velocity_rl;
  using _gway_wheel_velocity_rr_type =
    float;
  _gway_wheel_velocity_rr_type gway_wheel_velocity_rr;
  using _gway_wheel_velocity_fl_type =
    float;
  _gway_wheel_velocity_fl_type gway_wheel_velocity_fl;

  // setters for named parameter idiom
  Type & set__gway_wheel_velocity_fr(
    const float & _arg)
  {
    this->gway_wheel_velocity_fr = _arg;
    return *this;
  }
  Type & set__gway_wheel_velocity_rl(
    const float & _arg)
  {
    this->gway_wheel_velocity_rl = _arg;
    return *this;
  }
  Type & set__gway_wheel_velocity_rr(
    const float & _arg)
  {
    this->gway_wheel_velocity_rr = _arg;
    return *this;
  }
  Type & set__gway_wheel_velocity_fl(
    const float & _arg)
  {
    this->gway_wheel_velocity_fl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::NiroCAN640_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::NiroCAN640_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN640_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN640_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN640_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN640_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN640_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN640_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN640_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN640_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__NiroCAN640
    std::shared_ptr<custom_msgs::msg::NiroCAN640_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__NiroCAN640
    std::shared_ptr<custom_msgs::msg::NiroCAN640_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NiroCAN640_ & other) const
  {
    if (this->gway_wheel_velocity_fr != other.gway_wheel_velocity_fr) {
      return false;
    }
    if (this->gway_wheel_velocity_rl != other.gway_wheel_velocity_rl) {
      return false;
    }
    if (this->gway_wheel_velocity_rr != other.gway_wheel_velocity_rr) {
      return false;
    }
    if (this->gway_wheel_velocity_fl != other.gway_wheel_velocity_fl) {
      return false;
    }
    return true;
  }
  bool operator!=(const NiroCAN640_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NiroCAN640_

// alias to use template instance with default allocator
using NiroCAN640 =
  custom_msgs::msg::NiroCAN640_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN640__STRUCT_HPP_
