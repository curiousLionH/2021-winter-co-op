// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/NiroCAN560.idl
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
#include "custom_msgs/msg/detail/niro_can560__struct.h"
#include "custom_msgs/msg/detail/niro_can560__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__niro_can560__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_msgs.msg._niro_can560.NiroCAN560", full_classname_dest, 39) == 0);
  }
  custom_msgs__msg__NiroCAN560 * ros_message = _ros_message;
  {  // brk22_i
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk22_i");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk22_i = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk22_mode_b
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk22_mode_b");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk22_mode_b = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk22_1_15
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk22_1_15");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk22_1_15 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk22_areq1
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk22_areq1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brk22_areq1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brk22_1_35
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk22_1_35");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk22_1_35 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk22_areq2
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk22_areq2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brk22_areq2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alivecounter22
    PyObject * field = PyObject_GetAttrString(_pymsg, "alivecounter22");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alivecounter22 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // chksum22
    PyObject * field = PyObject_GetAttrString(_pymsg, "chksum22");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chksum22 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__niro_can560__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NiroCAN560 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._niro_can560");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NiroCAN560");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__NiroCAN560 * ros_message = (custom_msgs__msg__NiroCAN560 *)raw_ros_message;
  {  // brk22_i
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk22_i);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk22_i", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk22_mode_b
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk22_mode_b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk22_mode_b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk22_1_15
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk22_1_15);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk22_1_15", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk22_areq1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brk22_areq1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk22_areq1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk22_1_35
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk22_1_35);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk22_1_35", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk22_areq2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brk22_areq2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk22_areq2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alivecounter22
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alivecounter22);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alivecounter22", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chksum22
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chksum22);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chksum22", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
