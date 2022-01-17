// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SaveCAN1809.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1809__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1809__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SaveCAN1809 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SaveCAN1809 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveCAN1809_
{
  using Type = SaveCAN1809_<ContainerAllocator>;

  explicit SaveCAN1809_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_en_status = "";
      this->acc_control_board_status = "";
      this->acc_user_can_err = "";
      this->acc_veh_err = "";
      this->acc_err = "";
      this->acc_control_status = "";
      this->vs = 0;
      this->bsd_right = 0;
      this->bsd_left = 0;
      this->long_accel = 0.0;
      this->turn_right_en = "";
      this->hazard_en = "";
      this->turn_left_en = "";
      this->aeb_act = false;
      this->g_sel_disp = "";
      this->acc_alive_cnt = 0;
    }
  }

  explicit SaveCAN1809_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : acc_en_status(_alloc),
    acc_control_board_status(_alloc),
    acc_user_can_err(_alloc),
    acc_veh_err(_alloc),
    acc_err(_alloc),
    acc_control_status(_alloc),
    turn_right_en(_alloc),
    hazard_en(_alloc),
    turn_left_en(_alloc),
    g_sel_disp(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_en_status = "";
      this->acc_control_board_status = "";
      this->acc_user_can_err = "";
      this->acc_veh_err = "";
      this->acc_err = "";
      this->acc_control_status = "";
      this->vs = 0;
      this->bsd_right = 0;
      this->bsd_left = 0;
      this->long_accel = 0.0;
      this->turn_right_en = "";
      this->hazard_en = "";
      this->turn_left_en = "";
      this->aeb_act = false;
      this->g_sel_disp = "";
      this->acc_alive_cnt = 0;
    }
  }

  // field types and members
  using _acc_en_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _acc_en_status_type acc_en_status;
  using _acc_control_board_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _acc_control_board_status_type acc_control_board_status;
  using _acc_user_can_err_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _acc_user_can_err_type acc_user_can_err;
  using _acc_veh_err_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _acc_veh_err_type acc_veh_err;
  using _acc_err_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _acc_err_type acc_err;
  using _acc_control_status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _acc_control_status_type acc_control_status;
  using _vs_type =
    uint8_t;
  _vs_type vs;
  using _bsd_right_type =
    uint8_t;
  _bsd_right_type bsd_right;
  using _bsd_left_type =
    uint8_t;
  _bsd_left_type bsd_left;
  using _long_accel_type =
    double;
  _long_accel_type long_accel;
  using _turn_right_en_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _turn_right_en_type turn_right_en;
  using _hazard_en_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _hazard_en_type hazard_en;
  using _turn_left_en_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _turn_left_en_type turn_left_en;
  using _aeb_act_type =
    bool;
  _aeb_act_type aeb_act;
  using _g_sel_disp_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _g_sel_disp_type g_sel_disp;
  using _acc_alive_cnt_type =
    uint8_t;
  _acc_alive_cnt_type acc_alive_cnt;

  // setters for named parameter idiom
  Type & set__acc_en_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->acc_en_status = _arg;
    return *this;
  }
  Type & set__acc_control_board_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->acc_control_board_status = _arg;
    return *this;
  }
  Type & set__acc_user_can_err(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->acc_user_can_err = _arg;
    return *this;
  }
  Type & set__acc_veh_err(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->acc_veh_err = _arg;
    return *this;
  }
  Type & set__acc_err(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->acc_err = _arg;
    return *this;
  }
  Type & set__acc_control_status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->acc_control_status = _arg;
    return *this;
  }
  Type & set__vs(
    const uint8_t & _arg)
  {
    this->vs = _arg;
    return *this;
  }
  Type & set__bsd_right(
    const uint8_t & _arg)
  {
    this->bsd_right = _arg;
    return *this;
  }
  Type & set__bsd_left(
    const uint8_t & _arg)
  {
    this->bsd_left = _arg;
    return *this;
  }
  Type & set__long_accel(
    const double & _arg)
  {
    this->long_accel = _arg;
    return *this;
  }
  Type & set__turn_right_en(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->turn_right_en = _arg;
    return *this;
  }
  Type & set__hazard_en(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->hazard_en = _arg;
    return *this;
  }
  Type & set__turn_left_en(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->turn_left_en = _arg;
    return *this;
  }
  Type & set__aeb_act(
    const bool & _arg)
  {
    this->aeb_act = _arg;
    return *this;
  }
  Type & set__g_sel_disp(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->g_sel_disp = _arg;
    return *this;
  }
  Type & set__acc_alive_cnt(
    const uint8_t & _arg)
  {
    this->acc_alive_cnt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SaveCAN1809_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SaveCAN1809_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN1809_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveCAN1809_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN1809_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN1809_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveCAN1809_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveCAN1809_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN1809_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveCAN1809_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SaveCAN1809
    std::shared_ptr<custom_msgs::msg::SaveCAN1809_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SaveCAN1809
    std::shared_ptr<custom_msgs::msg::SaveCAN1809_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveCAN1809_ & other) const
  {
    if (this->acc_en_status != other.acc_en_status) {
      return false;
    }
    if (this->acc_control_board_status != other.acc_control_board_status) {
      return false;
    }
    if (this->acc_user_can_err != other.acc_user_can_err) {
      return false;
    }
    if (this->acc_veh_err != other.acc_veh_err) {
      return false;
    }
    if (this->acc_err != other.acc_err) {
      return false;
    }
    if (this->acc_control_status != other.acc_control_status) {
      return false;
    }
    if (this->vs != other.vs) {
      return false;
    }
    if (this->bsd_right != other.bsd_right) {
      return false;
    }
    if (this->bsd_left != other.bsd_left) {
      return false;
    }
    if (this->long_accel != other.long_accel) {
      return false;
    }
    if (this->turn_right_en != other.turn_right_en) {
      return false;
    }
    if (this->hazard_en != other.hazard_en) {
      return false;
    }
    if (this->turn_left_en != other.turn_left_en) {
      return false;
    }
    if (this->aeb_act != other.aeb_act) {
      return false;
    }
    if (this->g_sel_disp != other.g_sel_disp) {
      return false;
    }
    if (this->acc_alive_cnt != other.acc_alive_cnt) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveCAN1809_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveCAN1809_

// alias to use template instance with default allocator
using SaveCAN1809 =
  custom_msgs::msg::SaveCAN1809_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_CAN1809__STRUCT_HPP_
