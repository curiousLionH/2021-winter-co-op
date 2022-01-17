# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SaveRadarCAN32.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveRadarCAN32(type):
    """Metaclass of message 'SaveRadarCAN32'."""

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
                'custom_msgs.msg.SaveRadarCAN32')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__save_radar_can32
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__save_radar_can32
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__save_radar_can32
            cls._TYPE_SUPPORT = module.type_support_msg__msg__save_radar_can32
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__save_radar_can32

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveRadarCAN32(metaclass=Metaclass_SaveRadarCAN32):
    """Message class 'SaveRadarCAN32'."""

    __slots__ = [
        '_can_vehicle_stat',
        '_can_day_night_status',
        '_can_wiper_status',
        '_can_yaw_rate_validity',
        '_can_yaw_rate',
        '_can_vehicle_speed_validity',
        '_can_vehicle_speed_direction',
        '_can_vehicle_speed',
    ]

    _fields_and_field_types = {
        'can_vehicle_stat': 'double',
        'can_day_night_status': 'double',
        'can_wiper_status': 'double',
        'can_yaw_rate_validity': 'double',
        'can_yaw_rate': 'double',
        'can_vehicle_speed_validity': 'double',
        'can_vehicle_speed_direction': 'double',
        'can_vehicle_speed': 'double',
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.can_vehicle_stat = kwargs.get('can_vehicle_stat', float())
        self.can_day_night_status = kwargs.get('can_day_night_status', float())
        self.can_wiper_status = kwargs.get('can_wiper_status', float())
        self.can_yaw_rate_validity = kwargs.get('can_yaw_rate_validity', float())
        self.can_yaw_rate = kwargs.get('can_yaw_rate', float())
        self.can_vehicle_speed_validity = kwargs.get('can_vehicle_speed_validity', float())
        self.can_vehicle_speed_direction = kwargs.get('can_vehicle_speed_direction', float())
        self.can_vehicle_speed = kwargs.get('can_vehicle_speed', float())

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
        if self.can_vehicle_stat != other.can_vehicle_stat:
            return False
        if self.can_day_night_status != other.can_day_night_status:
            return False
        if self.can_wiper_status != other.can_wiper_status:
            return False
        if self.can_yaw_rate_validity != other.can_yaw_rate_validity:
            return False
        if self.can_yaw_rate != other.can_yaw_rate:
            return False
        if self.can_vehicle_speed_validity != other.can_vehicle_speed_validity:
            return False
        if self.can_vehicle_speed_direction != other.can_vehicle_speed_direction:
            return False
        if self.can_vehicle_speed != other.can_vehicle_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def can_vehicle_stat(self):
        """Message field 'can_vehicle_stat'."""
        return self._can_vehicle_stat

    @can_vehicle_stat.setter
    def can_vehicle_stat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_vehicle_stat' field must be of type 'float'"
        self._can_vehicle_stat = value

    @property
    def can_day_night_status(self):
        """Message field 'can_day_night_status'."""
        return self._can_day_night_status

    @can_day_night_status.setter
    def can_day_night_status(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_day_night_status' field must be of type 'float'"
        self._can_day_night_status = value

    @property
    def can_wiper_status(self):
        """Message field 'can_wiper_status'."""
        return self._can_wiper_status

    @can_wiper_status.setter
    def can_wiper_status(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_wiper_status' field must be of type 'float'"
        self._can_wiper_status = value

    @property
    def can_yaw_rate_validity(self):
        """Message field 'can_yaw_rate_validity'."""
        return self._can_yaw_rate_validity

    @can_yaw_rate_validity.setter
    def can_yaw_rate_validity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_yaw_rate_validity' field must be of type 'float'"
        self._can_yaw_rate_validity = value

    @property
    def can_yaw_rate(self):
        """Message field 'can_yaw_rate'."""
        return self._can_yaw_rate

    @can_yaw_rate.setter
    def can_yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_yaw_rate' field must be of type 'float'"
        self._can_yaw_rate = value

    @property
    def can_vehicle_speed_validity(self):
        """Message field 'can_vehicle_speed_validity'."""
        return self._can_vehicle_speed_validity

    @can_vehicle_speed_validity.setter
    def can_vehicle_speed_validity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_vehicle_speed_validity' field must be of type 'float'"
        self._can_vehicle_speed_validity = value

    @property
    def can_vehicle_speed_direction(self):
        """Message field 'can_vehicle_speed_direction'."""
        return self._can_vehicle_speed_direction

    @can_vehicle_speed_direction.setter
    def can_vehicle_speed_direction(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_vehicle_speed_direction' field must be of type 'float'"
        self._can_vehicle_speed_direction = value

    @property
    def can_vehicle_speed(self):
        """Message field 'can_vehicle_speed'."""
        return self._can_vehicle_speed

    @can_vehicle_speed.setter
    def can_vehicle_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_vehicle_speed' field must be of type 'float'"
        self._can_vehicle_speed = value
