// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/DetectToDM.idl
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
#include "custom_msgs/msg/detail/detect_to_dm__struct.h"
#include "custom_msgs/msg/detail/detect_to_dm__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "custom_msgs/msg/detail/object__functions.h"
// end nested array functions include
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
bool custom_msgs__msg__detect_to_dm__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("custom_msgs.msg._detect_to_dm.DetectToDM", full_classname_dest, 40) == 0);
  }
  custom_msgs__msg__DetectToDM * ros_message = _ros_message;
  {  // objects_cur
    PyObject * field = PyObject_GetAttrString(_pymsg, "objects_cur");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'objects_cur'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!custom_msgs__msg__Object__Sequence__init(&(ros_message->objects_cur), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create custom_msgs__msg__Object__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    custom_msgs__msg__Object * dest = ros_message->objects_cur.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!custom_msgs__msg__object__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // objects_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "objects_left");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'objects_left'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!custom_msgs__msg__Object__Sequence__init(&(ros_message->objects_left), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create custom_msgs__msg__Object__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    custom_msgs__msg__Object * dest = ros_message->objects_left.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!custom_msgs__msg__object__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // objects_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "objects_right");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'objects_right'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!custom_msgs__msg__Object__Sequence__init(&(ros_message->objects_right), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create custom_msgs__msg__Object__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    custom_msgs__msg__Object * dest = ros_message->objects_right.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!custom_msgs__msg__object__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // objects_inter
    PyObject * field = PyObject_GetAttrString(_pymsg, "objects_inter");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'objects_inter'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!custom_msgs__msg__Object__Sequence__init(&(ros_message->objects_inter), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create custom_msgs__msg__Object__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    custom_msgs__msg__Object * dest = ros_message->objects_inter.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!custom_msgs__msg__object__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // objects_inter_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "objects_inter_left");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'objects_inter_left'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!custom_msgs__msg__Object__Sequence__init(&(ros_message->objects_inter_left), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create custom_msgs__msg__Object__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    custom_msgs__msg__Object * dest = ros_message->objects_inter_left.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!custom_msgs__msg__object__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__detect_to_dm__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DetectToDM */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._detect_to_dm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DetectToDM");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__DetectToDM * ros_message = (custom_msgs__msg__DetectToDM *)raw_ros_message;
  {  // objects_cur
    PyObject * field = NULL;
    size_t size = ros_message->objects_cur.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    custom_msgs__msg__Object * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->objects_cur.data[i]);
      PyObject * pyitem = custom_msgs__msg__object__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "objects_cur", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // objects_left
    PyObject * field = NULL;
    size_t size = ros_message->objects_left.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    custom_msgs__msg__Object * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->objects_left.data[i]);
      PyObject * pyitem = custom_msgs__msg__object__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "objects_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // objects_right
    PyObject * field = NULL;
    size_t size = ros_message->objects_right.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    custom_msgs__msg__Object * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->objects_right.data[i]);
      PyObject * pyitem = custom_msgs__msg__object__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "objects_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // objects_inter
    PyObject * field = NULL;
    size_t size = ros_message->objects_inter.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    custom_msgs__msg__Object * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->objects_inter.data[i]);
      PyObject * pyitem = custom_msgs__msg__object__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "objects_inter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // objects_inter_left
    PyObject * field = NULL;
    size_t size = ros_message->objects_inter_left.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    custom_msgs__msg__Object * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->objects_inter_left.data[i]);
      PyObject * pyitem = custom_msgs__msg__object__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "objects_inter_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
