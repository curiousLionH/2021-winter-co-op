// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/NiroCAN544.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN544__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN544__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__NiroCAN544 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__NiroCAN544 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NiroCAN544_
{
  using Type = NiroCAN544_<ContainerAllocator>;

  explicit NiroCAN544_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brk21_mode_a = 0;
      this->brk21_3_1 = 0;
      this->alivecounter21 = 0;
      this->brk21_8_8 = 0;
      this->brk21_1_16 = 0;
      this->brk21_2_17 = 0;
      this->brk21_3_19 = 0;
      this->brk21_2_22 = 0;
      this->brk21_9_24 = 0;
      this->brk21_11_33 = 0;
      this->brk21_12_44 = 0;
      this->brk21_8_56 = 0;
    }
  }

  explicit NiroCAN544_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brk21_mode_a = 0;
      this->brk21_3_1 = 0;
      this->alivecounter21 = 0;
      this->brk21_8_8 = 0;
      this->brk21_1_16 = 0;
      this->brk21_2_17 = 0;
      this->brk21_3_19 = 0;
      this->brk21_2_22 = 0;
      this->brk21_9_24 = 0;
      this->brk21_11_33 = 0;
      this->brk21_12_44 = 0;
      this->brk21_8_56 = 0;
    }
  }

  // field types and members
  using _brk21_mode_a_type =
    uint8_t;
  _brk21_mode_a_type brk21_mode_a;
  using _brk21_3_1_type =
    uint8_t;
  _brk21_3_1_type brk21_3_1;
  using _alivecounter21_type =
    uint8_t;
  _alivecounter21_type alivecounter21;
  using _brk21_8_8_type =
    uint8_t;
  _brk21_8_8_type brk21_8_8;
  using _brk21_1_16_type =
    uint8_t;
  _brk21_1_16_type brk21_1_16;
  using _brk21_2_17_type =
    uint8_t;
  _brk21_2_17_type brk21_2_17;
  using _brk21_3_19_type =
    uint8_t;
  _brk21_3_19_type brk21_3_19;
  using _brk21_2_22_type =
    uint8_t;
  _brk21_2_22_type brk21_2_22;
  using _brk21_9_24_type =
    uint8_t;
  _brk21_9_24_type brk21_9_24;
  using _brk21_11_33_type =
    uint8_t;
  _brk21_11_33_type brk21_11_33;
  using _brk21_12_44_type =
    uint8_t;
  _brk21_12_44_type brk21_12_44;
  using _brk21_8_56_type =
    uint8_t;
  _brk21_8_56_type brk21_8_56;

  // setters for named parameter idiom
  Type & set__brk21_mode_a(
    const uint8_t & _arg)
  {
    this->brk21_mode_a = _arg;
    return *this;
  }
  Type & set__brk21_3_1(
    const uint8_t & _arg)
  {
    this->brk21_3_1 = _arg;
    return *this;
  }
  Type & set__alivecounter21(
    const uint8_t & _arg)
  {
    this->alivecounter21 = _arg;
    return *this;
  }
  Type & set__brk21_8_8(
    const uint8_t & _arg)
  {
    this->brk21_8_8 = _arg;
    return *this;
  }
  Type & set__brk21_1_16(
    const uint8_t & _arg)
  {
    this->brk21_1_16 = _arg;
    return *this;
  }
  Type & set__brk21_2_17(
    const uint8_t & _arg)
  {
    this->brk21_2_17 = _arg;
    return *this;
  }
  Type & set__brk21_3_19(
    const uint8_t & _arg)
  {
    this->brk21_3_19 = _arg;
    return *this;
  }
  Type & set__brk21_2_22(
    const uint8_t & _arg)
  {
    this->brk21_2_22 = _arg;
    return *this;
  }
  Type & set__brk21_9_24(
    const uint8_t & _arg)
  {
    this->brk21_9_24 = _arg;
    return *this;
  }
  Type & set__brk21_11_33(
    const uint8_t & _arg)
  {
    this->brk21_11_33 = _arg;
    return *this;
  }
  Type & set__brk21_12_44(
    const uint8_t & _arg)
  {
    this->brk21_12_44 = _arg;
    return *this;
  }
  Type & set__brk21_8_56(
    const uint8_t & _arg)
  {
    this->brk21_8_56 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::NiroCAN544_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::NiroCAN544_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN544_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN544_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN544_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN544_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN544_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN544_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN544_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN544_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__NiroCAN544
    std::shared_ptr<custom_msgs::msg::NiroCAN544_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__NiroCAN544
    std::shared_ptr<custom_msgs::msg::NiroCAN544_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NiroCAN544_ & other) const
  {
    if (this->brk21_mode_a != other.brk21_mode_a) {
      return false;
    }
    if (this->brk21_3_1 != other.brk21_3_1) {
      return false;
    }
    if (this->alivecounter21 != other.alivecounter21) {
      return false;
    }
    if (this->brk21_8_8 != other.brk21_8_8) {
      return false;
    }
    if (this->brk21_1_16 != other.brk21_1_16) {
      return false;
    }
    if (this->brk21_2_17 != other.brk21_2_17) {
      return false;
    }
    if (this->brk21_3_19 != other.brk21_3_19) {
      return false;
    }
    if (this->brk21_2_22 != other.brk21_2_22) {
      return false;
    }
    if (this->brk21_9_24 != other.brk21_9_24) {
      return false;
    }
    if (this->brk21_11_33 != other.brk21_11_33) {
      return false;
    }
    if (this->brk21_12_44 != other.brk21_12_44) {
      return false;
    }
    if (this->brk21_8_56 != other.brk21_8_56) {
      return false;
    }
    return true;
  }
  bool operator!=(const NiroCAN544_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NiroCAN544_

// alias to use template instance with default allocator
using NiroCAN544 =
  custom_msgs::msg::NiroCAN544_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN544__STRUCT_HPP_
