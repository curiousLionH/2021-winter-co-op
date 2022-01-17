// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/NiroCAN528.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN528__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN528__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__NiroCAN528 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__NiroCAN528 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NiroCAN528_
{
  using Type = NiroCAN528_<ContainerAllocator>;

  explicit NiroCAN528_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pa_enable = 0;
      this->pa_strangcmd = 0.0f;
    }
  }

  explicit NiroCAN528_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pa_enable = 0;
      this->pa_strangcmd = 0.0f;
    }
  }

  // field types and members
  using _pa_enable_type =
    uint8_t;
  _pa_enable_type pa_enable;
  using _pa_strangcmd_type =
    float;
  _pa_strangcmd_type pa_strangcmd;

  // setters for named parameter idiom
  Type & set__pa_enable(
    const uint8_t & _arg)
  {
    this->pa_enable = _arg;
    return *this;
  }
  Type & set__pa_strangcmd(
    const float & _arg)
  {
    this->pa_strangcmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::NiroCAN528_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::NiroCAN528_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN528_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN528_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN528_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN528_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN528_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN528_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN528_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN528_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__NiroCAN528
    std::shared_ptr<custom_msgs::msg::NiroCAN528_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__NiroCAN528
    std::shared_ptr<custom_msgs::msg::NiroCAN528_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NiroCAN528_ & other) const
  {
    if (this->pa_enable != other.pa_enable) {
      return false;
    }
    if (this->pa_strangcmd != other.pa_strangcmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const NiroCAN528_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NiroCAN528_

// alias to use template instance with default allocator
using NiroCAN528 =
  custom_msgs::msg::NiroCAN528_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN528__STRUCT_HPP_
