# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SaveCAN1811.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveCAN1811(type):
    """Metaclass of message 'SaveCAN1811'."""

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
                'custom_msgs.msg.SaveCAN1811')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__save_can1811
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__save_can1811
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__save_can1811
            cls._TYPE_SUPPORT = module.type_support_msg__msg__save_can1811
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__save_can1811

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveCAN1811(metaclass=Metaclass_SaveCAN1811):
    """Message class 'SaveCAN1811'."""

    __slots__ = [
        '_lat_accel',
        '_long_accel',
        '_yaw_rate',
        '_brk_cylinder',
    ]

    _fields_and_field_types = {
        'lat_accel': 'float',
        'long_accel': 'float',
        'yaw_rate': 'float',
        'brk_cylinder': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lat_accel = kwargs.get('lat_accel', float())
        self.long_accel = kwargs.get('long_accel', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.brk_cylinder = kwargs.get('brk_cylinder', int())

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
        if self.lat_accel != other.lat_accel:
            return False
        if self.long_accel != other.long_accel:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.brk_cylinder != other.brk_cylinder:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lat_accel(self):
        """Message field 'lat_accel'."""
        return self._lat_accel

    @lat_accel.setter
    def lat_accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_accel' field must be of type 'float'"
        self._lat_accel = value

    @property
    def long_accel(self):
        """Message field 'long_accel'."""
        return self._long_accel

    @long_accel.setter
    def long_accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'long_accel' field must be of type 'float'"
        self._long_accel = value

    @property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
        self._yaw_rate = value

    @property
    def brk_cylinder(self):
        """Message field 'brk_cylinder'."""
        return self._brk_cylinder

    @brk_cylinder.setter
    def brk_cylinder(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk_cylinder' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'brk_cylinder' field must be an unsigned integer in [0, 65535]"
        self._brk_cylinder = value
