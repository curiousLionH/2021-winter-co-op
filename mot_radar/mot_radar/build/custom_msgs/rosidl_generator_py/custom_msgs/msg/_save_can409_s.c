// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/SaveCAN409.idl
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
#include "custom_msgs/msg/detail/save_can409__struct.h"
#include "custom_msgs/msg/detail/save_can409__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__save_can409__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_msgs.msg._save_can409.SaveCAN409", full_classname_dest, 39) == 0);
  }
  custom_msgs__msg__SaveCAN409 * ros_message = _ros_message;
  {  // lidar_alive_counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "lidar_alive_counter");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lidar_alive_counter = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__save_can409__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SaveCAN409 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._save_can409");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SaveCAN409");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__SaveCAN409 * ros_message = (custom_msgs__msg__SaveCAN409 *)raw_ros_message;
  {  // lidar_alive_counter
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lidar_alive_counter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lidar_alive_counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
