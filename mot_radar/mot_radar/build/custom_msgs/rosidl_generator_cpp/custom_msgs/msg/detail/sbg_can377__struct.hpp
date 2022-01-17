// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN377.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN377__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN377__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN377 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN377 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN377_
{
  using Type = SbgCAN377_<ContainerAllocator>;

  explicit SbgCAN377_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->true_heading = 0.0;
      this->true_heading_acc = 0.0;
      this->pitch = 0.0;
      this->pitch_acc = 0.0;
    }
  }

  explicit SbgCAN377_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->true_heading = 0.0;
      this->true_heading_acc = 0.0;
      this->pitch = 0.0;
      this->pitch_acc = 0.0;
    }
  }

  // field types and members
  using _true_heading_type =
    double;
  _true_heading_type true_heading;
  using _true_heading_acc_type =
    double;
  _true_heading_acc_type true_heading_acc;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _pitch_acc_type =
    double;
  _pitch_acc_type pitch_acc;

  // setters for named parameter idiom
  Type & set__true_heading(
    const double & _arg)
  {
    this->true_heading = _arg;
    return *this;
  }
  Type & set__true_heading_acc(
    const double & _arg)
  {
    this->true_heading_acc = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__pitch_acc(
    const double & _arg)
  {
    this->pitch_acc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN377_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN377_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN377_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN377_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN377_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN377_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN377_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN377_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN377_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN377_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN377
    std::shared_ptr<custom_msgs::msg::SbgCAN377_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN377
    std::shared_ptr<custom_msgs::msg::SbgCAN377_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN377_ & other) const
  {
    if (this->true_heading != other.true_heading) {
      return false;
    }
    if (this->true_heading_acc != other.true_heading_acc) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->pitch_acc != other.pitch_acc) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN377_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN377_

// alias to use template instance with default allocator
using SbgCAN377 =
  custom_msgs::msg::SbgCAN377_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN377__STRUCT_HPP_
