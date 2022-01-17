// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SbgCAN354.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SBG_CAN354__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SBG_CAN354__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SbgCAN354 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SbgCAN354 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SbgCAN354_
{
  using Type = SbgCAN354_<ContainerAllocator>;

  explicit SbgCAN354_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->air_data_status = 0;
      this->air_temperature = 0.0;
    }
  }

  explicit SbgCAN354_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->air_data_status = 0;
      this->air_temperature = 0.0;
    }
  }

  // field types and members
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _air_data_status_type =
    uint8_t;
  _air_data_status_type air_data_status;
  using _air_temperature_type =
    double;
  _air_temperature_type air_temperature;

  // setters for named parameter idiom
  Type & set__time_stamp(
    const uint32_t & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__air_data_status(
    const uint8_t & _arg)
  {
    this->air_data_status = _arg;
    return *this;
  }
  Type & set__air_temperature(
    const double & _arg)
  {
    this->air_temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SbgCAN354_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SbgCAN354_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN354_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SbgCAN354_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN354_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN354_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SbgCAN354_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SbgCAN354_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN354_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SbgCAN354_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SbgCAN354
    std::shared_ptr<custom_msgs::msg::SbgCAN354_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SbgCAN354
    std::shared_ptr<custom_msgs::msg::SbgCAN354_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SbgCAN354_ & other) const
  {
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->air_data_status != other.air_data_status) {
      return false;
    }
    if (this->air_temperature != other.air_temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const SbgCAN354_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SbgCAN354_

// alias to use template instance with default allocator
using SbgCAN354 =
  custom_msgs::msg::SbgCAN354_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SBG_CAN354__STRUCT_HPP_
