// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/SaveCAN1809.idl
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
#include "custom_msgs/msg/detail/save_can1809__struct.h"
#include "custom_msgs/msg/detail/save_can1809__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__save_can1809__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_msgs.msg._save_can1809.SaveCAN1809", full_classname_dest, 41) == 0);
  }
  custom_msgs__msg__SaveCAN1809 * ros_message = _ros_message;
  {  // acc_en_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_en_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->acc_en_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // acc_control_board_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_control_board_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->acc_control_board_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // acc_user_can_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_user_can_err");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->acc_user_can_err, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // acc_veh_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_veh_err");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->acc_veh_err, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // acc_err
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_err");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->acc_err, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // acc_control_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_control_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->acc_control_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // vs
    PyObject * field = PyObject_GetAttrString(_pymsg, "vs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vs = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bsd_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "bsd_right");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bsd_right = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bsd_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "bsd_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bsd_left = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // long_accel
    PyObject * field = PyObject_GetAttrString(_pymsg, "long_accel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->long_accel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turn_right_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_right_en");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->turn_right_en, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // hazard_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "hazard_en");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->hazard_en, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // turn_left_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_left_en");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->turn_left_en, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // aeb_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "aeb_act");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->aeb_act = (Py_True == field);
    Py_DECREF(field);
  }
  {  // g_sel_disp
    PyObject * field = PyObject_GetAttrString(_pymsg, "g_sel_disp");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->g_sel_disp, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // acc_alive_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_alive_cnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_alive_cnt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__save_can1809__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SaveCAN1809 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._save_can1809");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SaveCAN1809");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__SaveCAN1809 * ros_message = (custom_msgs__msg__SaveCAN1809 *)raw_ros_message;
  {  // acc_en_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->acc_en_status.data,
      strlen(ros_message->acc_en_status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_en_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_control_board_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->acc_control_board_status.data,
      strlen(ros_message->acc_control_board_status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_control_board_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_user_can_err
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->acc_user_can_err.data,
      strlen(ros_message->acc_user_can_err.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_user_can_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_veh_err
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->acc_veh_err.data,
      strlen(ros_message->acc_veh_err.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_veh_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_err
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->acc_err.data,
      strlen(ros_message->acc_err.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_control_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->acc_control_status.data,
      strlen(ros_message->acc_control_status.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_control_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bsd_right
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bsd_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bsd_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bsd_left
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bsd_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bsd_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // long_accel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->long_accel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "long_accel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_right_en
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->turn_right_en.data,
      strlen(ros_message->turn_right_en.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_right_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hazard_en
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->hazard_en.data,
      strlen(ros_message->hazard_en.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hazard_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_left_en
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->turn_left_en.data,
      strlen(ros_message->turn_left_en.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_left_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aeb_act
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->aeb_act ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aeb_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // g_sel_disp
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->g_sel_disp.data,
      strlen(ros_message->g_sel_disp.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "g_sel_disp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_alive_cnt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acc_alive_cnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_alive_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
