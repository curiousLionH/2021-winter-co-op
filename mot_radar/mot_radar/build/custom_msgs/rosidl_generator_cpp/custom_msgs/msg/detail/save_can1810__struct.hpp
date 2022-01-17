// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SaveCAN1810.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1810__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1810__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SaveCAN1810 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SaveCAN1810 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveCAN1810_
{
  using Type = SaveCAN1810_<ContainerAllocator>;

  explicit SaveCAN1810_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel_spd_fr = 0.0f;
      this->wheel_spd_fl = 0.0f;
      this->wheel_spd_rr = 0.0f;
      this->wheel_spd_rl = 0.0f;
    }
  }

  explicit SaveCAN1810_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel_spd_fr = 0.0f;
      this->wheel_spd_fl = 0.0f;
      this->wheel_spd_rr = 0.0f;
      this->wheel_spd_rl = 0.0f;
    }
  }

  // field types and members
  using _wheel_spd_fr_type =
    float;
  _wheel_spd_fr_type wheel_spd_fr;
  using _wheel_spd_fl_type =
    float;
  _wheel_spd_fl_type wheel_spd_fl;
  using _wheel_spd_rr_type =
    float;
  _wheel_spd_rr_type wheel_spd_rr;
  using _wheel_spd_rl_type =
    float;
  _wheel_spd_rl_type wheel_spd_rl;

  // setters for named parameter idiom
  Type & set__wheel_spd_fr(
    const float & _arg)
  {
    this->wheel_spd_fr = _arg;
    return *this;
  }
  Type & set__wheel_spd_fl(
    const float & _arg)
  {
    this->wheel_spd_fl = _arg;
    return *this;
  }
  Type & set__wheel_spd_rr(
    const float & _arg)
  {
    this->wheel_spd_rr = _arg;
    return *this;
  }
  Type & set__wheel_spd_rl(
    const float & _arg)
  {
    this->wheel_spd_rl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SaveCAN1810_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SaveCAN1810_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN1810_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN1810_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN1810_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN1810_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN1810_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN1810_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN1810_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN1810_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SaveCAN1810
    std::shared_ptr<custom_msgs::msg::SaveCAN1810_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SaveCAN1810
    std::shared_ptr<custom_msgs::msg::SaveCAN1810_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveCAN1810_ & other) const
  {
    if (this->wheel_spd_fr != other.wheel_spd_fr) {
      return false;
    }
    if (this->wheel_spd_fl != other.wheel_spd_fl) {
      return false;
    }
    if (this->wheel_spd_rr != other.wheel_spd_rr) {
      return false;
    }
    if (this->wheel_spd_rl != other.wheel_spd_rl) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveCAN1810_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveCAN1810_

// alias to use template instance with default allocator
using SaveCAN1810 =
  custom_msgs::msg::SaveCAN1810_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1810__STRUCT_HPP_
