// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/ObjectCurrent.idl
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
#include "custom_msgs/msg/detail/object_current__struct.h"
#include "custom_msgs/msg/detail/object_current__functions.h"

bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);
bool custom_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * custom_msgs__msg__object__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__object_current__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("custom_msgs.msg._object_current.ObjectCurrent", full_classname_dest, 45) == 0);
  }
  custom_msgs__msg__ObjectCurrent * ros_message = _ros_message;
  {  // object_0
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_0");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_0)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_1");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_1)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_2");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_2)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_3");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_3)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_4");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_4)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_5");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_5)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_6");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_6)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_7
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_7");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_7)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_8
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_8");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_8)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_9
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_9");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_9)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_10
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_10");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_10)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_11
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_11");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_11)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_12
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_12");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_12)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_13
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_13");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_13)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_14
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_14");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_14)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_15
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_15");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_15)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_16
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_16");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_16)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_17
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_17");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_17)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_18
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_18");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_18)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_19
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_19");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_19)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_20
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_20");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_20)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_21
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_21");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_21)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_22
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_22");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_22)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_23
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_23");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_23)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_24
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_24");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_24)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_25
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_25");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_25)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_26
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_26");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_26)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_27
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_27");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_27)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_28
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_28");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_28)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_29
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_29");
    if (!field) {
      return false;
    }
    if (!custom_msgs__msg__object__convert_from_py(field, &ros_message->object_29)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__object_current__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObjectCurrent */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._object_current");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObjectCurrent");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__ObjectCurrent * ros_message = (custom_msgs__msg__ObjectCurrent *)raw_ros_message;
  {  // object_0
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_0);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_1
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_2
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_2);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_3
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_3);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_4
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_4);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_5
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_5);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_6
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_6);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_7
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_7);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_8
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_8);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_9
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_9);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_9", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_10
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_10);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_10", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_11
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_11);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_11", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_12
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_12);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_12", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_13
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_13);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_13", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_14
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_14);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_14", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_15
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_15);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_15", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_16
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_16);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_16", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_17
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_17);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_17", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_18
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_18);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_18", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_19
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_19);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_19", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_20
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_20);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_20", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_21
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_21);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_21", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_22
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_22);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_22", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_23
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_23);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_23", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_24
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_24);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_24", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_25
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_25);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_25", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_26
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_26);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_26", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_27
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_27);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_27", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_28
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_28);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_28", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_29
    PyObject * field = NULL;
    field = custom_msgs__msg__object__convert_to_py(&ros_message->object_29);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "object_29", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
