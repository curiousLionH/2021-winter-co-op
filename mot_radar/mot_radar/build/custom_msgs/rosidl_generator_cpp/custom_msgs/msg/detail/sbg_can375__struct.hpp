// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN375.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN375__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN375__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN375 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN375 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN375_
{
  using Type = SbgCAN375_<ContainerAllocator>;

  explicit SbgCAN375_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat_acc = 0.0;
      this->long_acc = 0.0;
      this->alt_acc = 0.0;
      this->base_station_id = 0;
    }
  }

  explicit SbgCAN375_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lat_acc = 0.0;
      this->long_acc = 0.0;
      this->alt_acc = 0.0;
      this->base_station_id = 0;
    }
  }

  // field types and members
  using _lat_acc_type =
    double;
  _lat_acc_type lat_acc;
  using _long_acc_type =
    double;
  _long_acc_type long_acc;
  using _alt_acc_type =
    double;
  _alt_acc_type alt_acc;
  using _base_station_id_type =
    uint16_t;
  _base_station_id_type base_station_id;

  // setters for named parameter idiom
  Type & set__lat_acc(
    const double & _arg)
  {
    this->lat_acc = _arg;
    return *this;
  }
  Type & set__long_acc(
    const double & _arg)
  {
    this->long_acc = _arg;
    return *this;
  }
  Type & set__alt_acc(
    const double & _arg)
  {
    this->alt_acc = _arg;
    return *this;
  }
  Type & set__base_station_id(
    const uint16_t & _arg)
  {
    this->base_station_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN375_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN375_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN375_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN375_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN375_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN375_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN375_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN375_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN375_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN375_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN375
    std::shared_ptr<custom_msgs::msg::SbgCAN375_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN375
    std::shared_ptr<custom_msgs::msg::SbgCAN375_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN375_ & other) const
  {
    if (this->lat_acc != other.lat_acc) {
      return false;
    }
    if (this->long_acc != other.long_acc) {
      return false;
    }
    if (this->alt_acc != other.alt_acc) {
      return false;
    }
    if (this->base_station_id != other.base_station_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN375_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN375_

// alias to use template instance with default allocator
using SbgCAN375 =
  custom_msgs::msg::SbgCAN375_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN375__STRUCT_HPP_
