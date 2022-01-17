// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/SbgCAN307.idl
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
#include "custom_msgs/msg/detail/sbg_can307__struct.h"
#include "custom_msgs/msg/detail/sbg_can307__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__sbg_can307__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_msgs.msg._sbg_can307.SbgCAN307", full_classname_dest, 37) == 0);
  }
  custom_msgs__msg__SbgCAN307 * ros_message = _ros_message;
  {  // roll_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pitch_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "pitch_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pitch_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__sbg_can307__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgCAN307 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._sbg_can307");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgCAN307");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__SbgCAN307 * ros_message = (custom_msgs__msg__SbgCAN307 *)raw_ros_message;
  {  // roll_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pitch_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pitch_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pitch_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
