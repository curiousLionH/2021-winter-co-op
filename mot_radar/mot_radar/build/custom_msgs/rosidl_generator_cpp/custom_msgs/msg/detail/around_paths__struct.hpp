// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/AroundPaths.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__AROUND_PATHS__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__AROUND_PATHS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'left_lanes'
// Member 'right_lanes'
#include "custom_msgs/msg/detail/paths__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__AroundPaths __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__AroundPaths __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AroundPaths_
{
  using Type = AroundPaths_<ContainerAllocator>;

  explicit AroundPaths_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_lane = 0;
      this->right_lane = 0;
    }
  }

  explicit AroundPaths_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_lane = 0;
      this->right_lane = 0;
    }
  }

  // field types and members
  using _left_lane_type =
    int16_t;
  _left_lane_type left_lane;
  using _right_lane_type =
    int16_t;
  _right_lane_type right_lane;
  using _left_lanes_type =
    std::vector<custom_msgs::msg::Paths_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Paths_<ContainerAllocator>>::other>;
  _left_lanes_type left_lanes;
  using _right_lanes_type =
    std::vector<custom_msgs::msg::Paths_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Paths_<ContainerAllocator>>::other>;
  _right_lanes_type right_lanes;

  // setters for named parameter idiom
  Type & set__left_lane(
    const int16_t & _arg)
  {
    this->left_lane = _arg;
    return *this;
  }
  Type & set__right_lane(
    const int16_t & _arg)
  {
    this->right_lane = _arg;
    return *this;
  }
  Type & set__left_lanes(
    const std::vector<custom_msgs::msg::Paths_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Paths_<ContainerAllocator>>::other> & _arg)
  {
    this->left_lanes = _arg;
    return *this;
  }
  Type & set__right_lanes(
    const std::vector<custom_msgs::msg::Paths_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Paths_<ContainerAllocator>>::other> & _arg)
  {
    this->right_lanes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::AroundPaths_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::AroundPaths_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::AroundPaths_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::AroundPaths_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::AroundPaths_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::AroundPaths_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::AroundPaths_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::AroundPaths_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::AroundPaths_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::AroundPaths_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__AroundPaths
    std::shared_ptr<custom_msgs::msg::AroundPaths_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__AroundPaths
    std::shared_ptr<custom_msgs::msg::AroundPaths_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AroundPaths_ & other) const
  {
    if (this->left_lane != other.left_lane) {
      return false;
    }
    if (this->right_lane != other.right_lane) {
      return false;
    }
    if (this->left_lanes != other.left_lanes) {
      return false;
    }
    if (this->right_lanes != other.right_lanes) {
      return false;
    }
    return true;
  }
  bool operator!=(const AroundPaths_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AroundPaths_

// alias to use template instance with default allocator
using AroundPaths =
  custom_msgs::msg::AroundPaths_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__AROUND_PATHS__STRUCT_HPP_
