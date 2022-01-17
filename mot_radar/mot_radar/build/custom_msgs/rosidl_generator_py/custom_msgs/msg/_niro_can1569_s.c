// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/NiroCAN1569.idl
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
#include "custom_msgs/msg/detail/niro_can1569__struct.h"
#include "custom_msgs/msg/detail/niro_can1569__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__niro_can1569__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_msgs.msg._niro_can1569.NiroCAN1569", full_classname_dest, 41) == 0);
  }
  custom_msgs__msg__NiroCAN1569 * ros_message = _ros_message;
  {  // yyyy
    PyObject * field = PyObject_GetAttrString(_pymsg, "yyyy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->yyyy = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "mm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mm = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dd
    PyObject * field = PyObject_GetAttrString(_pymsg, "dd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dd = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hh
    PyObject * field = PyObject_GetAttrString(_pymsg, "hh");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hh = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nn
    PyObject * field = PyObject_GetAttrString(_pymsg, "nn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nn = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ss
    PyObject * field = PyObject_GetAttrString(_pymsg, "ss");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ss = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__niro_can1569__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NiroCAN1569 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._niro_can1569");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NiroCAN1569");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__NiroCAN1569 * ros_message = (custom_msgs__msg__NiroCAN1569 *)raw_ros_message;
  {  // yyyy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->yyyy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yyyy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hh
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hh);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ss
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ss);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ss", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
