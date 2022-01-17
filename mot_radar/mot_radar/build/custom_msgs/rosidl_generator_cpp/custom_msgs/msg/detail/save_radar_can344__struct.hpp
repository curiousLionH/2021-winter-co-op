// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SaveRadarCAN344.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN344__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN344__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SaveRadarCAN344 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SaveRadarCAN344 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveRadarCAN344_
{
  using Type = SaveRadarCAN344_<ContainerAllocator>;

  explicit SaveRadarCAN344_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_det_confid_azimuth = 0.0;
      this->can_det_super_res_target = 0.0;
      this->can_det_nd_target = 0.0;
      this->can_det_host_veh_clutter = 0.0;
      this->can_det_valid_level = 0.0;
      this->can_det_azimuth = 0.0;
      this->can_det_range = 0.0;
      this->can_det_range_rate = 0.0;
      this->can_det_amplitude = 0.0;
      this->can_scan_index_2lsb = 0.0;
    }
  }

  explicit SaveRadarCAN344_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_det_confid_azimuth = 0.0;
      this->can_det_super_res_target = 0.0;
      this->can_det_nd_target = 0.0;
      this->can_det_host_veh_clutter = 0.0;
      this->can_det_valid_level = 0.0;
      this->can_det_azimuth = 0.0;
      this->can_det_range = 0.0;
      this->can_det_range_rate = 0.0;
      this->can_det_amplitude = 0.0;
      this->can_scan_index_2lsb = 0.0;
    }
  }

  // field types and members
  using _can_det_confid_azimuth_type =
    double;
  _can_det_confid_azimuth_type can_det_confid_azimuth;
  using _can_det_super_res_target_type =
    double;
  _can_det_super_res_target_type can_det_super_res_target;
  using _can_det_nd_target_type =
    double;
  _can_det_nd_target_type can_det_nd_target;
  using _can_det_host_veh_clutter_type =
    double;
  _can_det_host_veh_clutter_type can_det_host_veh_clutter;
  using _can_det_valid_level_type =
    double;
  _can_det_valid_level_type can_det_valid_level;
  using _can_det_azimuth_type =
    double;
  _can_det_azimuth_type can_det_azimuth;
  using _can_det_range_type =
    double;
  _can_det_range_type can_det_range;
  using _can_det_range_rate_type =
    double;
  _can_det_range_rate_type can_det_range_rate;
  using _can_det_amplitude_type =
    double;
  _can_det_amplitude_type can_det_amplitude;
  using _can_scan_index_2lsb_type =
    double;
  _can_scan_index_2lsb_type can_scan_index_2lsb;

  // setters for named parameter idiom
  Type & set__can_det_confid_azimuth(
    const double & _arg)
  {
    this->can_det_confid_azimuth = _arg;
    return *this;
  }
  Type & set__can_det_super_res_target(
    const double & _arg)
  {
    this->can_det_super_res_target = _arg;
    return *this;
  }
  Type & set__can_det_nd_target(
    const double & _arg)
  {
    this->can_det_nd_target = _arg;
    return *this;
  }
  Type & set__can_det_host_veh_clutter(
    const double & _arg)
  {
    this->can_det_host_veh_clutter = _arg;
    return *this;
  }
  Type & set__can_det_valid_level(
    const double & _arg)
  {
    this->can_det_valid_level = _arg;
    return *this;
  }
  Type & set__can_det_azimuth(
    const double & _arg)
  {
    this->can_det_azimuth = _arg;
    return *this;
  }
  Type & set__can_det_range(
    const double & _arg)
  {
    this->can_det_range = _arg;
    return *this;
  }
  Type & set__can_det_range_rate(
    const double & _arg)
  {
    this->can_det_range_rate = _arg;
    return *this;
  }
  Type & set__can_det_amplitude(
    const double & _arg)
  {
    this->can_det_amplitude = _arg;
    return *this;
  }
  Type & set__can_scan_index_2lsb(
    const double & _arg)
  {
    this->can_scan_index_2lsb = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SaveRadarCAN344_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SaveRadarCAN344_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveRadarCAN344_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveRadarCAN344_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveRadarCAN344_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveRadarCAN344_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveRadarCAN344_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveRadarCAN344_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveRadarCAN344_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveRadarCAN344_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SaveRadarCAN344
    std::shared_ptr<custom_msgs::msg::SaveRadarCAN344_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SaveRadarCAN344
    std::shared_ptr<custom_msgs::msg::SaveRadarCAN344_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveRadarCAN344_ & other) const
  {
    if (this->can_det_confid_azimuth != other.can_det_confid_azimuth) {
      return false;
    }
    if (this->can_det_super_res_target != other.can_det_super_res_target) {
      return false;
    }
    if (this->can_det_nd_target != other.can_det_nd_target) {
      return false;
    }
    if (this->can_det_host_veh_clutter != other.can_det_host_veh_clutter) {
      return false;
    }
    if (this->can_det_valid_level != other.can_det_valid_level) {
      return false;
    }
    if (this->can_det_azimuth != other.can_det_azimuth) {
      return false;
    }
    if (this->can_det_range != other.can_det_range) {
      return false;
    }
    if (this->can_det_range_rate != other.can_det_range_rate) {
      return false;
    }
    if (this->can_det_amplitude != other.can_det_amplitude) {
      return false;
    }
    if (this->can_scan_index_2lsb != other.can_scan_index_2lsb) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveRadarCAN344_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveRadarCAN344_

// alias to use template instance with default allocator
using SaveRadarCAN344 =
  custom_msgs::msg::SaveRadarCAN344_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN344__STRUCT_HPP_
