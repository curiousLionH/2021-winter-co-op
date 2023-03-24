// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN258.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN258__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN258__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN258 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN258 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN258_
{
  using Type = SbgCAN258_<ContainerAllocator>;

  explicit SbgCAN258_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solution_status = 0ul;
      this->heave_status = 0;
    }
  }

  explicit SbgCAN258_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solution_status = 0ul;
      this->heave_status = 0;
    }
  }

  // field types and members
  using _solution_status_type =
    uint32_t;
  _solution_status_type solution_status;
  using _heave_status_type =
    uint16_t;
  _heave_status_type heave_status;

  // setters for named parameter idiom
  Type & set__solution_status(
    const uint32_t & _arg)
  {
    this->solution_status = _arg;
    return *this;
  }
  Type & set__heave_status(
    const uint16_t & _arg)
  {
    this->heave_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN258_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN258_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN258_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN258_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN258_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN258_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN258_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN258_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN258_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN258_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN258
    std::shared_ptr<custom_msgs::msg::SbgCAN258_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN258
    std::shared_ptr<custom_msgs::msg::SbgCAN258_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN258_ & other) const
  {
    if (this->solution_status != other.solution_status) {
      return false;
    }
    if (this->heave_status != other.heave_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN258_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN258_

// alias to use template instance with default allocator
using SbgCAN258 =
  custom_msgs::msg::SbgCAN258_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN258__STRUCT_HPP_