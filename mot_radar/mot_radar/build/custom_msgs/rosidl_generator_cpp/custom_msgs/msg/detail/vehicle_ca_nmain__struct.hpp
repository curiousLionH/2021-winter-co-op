// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/VehicleCANmain.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CA_NMAIN__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CA_NMAIN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'eait_control_01'
#include "custom_msgs/msg/detail/save_can342__struct.hpp"
// Member 'eait_control_02'
#include "custom_msgs/msg/detail/save_can343__struct.hpp"
// Member 'eait_info_eps'
#include "custom_msgs/msg/detail/save_can1808__struct.hpp"
// Member 'eait_info_acc'
#include "custom_msgs/msg/detail/save_can1809__struct.hpp"
// Member 'eait_info_spd'
#include "custom_msgs/msg/detail/save_can1810__struct.hpp"
// Member 'eait_info_imu'
#include "custom_msgs/msg/detail/save_can1811__struct.hpp"
// Member 'eait_info_rad'
#include "custom_msgs/msg/detail/save_can1812__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__VehicleCANmain __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__VehicleCANmain __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleCANmain_
{
  using Type = VehicleCANmain_<ContainerAllocator>;

  explicit VehicleCANmain_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : eait_control_01(_init),
    eait_control_02(_init),
    eait_info_eps(_init),
    eait_info_acc(_init),
    eait_info_spd(_init),
    eait_info_imu(_init),
    eait_info_rad(_init)
  {
    (void)_init;
  }

  explicit VehicleCANmain_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : eait_control_01(_alloc, _init),
    eait_control_02(_alloc, _init),
    eait_info_eps(_alloc, _init),
    eait_info_acc(_alloc, _init),
    eait_info_spd(_alloc, _init),
    eait_info_imu(_alloc, _init),
    eait_info_rad(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _eait_control_01_type =
    custom_msgs::msg::SaveCAN342_<ContainerAllocator>;
  _eait_control_01_type eait_control_01;
  using _eait_control_02_type =
    custom_msgs::msg::SaveCAN343_<ContainerAllocator>;
  _eait_control_02_type eait_control_02;
  using _eait_info_eps_type =
    custom_msgs::msg::SaveCAN1808_<ContainerAllocator>;
  _eait_info_eps_type eait_info_eps;
  using _eait_info_acc_type =
    custom_msgs::msg::SaveCAN1809_<ContainerAllocator>;
  _eait_info_acc_type eait_info_acc;
  using _eait_info_spd_type =
    custom_msgs::msg::SaveCAN1810_<ContainerAllocator>;
  _eait_info_spd_type eait_info_spd;
  using _eait_info_imu_type =
    custom_msgs::msg::SaveCAN1811_<ContainerAllocator>;
  _eait_info_imu_type eait_info_imu;
  using _eait_info_rad_type =
    custom_msgs::msg::SaveCAN1812_<ContainerAllocator>;
  _eait_info_rad_type eait_info_rad;

  // setters for named parameter idiom
  Type & set__eait_control_01(
    const custom_msgs::msg::SaveCAN342_<ContainerAllocator> & _arg)
  {
    this->eait_control_01 = _arg;
    return *this;
  }
  Type & set__eait_control_02(
    const custom_msgs::msg::SaveCAN343_<ContainerAllocator> & _arg)
  {
    this->eait_control_02 = _arg;
    return *this;
  }
  Type & set__eait_info_eps(
    const custom_msgs::msg::SaveCAN1808_<ContainerAllocator> & _arg)
  {
    this->eait_info_eps = _arg;
    return *this;
  }
  Type & set__eait_info_acc(
    const custom_msgs::msg::SaveCAN1809_<ContainerAllocator> & _arg)
  {
    this->eait_info_acc = _arg;
    return *this;
  }
  Type & set__eait_info_spd(
    const custom_msgs::msg::SaveCAN1810_<ContainerAllocator> & _arg)
  {
    this->eait_info_spd = _arg;
    return *this;
  }
  Type & set__eait_info_imu(
    const custom_msgs::msg::SaveCAN1811_<ContainerAllocator> & _arg)
  {
    this->eait_info_imu = _arg;
    return *this;
  }
  Type & set__eait_info_rad(
    const custom_msgs::msg::SaveCAN1812_<ContainerAllocator> & _arg)
  {
    this->eait_info_rad = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::VehicleCANmain_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::VehicleCANmain_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::VehicleCANmain_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::VehicleCANmain_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::VehicleCANmain_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::VehicleCANmain_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::VehicleCANmain_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::VehicleCANmain_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::VehicleCANmain_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::VehicleCANmain_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__VehicleCANmain
    std::shared_ptr<custom_msgs::msg::VehicleCANmain_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__VehicleCANmain
    std::shared_ptr<custom_msgs::msg::VehicleCANmain_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleCANmain_ & other) const
  {
    if (this->eait_control_01 != other.eait_control_01) {
      return false;
    }
    if (this->eait_control_02 != other.eait_control_02) {
      return false;
    }
    if (this->eait_info_eps != other.eait_info_eps) {
      return false;
    }
    if (this->eait_info_acc != other.eait_info_acc) {
      return false;
    }
    if (this->eait_info_spd != other.eait_info_spd) {
      return false;
    }
    if (this->eait_info_imu != other.eait_info_imu) {
      return false;
    }
    if (this->eait_info_rad != other.eait_info_rad) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleCANmain_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleCANmain_

// alias to use template instance with default allocator
using VehicleCANmain =
  custom_msgs::msg::VehicleCANmain_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__VEHICLE_CA_NMAIN__STRUCT_HPP_
