// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN374.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN374__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN374__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN374 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN374 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN374_
{
  using Type = SbgCAN374_<ContainerAllocator>;

  explicit SbgCAN374_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0;
      this->undulation = 0.0;
      this->num_sv = 0;
      this->diff_corr_age = 0;
    }
  }

  explicit SbgCAN374_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0;
      this->undulation = 0.0;
      this->num_sv = 0;
      this->diff_corr_age = 0;
    }
  }

  // field types and members
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _undulation_type =
    double;
  _undulation_type undulation;
  using _num_sv_type =
    uint8_t;
  _num_sv_type num_sv;
  using _diff_corr_age_type =
    uint8_t;
  _diff_corr_age_type diff_corr_age;

  // setters for named parameter idiom
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__undulation(
    const double & _arg)
  {
    this->undulation = _arg;
    return *this;
  }
  Type & set__num_sv(
    const uint8_t & _arg)
  {
    this->num_sv = _arg;
    return *this;
  }
  Type & set__diff_corr_age(
    const uint8_t & _arg)
  {
    this->diff_corr_age = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN374_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN374_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN374_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN374_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN374_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN374_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN374_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN374_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN374_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN374_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN374
    std::shared_ptr<custom_msgs::msg::SbgCAN374_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN374
    std::shared_ptr<custom_msgs::msg::SbgCAN374_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN374_ & other) const
  {
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->undulation != other.undulation) {
      return false;
    }
    if (this->num_sv != other.num_sv) {
      return false;
    }
    if (this->diff_corr_age != other.diff_corr_age) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN374_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN374_

// alias to use template instance with default allocator
using SbgCAN374 =
  custom_msgs::msg::SbgCAN374_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN374__STRUCT_HPP_
