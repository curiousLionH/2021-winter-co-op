// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/NiroCAN640.idl
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
#include "custom_msgs/msg/detail/niro_can640__struct.h"
#include "custom_msgs/msg/detail/niro_can640__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__niro_can640__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_msgs.msg._niro_can640.NiroCAN640", full_classname_dest, 39) == 0);
  }
  custom_msgs__msg__NiroCAN640 * ros_message = _ros_message;
  {  // gway_wheel_velocity_fr
    PyObject * field = PyObject_GetAttrString(_pymsg, "gway_wheel_velocity_fr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gway_wheel_velocity_fr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gway_wheel_velocity_rl
    PyObject * field = PyObject_GetAttrString(_pymsg, "gway_wheel_velocity_rl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gway_wheel_velocity_rl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gway_wheel_velocity_rr
    PyObject * field = PyObject_GetAttrString(_pymsg, "gway_wheel_velocity_rr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gway_wheel_velocity_rr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gway_wheel_velocity_fl
    PyObject * field = PyObject_GetAttrString(_pymsg, "gway_wheel_velocity_fl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gway_wheel_velocity_fl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__niro_can640__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NiroCAN640 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._niro_can640");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NiroCAN640");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__NiroCAN640 * ros_message = (custom_msgs__msg__NiroCAN640 *)raw_ros_message;
  {  // gway_wheel_velocity_fr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gway_wheel_velocity_fr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gway_wheel_velocity_fr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gway_wheel_velocity_rl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gway_wheel_velocity_rl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gway_wheel_velocity_rl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gway_wheel_velocity_rr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gway_wheel_velocity_rr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gway_wheel_velocity_rr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gway_wheel_velocity_fl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gway_wheel_velocity_fl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gway_wheel_velocity_fl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
