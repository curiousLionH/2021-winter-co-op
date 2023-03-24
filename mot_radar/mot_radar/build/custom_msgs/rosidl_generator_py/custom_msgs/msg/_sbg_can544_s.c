// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/SbgCAN544.idl
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
#include "custom_msgs/msg/detail/sbg_can544__struct.h"
#include "custom_msgs/msg/detail/sbg_can544__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__sbg_can544__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_msgs.msg._sbg_can544.SbgCAN544", full_classname_dest, 37) == 0);
  }
  custom_msgs__msg__SbgCAN544 * ros_message = _ros_message;
  {  // angle_track
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_track");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_track = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_slip
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_slip");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_slip = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // curvature_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "curvature_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->curvature_radius = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // auto_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->auto_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__sbg_can544__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SbgCAN544 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._sbg_can544");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SbgCAN544");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__SbgCAN544 * ros_message = (custom_msgs__msg__SbgCAN544 *)raw_ros_message;
  {  // angle_track
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_track);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_slip
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_slip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_slip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // curvature_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->curvature_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "curvature_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->auto_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}