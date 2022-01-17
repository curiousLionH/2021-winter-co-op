// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from custom_msgs:srv/GetBezier.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_MSGS__SRV__DETAIL__GET_BEZIER__STRUCT_HPP_
#define CUSTOM_MSGS__SRV__DETAIL__GET_BEZIER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__GetBezier_Request __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__GetBezier_Request __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBezier_Request_
{
  using Type = GetBezier_Request_<ContainerAllocator>;

  explicit GetBezier_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
      this->distance1 = 0.0;
      this->distance2 = 0.0;
      this->distance3 = 0.0;
    }
  }

  explicit GetBezier_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
      this->distance1 = 0.0;
      this->distance2 = 0.0;
      this->distance3 = 0.0;
    }
  }

  // field types and members
  using _direction_type =
    int16_t;
  _direction_type direction;
  using _distance1_type =
    double;
  _distance1_type distance1;
  using _distance2_type =
    double;
  _distance2_type distance2;
  using _distance3_type =
    double;
  _distance3_type distance3;

  // setters for named parameter idiom
  Type & set__direction(
    const int16_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__distance1(
    const double & _arg)
  {
    this->distance1 = _arg;
    return *this;
  }
  Type & set__distance2(
    const double & _arg)
  {
    this->distance2 = _arg;
    return *this;
  }
  Type & set__distance3(
    const double & _arg)
  {
    this->distance3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::GetBezier_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::GetBezier_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::GetBezier_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::GetBezier_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::GetBezier_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::GetBezier_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::GetBezier_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::GetBezier_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::GetBezier_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::GetBezier_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__GetBezier_Request
    std::shared_ptr<custom_msgs::srv::GetBezier_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__GetBezier_Request
    std::shared_ptr<custom_msgs::srv::GetBezier_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBezier_Request_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->distance1 != other.distance1) {
      return false;
    }
    if (this->distance2 != other.distance2) {
      return false;
    }
    if (this->distance3 != other.distance3) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBezier_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBezier_Request_

// alias to use template instance with default allocator
using GetBezier_Request =
  custom_msgs::srv::GetBezier_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs


#ifndef _WIN32
# define DEPRECATED__custom_msgs__srv__GetBezier_Response __attribute__((deprecated))
#else
# define DEPRECATED__custom_msgs__srv__GetBezier_Response __declspec(deprecated)
#endif

namespace custom_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetBezier_Response_
{
  using Type = GetBezier_Response_<ContainerAllocator>;

  explicit GetBezier_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetBezier_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _path1_x_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _path1_x_type path1_x;
  using _path1_y_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _path1_y_type path1_y;
  using _path2_x_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _path2_x_type path2_x;
  using _path2_y_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _path2_y_type path2_y;
  using _path3_x_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _path3_x_type path3_x;
  using _path3_y_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _path3_y_type path3_y;

  // setters for named parameter idiom
  Type & set__path1_x(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->path1_x = _arg;
    return *this;
  }
  Type & set__path1_y(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->path1_y = _arg;
    return *this;
  }
  Type & set__path2_x(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->path2_x = _arg;
    return *this;
  }
  Type & set__path2_y(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->path2_y = _arg;
    return *this;
  }
  Type & set__path3_x(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->path3_x = _arg;
    return *this;
  }
  Type & set__path3_y(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->path3_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    custom_msgs::srv::GetBezier_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const custom_msgs::srv::GetBezier_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<custom_msgs::srv::GetBezier_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<custom_msgs::srv::GetBezier_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::GetBezier_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::GetBezier_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      custom_msgs::srv::GetBezier_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<custom_msgs::srv::GetBezier_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<custom_msgs::srv::GetBezier_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<custom_msgs::srv::GetBezier_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__custom_msgs__srv__GetBezier_Response
    std::shared_ptr<custom_msgs::srv::GetBezier_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__custom_msgs__srv__GetBezier_Response
    std::shared_ptr<custom_msgs::srv::GetBezier_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetBezier_Response_ & other) const
  {
    if (this->path1_x != other.path1_x) {
      return false;
    }
    if (this->path1_y != other.path1_y) {
      return false;
    }
    if (this->path2_x != other.path2_x) {
      return false;
    }
    if (this->path2_y != other.path2_y) {
      return false;
    }
    if (this->path3_x != other.path3_x) {
      return false;
    }
    if (this->path3_y != other.path3_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetBezier_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetBezier_Response_

// alias to use template instance with default allocator
using GetBezier_Response =
  custom_msgs::srv::GetBezier_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace custom_msgs

namespace custom_msgs
{

namespace srv
{

struct GetBezier
{
  using Request = custom_msgs::srv::GetBezier_Request;
  using Response = custom_msgs::srv::GetBezier_Response;
};

}  // namespace srv

}  // namespace custom_msgs

#endif  // CUSTOM_MSGS__SRV__DETAIL__GET_BEZIER__STRUCT_HPP_
