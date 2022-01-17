// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_msgs:srv/GetBezier.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_msgs/srv/detail/get_bezier__rosidl_typesupport_introspection_c.h"
#include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_msgs/srv/detail/get_bezier__functions.h"
#include "custom_msgs/srv/detail/get_bezier__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void GetBezier_Request__rosidl_typesupport_introspection_c__GetBezier_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__srv__GetBezier_Request__init(message_memory);
}

void GetBezier_Request__rosidl_typesupport_introspection_c__GetBezier_Request_fini_function(void * message_memory)
{
  custom_msgs__srv__GetBezier_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetBezier_Request__rosidl_typesupport_introspection_c__GetBezier_Request_message_member_array[4] = {
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__GetBezier_Request, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__GetBezier_Request, distance1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__GetBezier_Request, distance2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__GetBezier_Request, distance3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetBezier_Request__rosidl_typesupport_introspection_c__GetBezier_Request_message_members = {
  "custom_msgs__srv",  // message namespace
  "GetBezier_Request",  // message name
  4,  // number of fields
  sizeof(custom_msgs__srv__GetBezier_Request),
  GetBezier_Request__rosidl_typesupport_introspection_c__GetBezier_Request_message_member_array,  // message members
  GetBezier_Request__rosidl_typesupport_introspection_c__GetBezier_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetBezier_Request__rosidl_typesupport_introspection_c__GetBezier_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetBezier_Request__rosidl_typesupport_introspection_c__GetBezier_Request_message_type_support_handle = {
  0,
  &GetBezier_Request__rosidl_typesupport_introspection_c__GetBezier_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, GetBezier_Request)() {
  if (!GetBezier_Request__rosidl_typesupport_introspection_c__GetBezier_Request_message_type_support_handle.typesupport_identifier) {
    GetBezier_Request__rosidl_typesupport_introspection_c__GetBezier_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetBezier_Request__rosidl_typesupport_introspection_c__GetBezier_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_msgs/srv/detail/get_bezier__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_msgs/srv/detail/get_bezier__functions.h"
// already included above
// #include "custom_msgs/srv/detail/get_bezier__struct.h"


// Include directives for member types
// Member `path1_x`
// Member `path1_y`
// Member `path2_x`
// Member `path2_y`
// Member `path3_x`
// Member `path3_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void GetBezier_Response__rosidl_typesupport_introspection_c__GetBezier_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_msgs__srv__GetBezier_Response__init(message_memory);
}

void GetBezier_Response__rosidl_typesupport_introspection_c__GetBezier_Response_fini_function(void * message_memory)
{
  custom_msgs__srv__GetBezier_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember GetBezier_Response__rosidl_typesupport_introspection_c__GetBezier_Response_message_member_array[6] = {
  {
    "path1_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__GetBezier_Response, path1_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path1_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__GetBezier_Response, path1_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path2_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__GetBezier_Response, path2_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path2_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__GetBezier_Response, path2_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path3_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__GetBezier_Response, path3_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path3_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_msgs__srv__GetBezier_Response, path3_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers GetBezier_Response__rosidl_typesupport_introspection_c__GetBezier_Response_message_members = {
  "custom_msgs__srv",  // message namespace
  "GetBezier_Response",  // message name
  6,  // number of fields
  sizeof(custom_msgs__srv__GetBezier_Response),
  GetBezier_Response__rosidl_typesupport_introspection_c__GetBezier_Response_message_member_array,  // message members
  GetBezier_Response__rosidl_typesupport_introspection_c__GetBezier_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetBezier_Response__rosidl_typesupport_introspection_c__GetBezier_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t GetBezier_Response__rosidl_typesupport_introspection_c__GetBezier_Response_message_type_support_handle = {
  0,
  &GetBezier_Response__rosidl_typesupport_introspection_c__GetBezier_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, GetBezier_Response)() {
  if (!GetBezier_Response__rosidl_typesupport_introspection_c__GetBezier_Response_message_type_support_handle.typesupport_identifier) {
    GetBezier_Response__rosidl_typesupport_introspection_c__GetBezier_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &GetBezier_Response__rosidl_typesupport_introspection_c__GetBezier_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_msgs/srv/detail/get_bezier__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_msgs__srv__detail__get_bezier__rosidl_typesupport_introspection_c__GetBezier_service_members = {
  "custom_msgs__srv",  // service namespace
  "GetBezier",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_msgs__srv__detail__get_bezier__rosidl_typesupport_introspection_c__GetBezier_Request_message_type_support_handle,
  NULL  // response message
  // custom_msgs__srv__detail__get_bezier__rosidl_typesupport_introspection_c__GetBezier_Response_message_type_support_handle
};

static rosidl_service_type_support_t custom_msgs__srv__detail__get_bezier__rosidl_typesupport_introspection_c__GetBezier_service_type_support_handle = {
  0,
  &custom_msgs__srv__detail__get_bezier__rosidl_typesupport_introspection_c__GetBezier_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, GetBezier_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, GetBezier_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, GetBezier)() {
  if (!custom_msgs__srv__detail__get_bezier__rosidl_typesupport_introspection_c__GetBezier_service_type_support_handle.typesupport_identifier) {
    custom_msgs__srv__detail__get_bezier__rosidl_typesupport_introspection_c__GetBezier_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_msgs__srv__detail__get_bezier__rosidl_typesupport_introspection_c__GetBezier_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, GetBezier_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_msgs, srv, GetBezier_Response)()->data;
  }

  return &custom_msgs__srv__detail__get_bezier__rosidl_typesupport_introspection_c__GetBezier_service_type_support_handle;
}
