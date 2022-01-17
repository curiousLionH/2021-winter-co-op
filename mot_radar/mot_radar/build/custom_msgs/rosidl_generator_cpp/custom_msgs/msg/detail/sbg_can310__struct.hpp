// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN310.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN310__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN310__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN310 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN310 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN310_
{
  using Type = SbgCAN310_<ContainerAllocator>;

  explicit SbgCAN310_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude_acc = 0.0;
      this->longitude_acc = 0.0;
      this->altitude_acc = 0.0;
    }
  }

  explicit SbgCAN310_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude_acc = 0.0;
      this->longitude_acc = 0.0;
      this->altitude_acc = 0.0;
    }
  }

  // field types and members
  using _latitude_acc_type =
    double;
  _latitude_acc_type latitude_acc;
  using _longitude_acc_type =
    double;
  _longitude_acc_type longitude_acc;
  using _altitude_acc_type =
    double;
  _altitude_acc_type altitude_acc;

  // setters for named parameter idiom
  Type & set__latitude_acc(
    const double & _arg)
  {
    this->latitude_acc = _arg;
    return *this;
  }
  Type & set__longitude_acc(
    const double & _arg)
  {
    this->longitude_acc = _arg;
    return *this;
  }
  Type & set__altitude_acc(
    const double & _arg)
  {
    this->altitude_acc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN310_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN310_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN310_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN310_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN310_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN310_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN310_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN310_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN310_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN310_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN310
    std::shared_ptr<custom_msgs::msg::SbgCAN310_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN310
    std::shared_ptr<custom_msgs::msg::SbgCAN310_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN310_ & other) const
  {
    if (this->latitude_acc != other.latitude_acc) {
      return false;
    }
    if (this->longitude_acc != other.longitude_acc) {
      return false;
    }
    if (this->altitude_acc != other.altitude_acc) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN310_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN310_

// alias to use template instance with default allocator
using SbgCAN310 =
  custom_msgs::msg::SbgCAN310_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN310__STRUCT_HPP_
