// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/VehicleCANmain.idl
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
#include "custom_msgs/msg/detail/vehicle_ca_nmain__struct.h"
#include "custom_msgs/msg/detail/vehicle_ca_nmain__functions.h"

bool custom_msgs__msg__save_can342__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__save_can342__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__save_can343__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__save_can343__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__save_can1808__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__save_can1808__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__save_can1809__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__save_can1809__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__save_can1810__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__save_can1810__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__save_can1811__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__save_can1811__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__save_can1812__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__save_can1812__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__vehicle_ca_nmain__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("custom_msgs.msg._vehicle_ca_nmain.VehicleCANmain", full_classname_dest, 48) == 0);
  }
  custom_msgs__msg__VehicleCANmain * ros_message = _ros_message;
  {  // eait_control_01
    PyObject * field = PyObject_GetAttrString(_pymsg, "eait_control_01");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__save_can342__convert_from_py(field, &ros_message->eait_control_01)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // eait_control_02
    PyObject * field = PyObject_GetAttrString(_pymsg, "eait_control_02");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__save_can343__convert_from_py(field, &ros_message->eait_control_02)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // eait_info_eps
    PyObject * field = PyObject_GetAttrString(_pymsg, "eait_info_eps");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__save_can1808__convert_from_py(field, &ros_message->eait_info_eps)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // eait_info_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "eait_info_acc");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__save_can1809__convert_from_py(field, &ros_message->eait_info_acc)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // eait_info_spd
    PyObject * field = PyObject_GetAttrString(_pymsg, "eait_info_spd");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__save_can1810__convert_from_py(field, &ros_message->eait_info_spd)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // eait_info_imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "eait_info_imu");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__save_can1811__convert_from_py(field, &ros_message->eait_info_imu)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // eait_info_rad
    PyObject * field = PyObject_GetAttrString(_pymsg, "eait_info_rad");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__save_can1812__convert_from_py(field, &ros_message->eait_info_rad)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__vehicle_ca_nmain__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleCANmain */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._vehicle_ca_nmain");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleCANmain");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__VehicleCANmain * ros_message = (custom_msgs__msg__VehicleCANmain *)raw_ros_message;
  {  // eait_control_01
    PyObject * field = NULL;
    field = custom_msgs__msg__save_can342__convert_to_py(&ros_message->eait_control_01);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eait_control_01", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eait_control_02
    PyObject * field = NULL;
    field = custom_msgs__msg__save_can343__convert_to_py(&ros_message->eait_control_02);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eait_control_02", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eait_info_eps
    PyObject * field = NULL;
    field = custom_msgs__msg__save_can1808__convert_to_py(&ros_message->eait_info_eps);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eait_info_eps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eait_info_acc
    PyObject * field = NULL;
    field = custom_msgs__msg__save_can1809__convert_to_py(&ros_message->eait_info_acc);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eait_info_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eait_info_spd
    PyObject * field = NULL;
    field = custom_msgs__msg__save_can1810__convert_to_py(&ros_message->eait_info_spd);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eait_info_spd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eait_info_imu
    PyObject * field = NULL;
    field = custom_msgs__msg__save_can1811__convert_to_py(&ros_message->eait_info_imu);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eait_info_imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eait_info_rad
    PyObject * field = NULL;
    field = custom_msgs__msg__save_can1812__convert_to_py(&ros_message->eait_info_rad);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "eait_info_rad", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
