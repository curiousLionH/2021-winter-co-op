// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/NiroCAN512.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN512__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN512__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__NiroCAN512 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__NiroCAN512 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NiroCAN512_
{
  using Type = NiroCAN512_<ContainerAllocator>;

  explicit NiroCAN512_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brk11_35_0 = 0;
      this->alivecounter11 = 0;
      this->chksum11 = 0;
    }
  }

  explicit NiroCAN512_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brk11_35_0 = 0;
      this->alivecounter11 = 0;
      this->chksum11 = 0;
    }
  }

  // field types and members
  using _brk11_35_0_type =
    uint8_t;
  _brk11_35_0_type brk11_35_0;
  using _alivecounter11_type =
    uint8_t;
  _alivecounter11_type alivecounter11;
  using _chksum11_type =
    uint8_t;
  _chksum11_type chksum11;

  // setters for named parameter idiom
  Type & set__brk11_35_0(
    const uint8_t & _arg)
  {
    this->brk11_35_0 = _arg;
    return *this;
  }
  Type & set__alivecounter11(
    const uint8_t & _arg)
  {
    this->alivecounter11 = _arg;
    return *this;
  }
  Type & set__chksum11(
    const uint8_t & _arg)
  {
    this->chksum11 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::NiroCAN512_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::NiroCAN512_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN512_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::NiroCAN512_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN512_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN512_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::NiroCAN512_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::NiroCAN512_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN512_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::NiroCAN512_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__NiroCAN512
    std::shared_ptr<custom_msgs::msg::NiroCAN512_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__NiroCAN512
    std::shared_ptr<custom_msgs::msg::NiroCAN512_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NiroCAN512_ & other) const
  {
    if (this->brk11_35_0 != other.brk11_35_0) {
      return false;
    }
    if (this->alivecounter11 != other.alivecounter11) {
      return false;
    }
    if (this->chksum11 != other.chksum11) {
      return false;
    }
    return true;
  }
  bool operator!=(const NiroCAN512_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NiroCAN512_

// alias to use template instance with default allocator
using NiroCAN512 =
  custom_msgs::msg::NiroCAN512_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__NIRO_CAN512__STRUCT_HPP_
