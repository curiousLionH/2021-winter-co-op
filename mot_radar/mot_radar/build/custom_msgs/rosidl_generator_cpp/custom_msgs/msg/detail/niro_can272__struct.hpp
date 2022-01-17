// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/NiroCAN272.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN272__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN272__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__NiroCAN272 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__NiroCAN272 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NiroCAN272_
{
  using Type = NiroCAN272_<ContainerAllocator>;

  explicit NiroCAN272_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sft_p = 0;
      this->sft_r = 0;
      this->sft_n = 0;
      this->sft_d = 0;
      this->sft_p_reversed = 0;
      this->sft_r_reversed = 0;
      this->sft_n_reversed = 0;
      this->sft_d_reversed = 0;
      this->sft_ctl_en = 0;
    }
  }

  explicit NiroCAN272_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sft_p = 0;
      this->sft_r = 0;
      this->sft_n = 0;
      this->sft_d = 0;
      this->sft_p_reversed = 0;
      this->sft_r_reversed = 0;
      this->sft_n_reversed = 0;
      this->sft_d_reversed = 0;
      this->sft_ctl_en = 0;
    }
  }

  // field types and members
  using _sft_p_type =
    uint8_t;
  _sft_p_type sft_p;
  using _sft_r_type =
    uint8_t;
  _sft_r_type sft_r;
  using _sft_n_type =
    uint8_t;
  _sft_n_type sft_n;
  using _sft_d_type =
    uint8_t;
  _sft_d_type sft_d;
  using _sft_p_reversed_type =
    uint8_t;
  _sft_p_reversed_type sft_p_reversed;
  using _sft_r_reversed_type =
    uint8_t;
  _sft_r_reversed_type sft_r_reversed;
  using _sft_n_reversed_type =
    uint8_t;
  _sft_n_reversed_type sft_n_reversed;
  using _sft_d_reversed_type =
    uint8_t;
  _sft_d_reversed_type sft_d_reversed;
  using _sft_ctl_en_type =
    uint8_t;
  _sft_ctl_en_type sft_ctl_en;

  // setters for named parameter idiom
  Type & set__sft_p(
    const uint8_t & _arg)
  {
    this->sft_p = _arg;
    return *this;
  }
  Type & set__sft_r(
    const uint8_t & _arg)
  {
    this->sft_r = _arg;
    return *this;
  }
  Type & set__sft_n(
    const uint8_t & _arg)
  {
    this->sft_n = _arg;
    return *this;
  }
  Type & set__sft_d(
    const uint8_t & _arg)
  {
    this->sft_d = _arg;
    return *this;
  }
  Type & set__sft_p_reversed(
    const uint8_t & _arg)
  {
    this->sft_p_reversed = _arg;
    return *this;
  }
  Type & set__sft_r_reversed(
    const uint8_t & _arg)
  {
    this->sft_r_reversed = _arg;
    return *this;
  }
  Type & set__sft_n_reversed(
    const uint8_t & _arg)
  {
    this->sft_n_reversed = _arg;
    return *this;
  }
  Type & set__sft_d_reversed(
    const uint8_t & _arg)
  {
    this->sft_d_reversed = _arg;
    return *this;
  }
  Type & set__sft_ctl_en(
    const uint8_t & _arg)
  {
    this->sft_ctl_en = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::NiroCAN272_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::NiroCAN272_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN272_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN272_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN272_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN272_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN272_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN272_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN272_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN272_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__NiroCAN272
    std::shared_ptr<custom_msgs::msg::NiroCAN272_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__NiroCAN272
    std::shared_ptr<custom_msgs::msg::NiroCAN272_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NiroCAN272_ & other) const
  {
    if (this->sft_p != other.sft_p) {
      return false;
    }
    if (this->sft_r != other.sft_r) {
      return false;
    }
    if (this->sft_n != other.sft_n) {
      return false;
    }
    if (this->sft_d != other.sft_d) {
      return false;
    }
    if (this->sft_p_reversed != other.sft_p_reversed) {
      return false;
    }
    if (this->sft_r_reversed != other.sft_r_reversed) {
      return false;
    }
    if (this->sft_n_reversed != other.sft_n_reversed) {
      return false;
    }
    if (this->sft_d_reversed != other.sft_d_reversed) {
      return false;
    }
    if (this->sft_ctl_en != other.sft_ctl_en) {
      return false;
    }
    return true;
  }
  bool operator!=(const NiroCAN272_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NiroCAN272_

// alias to use template instance with default allocator
using NiroCAN272 =
  custom_msgs::msg::NiroCAN272_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN272__STRUCT_HPP_
