// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN513.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN513__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN513__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN513 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN513 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN513_
{
  using Type = SbgCAN513_<ContainerAllocator>;

  explicit SbgCAN513_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_offset_0 = 0;
      this->time_offset_1 = 0;
      this->time_offset_2 = 0;
      this->time_offset_3 = 0;
    }
  }

  explicit SbgCAN513_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_offset_0 = 0;
      this->time_offset_1 = 0;
      this->time_offset_2 = 0;
      this->time_offset_3 = 0;
    }
  }

  // field types and members
  using _time_offset_0_type =
    uint16_t;
  _time_offset_0_type time_offset_0;
  using _time_offset_1_type =
    uint16_t;
  _time_offset_1_type time_offset_1;
  using _time_offset_2_type =
    uint16_t;
  _time_offset_2_type time_offset_2;
  using _time_offset_3_type =
    uint16_t;
  _time_offset_3_type time_offset_3;

  // setters for named parameter idiom
  Type & set__time_offset_0(
    const uint16_t & _arg)
  {
    this->time_offset_0 = _arg;
    return *this;
  }
  Type & set__time_offset_1(
    const uint16_t & _arg)
  {
    this->time_offset_1 = _arg;
    return *this;
  }
  Type & set__time_offset_2(
    const uint16_t & _arg)
  {
    this->time_offset_2 = _arg;
    return *this;
  }
  Type & set__time_offset_3(
    const uint16_t & _arg)
  {
    this->time_offset_3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN513_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN513_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN513_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN513_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN513_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN513_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN513_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN513_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN513_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN513_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN513
    std::shared_ptr<custom_msgs::msg::SbgCAN513_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN513
    std::shared_ptr<custom_msgs::msg::SbgCAN513_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN513_ & other) const
  {
    if (this->time_offset_0 != other.time_offset_0) {
      return false;
    }
    if (this->time_offset_1 != other.time_offset_1) {
      return false;
    }
    if (this->time_offset_2 != other.time_offset_2) {
      return false;
    }
    if (this->time_offset_3 != other.time_offset_3) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN513_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN513_

// alias to use template instance with default allocator
using SbgCAN513 =
  custom_msgs::msg::SbgCAN513_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN513__STRUCT_HPP_
