// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/Array.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ARRAY__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__Array __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__Array __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Array_
{
  using Type = Array_<ContainerAllocator>;

  explicit Array_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Array_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _x_type x;
  using _y_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _y_type y;
  using _w_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _w_type w;
  using _h_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _h_type h;
  using _z_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _z_type z;
  using _id_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__x(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__w(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->w = _arg;
    return *this;
  }
  Type & set__h(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->h = _arg;
    return *this;
  }
  Type & set__z(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__id(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::Array_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::Array_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::Array_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::Array_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::Array_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::Array_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::Array_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::Array_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::Array_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::Array_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__Array
    std::shared_ptr<custom_msgs::msg::Array_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__Array
    std::shared_ptr<custom_msgs::msg::Array_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Array_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    if (this->h != other.h) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Array_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Array_

// alias to use template instance with default allocator
using Array =
  custom_msgs::msg::Array_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__ARRAY__STRUCT_HPP_
