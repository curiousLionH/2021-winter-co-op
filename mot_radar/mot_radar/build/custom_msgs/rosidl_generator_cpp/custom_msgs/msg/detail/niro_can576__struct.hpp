// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/NiroCAN576.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN576__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN576__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__NiroCAN576 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__NiroCAN576 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NiroCAN576_
{
  using Type = NiroCAN576_<ContainerAllocator>;

  explicit NiroCAN576_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brk24_6_0 = 0;
      this->brk24_6_6 = 0;
      this->brk24_7_12 = 0;
      this->brk24_7_19 = 0;
      this->brk24_mode_c = 0;
      this->brk24_3_39 = 0;
      this->alivecounter24 = 0;
      this->chksum24 = 0;
      this->brk24_8_56 = 0;
    }
  }

  explicit NiroCAN576_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brk24_6_0 = 0;
      this->brk24_6_6 = 0;
      this->brk24_7_12 = 0;
      this->brk24_7_19 = 0;
      this->brk24_mode_c = 0;
      this->brk24_3_39 = 0;
      this->alivecounter24 = 0;
      this->chksum24 = 0;
      this->brk24_8_56 = 0;
    }
  }

  // field types and members
  using _brk24_6_0_type =
    uint8_t;
  _brk24_6_0_type brk24_6_0;
  using _brk24_6_6_type =
    uint8_t;
  _brk24_6_6_type brk24_6_6;
  using _brk24_7_12_type =
    uint8_t;
  _brk24_7_12_type brk24_7_12;
  using _brk24_7_19_type =
    uint8_t;
  _brk24_7_19_type brk24_7_19;
  using _brk24_mode_c_type =
    uint8_t;
  _brk24_mode_c_type brk24_mode_c;
  using _brk24_3_39_type =
    uint8_t;
  _brk24_3_39_type brk24_3_39;
  using _alivecounter24_type =
    uint8_t;
  _alivecounter24_type alivecounter24;
  using _chksum24_type =
    uint8_t;
  _chksum24_type chksum24;
  using _brk24_8_56_type =
    uint8_t;
  _brk24_8_56_type brk24_8_56;

  // setters for named parameter idiom
  Type & set__brk24_6_0(
    const uint8_t & _arg)
  {
    this->brk24_6_0 = _arg;
    return *this;
  }
  Type & set__brk24_6_6(
    const uint8_t & _arg)
  {
    this->brk24_6_6 = _arg;
    return *this;
  }
  Type & set__brk24_7_12(
    const uint8_t & _arg)
  {
    this->brk24_7_12 = _arg;
    return *this;
  }
  Type & set__brk24_7_19(
    const uint8_t & _arg)
  {
    this->brk24_7_19 = _arg;
    return *this;
  }
  Type & set__brk24_mode_c(
    const uint8_t & _arg)
  {
    this->brk24_mode_c = _arg;
    return *this;
  }
  Type & set__brk24_3_39(
    const uint8_t & _arg)
  {
    this->brk24_3_39 = _arg;
    return *this;
  }
  Type & set__alivecounter24(
    const uint8_t & _arg)
  {
    this->alivecounter24 = _arg;
    return *this;
  }
  Type & set__chksum24(
    const uint8_t & _arg)
  {
    this->chksum24 = _arg;
    return *this;
  }
  Type & set__brk24_8_56(
    const uint8_t & _arg)
  {
    this->brk24_8_56 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::NiroCAN576_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::NiroCAN576_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN576_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN576_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN576_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN576_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN576_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN576_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN576_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN576_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__NiroCAN576
    std::shared_ptr<custom_msgs::msg::NiroCAN576_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__NiroCAN576
    std::shared_ptr<custom_msgs::msg::NiroCAN576_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NiroCAN576_ & other) const
  {
    if (this->brk24_6_0 != other.brk24_6_0) {
      return false;
    }
    if (this->brk24_6_6 != other.brk24_6_6) {
      return false;
    }
    if (this->brk24_7_12 != other.brk24_7_12) {
      return false;
    }
    if (this->brk24_7_19 != other.brk24_7_19) {
      return false;
    }
    if (this->brk24_mode_c != other.brk24_mode_c) {
      return false;
    }
    if (this->brk24_3_39 != other.brk24_3_39) {
      return false;
    }
    if (this->alivecounter24 != other.alivecounter24) {
      return false;
    }
    if (this->chksum24 != other.chksum24) {
      return false;
    }
    if (this->brk24_8_56 != other.brk24_8_56) {
      return false;
    }
    return true;
  }
  bool operator!=(const NiroCAN576_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NiroCAN576_

// alias to use template instance with default allocator
using NiroCAN576 =
  custom_msgs::msg::NiroCAN576_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN576__STRUCT_HPP_
