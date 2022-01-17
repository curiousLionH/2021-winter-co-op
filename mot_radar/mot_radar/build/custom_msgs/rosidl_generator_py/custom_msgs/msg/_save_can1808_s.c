// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/SaveCAN1808.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "custom_msgs/msg/detail/save_can1808__struct.h"
#include "custom_msgs/msg/detail/save_can1808__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__save_can1808__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("custom_msgs.msg._save_can1808.SaveCAN1808", full_classname_dest, 41) == 0);
  }
  custom_msgs__msg__SaveCAN1808 * ros_message = _ros_message;
  {  // eps_en_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_en_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->eps_en_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // eps_control_board_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_control_board_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->eps_control_board_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // eps_user_can_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_user_can_err");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->eps_user_can_err, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // eps_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_err");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->eps_err, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // eps_veh_can_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_veh_can_err");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->eps_veh_can_err, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // eps_sas_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_sas_err");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->eps_sas_err, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // eps_control_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_control_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->eps_control_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // override_ignore_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "override_ignore_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->override_ignore_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // override_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "override_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->override_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // strang
    PyObject * field = PyObject_GetAttrString(_pymsg, "strang");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->strang = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // str_drv_tq
    PyObject * field = PyObject_GetAttrString(_pymsg, "str_drv_tq");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->str_drv_tq = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // str_out_tq
    PyObject * field = PyObject_GetAttrString(_pymsg, "str_out_tq");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->str_out_tq = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // eps_alive_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_alive_cnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eps_alive_cnt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__save_can1808__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SaveCAN1808 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._save_can1808");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SaveCAN1808");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__SaveCAN1808 * ros_message = (custom_msgs__msg__SaveCAN1808 *)raw_ros_message;
  {  // eps_en_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->eps_en_status.data,
      strlen(ros_message->eps_en_status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_en_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps_control_board_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->eps_control_board_status.data,
      strlen(ros_message->eps_control_board_status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_control_board_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps_user_can_err
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->eps_user_can_err.data,
      strlen(ros_message->eps_user_can_err.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_user_can_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps_err
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->eps_err.data,
      strlen(ros_message->eps_err.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps_veh_can_err
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->eps_veh_can_err.data,
      strlen(ros_message->eps_veh_can_err.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_veh_can_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps_sas_err
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->eps_sas_err.data,
      strlen(ros_message->eps_sas_err.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_sas_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps_control_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->eps_control_status.data,
      strlen(ros_message->eps_control_status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_control_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // override_ignore_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->override_ignore_status.data,
      strlen(ros_message->override_ignore_status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "override_ignore_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // override_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->override_status.data,
      strlen(ros_message->override_status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "override_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // strang
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->strang);
    {
      int rc = PyObject_SetAttrString(_pymessage, "strang", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // str_drv_tq
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->str_drv_tq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "str_drv_tq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // str_out_tq
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->str_out_tq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "str_out_tq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps_alive_cnt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eps_alive_cnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_alive_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
