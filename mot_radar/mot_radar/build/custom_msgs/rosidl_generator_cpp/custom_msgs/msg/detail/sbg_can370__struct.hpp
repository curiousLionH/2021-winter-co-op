// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN370.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN370__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN370__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN370 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN370 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN370_
{
  using Type = SbgCAN370_<ContainerAllocator>;

  explicit SbgCAN370_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_acc_n = 0.0;
      this->vel_acc_e = 0.0;
      this->vel_acc_d = 0.0;
    }
  }

  explicit SbgCAN370_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vel_acc_n = 0.0;
      this->vel_acc_e = 0.0;
      this->vel_acc_d = 0.0;
    }
  }

  // field types and members
  using _vel_acc_n_type =
    double;
  _vel_acc_n_type vel_acc_n;
  using _vel_acc_e_type =
    double;
  _vel_acc_e_type vel_acc_e;
  using _vel_acc_d_type =
    double;
  _vel_acc_d_type vel_acc_d;

  // setters for named parameter idiom
  Type & set__vel_acc_n(
    const double & _arg)
  {
    this->vel_acc_n = _arg;
    return *this;
  }
  Type & set__vel_acc_e(
    const double & _arg)
  {
    this->vel_acc_e = _arg;
    return *this;
  }
  Type & set__vel_acc_d(
    const double & _arg)
  {
    this->vel_acc_d = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN370_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN370_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN370_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN370_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN370_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN370_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN370_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN370_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN370_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN370_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN370
    std::shared_ptr<custom_msgs::msg::SbgCAN370_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN370
    std::shared_ptr<custom_msgs::msg::SbgCAN370_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN370_ & other) const
  {
    if (this->vel_acc_n != other.vel_acc_n) {
      return false;
    }
    if (this->vel_acc_e != other.vel_acc_e) {
      return false;
    }
    if (this->vel_acc_d != other.vel_acc_d) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN370_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN370_

// alias to use template instance with default allocator
using SbgCAN370 =
  custom_msgs::msg::SbgCAN370_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN370__STRUCT_HPP_
