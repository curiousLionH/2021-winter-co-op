// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/NiroCAN544.idl
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
#include "custom_msgs/msg/detail/niro_can544__struct.h"
#include "custom_msgs/msg/detail/niro_can544__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__niro_can544__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_msgs.msg._niro_can544.NiroCAN544", full_classname_dest, 39) == 0);
  }
  custom_msgs__msg__NiroCAN544 * ros_message = _ros_message;
  {  // brk21_mode_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk21_mode_a");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk21_mode_a = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk21_3_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk21_3_1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk21_3_1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // alivecounter21
    PyObject * field = PyObject_GetAttrString(_pymsg, "alivecounter21");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alivecounter21 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk21_8_8
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk21_8_8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk21_8_8 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk21_1_16
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk21_1_16");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk21_1_16 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk21_2_17
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk21_2_17");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk21_2_17 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk21_3_19
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk21_3_19");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk21_3_19 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk21_2_22
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk21_2_22");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk21_2_22 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk21_9_24
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk21_9_24");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk21_9_24 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk21_11_33
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk21_11_33");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk21_11_33 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk21_12_44
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk21_12_44");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk21_12_44 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk21_8_56
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk21_8_56");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk21_8_56 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__niro_can544__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NiroCAN544 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._niro_can544");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NiroCAN544");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__NiroCAN544 * ros_message = (custom_msgs__msg__NiroCAN544 *)raw_ros_message;
  {  // brk21_mode_a
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk21_mode_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk21_mode_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk21_3_1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk21_3_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk21_3_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alivecounter21
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alivecounter21);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alivecounter21", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk21_8_8
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk21_8_8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk21_8_8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk21_1_16
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk21_1_16);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk21_1_16", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk21_2_17
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk21_2_17);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk21_2_17", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk21_3_19
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk21_3_19);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk21_3_19", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk21_2_22
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk21_2_22);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk21_2_22", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk21_9_24
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk21_9_24);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk21_9_24", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk21_11_33
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk21_11_33);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk21_11_33", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk21_12_44
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk21_12_44);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk21_12_44", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk21_8_56
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk21_8_56);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk21_8_56", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
