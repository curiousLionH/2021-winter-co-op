// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SaveCAN1808.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1808__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1808__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SaveCAN1808 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SaveCAN1808 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveCAN1808_
{
  using Type = SaveCAN1808_<ContainerAllocator>;

  explicit SaveCAN1808_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eps_en_status = "";
      this->eps_control_board_status = "";
      this->eps_user_can_err = "";
      this->eps_err = "";
      this->eps_veh_can_err = "";
      this->eps_sas_err = "";
      this->eps_control_status = "";
      this->override_ignore_status = "";
      this->override_status = "";
      this->strang = 0.0f;
      this->str_drv_tq = 0.0f;
      this->str_out_tq = 0.0f;
      this->eps_alive_cnt = 0;
    }
  }

  explicit SaveCAN1808_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : eps_en_status(_alloc),
    eps_control_board_status(_alloc),
    eps_user_can_err(_alloc),
    eps_err(_alloc),
    eps_veh_can_err(_alloc),
    eps_sas_err(_alloc),
    eps_control_status(_alloc),
    override_ignore_status(_alloc),
    override_status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eps_en_status = "";
      this->eps_control_board_status = "";
      this->eps_user_can_err = "";
      this->eps_err = "";
      this->eps_veh_can_err = "";
      this->eps_sas_err = "";
      this->eps_control_status = "";
      this->override_ignore_status = "";
      this->override_status = "";
      this->strang = 0.0f;
      this->str_drv_tq = 0.0f;
      this->str_out_tq = 0.0f;
      this->eps_alive_cnt = 0;
    }
  }

  // field types and members
  using _eps_en_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _eps_en_status_type eps_en_status;
  using _eps_control_board_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _eps_control_board_status_type eps_control_board_status;
  using _eps_user_can_err_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _eps_user_can_err_type eps_user_can_err;
  using _eps_err_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _eps_err_type eps_err;
  using _eps_veh_can_err_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _eps_veh_can_err_type eps_veh_can_err;
  using _eps_sas_err_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _eps_sas_err_type eps_sas_err;
  using _eps_control_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _eps_control_status_type eps_control_status;
  using _override_ignore_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _override_ignore_status_type override_ignore_status;
  using _override_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _override_status_type override_status;
  using _strang_type =
    float;
  _strang_type strang;
  using _str_drv_tq_type =
    float;
  _str_drv_tq_type str_drv_tq;
  using _str_out_tq_type =
    float;
  _str_out_tq_type str_out_tq;
  using _eps_alive_cnt_type =
    uint8_t;
  _eps_alive_cnt_type eps_alive_cnt;

  // setters for named parameter idiom
  Type & set__eps_en_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->eps_en_status = _arg;
    return *this;
  }
  Type & set__eps_control_board_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->eps_control_board_status = _arg;
    return *this;
  }
  Type & set__eps_user_can_err(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->eps_user_can_err = _arg;
    return *this;
  }
  Type & set__eps_err(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->eps_err = _arg;
    return *this;
  }
  Type & set__eps_veh_can_err(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->eps_veh_can_err = _arg;
    return *this;
  }
  Type & set__eps_sas_err(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->eps_sas_err = _arg;
    return *this;
  }
  Type & set__eps_control_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->eps_control_status = _arg;
    return *this;
  }
  Type & set__override_ignore_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->override_ignore_status = _arg;
    return *this;
  }
  Type & set__override_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->override_status = _arg;
    return *this;
  }
  Type & set__strang(
    const float & _arg)
  {
    this->strang = _arg;
    return *this;
  }
  Type & set__str_drv_tq(
    const float & _arg)
  {
    this->str_drv_tq = _arg;
    return *this;
  }
  Type & set__str_out_tq(
    const float & _arg)
  {
    this->str_out_tq = _arg;
    return *this;
  }
  Type & set__eps_alive_cnt(
    const uint8_t & _arg)
  {
    this->eps_alive_cnt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SaveCAN1808_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SaveCAN1808_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN1808_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN1808_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN1808_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN1808_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN1808_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN1808_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN1808_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN1808_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SaveCAN1808
    std::shared_ptr<custom_msgs::msg::SaveCAN1808_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SaveCAN1808
    std::shared_ptr<custom_msgs::msg::SaveCAN1808_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveCAN1808_ & other) const
  {
    if (this->eps_en_status != other.eps_en_status) {
      return false;
    }
    if (this->eps_control_board_status != other.eps_control_board_status) {
      return false;
    }
    if (this->eps_user_can_err != other.eps_user_can_err) {
      return false;
    }
    if (this->eps_err != other.eps_err) {
      return false;
    }
    if (this->eps_veh_can_err != other.eps_veh_can_err) {
      return false;
    }
    if (this->eps_sas_err != other.eps_sas_err) {
      return false;
    }
    if (this->eps_control_status != other.eps_control_status) {
      return false;
    }
    if (this->override_ignore_status != other.override_ignore_status) {
      return false;
    }
    if (this->override_status != other.override_status) {
      return false;
    }
    if (this->strang != other.strang) {
      return false;
    }
    if (this->str_drv_tq != other.str_drv_tq) {
      return false;
    }
    if (this->str_out_tq != other.str_out_tq) {
      return false;
    }
    if (this->eps_alive_cnt != other.eps_alive_cnt) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveCAN1808_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveCAN1808_

// alias to use template instance with default allocator
using SaveCAN1808 =
  custom_msgs::msg::SaveCAN1808_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1808__STRUCT_HPP_
