// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/NiroCAN576.idl
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
#include "custom_msgs/msg/detail/niro_can576__struct.h"
#include "custom_msgs/msg/detail/niro_can576__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__niro_can576__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_msgs.msg._niro_can576.NiroCAN576", full_classname_dest, 39) == 0);
  }
  custom_msgs__msg__NiroCAN576 * ros_message = _ros_message;
  {  // brk24_6_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk24_6_0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk24_6_0 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk24_6_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk24_6_6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk24_6_6 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk24_7_12
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk24_7_12");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk24_7_12 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk24_7_19
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk24_7_19");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk24_7_19 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk24_mode_c
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk24_mode_c");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk24_mode_c = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk24_3_39
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk24_3_39");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk24_3_39 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // alivecounter24
    PyObject * field = PyObject_GetAttrString(_pymsg, "alivecounter24");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alivecounter24 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // chksum24
    PyObject * field = PyObject_GetAttrString(_pymsg, "chksum24");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chksum24 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk24_8_56
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk24_8_56");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk24_8_56 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__niro_can576__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NiroCAN576 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._niro_can576");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NiroCAN576");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__NiroCAN576 * ros_message = (custom_msgs__msg__NiroCAN576 *)raw_ros_message;
  {  // brk24_6_0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk24_6_0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk24_6_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk24_6_6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk24_6_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk24_6_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk24_7_12
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk24_7_12);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk24_7_12", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk24_7_19
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk24_7_19);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk24_7_19", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk24_mode_c
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk24_mode_c);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk24_mode_c", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk24_3_39
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk24_3_39);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk24_3_39", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alivecounter24
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alivecounter24);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alivecounter24", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chksum24
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chksum24);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chksum24", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk24_8_56
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk24_8_56);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk24_8_56", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
