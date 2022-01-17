// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/NiroCAN1569.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1569__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1569__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__NiroCAN1569 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__NiroCAN1569 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NiroCAN1569_
{
  using Type = NiroCAN1569_<ContainerAllocator>;

  explicit NiroCAN1569_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yyyy = 0;
      this->mm = 0;
      this->dd = 0;
      this->hh = 0;
      this->nn = 0;
      this->ss = 0;
    }
  }

  explicit NiroCAN1569_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yyyy = 0;
      this->mm = 0;
      this->dd = 0;
      this->hh = 0;
      this->nn = 0;
      this->ss = 0;
    }
  }

  // field types and members
  using _yyyy_type =
    uint16_t;
  _yyyy_type yyyy;
  using _mm_type =
    uint16_t;
  _mm_type mm;
  using _dd_type =
    uint16_t;
  _dd_type dd;
  using _hh_type =
    uint16_t;
  _hh_type hh;
  using _nn_type =
    uint16_t;
  _nn_type nn;
  using _ss_type =
    uint16_t;
  _ss_type ss;

  // setters for named parameter idiom
  Type & set__yyyy(
    const uint16_t & _arg)
  {
    this->yyyy = _arg;
    return *this;
  }
  Type & set__mm(
    const uint16_t & _arg)
  {
    this->mm = _arg;
    return *this;
  }
  Type & set__dd(
    const uint16_t & _arg)
  {
    this->dd = _arg;
    return *this;
  }
  Type & set__hh(
    const uint16_t & _arg)
  {
    this->hh = _arg;
    return *this;
  }
  Type & set__nn(
    const uint16_t & _arg)
  {
    this->nn = _arg;
    return *this;
  }
  Type & set__ss(
    const uint16_t & _arg)
  {
    this->ss = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::NiroCAN1569_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::NiroCAN1569_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN1569_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN1569_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN1569_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN1569_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN1569_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN1569_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN1569_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN1569_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__NiroCAN1569
    std::shared_ptr<custom_msgs::msg::NiroCAN1569_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__NiroCAN1569
    std::shared_ptr<custom_msgs::msg::NiroCAN1569_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NiroCAN1569_ & other) const
  {
    if (this->yyyy != other.yyyy) {
      return false;
    }
    if (this->mm != other.mm) {
      return false;
    }
    if (this->dd != other.dd) {
      return false;
    }
    if (this->hh != other.hh) {
      return false;
    }
    if (this->nn != other.nn) {
      return false;
    }
    if (this->ss != other.ss) {
      return false;
    }
    return true;
  }
  bool operator!=(const NiroCAN1569_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NiroCAN1569_

// alias to use template instance with default allocator
using NiroCAN1569 =
  custom_msgs::msg::NiroCAN1569_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN1569__STRUCT_HPP_
