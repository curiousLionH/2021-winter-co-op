# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SaveRadarCAN315.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveRadarCAN315(type):
    """Metaclass of message 'SaveRadarCAN315'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msgs.msg.SaveRadarCAN315')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__save_radar_can315
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__save_radar_can315
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__save_radar_can315
            cls._TYPE_SUPPORT = module.type_support_msg__msg__save_radar_can315
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__save_radar_can315

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveRadarCAN315(metaclass=Metaclass_SaveRadarCAN315):
    """Message class 'SaveRadarCAN315'."""

    __slots__ = [
        '_can_det_confid_azimuth',
        '_can_det_super_res_target',
        '_can_det_nd_target',
        '_can_det_host_veh_clutter',
        '_can_det_valid_level',
        '_can_det_azimuth',
        '_can_det_range',
        '_can_det_range_rate',
        '_can_det_amplitude',
        '_can_scan_index_2lsb',
    ]

    _fields_and_field_types = {
        'can_det_confid_azimuth': 'double',
        'can_det_super_res_target': 'double',
        'can_det_nd_target': 'double',
        'can_det_host_veh_clutter': 'double',
        'can_det_valid_level': 'double',
        'can_det_azimuth': 'double',
        'can_det_range': 'double',
        'can_det_range_rate': 'double',
        'can_det_amplitude': 'double',
        'can_scan_index_2lsb': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.can_det_confid_azimuth = kwargs.get('can_det_confid_azimuth', float())
        self.can_det_super_res_target = kwargs.get('can_det_super_res_target', float())
        self.can_det_nd_target = kwargs.get('can_det_nd_target', float())
        self.can_det_host_veh_clutter = kwargs.get('can_det_host_veh_clutter', float())
        self.can_det_valid_level = kwargs.get('can_det_valid_level', float())
        self.can_det_azimuth = kwargs.get('can_det_azimuth', float())
        self.can_det_range = kwargs.get('can_det_range', float())
        self.can_det_range_rate = kwargs.get('can_det_range_rate', float())
        self.can_det_amplitude = kwargs.get('can_det_amplitude', float())
        self.can_scan_index_2lsb = kwargs.get('can_scan_index_2lsb', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.can_det_confid_azimuth != other.can_det_confid_azimuth:
            return False
        if self.can_det_super_res_target != other.can_det_super_res_target:
            return False
        if self.can_det_nd_target != other.can_det_nd_target:
            return False
        if self.can_det_host_veh_clutter != other.can_det_host_veh_clutter:
            return False
        if self.can_det_valid_level != other.can_det_valid_level:
            return False
        if self.can_det_azimuth != other.can_det_azimuth:
            return False
        if self.can_det_range != other.can_det_range:
            return False
        if self.can_det_range_rate != other.can_det_range_rate:
            return False
        if self.can_det_amplitude != other.can_det_amplitude:
            return False
        if self.can_scan_index_2lsb != other.can_scan_index_2lsb:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def can_det_confid_azimuth(self):
        """Message field 'can_det_confid_azimuth'."""
        return self._can_det_confid_azimuth

    @can_det_confid_azimuth.setter
    def can_det_confid_azimuth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_det_confid_azimuth' field must be of type 'float'"
        self._can_det_confid_azimuth = value

    @property
    def can_det_super_res_target(self):
        """Message field 'can_det_super_res_target'."""
        return self._can_det_super_res_target

    @can_det_super_res_target.setter
    def can_det_super_res_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_det_super_res_target' field must be of type 'float'"
        self._can_det_super_res_target = value

    @property
    def can_det_nd_target(self):
        """Message field 'can_det_nd_target'."""
        return self._can_det_nd_target

    @can_det_nd_target.setter
    def can_det_nd_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_det_nd_target' field must be of type 'float'"
        self._can_det_nd_target = value

    @property
    def can_det_host_veh_clutter(self):
        """Message field 'can_det_host_veh_clutter'."""
        return self._can_det_host_veh_clutter

    @can_det_host_veh_clutter.setter
    def can_det_host_veh_clutter(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_det_host_veh_clutter' field must be of type 'float'"
        self._can_det_host_veh_clutter = value

    @property
    def can_det_valid_level(self):
        """Message field 'can_det_valid_level'."""
        return self._can_det_valid_level

    @can_det_valid_level.setter
    def can_det_valid_level(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_det_valid_level' field must be of type 'float'"
        self._can_det_valid_level = value

    @property
    def can_det_azimuth(self):
        """Message field 'can_det_azimuth'."""
        return self._can_det_azimuth

    @can_det_azimuth.setter
    def can_det_azimuth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_det_azimuth' field must be of type 'float'"
        self._can_det_azimuth = value

    @property
    def can_det_range(self):
        """Message field 'can_det_range'."""
        return self._can_det_range

    @can_det_range.setter
    def can_det_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_det_range' field must be of type 'float'"
        self._can_det_range = value

    @property
    def can_det_range_rate(self):
        """Message field 'can_det_range_rate'."""
        return self._can_det_range_rate

    @can_det_range_rate.setter
    def can_det_range_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_det_range_rate' field must be of type 'float'"
        self._can_det_range_rate = value

    @property
    def can_det_amplitude(self):
        """Message field 'can_det_amplitude'."""
        return self._can_det_amplitude

    @can_det_amplitude.setter
    def can_det_amplitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_det_amplitude' field must be of type 'float'"
        self._can_det_amplitude = value

    @property
    def can_scan_index_2lsb(self):
        """Message field 'can_scan_index_2lsb'."""
        return self._can_scan_index_2lsb

    @can_scan_index_2lsb.setter
    def can_scan_index_2lsb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_scan_index_2lsb' field must be of type 'float'"
        self._can_scan_index_2lsb = value
