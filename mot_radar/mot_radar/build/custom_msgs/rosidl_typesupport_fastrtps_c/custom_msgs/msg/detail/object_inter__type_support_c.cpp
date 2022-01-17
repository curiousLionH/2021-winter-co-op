// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from custom_msgs:msg/ObjectInter.idl
// generated code does not contain a copyright notice
#include "custom_msgs/msg/detail/object_inter__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "custom_msgs/msg/detail/object_inter__struct.h"
#include "custom_msgs/msg/detail/object_inter__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "custom_msgs/msg/detail/object__functions.h"  // object_0, object_1, object_10, object_11, object_12, object_13, object_14, object_15, object_16, object_17, object_18, object_19, object_2, object_20, object_21, object_22, object_23, object_24, object_25, object_26, object_27, object_28, object_29, object_3, object_4, object_5, object_6, object_7, object_8, object_9

// forward declare type support functions
size_t get_serialized_size_custom_msgs__msg__Object(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_custom_msgs__msg__Object(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object)();


using _ObjectInter__ros_msg_type = custom_msgs__msg__ObjectInter;

static bool _ObjectInter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ObjectInter__ros_msg_type * ros_message = static_cast<const _ObjectInter__ros_msg_type *>(untyped_ros_message);
  // Field name: object_0
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_0, cdr))
    {
      return false;
    }
  }

  // Field name: object_1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_1, cdr))
    {
      return false;
    }
  }

  // Field name: object_2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_2, cdr))
    {
      return false;
    }
  }

  // Field name: object_3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_3, cdr))
    {
      return false;
    }
  }

  // Field name: object_4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_4, cdr))
    {
      return false;
    }
  }

  // Field name: object_5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_5, cdr))
    {
      return false;
    }
  }

  // Field name: object_6
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_6, cdr))
    {
      return false;
    }
  }

  // Field name: object_7
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_7, cdr))
    {
      return false;
    }
  }

  // Field name: object_8
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_8, cdr))
    {
      return false;
    }
  }

  // Field name: object_9
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_9, cdr))
    {
      return false;
    }
  }

  // Field name: object_10
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_10, cdr))
    {
      return false;
    }
  }

  // Field name: object_11
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_11, cdr))
    {
      return false;
    }
  }

  // Field name: object_12
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_12, cdr))
    {
      return false;
    }
  }

  // Field name: object_13
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_13, cdr))
    {
      return false;
    }
  }

  // Field name: object_14
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_14, cdr))
    {
      return false;
    }
  }

  // Field name: object_15
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_15, cdr))
    {
      return false;
    }
  }

  // Field name: object_16
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_16, cdr))
    {
      return false;
    }
  }

  // Field name: object_17
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_17, cdr))
    {
      return false;
    }
  }

  // Field name: object_18
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_18, cdr))
    {
      return false;
    }
  }

  // Field name: object_19
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_19, cdr))
    {
      return false;
    }
  }

  // Field name: object_20
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_20, cdr))
    {
      return false;
    }
  }

  // Field name: object_21
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_21, cdr))
    {
      return false;
    }
  }

  // Field name: object_22
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_22, cdr))
    {
      return false;
    }
  }

  // Field name: object_23
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_23, cdr))
    {
      return false;
    }
  }

  // Field name: object_24
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_24, cdr))
    {
      return false;
    }
  }

  // Field name: object_25
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_25, cdr))
    {
      return false;
    }
  }

  // Field name: object_26
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_26, cdr))
    {
      return false;
    }
  }

  // Field name: object_27
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_27, cdr))
    {
      return false;
    }
  }

  // Field name: object_28
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_28, cdr))
    {
      return false;
    }
  }

  // Field name: object_29
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->object_29, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _ObjectInter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ObjectInter__ros_msg_type * ros_message = static_cast<_ObjectInter__ros_msg_type *>(untyped_ros_message);
  // Field name: object_0
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_0))
    {
      return false;
    }
  }

  // Field name: object_1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_1))
    {
      return false;
    }
  }

  // Field name: object_2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_2))
    {
      return false;
    }
  }

  // Field name: object_3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_3))
    {
      return false;
    }
  }

  // Field name: object_4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_4))
    {
      return false;
    }
  }

  // Field name: object_5
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_5))
    {
      return false;
    }
  }

  // Field name: object_6
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_6))
    {
      return false;
    }
  }

  // Field name: object_7
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_7))
    {
      return false;
    }
  }

  // Field name: object_8
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_8))
    {
      return false;
    }
  }

  // Field name: object_9
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_9))
    {
      return false;
    }
  }

  // Field name: object_10
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_10))
    {
      return false;
    }
  }

  // Field name: object_11
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_11))
    {
      return false;
    }
  }

  // Field name: object_12
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_12))
    {
      return false;
    }
  }

  // Field name: object_13
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_13))
    {
      return false;
    }
  }

  // Field name: object_14
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_14))
    {
      return false;
    }
  }

  // Field name: object_15
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_15))
    {
      return false;
    }
  }

  // Field name: object_16
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_16))
    {
      return false;
    }
  }

  // Field name: object_17
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_17))
    {
      return false;
    }
  }

  // Field name: object_18
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_18))
    {
      return false;
    }
  }

  // Field name: object_19
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_19))
    {
      return false;
    }
  }

  // Field name: object_20
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_20))
    {
      return false;
    }
  }

  // Field name: object_21
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_21))
    {
      return false;
    }
  }

  // Field name: object_22
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_22))
    {
      return false;
    }
  }

  // Field name: object_23
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_23))
    {
      return false;
    }
  }

  // Field name: object_24
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_24))
    {
      return false;
    }
  }

  // Field name: object_25
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_25))
    {
      return false;
    }
  }

  // Field name: object_26
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_26))
    {
      return false;
    }
  }

  // Field name: object_27
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_27))
    {
      return false;
    }
  }

  // Field name: object_28
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_28))
    {
      return false;
    }
  }

  // Field name: object_29
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, custom_msgs, msg, Object
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->object_29))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t get_serialized_size_custom_msgs__msg__ObjectInter(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ObjectInter__ros_msg_type * ros_message = static_cast<const _ObjectInter__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name object_0

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_0), current_alignment);
  // field.name object_1

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_1), current_alignment);
  // field.name object_2

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_2), current_alignment);
  // field.name object_3

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_3), current_alignment);
  // field.name object_4

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_4), current_alignment);
  // field.name object_5

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_5), current_alignment);
  // field.name object_6

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_6), current_alignment);
  // field.name object_7

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_7), current_alignment);
  // field.name object_8

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_8), current_alignment);
  // field.name object_9

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_9), current_alignment);
  // field.name object_10

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_10), current_alignment);
  // field.name object_11

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_11), current_alignment);
  // field.name object_12

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_12), current_alignment);
  // field.name object_13

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_13), current_alignment);
  // field.name object_14

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_14), current_alignment);
  // field.name object_15

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_15), current_alignment);
  // field.name object_16

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_16), current_alignment);
  // field.name object_17

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_17), current_alignment);
  // field.name object_18

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_18), current_alignment);
  // field.name object_19

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_19), current_alignment);
  // field.name object_20

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_20), current_alignment);
  // field.name object_21

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_21), current_alignment);
  // field.name object_22

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_22), current_alignment);
  // field.name object_23

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_23), current_alignment);
  // field.name object_24

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_24), current_alignment);
  // field.name object_25

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_25), current_alignment);
  // field.name object_26

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_26), current_alignment);
  // field.name object_27

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_27), current_alignment);
  // field.name object_28

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_28), current_alignment);
  // field.name object_29

  current_alignment += get_serialized_size_custom_msgs__msg__Object(
    &(ros_message->object_29), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _ObjectInter__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_custom_msgs__msg__ObjectInter(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_custom_msgs
size_t max_serialized_size_custom_msgs__msg__ObjectInter(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: object_0
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_1
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_2
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_3
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_4
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_5
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_6
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_7
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_8
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_9
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_10
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_11
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_12
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_13
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_14
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_15
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_16
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_17
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_18
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_19
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_20
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_21
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_22
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_23
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_24
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_25
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_26
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_27
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_28
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }
  // member: object_29
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_custom_msgs__msg__Object(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ObjectInter__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_custom_msgs__msg__ObjectInter(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ObjectInter = {
  "custom_msgs::msg",
  "ObjectInter",
  _ObjectInter__cdr_serialize,
  _ObjectInter__cdr_deserialize,
  _ObjectInter__get_serialized_size,
  _ObjectInter__max_serialized_size
};

static rosidl_message_type_support_t _ObjectInter__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ObjectInter,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, custom_msgs, msg, ObjectInter)() {
  return &_ObjectInter__type_support;
}

#if defined(__cplusplus)
}
#endif
