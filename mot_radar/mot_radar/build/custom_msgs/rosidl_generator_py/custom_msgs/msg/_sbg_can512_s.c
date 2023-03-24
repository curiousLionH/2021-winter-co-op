// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/SbgCAN512.idl
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
#include "custom_msgs/msg/detail/sbg_can512__struct.h"
#include "custom_msgs/msg/detail/sbg_can512__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__sbg_can512__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("custom_msgs.msg._sbg_can512.SbgCAN512", full_classname_dest, 37) == 0);
  }
  custom_msgs__msg__SbgCAN512 * ros_message = _ros_message;
  {  // time_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_stamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_stamp = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // event_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "event_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->event_status = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__sbg_can512__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgCAN512 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._sbg_can512");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgCAN512");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__SbgCAN512 * ros_message = (custom_msgs__msg__SbgCAN512 *)raw_ros_message;
  {  // time_stamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_stamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // event_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->event_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "event_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}