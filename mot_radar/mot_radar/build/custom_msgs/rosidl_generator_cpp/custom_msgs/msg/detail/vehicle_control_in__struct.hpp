// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/VehicleControlIn.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CONTROL_IN__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CONTROL_IN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__VehicleControlIn __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__VehicleControlIn __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleControlIn_
{
  using Type = VehicleControlIn_<ContainerAllocator>;

  explicit VehicleControlIn_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sw = 0;
      this->ax = 0.0;
      this->steer_ang = 0.0;
      this->gear_no = 0;
    }
  }

  explicit VehicleControlIn_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sw = 0;
      this->ax = 0.0;
      this->steer_ang = 0.0;
      this->gear_no = 0;
    }
  }

  // field types and members
  using _sw_type =
    int8_t;
  _sw_type sw;
  using _ax_type =
    double;
  _ax_type ax;
  using _steer_ang_type =
    double;
  _steer_ang_type steer_ang;
  using _gear_no_type =
    int8_t;
  _gear_no_type gear_no;

  // setters for named parameter idiom
  Type & set__sw(
    const int8_t & _arg)
  {
    this->sw = _arg;
    return *this;
  }
  Type & set__ax(
    const double & _arg)
  {
    this->ax = _arg;
    return *this;
  }
  Type & set__steer_ang(
    const double & _arg)
  {
    this->steer_ang = _arg;
    return *this;
  }
  Type & set__gear_no(
    const int8_t & _arg)
  {
    this->gear_no = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::VehicleControlIn_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::VehicleControlIn_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::VehicleControlIn_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::VehicleControlIn_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::VehicleControlIn_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::VehicleControlIn_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::VehicleControlIn_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::VehicleControlIn_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::VehicleControlIn_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::VehicleControlIn_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__VehicleControlIn
    std::shared_ptr<custom_msgs::msg::VehicleControlIn_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__VehicleControlIn
    std::shared_ptr<custom_msgs::msg::VehicleControlIn_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleControlIn_ & other) const
  {
    if (this->sw != other.sw) {
      return false;
    }
    if (this->ax != other.ax) {
      return false;
    }
    if (this->steer_ang != other.steer_ang) {
      return false;
    }
    if (this->gear_no != other.gear_no) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleControlIn_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleControlIn_

// alias to use template instance with default allocator
using VehicleControlIn =
  custom_msgs::msg::VehicleControlIn_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CONTROL_IN__STRUCT_HPP_
