// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SaveCAN517.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN517__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN517__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SaveCAN517 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SaveCAN517 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveCAN517_
{
  using Type = SaveCAN517_<ContainerAllocator>;

  explicit SaveCAN517_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_keeping_alive_counter = 0;
    }
  }

  explicit SaveCAN517_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_keeping_alive_counter = 0;
    }
  }

  // field types and members
  using _lane_keeping_alive_counter_type =
    uint8_t;
  _lane_keeping_alive_counter_type lane_keeping_alive_counter;

  // setters for named parameter idiom
  Type & set__lane_keeping_alive_counter(
    const uint8_t & _arg)
  {
    this->lane_keeping_alive_counter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SaveCAN517_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SaveCAN517_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN517_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN517_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN517_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN517_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN517_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN517_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN517_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN517_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SaveCAN517
    std::shared_ptr<custom_msgs::msg::SaveCAN517_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SaveCAN517
    std::shared_ptr<custom_msgs::msg::SaveCAN517_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveCAN517_ & other) const
  {
    if (this->lane_keeping_alive_counter != other.lane_keeping_alive_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveCAN517_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveCAN517_

// alias to use template instance with default allocator
using SaveCAN517 =
  custom_msgs::msg::SaveCAN517_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN517__STRUCT_HPP_
