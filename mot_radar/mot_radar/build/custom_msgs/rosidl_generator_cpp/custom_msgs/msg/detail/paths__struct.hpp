// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/Paths.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__PATHS__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__PATHS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__Paths __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__Paths __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Paths_
{
  using Type = Paths_<ContainerAllocator>;

  explicit Paths_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Paths_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _x_type x;
  using _y_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _y_type y;
  using _s_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _s_type s;
  using _h_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _h_type h;
  using _id_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__x(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__s(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__h(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->h = _arg;
    return *this;
  }
  Type & set__id(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::Paths_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::Paths_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::Paths_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::Paths_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::Paths_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::Paths_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::Paths_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::Paths_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::Paths_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::Paths_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__Paths
    std::shared_ptr<custom_msgs::msg::Paths_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__Paths
    std::shared_ptr<custom_msgs::msg::Paths_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Paths_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->s != other.s) {
      return false;
    }
    if (this->h != other.h) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Paths_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Paths_

// alias to use template instance with default allocator
using Paths =
  custom_msgs::msg::Paths_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__PATHS__STRUCT_HPP_
