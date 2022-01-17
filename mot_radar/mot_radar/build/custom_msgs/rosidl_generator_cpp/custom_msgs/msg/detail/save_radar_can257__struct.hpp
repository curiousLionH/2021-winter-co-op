// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:msg/SaveRadarCAN257.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN257__STRUCT_HPP_
#define CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN257__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__msg__SaveRadarCAN257 __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__msg__SaveRadarCAN257 __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SaveRadarCAN257_
{
  using Type = SaveRadarCAN257_<ContainerAllocator>;

  explicit SaveRadarCAN257_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_interference_type = 0.0;
      this->can_recommend_unconverge = 0.0;
      this->can_blockage_sidelobe_filter_val = 0.0;
      this->can_radar_align_incomplete = 0.0;
      this->can_blockage_sidelobe = 0.0;
      this->can_blockage_mnr = 0.0;
      this->can_radar_ext_cond_nok = 0.0;
      this->can_radar_align_out_range = 0.0;
      this->can_radar_align_not_start = 0.0;
      this->can_radar_overheat_error = 0.0;
      this->can_radar_not_op = 0.0;
      this->can_xcvr_operational = 0.0;
    }
  }

  explicit SaveRadarCAN257_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_interference_type = 0.0;
      this->can_recommend_unconverge = 0.0;
      this->can_blockage_sidelobe_filter_val = 0.0;
      this->can_radar_align_incomplete = 0.0;
      this->can_blockage_sidelobe = 0.0;
      this->can_blockage_mnr = 0.0;
      this->can_radar_ext_cond_nok = 0.0;
      this->can_radar_align_out_range = 0.0;
      this->can_radar_align_not_start = 0.0;
      this->can_radar_overheat_error = 0.0;
      this->can_radar_not_op = 0.0;
      this->can_xcvr_operational = 0.0;
    }
  }

  // field types and members
  using _can_interference_type_type =
    double;
  _can_interference_type_type can_interference_type;
  using _can_recommend_unconverge_type =
    double;
  _can_recommend_unconverge_type can_recommend_unconverge;
  using _can_blockage_sidelobe_filter_val_type =
    double;
  _can_blockage_sidelobe_filter_val_type can_blockage_sidelobe_filter_val;
  using _can_radar_align_incomplete_type =
    double;
  _can_radar_align_incomplete_type can_radar_align_incomplete;
  using _can_blockage_sidelobe_type =
    double;
  _can_blockage_sidelobe_type can_blockage_sidelobe;
  using _can_blockage_mnr_type =
    double;
  _can_blockage_mnr_type can_blockage_mnr;
  using _can_radar_ext_cond_nok_type =
    double;
  _can_radar_ext_cond_nok_type can_radar_ext_cond_nok;
  using _can_radar_align_out_range_type =
    double;
  _can_radar_align_out_range_type can_radar_align_out_range;
  using _can_radar_align_not_start_type =
    double;
  _can_radar_align_not_start_type can_radar_align_not_start;
  using _can_radar_overheat_error_type =
    double;
  _can_radar_overheat_error_type can_radar_overheat_error;
  using _can_radar_not_op_type =
    double;
  _can_radar_not_op_type can_radar_not_op;
  using _can_xcvr_operational_type =
    double;
  _can_xcvr_operational_type can_xcvr_operational;

  // setters for named parameter idiom
  Type & set__can_interference_type(
    const double & _arg)
  {
    this->can_interference_type = _arg;
    return *this;
  }
  Type & set__can_recommend_unconverge(
    const double & _arg)
  {
    this->can_recommend_unconverge = _arg;
    return *this;
  }
  Type & set__can_blockage_sidelobe_filter_val(
    const double & _arg)
  {
    this->can_blockage_sidelobe_filter_val = _arg;
    return *this;
  }
  Type & set__can_radar_align_incomplete(
    const double & _arg)
  {
    this->can_radar_align_incomplete = _arg;
    return *this;
  }
  Type & set__can_blockage_sidelobe(
    const double & _arg)
  {
    this->can_blockage_sidelobe = _arg;
    return *this;
  }
  Type & set__can_blockage_mnr(
    const double & _arg)
  {
    this->can_blockage_mnr = _arg;
    return *this;
  }
  Type & set__can_radar_ext_cond_nok(
    const double & _arg)
  {
    this->can_radar_ext_cond_nok = _arg;
    return *this;
  }
  Type & set__can_radar_align_out_range(
    const double & _arg)
  {
    this->can_radar_align_out_range = _arg;
    return *this;
  }
  Type & set__can_radar_align_not_start(
    const double & _arg)
  {
    this->can_radar_align_not_start = _arg;
    return *this;
  }
  Type & set__can_radar_overheat_error(
    const double & _arg)
  {
    this->can_radar_overheat_error = _arg;
    return *this;
  }
  Type & set__can_radar_not_op(
    const double & _arg)
  {
    this->can_radar_not_op = _arg;
    return *this;
  }
  Type & set__can_xcvr_operational(
    const double & _arg)
  {
    this->can_xcvr_operational = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::msg::SaveRadarCAN257_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::msg::SaveRadarCAN257_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveRadarCAN257_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::msg::SaveRadarCAN257_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveRadarCAN257_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveRadarCAN257_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::msg::SaveRadarCAN257_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::msg::SaveRadarCAN257_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveRadarCAN257_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::msg::SaveRadarCAN257_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__msg__SaveRadarCAN257
    std::shared_ptr<custom_msgs::msg::SaveRadarCAN257_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__msg__SaveRadarCAN257
    std::shared_ptr<custom_msgs::msg::SaveRadarCAN257_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SaveRadarCAN257_ & other) const
  {
    if (this->can_interference_type != other.can_interference_type) {
      return false;
    }
    if (this->can_recommend_unconverge != other.can_recommend_unconverge) {
      return false;
    }
    if (this->can_blockage_sidelobe_filter_val != other.can_blockage_sidelobe_filter_val) {
      return false;
    }
    if (this->can_radar_align_incomplete != other.can_radar_align_incomplete) {
      return false;
    }
    if (this->can_blockage_sidelobe != other.can_blockage_sidelobe) {
      return false;
    }
    if (this->can_blockage_mnr != other.can_blockage_mnr) {
      return false;
    }
    if (this->can_radar_ext_cond_nok != other.can_radar_ext_cond_nok) {
      return false;
    }
    if (this->can_radar_align_out_range != other.can_radar_align_out_range) {
      return false;
    }
    if (this->can_radar_align_not_start != other.can_radar_align_not_start) {
      return false;
    }
    if (this->can_radar_overheat_error != other.can_radar_overheat_error) {
      return false;
    }
    if (this->can_radar_not_op != other.can_radar_not_op) {
      return false;
    }
    if (this->can_xcvr_operational != other.can_xcvr_operational) {
      return false;
    }
    return true;
  }
  bool operator!=(const SaveRadarCAN257_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SaveRadarCAN257_

// alias to use template instance with default allocator
using SaveRadarCAN257 =
  custom_msgs::msg::SaveRadarCAN257_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__MSG__DETAIL__SAVE_RADAR_CAN257__STRUCT_HPP_
