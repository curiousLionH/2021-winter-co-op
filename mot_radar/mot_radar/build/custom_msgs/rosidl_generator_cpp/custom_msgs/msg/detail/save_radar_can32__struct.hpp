// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SaveRadarCAN32.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN32__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN32__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SaveRadarCAN32 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SaveRadarCAN32 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveRadarCAN32_
{
  using Type = SaveRadarCAN32_<ContainerAllocator>;

  explicit SaveRadarCAN32_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_vehicle_stat = 0.0;
      this->can_day_night_status = 0.0;
      this->can_wiper_status = 0.0;
      this->can_yaw_rate_validity = 0.0;
      this->can_yaw_rate = 0.0;
      this->can_vehicle_speed_validity = 0.0;
      this->can_vehicle_speed_direction = 0.0;
      this->can_vehicle_speed = 0.0;
    }
  }

  explicit SaveRadarCAN32_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_vehicle_stat = 0.0;
      this->can_day_night_status = 0.0;
      this->can_wiper_status = 0.0;
      this->can_yaw_rate_validity = 0.0;
      this->can_yaw_rate = 0.0;
      this->can_vehicle_speed_validity = 0.0;
      this->can_vehicle_speed_direction = 0.0;
      this->can_vehicle_speed = 0.0;
    }
  }

  // field types and members
  using _can_vehicle_stat_type =
    double;
  _can_vehicle_stat_type can_vehicle_stat;
  using _can_day_night_status_type =
    double;
  _can_day_night_status_type can_day_night_status;
  using _can_wiper_status_type =
    double;
  _can_wiper_status_type can_wiper_status;
  using _can_yaw_rate_validity_type =
    double;
  _can_yaw_rate_validity_type can_yaw_rate_validity;
  using _can_yaw_rate_type =
    double;
  _can_yaw_rate_type can_yaw_rate;
  using _can_vehicle_speed_validity_type =
    double;
  _can_vehicle_speed_validity_type can_vehicle_speed_validity;
  using _can_vehicle_speed_direction_type =
    double;
  _can_vehicle_speed_direction_type can_vehicle_speed_direction;
  using _can_vehicle_speed_type =
    double;
  _can_vehicle_speed_type can_vehicle_speed;

  // setters for named parameter idiom
  Type & set__can_vehicle_stat(
    const double & _arg)
  {
    this->can_vehicle_stat = _arg;
    return *this;
  }
  Type & set__can_day_night_status(
    const double & _arg)
  {
    this->can_day_night_status = _arg;
    return *this;
  }
  Type & set__can_wiper_status(
    const double & _arg)
  {
    this->can_wiper_status = _arg;
    return *this;
  }
  Type & set__can_yaw_rate_validity(
    const double & _arg)
  {
    this->can_yaw_rate_validity = _arg;
    return *this;
  }
  Type & set__can_yaw_rate(
    const double & _arg)
  {
    this->can_yaw_rate = _arg;
    return *this;
  }
  Type & set__can_vehicle_speed_validity(
    const double & _arg)
  {
    this->can_vehicle_speed_validity = _arg;
    return *this;
  }
  Type & set__can_vehicle_speed_direction(
    const double & _arg)
  {
    this->can_vehicle_speed_direction = _arg;
    return *this;
  }
  Type & set__can_vehicle_speed(
    const double & _arg)
  {
    this->can_vehicle_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SaveRadarCAN32_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SaveRadarCAN32_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveRadarCAN32_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveRadarCAN32_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveRadarCAN32_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveRadarCAN32_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveRadarCAN32_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveRadarCAN32_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveRadarCAN32_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveRadarCAN32_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SaveRadarCAN32
    std::shared_ptr<custom_msgs::msg::SaveRadarCAN32_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SaveRadarCAN32
    std::shared_ptr<custom_msgs::msg::SaveRadarCAN32_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveRadarCAN32_ & other) const
  {
    if (this->can_vehicle_stat != other.can_vehicle_stat) {
      return false;
    }
    if (this->can_day_night_status != other.can_day_night_status) {
      return false;
    }
    if (this->can_wiper_status != other.can_wiper_status) {
      return false;
    }
    if (this->can_yaw_rate_validity != other.can_yaw_rate_validity) {
      return false;
    }
    if (this->can_yaw_rate != other.can_yaw_rate) {
      return false;
    }
    if (this->can_vehicle_speed_validity != other.can_vehicle_speed_validity) {
      return false;
    }
    if (this->can_vehicle_speed_direction != other.can_vehicle_speed_direction) {
      return false;
    }
    if (this->can_vehicle_speed != other.can_vehicle_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveRadarCAN32_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveRadarCAN32_

// alias to use template instance with default allocator
using SaveRadarCAN32 =
  custom_msgs::msg::SaveRadarCAN32_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN32__STRUCT_HPP_
