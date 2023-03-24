// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/VehicleControlIn.idl
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
#include "custom_msgs/msg/detail/vehicle_control_in__struct.h"
#include "custom_msgs/msg/detail/vehicle_control_in__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__vehicle_control_in__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("custom_msgs.msg._vehicle_control_in.VehicleControlIn", full_classname_dest, 52) == 0);
  }
  custom_msgs__msg__VehicleControlIn * ros_message = _ros_message;
  {  // sw
    PyObject * field = PyObject_GetAttrString(_pymsg, "sw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sw = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ax
    PyObject * field = PyObject_GetAttrString(_pymsg, "ax");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ax = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_ang
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_ang");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_ang = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gear_no
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_no");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_no = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__vehicle_control_in__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleControlIn */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._vehicle_control_in");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleControlIn");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__VehicleControlIn * ros_message = (custom_msgs__msg__VehicleControlIn *)raw_ros_message;
  {  // sw
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ax
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ax);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ax", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_ang
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_ang);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_ang", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_no
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear_no);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_no", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}