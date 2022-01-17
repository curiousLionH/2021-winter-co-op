// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/CamToDM.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__CAM_TO_DM__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__CAM_TO_DM__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'objects'
#include "custom_msgs/msg/detail/object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__CamToDM __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__CamToDM __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CamToDM_
{
  using Type = CamToDM_<ContainerAllocator>;

  explicit CamToDM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->objects.fill(custom_msgs::msg::Object_<ContainerAllocator>{_init});
    }
  }

  explicit CamToDM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : objects(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->objects.fill(custom_msgs::msg::Object_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _objects_type =
    std::array<custom_msgs::msg::Object_<ContainerAllocator>, 10>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__objects(
    const std::array<custom_msgs::msg::Object_<ContainerAllocator>, 10> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::CamToDM_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::CamToDM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::CamToDM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::CamToDM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::CamToDM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::CamToDM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::CamToDM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::CamToDM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::CamToDM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::CamToDM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__CamToDM
    std::shared_ptr<custom_msgs::msg::CamToDM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__CamToDM
    std::shared_ptr<custom_msgs::msg::CamToDM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CamToDM_ & other) const
  {
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const CamToDM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CamToDM_

// alias to use template instance with default allocator
using CamToDM =
  custom_msgs::msg::CamToDM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__CAM_TO_DM__STRUCT_HPP_
