// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/AdrAllStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__ADR_ALL_STATUS__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__ADR_ALL_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__AdrAllStatus __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__AdrAllStatus __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AdrAllStatus_
{
  using Type = AdrAllStatus_<ContainerAllocator>;

  explicit AdrAllStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lidar_status = false;
      this->ins_status = false;
      this->acc_status = false;
      this->eps_status = false;
      this->safety_warning_status = false;
      this->rtk_status = false;
      this->lane_keeping_status = false;
      this->local_waypoint_status = false;
    }
  }

  explicit AdrAllStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lidar_status = false;
      this->ins_status = false;
      this->acc_status = false;
      this->eps_status = false;
      this->safety_warning_status = false;
      this->rtk_status = false;
      this->lane_keeping_status = false;
      this->local_waypoint_status = false;
    }
  }

  // field types and members
  using _lidar_status_type =
    bool;
  _lidar_status_type lidar_status;
  using _ins_status_type =
    bool;
  _ins_status_type ins_status;
  using _acc_status_type =
    bool;
  _acc_status_type acc_status;
  using _eps_status_type =
    bool;
  _eps_status_type eps_status;
  using _safety_warning_status_type =
    bool;
  _safety_warning_status_type safety_warning_status;
  using _rtk_status_type =
    bool;
  _rtk_status_type rtk_status;
  using _lane_keeping_status_type =
    bool;
  _lane_keeping_status_type lane_keeping_status;
  using _local_waypoint_status_type =
    bool;
  _local_waypoint_status_type local_waypoint_status;

  // setters for named parameter idiom
  Type & set__lidar_status(
    const bool & _arg)
  {
    this->lidar_status = _arg;
    return *this;
  }
  Type & set__ins_status(
    const bool & _arg)
  {
    this->ins_status = _arg;
    return *this;
  }
  Type & set__acc_status(
    const bool & _arg)
  {
    this->acc_status = _arg;
    return *this;
  }
  Type & set__eps_status(
    const bool & _arg)
  {
    this->eps_status = _arg;
    return *this;
  }
  Type & set__safety_warning_status(
    const bool & _arg)
  {
    this->safety_warning_status = _arg;
    return *this;
  }
  Type & set__rtk_status(
    const bool & _arg)
  {
    this->rtk_status = _arg;
    return *this;
  }
  Type & set__lane_keeping_status(
    const bool & _arg)
  {
    this->lane_keeping_status = _arg;
    return *this;
  }
  Type & set__local_waypoint_status(
    const bool & _arg)
  {
    this->local_waypoint_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::AdrAllStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::AdrAllStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::AdrAllStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::AdrAllStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::AdrAllStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::AdrAllStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::AdrAllStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::AdrAllStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::AdrAllStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::AdrAllStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__AdrAllStatus
    std::shared_ptr<custom_msgs::msg::AdrAllStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__AdrAllStatus
    std::shared_ptr<custom_msgs::msg::AdrAllStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AdrAllStatus_ & other) const
  {
    if (this->lidar_status != other.lidar_status) {
      return false;
    }
    if (this->ins_status != other.ins_status) {
      return false;
    }
    if (this->acc_status != other.acc_status) {
      return false;
    }
    if (this->eps_status != other.eps_status) {
      return false;
    }
    if (this->safety_warning_status != other.safety_warning_status) {
      return false;
    }
    if (this->rtk_status != other.rtk_status) {
      return false;
    }
    if (this->lane_keeping_status != other.lane_keeping_status) {
      return false;
    }
    if (this->local_waypoint_status != other.local_waypoint_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const AdrAllStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AdrAllStatus_

// alias to use template instance with default allocator
using AdrAllStatus =
  custom_msgs::msg::AdrAllStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__ADR_ALL_STATUS__STRUCT_HPP_
