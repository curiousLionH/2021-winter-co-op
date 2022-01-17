// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN371.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN371__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN371__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN371 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN371 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN371_
{
  using Type = SbgCAN371_<ContainerAllocator>;

  explicit SbgCAN371_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->course = 0.0;
      this->course_acc = 0.0;
    }
  }

  explicit SbgCAN371_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->course = 0.0;
      this->course_acc = 0.0;
    }
  }

  // field types and members
  using _course_type =
    double;
  _course_type course;
  using _course_acc_type =
    double;
  _course_acc_type course_acc;

  // setters for named parameter idiom
  Type & set__course(
    const double & _arg)
  {
    this->course = _arg;
    return *this;
  }
  Type & set__course_acc(
    const double & _arg)
  {
    this->course_acc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN371_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN371_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN371_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN371_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN371_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN371_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN371_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN371_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN371_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN371_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN371
    std::shared_ptr<custom_msgs::msg::SbgCAN371_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN371
    std::shared_ptr<custom_msgs::msg::SbgCAN371_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN371_ & other) const
  {
    if (this->course != other.course) {
      return false;
    }
    if (this->course_acc != other.course_acc) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN371_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN371_

// alias to use template instance with default allocator
using SbgCAN371 =
  custom_msgs::msg::SbgCAN371_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN371__STRUCT_HPP_
