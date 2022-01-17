// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/NiroCAN1568.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1568__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1568__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__NiroCAN1568 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__NiroCAN1568 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NiroCAN1568_
{
  using Type = NiroCAN1568_<ContainerAllocator>;

  explicit NiroCAN1568_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->str_status = 0;
      this->str_time_remain = 0.0f;
      this->left_status = 0;
      this->left_time_remain = 0.0f;
      this->ped1_status = 0;
      this->ped1_time_remain = 0.0f;
      this->ped2_status = 0;
      this->ped2_time_remain = 0.0f;
    }
  }

  explicit NiroCAN1568_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->str_status = 0;
      this->str_time_remain = 0.0f;
      this->left_status = 0;
      this->left_time_remain = 0.0f;
      this->ped1_status = 0;
      this->ped1_time_remain = 0.0f;
      this->ped2_status = 0;
      this->ped2_time_remain = 0.0f;
    }
  }

  // field types and members
  using _str_status_type =
    uint16_t;
  _str_status_type str_status;
  using _str_time_remain_type =
    float;
  _str_time_remain_type str_time_remain;
  using _left_status_type =
    uint16_t;
  _left_status_type left_status;
  using _left_time_remain_type =
    float;
  _left_time_remain_type left_time_remain;
  using _ped1_status_type =
    uint16_t;
  _ped1_status_type ped1_status;
  using _ped1_time_remain_type =
    float;
  _ped1_time_remain_type ped1_time_remain;
  using _ped2_status_type =
    uint16_t;
  _ped2_status_type ped2_status;
  using _ped2_time_remain_type =
    float;
  _ped2_time_remain_type ped2_time_remain;

  // setters for named parameter idiom
  Type & set__str_status(
    const uint16_t & _arg)
  {
    this->str_status = _arg;
    return *this;
  }
  Type & set__str_time_remain(
    const float & _arg)
  {
    this->str_time_remain = _arg;
    return *this;
  }
  Type & set__left_status(
    const uint16_t & _arg)
  {
    this->left_status = _arg;
    return *this;
  }
  Type & set__left_time_remain(
    const float & _arg)
  {
    this->left_time_remain = _arg;
    return *this;
  }
  Type & set__ped1_status(
    const uint16_t & _arg)
  {
    this->ped1_status = _arg;
    return *this;
  }
  Type & set__ped1_time_remain(
    const float & _arg)
  {
    this->ped1_time_remain = _arg;
    return *this;
  }
  Type & set__ped2_status(
    const uint16_t & _arg)
  {
    this->ped2_status = _arg;
    return *this;
  }
  Type & set__ped2_time_remain(
    const float & _arg)
  {
    this->ped2_time_remain = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::NiroCAN1568_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::NiroCAN1568_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN1568_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN1568_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN1568_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN1568_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN1568_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN1568_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN1568_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN1568_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__NiroCAN1568
    std::shared_ptr<custom_msgs::msg::NiroCAN1568_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__NiroCAN1568
    std::shared_ptr<custom_msgs::msg::NiroCAN1568_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NiroCAN1568_ & other) const
  {
    if (this->str_status != other.str_status) {
      return false;
    }
    if (this->str_time_remain != other.str_time_remain) {
      return false;
    }
    if (this->left_status != other.left_status) {
      return false;
    }
    if (this->left_time_remain != other.left_time_remain) {
      return false;
    }
    if (this->ped1_status != other.ped1_status) {
      return false;
    }
    if (this->ped1_time_remain != other.ped1_time_remain) {
      return false;
    }
    if (this->ped2_status != other.ped2_status) {
      return false;
    }
    if (this->ped2_time_remain != other.ped2_time_remain) {
      return false;
    }
    return true;
  }
  bool operator!=(const NiroCAN1568_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NiroCAN1568_

// alias to use template instance with default allocator
using NiroCAN1568 =
  custom_msgs::msg::NiroCAN1568_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1568__STRUCT_HPP_
