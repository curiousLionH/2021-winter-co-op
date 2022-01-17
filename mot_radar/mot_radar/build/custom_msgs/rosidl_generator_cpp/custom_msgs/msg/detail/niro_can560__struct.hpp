// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/NiroCAN560.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN560__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN560__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__NiroCAN560 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__NiroCAN560 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NiroCAN560_
{
  using Type = NiroCAN560_<ContainerAllocator>;

  explicit NiroCAN560_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brk22_i = 0;
      this->brk22_mode_b = 0;
      this->brk22_1_15 = 0;
      this->brk22_areq1 = 0.0f;
      this->brk22_1_35 = 0;
      this->brk22_areq2 = 0.0f;
      this->alivecounter22 = 0;
      this->chksum22 = 0;
    }
  }

  explicit NiroCAN560_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brk22_i = 0;
      this->brk22_mode_b = 0;
      this->brk22_1_15 = 0;
      this->brk22_areq1 = 0.0f;
      this->brk22_1_35 = 0;
      this->brk22_areq2 = 0.0f;
      this->alivecounter22 = 0;
      this->chksum22 = 0;
    }
  }

  // field types and members
  using _brk22_i_type =
    uint8_t;
  _brk22_i_type brk22_i;
  using _brk22_mode_b_type =
    uint8_t;
  _brk22_mode_b_type brk22_mode_b;
  using _brk22_1_15_type =
    uint8_t;
  _brk22_1_15_type brk22_1_15;
  using _brk22_areq1_type =
    float;
  _brk22_areq1_type brk22_areq1;
  using _brk22_1_35_type =
    uint8_t;
  _brk22_1_35_type brk22_1_35;
  using _brk22_areq2_type =
    float;
  _brk22_areq2_type brk22_areq2;
  using _alivecounter22_type =
    uint8_t;
  _alivecounter22_type alivecounter22;
  using _chksum22_type =
    uint8_t;
  _chksum22_type chksum22;

  // setters for named parameter idiom
  Type & set__brk22_i(
    const uint8_t & _arg)
  {
    this->brk22_i = _arg;
    return *this;
  }
  Type & set__brk22_mode_b(
    const uint8_t & _arg)
  {
    this->brk22_mode_b = _arg;
    return *this;
  }
  Type & set__brk22_1_15(
    const uint8_t & _arg)
  {
    this->brk22_1_15 = _arg;
    return *this;
  }
  Type & set__brk22_areq1(
    const float & _arg)
  {
    this->brk22_areq1 = _arg;
    return *this;
  }
  Type & set__brk22_1_35(
    const uint8_t & _arg)
  {
    this->brk22_1_35 = _arg;
    return *this;
  }
  Type & set__brk22_areq2(
    const float & _arg)
  {
    this->brk22_areq2 = _arg;
    return *this;
  }
  Type & set__alivecounter22(
    const uint8_t & _arg)
  {
    this->alivecounter22 = _arg;
    return *this;
  }
  Type & set__chksum22(
    const uint8_t & _arg)
  {
    this->chksum22 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::NiroCAN560_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::NiroCAN560_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN560_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN560_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN560_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN560_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN560_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN560_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN560_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN560_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__NiroCAN560
    std::shared_ptr<custom_msgs::msg::NiroCAN560_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__NiroCAN560
    std::shared_ptr<custom_msgs::msg::NiroCAN560_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NiroCAN560_ & other) const
  {
    if (this->brk22_i != other.brk22_i) {
      return false;
    }
    if (this->brk22_mode_b != other.brk22_mode_b) {
      return false;
    }
    if (this->brk22_1_15 != other.brk22_1_15) {
      return false;
    }
    if (this->brk22_areq1 != other.brk22_areq1) {
      return false;
    }
    if (this->brk22_1_35 != other.brk22_1_35) {
      return false;
    }
    if (this->brk22_areq2 != other.brk22_areq2) {
      return false;
    }
    if (this->alivecounter22 != other.alivecounter22) {
      return false;
    }
    if (this->chksum22 != other.chksum22) {
      return false;
    }
    return true;
  }
  bool operator!=(const NiroCAN560_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NiroCAN560_

// alias to use template instance with default allocator
using NiroCAN560 =
  custom_msgs::msg::NiroCAN560_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN560__STRUCT_HPP_
