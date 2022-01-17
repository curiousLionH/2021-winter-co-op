// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN312.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN312__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN312__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN312 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN312 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN312_
{
  using Type = SbgCAN312_<ContainerAllocator>;

  explicit SbgCAN312_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity_acc_n = 0.0;
      this->velocity_acc_e = 0.0;
      this->velocity_acc_d = 0.0;
    }
  }

  explicit SbgCAN312_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->velocity_acc_n = 0.0;
      this->velocity_acc_e = 0.0;
      this->velocity_acc_d = 0.0;
    }
  }

  // field types and members
  using _velocity_acc_n_type =
    double;
  _velocity_acc_n_type velocity_acc_n;
  using _velocity_acc_e_type =
    double;
  _velocity_acc_e_type velocity_acc_e;
  using _velocity_acc_d_type =
    double;
  _velocity_acc_d_type velocity_acc_d;

  // setters for named parameter idiom
  Type & set__velocity_acc_n(
    const double & _arg)
  {
    this->velocity_acc_n = _arg;
    return *this;
  }
  Type & set__velocity_acc_e(
    const double & _arg)
  {
    this->velocity_acc_e = _arg;
    return *this;
  }
  Type & set__velocity_acc_d(
    const double & _arg)
  {
    this->velocity_acc_d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN312_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN312_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN312_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN312_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN312_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN312_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN312_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN312_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN312_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN312_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN312
    std::shared_ptr<custom_msgs::msg::SbgCAN312_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN312
    std::shared_ptr<custom_msgs::msg::SbgCAN312_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN312_ & other) const
  {
    if (this->velocity_acc_n != other.velocity_acc_n) {
      return false;
    }
    if (this->velocity_acc_e != other.velocity_acc_e) {
      return false;
    }
    if (this->velocity_acc_d != other.velocity_acc_d) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN312_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN312_

// alias to use template instance with default allocator
using SbgCAN312 =
  custom_msgs::msg::SbgCAN312_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN312__STRUCT_HPP_
