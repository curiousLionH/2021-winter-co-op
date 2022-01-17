// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN352.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN352__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN352__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN352 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN352 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN352_
{
  using Type = SbgCAN352_<ContainerAllocator>;

  explicit SbgCAN352_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp4 = 0ul;
      this->odo_status = 0;
    }
  }

  explicit SbgCAN352_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp4 = 0ul;
      this->odo_status = 0;
    }
  }

  // field types and members
  using _time_stamp4_type =
    uint32_t;
  _time_stamp4_type time_stamp4;
  using _odo_status_type =
    uint16_t;
  _odo_status_type odo_status;

  // setters for named parameter idiom
  Type & set__time_stamp4(
    const uint32_t & _arg)
  {
    this->time_stamp4 = _arg;
    return *this;
  }
  Type & set__odo_status(
    const uint16_t & _arg)
  {
    this->odo_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN352_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN352_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN352_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN352_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN352_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN352_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN352_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN352_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN352_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN352_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN352
    std::shared_ptr<custom_msgs::msg::SbgCAN352_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN352
    std::shared_ptr<custom_msgs::msg::SbgCAN352_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN352_ & other) const
  {
    if (this->time_stamp4 != other.time_stamp4) {
      return false;
    }
    if (this->odo_status != other.odo_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN352_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN352_

// alias to use template instance with default allocator
using SbgCAN352 =
  custom_msgs::msg::SbgCAN352_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN352__STRUCT_HPP_
