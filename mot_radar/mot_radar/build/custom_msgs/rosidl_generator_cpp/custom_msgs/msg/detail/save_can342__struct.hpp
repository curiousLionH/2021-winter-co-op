// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SaveCAN342.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN342__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN342__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SaveCAN342 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SaveCAN342 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveCAN342_
{
  using Type = SaveCAN342_<ContainerAllocator>;

  explicit SaveCAN342_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eps_en = false;
      this->override_ignore = false;
      this->eps_speed = 0;
      this->acc_en = false;
      this->aeb_en = false;
      this->gear_change = 0;
      this->turn_sig_en = 0;
      this->aeb_decel_value = 0.0f;
      this->aliv_cnt = 0;
    }
  }

  explicit SaveCAN342_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eps_en = false;
      this->override_ignore = false;
      this->eps_speed = 0;
      this->acc_en = false;
      this->aeb_en = false;
      this->gear_change = 0;
      this->turn_sig_en = 0;
      this->aeb_decel_value = 0.0f;
      this->aliv_cnt = 0;
    }
  }

  // field types and members
  using _eps_en_type =
    bool;
  _eps_en_type eps_en;
  using _override_ignore_type =
    bool;
  _override_ignore_type override_ignore;
  using _eps_speed_type =
    uint8_t;
  _eps_speed_type eps_speed;
  using _acc_en_type =
    bool;
  _acc_en_type acc_en;
  using _aeb_en_type =
    bool;
  _aeb_en_type aeb_en;
  using _gear_change_type =
    uint8_t;
  _gear_change_type gear_change;
  using _turn_sig_en_type =
    uint8_t;
  _turn_sig_en_type turn_sig_en;
  using _aeb_decel_value_type =
    float;
  _aeb_decel_value_type aeb_decel_value;
  using _aliv_cnt_type =
    uint8_t;
  _aliv_cnt_type aliv_cnt;

  // setters for named parameter idiom
  Type & set__eps_en(
    const bool & _arg)
  {
    this->eps_en = _arg;
    return *this;
  }
  Type & set__override_ignore(
    const bool & _arg)
  {
    this->override_ignore = _arg;
    return *this;
  }
  Type & set__eps_speed(
    const uint8_t & _arg)
  {
    this->eps_speed = _arg;
    return *this;
  }
  Type & set__acc_en(
    const bool & _arg)
  {
    this->acc_en = _arg;
    return *this;
  }
  Type & set__aeb_en(
    const bool & _arg)
  {
    this->aeb_en = _arg;
    return *this;
  }
  Type & set__gear_change(
    const uint8_t & _arg)
  {
    this->gear_change = _arg;
    return *this;
  }
  Type & set__turn_sig_en(
    const uint8_t & _arg)
  {
    this->turn_sig_en = _arg;
    return *this;
  }
  Type & set__aeb_decel_value(
    const float & _arg)
  {
    this->aeb_decel_value = _arg;
    return *this;
  }
  Type & set__aliv_cnt(
    const uint8_t & _arg)
  {
    this->aliv_cnt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SaveCAN342_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SaveCAN342_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN342_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN342_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN342_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN342_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN342_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN342_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN342_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN342_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SaveCAN342
    std::shared_ptr<custom_msgs::msg::SaveCAN342_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SaveCAN342
    std::shared_ptr<custom_msgs::msg::SaveCAN342_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveCAN342_ & other) const
  {
    if (this->eps_en != other.eps_en) {
      return false;
    }
    if (this->override_ignore != other.override_ignore) {
      return false;
    }
    if (this->eps_speed != other.eps_speed) {
      return false;
    }
    if (this->acc_en != other.acc_en) {
      return false;
    }
    if (this->aeb_en != other.aeb_en) {
      return false;
    }
    if (this->gear_change != other.gear_change) {
      return false;
    }
    if (this->turn_sig_en != other.turn_sig_en) {
      return false;
    }
    if (this->aeb_decel_value != other.aeb_decel_value) {
      return false;
    }
    if (this->aliv_cnt != other.aliv_cnt) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveCAN342_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveCAN342_

// alias to use template instance with default allocator
using SaveCAN342 =
  custom_msgs::msg::SaveCAN342_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN342__STRUCT_HPP_
