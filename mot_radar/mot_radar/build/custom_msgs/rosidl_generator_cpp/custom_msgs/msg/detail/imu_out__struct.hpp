// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/IMUOut.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__IMU_OUT__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__IMU_OUT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__IMUOut __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__IMUOut __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IMUOut_
{
  using Type = IMUOut_<ContainerAllocator>;

  explicit IMUOut_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0;
      this->vy = 0.0;
      this->vz = 0.0;
      this->roll_rate = 0.0;
      this->pitch_rate = 0.0;
      this->yaw_rate = 0.0;
      this->ax = 0.0;
      this->ay = 0.0;
      this->az = 0.0;
      this->roll_acc = 0.0;
      this->pitch_acc = 0.0;
      this->yaw_acc = 0.0;
    }
  }

  explicit IMUOut_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vx = 0.0;
      this->vy = 0.0;
      this->vz = 0.0;
      this->roll_rate = 0.0;
      this->pitch_rate = 0.0;
      this->yaw_rate = 0.0;
      this->ax = 0.0;
      this->ay = 0.0;
      this->az = 0.0;
      this->roll_acc = 0.0;
      this->pitch_acc = 0.0;
      this->yaw_acc = 0.0;
    }
  }

  // field types and members
  using _vx_type =
    double;
  _vx_type vx;
  using _vy_type =
    double;
  _vy_type vy;
  using _vz_type =
    double;
  _vz_type vz;
  using _roll_rate_type =
    double;
  _roll_rate_type roll_rate;
  using _pitch_rate_type =
    double;
  _pitch_rate_type pitch_rate;
  using _yaw_rate_type =
    double;
  _yaw_rate_type yaw_rate;
  using _ax_type =
    double;
  _ax_type ax;
  using _ay_type =
    double;
  _ay_type ay;
  using _az_type =
    double;
  _az_type az;
  using _roll_acc_type =
    double;
  _roll_acc_type roll_acc;
  using _pitch_acc_type =
    double;
  _pitch_acc_type pitch_acc;
  using _yaw_acc_type =
    double;
  _yaw_acc_type yaw_acc;

  // setters for named parameter idiom
  Type & set__vx(
    const double & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const double & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const double & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__roll_rate(
    const double & _arg)
  {
    this->roll_rate = _arg;
    return *this;
  }
  Type & set__pitch_rate(
    const double & _arg)
  {
    this->pitch_rate = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const double & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__ax(
    const double & _arg)
  {
    this->ax = _arg;
    return *this;
  }
  Type & set__ay(
    const double & _arg)
  {
    this->ay = _arg;
    return *this;
  }
  Type & set__az(
    const double & _arg)
  {
    this->az = _arg;
    return *this;
  }
  Type & set__roll_acc(
    const double & _arg)
  {
    this->roll_acc = _arg;
    return *this;
  }
  Type & set__pitch_acc(
    const double & _arg)
  {
    this->pitch_acc = _arg;
    return *this;
  }
  Type & set__yaw_acc(
    const double & _arg)
  {
    this->yaw_acc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::IMUOut_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::IMUOut_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::IMUOut_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::IMUOut_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::IMUOut_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::IMUOut_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::IMUOut_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::IMUOut_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::IMUOut_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::IMUOut_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__IMUOut
    std::shared_ptr<custom_msgs::msg::IMUOut_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__IMUOut
    std::shared_ptr<custom_msgs::msg::IMUOut_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMUOut_ & other) const
  {
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->roll_rate != other.roll_rate) {
      return false;
    }
    if (this->pitch_rate != other.pitch_rate) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->ax != other.ax) {
      return false;
    }
    if (this->ay != other.ay) {
      return false;
    }
    if (this->az != other.az) {
      return false;
    }
    if (this->roll_acc != other.roll_acc) {
      return false;
    }
    if (this->pitch_acc != other.pitch_acc) {
      return false;
    }
    if (this->yaw_acc != other.yaw_acc) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMUOut_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMUOut_

// alias to use template instance with default allocator
using IMUOut =
  custom_msgs::msg::IMUOut_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__IMU_OUT__STRUCT_HPP_
