# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/NiroCAN576.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NiroCAN576(type):
    """Metaclass of message 'NiroCAN576'."""

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
                'custom_msgs.msg.NiroCAN576')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__niro_can576
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__niro_can576
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__niro_can576
            cls._TYPE_SUPPORT = module.type_support_msg__msg__niro_can576
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__niro_can576

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NiroCAN576(metaclass=Metaclass_NiroCAN576):
    """Message class 'NiroCAN576'."""

    __slots__ = [
        '_brk24_6_0',
        '_brk24_6_6',
        '_brk24_7_12',
        '_brk24_7_19',
        '_brk24_mode_c',
        '_brk24_3_39',
        '_alivecounter24',
        '_chksum24',
        '_brk24_8_56',
    ]

    _fields_and_field_types = {
        'brk24_6_0': 'uint8',
        'brk24_6_6': 'uint8',
        'brk24_7_12': 'uint8',
        'brk24_7_19': 'uint8',
        'brk24_mode_c': 'uint8',
        'brk24_3_39': 'uint8',
        'alivecounter24': 'uint8',
        'chksum24': 'uint8',
        'brk24_8_56': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brk24_6_0 = kwargs.get('brk24_6_0', int())
        self.brk24_6_6 = kwargs.get('brk24_6_6', int())
        self.brk24_7_12 = kwargs.get('brk24_7_12', int())
        self.brk24_7_19 = kwargs.get('brk24_7_19', int())
        self.brk24_mode_c = kwargs.get('brk24_mode_c', int())
        self.brk24_3_39 = kwargs.get('brk24_3_39', int())
        self.alivecounter24 = kwargs.get('alivecounter24', int())
        self.chksum24 = kwargs.get('chksum24', int())
        self.brk24_8_56 = kwargs.get('brk24_8_56', int())

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
        if self.brk24_6_0 != other.brk24_6_0:
            return False
        if self.brk24_6_6 != other.brk24_6_6:
            return False
        if self.brk24_7_12 != other.brk24_7_12:
            return False
        if self.brk24_7_19 != other.brk24_7_19:
            return False
        if self.brk24_mode_c != other.brk24_mode_c:
            return False
        if self.brk24_3_39 != other.brk24_3_39:
            return False
        if self.alivecounter24 != other.alivecounter24:
            return False
        if self.chksum24 != other.chksum24:
            return False
        if self.brk24_8_56 != other.brk24_8_56:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def brk24_6_0(self):
        """Message field 'brk24_6_0'."""
        return self._brk24_6_0

    @brk24_6_0.setter
    def brk24_6_0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk24_6_0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk24_6_0' field must be an unsigned integer in [0, 255]"
        self._brk24_6_0 = value

    @property
    def brk24_6_6(self):
        """Message field 'brk24_6_6'."""
        return self._brk24_6_6

    @brk24_6_6.setter
    def brk24_6_6(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk24_6_6' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk24_6_6' field must be an unsigned integer in [0, 255]"
        self._brk24_6_6 = value

    @property
    def brk24_7_12(self):
        """Message field 'brk24_7_12'."""
        return self._brk24_7_12

    @brk24_7_12.setter
    def brk24_7_12(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk24_7_12' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk24_7_12' field must be an unsigned integer in [0, 255]"
        self._brk24_7_12 = value

    @property
    def brk24_7_19(self):
        """Message field 'brk24_7_19'."""
        return self._brk24_7_19

    @brk24_7_19.setter
    def brk24_7_19(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk24_7_19' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk24_7_19' field must be an unsigned integer in [0, 255]"
        self._brk24_7_19 = value

    @property
    def brk24_mode_c(self):
        """Message field 'brk24_mode_c'."""
        return self._brk24_mode_c

    @brk24_mode_c.setter
    def brk24_mode_c(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk24_mode_c' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk24_mode_c' field must be an unsigned integer in [0, 255]"
        self._brk24_mode_c = value

    @property
    def brk24_3_39(self):
        """Message field 'brk24_3_39'."""
        return self._brk24_3_39

    @brk24_3_39.setter
    def brk24_3_39(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk24_3_39' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk24_3_39' field must be an unsigned integer in [0, 255]"
        self._brk24_3_39 = value

    @property
    def alivecounter24(self):
        """Message field 'alivecounter24'."""
        return self._alivecounter24

    @alivecounter24.setter
    def alivecounter24(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alivecounter24' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alivecounter24' field must be an unsigned integer in [0, 255]"
        self._alivecounter24 = value

    @property
    def chksum24(self):
        """Message field 'chksum24'."""
        return self._chksum24

    @chksum24.setter
    def chksum24(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chksum24' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chksum24' field must be an unsigned integer in [0, 255]"
        self._chksum24 = value

    @property
    def brk24_8_56(self):
        """Message field 'brk24_8_56'."""
        return self._brk24_8_56

    @brk24_8_56.setter
    def brk24_8_56(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk24_8_56' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk24_8_56' field must be an unsigned integer in [0, 255]"
        self._brk24_8_56 = value
