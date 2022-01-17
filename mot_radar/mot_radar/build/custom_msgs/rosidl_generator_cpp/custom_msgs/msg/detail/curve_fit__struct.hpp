// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/CurveFit.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__CURVE_FIT__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__CURVE_FIT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__CurveFit __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__CurveFit __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CurveFit_
{
  using Type = CurveFit_<ContainerAllocator>;

  explicit CurveFit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CurveFit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _left_x_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _left_x_type left_x;
  using _left_y_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _left_y_type left_y;
  using _right_x_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _right_x_type right_x;
  using _right_y_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _right_y_type right_y;

  // setters for named parameter idiom
  Type & set__left_x(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->left_x = _arg;
    return *this;
  }
  Type & set__left_y(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->left_y = _arg;
    return *this;
  }
  Type & set__right_x(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->right_x = _arg;
    return *this;
  }
  Type & set__right_y(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->right_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::CurveFit_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::CurveFit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::CurveFit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::CurveFit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::CurveFit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::CurveFit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::CurveFit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::CurveFit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::CurveFit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::CurveFit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__CurveFit
    std::shared_ptr<custom_msgs::msg::CurveFit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__CurveFit
    std::shared_ptr<custom_msgs::msg::CurveFit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CurveFit_ & other) const
  {
    if (this->left_x != other.left_x) {
      return false;
    }
    if (this->left_y != other.left_y) {
      return false;
    }
    if (this->right_x != other.right_x) {
      return false;
    }
    if (this->right_y != other.right_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const CurveFit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CurveFit_

// alias to use template instance with default allocator
using CurveFit =
  custom_msgs::msg::CurveFit_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__CURVE_FIT__STRUCT_HPP_
