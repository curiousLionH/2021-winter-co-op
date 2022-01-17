// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SaveCAN343.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN343__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN343__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SaveCAN343 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SaveCAN343 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveCAN343_
{
  using Type = SaveCAN343_<ContainerAllocator>;

  explicit SaveCAN343_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eps_cmd = 0.0f;
      this->acc_cmd = 0.0f;
    }
  }

  explicit SaveCAN343_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eps_cmd = 0.0f;
      this->acc_cmd = 0.0f;
    }
  }

  // field types and members
  using _eps_cmd_type =
    float;
  _eps_cmd_type eps_cmd;
  using _acc_cmd_type =
    float;
  _acc_cmd_type acc_cmd;

  // setters for named parameter idiom
  Type & set__eps_cmd(
    const float & _arg)
  {
    this->eps_cmd = _arg;
    return *this;
  }
  Type & set__acc_cmd(
    const float & _arg)
  {
    this->acc_cmd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SaveCAN343_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SaveCAN343_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN343_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN343_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN343_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN343_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN343_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN343_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN343_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN343_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SaveCAN343
    std::shared_ptr<custom_msgs::msg::SaveCAN343_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SaveCAN343
    std::shared_ptr<custom_msgs::msg::SaveCAN343_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveCAN343_ & other) const
  {
    if (this->eps_cmd != other.eps_cmd) {
      return false;
    }
    if (this->acc_cmd != other.acc_cmd) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveCAN343_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveCAN343_

// alias to use template instance with default allocator
using SaveCAN343 =
  custom_msgs::msg::SaveCAN343_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN343__STRUCT_HPP_
