// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/SaveRadarCAN308.idl
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
#include "custom_msgs/msg/detail/save_radar_can308__struct.h"
#include "custom_msgs/msg/detail/save_radar_can308__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__save_radar_can308__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("custom_msgs.msg._save_radar_can308.SaveRadarCAN308", full_classname_dest, 50) == 0);
  }
  custom_msgs__msg__SaveRadarCAN308 * ros_message = _ros_message;
  {  // can_det_confid_azimuth
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_det_confid_azimuth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_det_confid_azimuth = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_det_super_res_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_det_super_res_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_det_super_res_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_det_nd_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_det_nd_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_det_nd_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_det_host_veh_clutter
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_det_host_veh_clutter");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_det_host_veh_clutter = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_det_valid_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_det_valid_level");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_det_valid_level = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_det_azimuth
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_det_azimuth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_det_azimuth = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_det_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_det_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_det_range = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_det_range_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_det_range_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_det_range_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_det_amplitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_det_amplitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_det_amplitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_scan_index_2lsb
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_scan_index_2lsb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_scan_index_2lsb = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__save_radar_can308__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SaveRadarCAN308 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._save_radar_can308");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SaveRadarCAN308");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__SaveRadarCAN308 * ros_message = (custom_msgs__msg__SaveRadarCAN308 *)raw_ros_message;
  {  // can_det_confid_azimuth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_det_confid_azimuth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_det_confid_azimuth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_det_super_res_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_det_super_res_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_det_super_res_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_det_nd_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_det_nd_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_det_nd_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_det_host_veh_clutter
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_det_host_veh_clutter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_det_host_veh_clutter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_det_valid_level
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_det_valid_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_det_valid_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_det_azimuth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_det_azimuth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_det_azimuth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_det_range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_det_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_det_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_det_range_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_det_range_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_det_range_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_det_amplitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_det_amplitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_det_amplitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_scan_index_2lsb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_scan_index_2lsb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_scan_index_2lsb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
