// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/NiroCAN368.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN368__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN368__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__NiroCAN368 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__NiroCAN368 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NiroCAN368_
{
  using Type = NiroCAN368_<ContainerAllocator>;

  explicit NiroCAN368_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gway_accel_pedal_position = 0.0f;
      this->gway_gearseldisp = 0;
    }
  }

  explicit NiroCAN368_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gway_accel_pedal_position = 0.0f;
      this->gway_gearseldisp = 0;
    }
  }

  // field types and members
  using _gway_accel_pedal_position_type =
    float;
  _gway_accel_pedal_position_type gway_accel_pedal_position;
  using _gway_gearseldisp_type =
    uint8_t;
  _gway_gearseldisp_type gway_gearseldisp;

  // setters for named parameter idiom
  Type & set__gway_accel_pedal_position(
    const float & _arg)
  {
    this->gway_accel_pedal_position = _arg;
    return *this;
  }
  Type & set__gway_gearseldisp(
    const uint8_t & _arg)
  {
    this->gway_gearseldisp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::NiroCAN368_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::NiroCAN368_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN368_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN368_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN368_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN368_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN368_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN368_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN368_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN368_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__NiroCAN368
    std::shared_ptr<custom_msgs::msg::NiroCAN368_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__NiroCAN368
    std::shared_ptr<custom_msgs::msg::NiroCAN368_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NiroCAN368_ & other) const
  {
    if (this->gway_accel_pedal_position != other.gway_accel_pedal_position) {
      return false;
    }
    if (this->gway_gearseldisp != other.gway_gearseldisp) {
      return false;
    }
    return true;
  }
  bool operator!=(const NiroCAN368_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NiroCAN368_

// alias to use template instance with default allocator
using NiroCAN368 =
  custom_msgs::msg::NiroCAN368_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN368__STRUCT_HPP_
