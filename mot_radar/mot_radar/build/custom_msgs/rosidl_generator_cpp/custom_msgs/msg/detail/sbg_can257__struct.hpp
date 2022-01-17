// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN257.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN257__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN257__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN257 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN257 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN257_
{
  using Type = SbgCAN257_<ContainerAllocator>;

  explicit SbgCAN257_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->com_status = 0ul;
      this->aiding_status = 0ul;
    }
  }

  explicit SbgCAN257_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->com_status = 0ul;
      this->aiding_status = 0ul;
    }
  }

  // field types and members
  using _com_status_type =
    uint32_t;
  _com_status_type com_status;
  using _aiding_status_type =
    uint32_t;
  _aiding_status_type aiding_status;

  // setters for named parameter idiom
  Type & set__com_status(
    const uint32_t & _arg)
  {
    this->com_status = _arg;
    return *this;
  }
  Type & set__aiding_status(
    const uint32_t & _arg)
  {
    this->aiding_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN257_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN257_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN257_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN257_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN257_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN257_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN257_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN257_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN257_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN257_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN257
    std::shared_ptr<custom_msgs::msg::SbgCAN257_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN257
    std::shared_ptr<custom_msgs::msg::SbgCAN257_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN257_ & other) const
  {
    if (this->com_status != other.com_status) {
      return false;
    }
    if (this->aiding_status != other.aiding_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN257_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN257_

// alias to use template instance with default allocator
using SbgCAN257 =
  custom_msgs::msg::SbgCAN257_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN257__STRUCT_HPP_
