// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/DetectToDM.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__DETECT_TO_DM__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__DETECT_TO_DM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'objects_cur'
// Member 'objects_left'
// Member 'objects_right'
// Member 'objects_inter'
// Member 'objects_inter_left'
#include "custom_msgs/msg/detail/object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__DetectToDM __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__DetectToDM __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectToDM_
{
  using Type = DetectToDM_<ContainerAllocator>;

  explicit DetectToDM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit DetectToDM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _objects_cur_type =
    std::vector<custom_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Object_<ContainerAllocator>>::other>;
  _objects_cur_type objects_cur;
  using _objects_left_type =
    std::vector<custom_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Object_<ContainerAllocator>>::other>;
  _objects_left_type objects_left;
  using _objects_right_type =
    std::vector<custom_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Object_<ContainerAllocator>>::other>;
  _objects_right_type objects_right;
  using _objects_inter_type =
    std::vector<custom_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Object_<ContainerAllocator>>::other>;
  _objects_inter_type objects_inter;
  using _objects_inter_left_type =
    std::vector<custom_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Object_<ContainerAllocator>>::other>;
  _objects_inter_left_type objects_inter_left;

  // setters for named parameter idiom
  Type & set__objects_cur(
    const std::vector<custom_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Object_<ContainerAllocator>>::other> & _arg)
  {
    this->objects_cur = _arg;
    return *this;
  }
  Type & set__objects_left(
    const std::vector<custom_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Object_<ContainerAllocator>>::other> & _arg)
  {
    this->objects_left = _arg;
    return *this;
  }
  Type & set__objects_right(
    const std::vector<custom_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Object_<ContainerAllocator>>::other> & _arg)
  {
    this->objects_right = _arg;
    return *this;
  }
  Type & set__objects_inter(
    const std::vector<custom_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Object_<ContainerAllocator>>::other> & _arg)
  {
    this->objects_inter = _arg;
    return *this;
  }
  Type & set__objects_inter_left(
    const std::vector<custom_msgs::msg::Object_<ContainerAllocator>, typename ContainerAllocator::template rebind<custom_msgs::msg::Object_<ContainerAllocator>>::other> & _arg)
  {
    this->objects_inter_left = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::DetectToDM_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::DetectToDM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::DetectToDM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::DetectToDM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::DetectToDM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::DetectToDM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::DetectToDM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::DetectToDM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::DetectToDM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::DetectToDM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__DetectToDM
    std::shared_ptr<custom_msgs::msg::DetectToDM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__DetectToDM
    std::shared_ptr<custom_msgs::msg::DetectToDM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectToDM_ & other) const
  {
    if (this->objects_cur != other.objects_cur) {
      return false;
    }
    if (this->objects_left != other.objects_left) {
      return false;
    }
    if (this->objects_right != other.objects_right) {
      return false;
    }
    if (this->objects_inter != other.objects_inter) {
      return false;
    }
    if (this->objects_inter_left != other.objects_inter_left) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectToDM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectToDM_

// alias to use template instance with default allocator
using DetectToDM =
  custom_msgs::msg::DetectToDM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__DETECT_TO_DM__STRUCT_HPP_
