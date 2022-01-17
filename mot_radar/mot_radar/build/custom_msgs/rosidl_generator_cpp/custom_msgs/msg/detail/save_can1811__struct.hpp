// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SaveCAN1811.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1811__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1811__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SaveCAN1811 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SaveCAN1811 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveCAN1811_
{
  using Type = SaveCAN1811_<ContainerAllocator>;

  explicit SaveCAN1811_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat_accel = 0.0f;
      this->long_accel = 0.0f;
      this->yaw_rate = 0.0f;
      this->brk_cylinder = 0;
    }
  }

  explicit SaveCAN1811_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat_accel = 0.0f;
      this->long_accel = 0.0f;
      this->yaw_rate = 0.0f;
      this->brk_cylinder = 0;
    }
  }

  // field types and members
  using _lat_accel_type =
    float;
  _lat_accel_type lat_accel;
  using _long_accel_type =
    float;
  _long_accel_type long_accel;
  using _yaw_rate_type =
    float;
  _yaw_rate_type yaw_rate;
  using _brk_cylinder_type =
    uint16_t;
  _brk_cylinder_type brk_cylinder;

  // setters for named parameter idiom
  Type & set__lat_accel(
    const float & _arg)
  {
    this->lat_accel = _arg;
    return *this;
  }
  Type & set__long_accel(
    const float & _arg)
  {
    this->long_accel = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const float & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__brk_cylinder(
    const uint16_t & _arg)
  {
    this->brk_cylinder = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SaveCAN1811_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SaveCAN1811_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN1811_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN1811_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN1811_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN1811_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN1811_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN1811_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN1811_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN1811_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SaveCAN1811
    std::shared_ptr<custom_msgs::msg::SaveCAN1811_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SaveCAN1811
    std::shared_ptr<custom_msgs::msg::SaveCAN1811_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveCAN1811_ & other) const
  {
    if (this->lat_accel != other.lat_accel) {
      return false;
    }
    if (this->long_accel != other.long_accel) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->brk_cylinder != other.brk_cylinder) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveCAN1811_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveCAN1811_

// alias to use template instance with default allocator
using SaveCAN1811 =
  custom_msgs::msg::SaveCAN1811_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1811__STRUCT_HPP_
