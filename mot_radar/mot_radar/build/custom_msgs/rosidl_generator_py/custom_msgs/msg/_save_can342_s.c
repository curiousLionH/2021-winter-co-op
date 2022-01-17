// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/SaveCAN342.idl
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
#include "custom_msgs/msg/detail/save_can342__struct.h"
#include "custom_msgs/msg/detail/save_can342__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__save_can342__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_msgs.msg._save_can342.SaveCAN342", full_classname_dest, 39) == 0);
  }
  custom_msgs__msg__SaveCAN342 * ros_message = _ros_message;
  {  // eps_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_en");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->eps_en = (Py_True == field);
    Py_DECREF(field);
  }
  {  // override_ignore
    PyObject * field = PyObject_GetAttrString(_pymsg, "override_ignore");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->override_ignore = (Py_True == field);
    Py_DECREF(field);
  }
  {  // eps_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eps_speed = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acc_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_en");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acc_en = (Py_True == field);
    Py_DECREF(field);
  }
  {  // aeb_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "aeb_en");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->aeb_en = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gear_change
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_change");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_change = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // turn_sig_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_sig_en");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_sig_en = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aeb_decel_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "aeb_decel_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aeb_decel_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aliv_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "aliv_cnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aliv_cnt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__save_can342__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SaveCAN342 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._save_can342");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SaveCAN342");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__SaveCAN342 * ros_message = (custom_msgs__msg__SaveCAN342 *)raw_ros_message;
  {  // eps_en
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->eps_en ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // override_ignore
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->override_ignore ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "override_ignore", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eps_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_en
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acc_en ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aeb_en
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->aeb_en ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aeb_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_change
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gear_change);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_change", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_sig_en
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->turn_sig_en);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_sig_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aeb_decel_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aeb_decel_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aeb_decel_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aliv_cnt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aliv_cnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aliv_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
