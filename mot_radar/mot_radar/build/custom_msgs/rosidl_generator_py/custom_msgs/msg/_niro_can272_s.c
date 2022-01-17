// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/NiroCAN272.idl
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
#include "custom_msgs/msg/detail/niro_can272__struct.h"
#include "custom_msgs/msg/detail/niro_can272__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__niro_can272__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("custom_msgs.msg._niro_can272.NiroCAN272", full_classname_dest, 39) == 0);
  }
  custom_msgs__msg__NiroCAN272 * ros_message = _ros_message;
  {  // sft_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "sft_p");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sft_p = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sft_r
    PyObject * field = PyObject_GetAttrString(_pymsg, "sft_r");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sft_r = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sft_n
    PyObject * field = PyObject_GetAttrString(_pymsg, "sft_n");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sft_n = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sft_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "sft_d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sft_d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sft_p_reversed
    PyObject * field = PyObject_GetAttrString(_pymsg, "sft_p_reversed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sft_p_reversed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sft_r_reversed
    PyObject * field = PyObject_GetAttrString(_pymsg, "sft_r_reversed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sft_r_reversed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sft_n_reversed
    PyObject * field = PyObject_GetAttrString(_pymsg, "sft_n_reversed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sft_n_reversed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sft_d_reversed
    PyObject * field = PyObject_GetAttrString(_pymsg, "sft_d_reversed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sft_d_reversed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sft_ctl_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "sft_ctl_en");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sft_ctl_en = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__niro_can272__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NiroCAN272 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._niro_can272");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NiroCAN272");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__NiroCAN272 * ros_message = (custom_msgs__msg__NiroCAN272 *)raw_ros_message;
  {  // sft_p
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sft_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sft_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sft_r
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sft_r);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sft_r", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sft_n
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sft_n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sft_n", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sft_d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sft_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sft_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sft_p_reversed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sft_p_reversed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sft_p_reversed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sft_r_reversed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sft_r_reversed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sft_r_reversed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sft_n_reversed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sft_n_reversed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sft_n_reversed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sft_d_reversed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sft_d_reversed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sft_d_reversed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sft_ctl_en
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sft_ctl_en);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sft_ctl_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
