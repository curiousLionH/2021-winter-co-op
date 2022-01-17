// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN256.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN256__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN256__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN256 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN256 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN256_
{
  using Type = SbgCAN256_<ContainerAllocator>;

  explicit SbgCAN256_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->general_status = 0;
      this->clock_status = 0;
    }
  }

  explicit SbgCAN256_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->general_status = 0;
      this->clock_status = 0;
    }
  }

  // field types and members
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _general_status_type =
    uint16_t;
  _general_status_type general_status;
  using _clock_status_type =
    uint16_t;
  _clock_status_type clock_status;

  // setters for named parameter idiom
  Type & set__time_stamp(
    const uint32_t & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__general_status(
    const uint16_t & _arg)
  {
    this->general_status = _arg;
    return *this;
  }
  Type & set__clock_status(
    const uint16_t & _arg)
  {
    this->clock_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN256_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN256_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN256_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN256_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN256_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN256_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN256_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN256_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN256_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN256_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN256
    std::shared_ptr<custom_msgs::msg::SbgCAN256_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN256
    std::shared_ptr<custom_msgs::msg::SbgCAN256_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN256_ & other) const
  {
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->general_status != other.general_status) {
      return false;
    }
    if (this->clock_status != other.clock_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN256_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN256_

// alias to use template instance with default allocator
using SbgCAN256 =
  custom_msgs::msg::SbgCAN256_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN256__STRUCT_HPP_
