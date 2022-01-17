// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from custom_msgs:msg/SaveRadarCAN257.idl
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
#include "custom_msgs/msg/detail/save_radar_can257__struct.h"
#include "custom_msgs/msg/detail/save_radar_can257__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool custom_msgs__msg__save_radar_can257__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("custom_msgs.msg._save_radar_can257.SaveRadarCAN257", full_classname_dest, 50) == 0);
  }
  custom_msgs__msg__SaveRadarCAN257 * ros_message = _ros_message;
  {  // can_interference_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_interference_type");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_interference_type = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_recommend_unconverge
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_recommend_unconverge");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_recommend_unconverge = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_blockage_sidelobe_filter_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_blockage_sidelobe_filter_val");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_blockage_sidelobe_filter_val = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_radar_align_incomplete
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_radar_align_incomplete");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_radar_align_incomplete = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_blockage_sidelobe
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_blockage_sidelobe");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_blockage_sidelobe = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_blockage_mnr
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_blockage_mnr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_blockage_mnr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_radar_ext_cond_nok
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_radar_ext_cond_nok");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_radar_ext_cond_nok = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_radar_align_out_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_radar_align_out_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_radar_align_out_range = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_radar_align_not_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_radar_align_not_start");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_radar_align_not_start = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_radar_overheat_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_radar_overheat_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_radar_overheat_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_radar_not_op
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_radar_not_op");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_radar_not_op = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // can_xcvr_operational
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_xcvr_operational");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->can_xcvr_operational = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * custom_msgs__msg__save_radar_can257__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SaveRadarCAN257 */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("custom_msgs.msg._save_radar_can257");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SaveRadarCAN257");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  custom_msgs__msg__SaveRadarCAN257 * ros_message = (custom_msgs__msg__SaveRadarCAN257 *)raw_ros_message;
  {  // can_interference_type
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_interference_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_interference_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_recommend_unconverge
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_recommend_unconverge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_recommend_unconverge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_blockage_sidelobe_filter_val
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_blockage_sidelobe_filter_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_blockage_sidelobe_filter_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_radar_align_incomplete
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_radar_align_incomplete);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_radar_align_incomplete", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_blockage_sidelobe
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_blockage_sidelobe);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_blockage_sidelobe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_blockage_mnr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_blockage_mnr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_blockage_mnr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_radar_ext_cond_nok
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_radar_ext_cond_nok);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_radar_ext_cond_nok", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_radar_align_out_range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_radar_align_out_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_radar_align_out_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_radar_align_not_start
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_radar_align_not_start);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_radar_align_not_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_radar_overheat_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_radar_overheat_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_radar_overheat_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_radar_not_op
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_radar_not_op);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_radar_not_op", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_xcvr_operational
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->can_xcvr_operational);
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_xcvr_operational", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
