// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SaveCAN1812.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1812__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1812__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SaveCAN1812 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SaveCAN1812 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveCAN1812_
{
  using Type = SaveCAN1812_<ContainerAllocator>;

  explicit SaveCAN1812_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rad_objstate = 0;
      this->rad_objlatpos = 0.0f;
      this->rad_objdist = 0;
      this->rad_objrelspd = 0.0f;
    }
  }

  explicit SaveCAN1812_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rad_objstate = 0;
      this->rad_objlatpos = 0.0f;
      this->rad_objdist = 0;
      this->rad_objrelspd = 0.0f;
    }
  }

  // field types and members
  using _rad_objstate_type =
    uint8_t;
  _rad_objstate_type rad_objstate;
  using _rad_objlatpos_type =
    float;
  _rad_objlatpos_type rad_objlatpos;
  using _rad_objdist_type =
    uint8_t;
  _rad_objdist_type rad_objdist;
  using _rad_objrelspd_type =
    float;
  _rad_objrelspd_type rad_objrelspd;

  // setters for named parameter idiom
  Type & set__rad_objstate(
    const uint8_t & _arg)
  {
    this->rad_objstate = _arg;
    return *this;
  }
  Type & set__rad_objlatpos(
    const float & _arg)
  {
    this->rad_objlatpos = _arg;
    return *this;
  }
  Type & set__rad_objdist(
    const uint8_t & _arg)
  {
    this->rad_objdist = _arg;
    return *this;
  }
  Type & set__rad_objrelspd(
    const float & _arg)
  {
    this->rad_objrelspd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SaveCAN1812_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SaveCAN1812_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN1812_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN1812_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN1812_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN1812_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN1812_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN1812_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN1812_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN1812_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SaveCAN1812
    std::shared_ptr<custom_msgs::msg::SaveCAN1812_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SaveCAN1812
    std::shared_ptr<custom_msgs::msg::SaveCAN1812_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveCAN1812_ & other) const
  {
    if (this->rad_objstate != other.rad_objstate) {
      return false;
    }
    if (this->rad_objlatpos != other.rad_objlatpos) {
      return false;
    }
    if (this->rad_objdist != other.rad_objdist) {
      return false;
    }
    if (this->rad_objrelspd != other.rad_objrelspd) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveCAN1812_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveCAN1812_

// alias to use template instance with default allocator
using SaveCAN1812 =
  custom_msgs::msg::SaveCAN1812_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1812__STRUCT_HPP_
