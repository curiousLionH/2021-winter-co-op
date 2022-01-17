// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/NiroCAN656.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN656__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN656__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__NiroCAN656 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__NiroCAN656 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NiroCAN656_
{
  using Type = NiroCAN656_<ContainerAllocator>;

  explicit NiroCAN656_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gway_steering_angle = 0.0f;
      this->gway_steering_tq = 0.0f;
      this->gway_steering_status = 0;
    }
  }

  explicit NiroCAN656_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gway_steering_angle = 0.0f;
      this->gway_steering_tq = 0.0f;
      this->gway_steering_status = 0;
    }
  }

  // field types and members
  using _gway_steering_angle_type =
    float;
  _gway_steering_angle_type gway_steering_angle;
  using _gway_steering_tq_type =
    float;
  _gway_steering_tq_type gway_steering_tq;
  using _gway_steering_status_type =
    uint8_t;
  _gway_steering_status_type gway_steering_status;

  // setters for named parameter idiom
  Type & set__gway_steering_angle(
    const float & _arg)
  {
    this->gway_steering_angle = _arg;
    return *this;
  }
  Type & set__gway_steering_tq(
    const float & _arg)
  {
    this->gway_steering_tq = _arg;
    return *this;
  }
  Type & set__gway_steering_status(
    const uint8_t & _arg)
  {
    this->gway_steering_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::NiroCAN656_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::NiroCAN656_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN656_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN656_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN656_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN656_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN656_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN656_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN656_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN656_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__NiroCAN656
    std::shared_ptr<custom_msgs::msg::NiroCAN656_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__NiroCAN656
    std::shared_ptr<custom_msgs::msg::NiroCAN656_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NiroCAN656_ & other) const
  {
    if (this->gway_steering_angle != other.gway_steering_angle) {
      return false;
    }
    if (this->gway_steering_tq != other.gway_steering_tq) {
      return false;
    }
    if (this->gway_steering_status != other.gway_steering_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const NiroCAN656_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NiroCAN656_

// alias to use template instance with default allocator
using NiroCAN656 =
  custom_msgs::msg::NiroCAN656_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN656__STRUCT_HPP_
