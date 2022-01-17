// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SpList.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SP_LIST__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SP_LIST__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SpList __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SpList __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpList_
{
  using Type = SpList_<ContainerAllocator>;

  explicit SpList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SpList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_sp_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _x_sp_type x_sp;
  using _x_sp_eps_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _x_sp_eps_type x_sp_eps;
  using _y_sp_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _y_sp_type y_sp;
  using _y_sp_eps_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _y_sp_eps_type y_sp_eps;

  // setters for named parameter idiom
  Type & set__x_sp(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->x_sp = _arg;
    return *this;
  }
  Type & set__x_sp_eps(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->x_sp_eps = _arg;
    return *this;
  }
  Type & set__y_sp(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->y_sp = _arg;
    return *this;
  }
  Type & set__y_sp_eps(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->y_sp_eps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SpList_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SpList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SpList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SpList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SpList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SpList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SpList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SpList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SpList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SpList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SpList
    std::shared_ptr<custom_msgs::msg::SpList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SpList
    std::shared_ptr<custom_msgs::msg::SpList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpList_ & other) const
  {
    if (this->x_sp != other.x_sp) {
      return false;
    }
    if (this->x_sp_eps != other.x_sp_eps) {
      return false;
    }
    if (this->y_sp != other.y_sp) {
      return false;
    }
    if (this->y_sp_eps != other.y_sp_eps) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpList_

// alias to use template instance with default allocator
using SpList =
  custom_msgs::msg::SpList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SP_LIST__STRUCT_HPP_
