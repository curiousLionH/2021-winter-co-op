# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/NiroCAN544.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NiroCAN544(type):
    """Metaclass of message 'NiroCAN544'."""

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
                'custom_msgs.msg.NiroCAN544')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__niro_can544
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__niro_can544
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__niro_can544
            cls._TYPE_SUPPORT = module.type_support_msg__msg__niro_can544
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__niro_can544

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NiroCAN544(metaclass=Metaclass_NiroCAN544):
    """Message class 'NiroCAN544'."""

    __slots__ = [
        '_brk21_mode_a',
        '_brk21_3_1',
        '_alivecounter21',
        '_brk21_8_8',
        '_brk21_1_16',
        '_brk21_2_17',
        '_brk21_3_19',
        '_brk21_2_22',
        '_brk21_9_24',
        '_brk21_11_33',
        '_brk21_12_44',
        '_brk21_8_56',
    ]

    _fields_and_field_types = {
        'brk21_mode_a': 'uint8',
        'brk21_3_1': 'uint8',
        'alivecounter21': 'uint8',
        'brk21_8_8': 'uint8',
        'brk21_1_16': 'uint8',
        'brk21_2_17': 'uint8',
        'brk21_3_19': 'uint8',
        'brk21_2_22': 'uint8',
        'brk21_9_24': 'uint8',
        'brk21_11_33': 'uint8',
        'brk21_12_44': 'uint8',
        'brk21_8_56': 'uint8',
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
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brk21_mode_a = kwargs.get('brk21_mode_a', int())
        self.brk21_3_1 = kwargs.get('brk21_3_1', int())
        self.alivecounter21 = kwargs.get('alivecounter21', int())
        self.brk21_8_8 = kwargs.get('brk21_8_8', int())
        self.brk21_1_16 = kwargs.get('brk21_1_16', int())
        self.brk21_2_17 = kwargs.get('brk21_2_17', int())
        self.brk21_3_19 = kwargs.get('brk21_3_19', int())
        self.brk21_2_22 = kwargs.get('brk21_2_22', int())
        self.brk21_9_24 = kwargs.get('brk21_9_24', int())
        self.brk21_11_33 = kwargs.get('brk21_11_33', int())
        self.brk21_12_44 = kwargs.get('brk21_12_44', int())
        self.brk21_8_56 = kwargs.get('brk21_8_56', int())

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
        if self.brk21_mode_a != other.brk21_mode_a:
            return False
        if self.brk21_3_1 != other.brk21_3_1:
            return False
        if self.alivecounter21 != other.alivecounter21:
            return False
        if self.brk21_8_8 != other.brk21_8_8:
            return False
        if self.brk21_1_16 != other.brk21_1_16:
            return False
        if self.brk21_2_17 != other.brk21_2_17:
            return False
        if self.brk21_3_19 != other.brk21_3_19:
            return False
        if self.brk21_2_22 != other.brk21_2_22:
            return False
        if self.brk21_9_24 != other.brk21_9_24:
            return False
        if self.brk21_11_33 != other.brk21_11_33:
            return False
        if self.brk21_12_44 != other.brk21_12_44:
            return False
        if self.brk21_8_56 != other.brk21_8_56:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def brk21_mode_a(self):
        """Message field 'brk21_mode_a'."""
        return self._brk21_mode_a

    @brk21_mode_a.setter
    def brk21_mode_a(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk21_mode_a' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk21_mode_a' field must be an unsigned integer in [0, 255]"
        self._brk21_mode_a = value

    @property
    def brk21_3_1(self):
        """Message field 'brk21_3_1'."""
        return self._brk21_3_1

    @brk21_3_1.setter
    def brk21_3_1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk21_3_1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk21_3_1' field must be an unsigned integer in [0, 255]"
        self._brk21_3_1 = value

    @property
    def alivecounter21(self):
        """Message field 'alivecounter21'."""
        return self._alivecounter21

    @alivecounter21.setter
    def alivecounter21(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alivecounter21' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alivecounter21' field must be an unsigned integer in [0, 255]"
        self._alivecounter21 = value

    @property
    def brk21_8_8(self):
        """Message field 'brk21_8_8'."""
        return self._brk21_8_8

    @brk21_8_8.setter
    def brk21_8_8(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk21_8_8' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk21_8_8' field must be an unsigned integer in [0, 255]"
        self._brk21_8_8 = value

    @property
    def brk21_1_16(self):
        """Message field 'brk21_1_16'."""
        return self._brk21_1_16

    @brk21_1_16.setter
    def brk21_1_16(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk21_1_16' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk21_1_16' field must be an unsigned integer in [0, 255]"
        self._brk21_1_16 = value

    @property
    def brk21_2_17(self):
        """Message field 'brk21_2_17'."""
        return self._brk21_2_17

    @brk21_2_17.setter
    def brk21_2_17(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk21_2_17' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk21_2_17' field must be an unsigned integer in [0, 255]"
        self._brk21_2_17 = value

    @property
    def brk21_3_19(self):
        """Message field 'brk21_3_19'."""
        return self._brk21_3_19

    @brk21_3_19.setter
    def brk21_3_19(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk21_3_19' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk21_3_19' field must be an unsigned integer in [0, 255]"
        self._brk21_3_19 = value

    @property
    def brk21_2_22(self):
        """Message field 'brk21_2_22'."""
        return self._brk21_2_22

    @brk21_2_22.setter
    def brk21_2_22(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk21_2_22' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk21_2_22' field must be an unsigned integer in [0, 255]"
        self._brk21_2_22 = value

    @property
    def brk21_9_24(self):
        """Message field 'brk21_9_24'."""
        return self._brk21_9_24

    @brk21_9_24.setter
    def brk21_9_24(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk21_9_24' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk21_9_24' field must be an unsigned integer in [0, 255]"
        self._brk21_9_24 = value

    @property
    def brk21_11_33(self):
        """Message field 'brk21_11_33'."""
        return self._brk21_11_33

    @brk21_11_33.setter
    def brk21_11_33(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk21_11_33' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk21_11_33' field must be an unsigned integer in [0, 255]"
        self._brk21_11_33 = value

    @property
    def brk21_12_44(self):
        """Message field 'brk21_12_44'."""
        return self._brk21_12_44

    @brk21_12_44.setter
    def brk21_12_44(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk21_12_44' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk21_12_44' field must be an unsigned integer in [0, 255]"
        self._brk21_12_44 = value

    @property
    def brk21_8_56(self):
        """Message field 'brk21_8_56'."""
        return self._brk21_8_56

    @brk21_8_56.setter
    def brk21_8_56(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk21_8_56' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk21_8_56' field must be an unsigned integer in [0, 255]"
        self._brk21_8_56 = value
