// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/AdrAllStatus.idl
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
#include "custom_msgs/msg/detail/adr_all_status__struct.h"
#include "custom_msgs/msg/detail/adr_all_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__adr_all_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("custom_msgs.msg._adr_all_status.AdrAllStatus", full_classname_dest, 44) == 0);
  }
  custom_msgs__msg__AdrAllStatus * ros_message = _ros_message;
  {  // lidar_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "lidar_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lidar_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ins_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "ins_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ins_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // acc_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acc_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // eps_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->eps_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // safety_warning_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "safety_warning_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->safety_warning_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rtk_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "rtk_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rtk_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lane_keeping_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_keeping_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lane_keeping_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // local_waypoint_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "local_waypoint_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->local_waypoint_status = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__adr_all_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AdrAllStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._adr_all_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AdrAllStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__AdrAllStatus * ros_message = (custom_msgs__msg__AdrAllStatus *)raw_ros_message;
  {  // lidar_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lidar_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lidar_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ins_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ins_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ins_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acc_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->eps_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // safety_warning_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->safety_warning_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "safety_warning_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rtk_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rtk_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rtk_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_keeping_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lane_keeping_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_keeping_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // local_waypoint_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->local_waypoint_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "local_waypoint_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
