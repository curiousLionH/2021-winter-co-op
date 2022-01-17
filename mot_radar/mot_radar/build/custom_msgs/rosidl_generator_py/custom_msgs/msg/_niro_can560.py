# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/NiroCAN560.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NiroCAN560(type):
    """Metaclass of message 'NiroCAN560'."""

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
                'custom_msgs.msg.NiroCAN560')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__niro_can560
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__niro_can560
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__niro_can560
            cls._TYPE_SUPPORT = module.type_support_msg__msg__niro_can560
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__niro_can560

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NiroCAN560(metaclass=Metaclass_NiroCAN560):
    """Message class 'NiroCAN560'."""

    __slots__ = [
        '_brk22_i',
        '_brk22_mode_b',
        '_brk22_1_15',
        '_brk22_areq1',
        '_brk22_1_35',
        '_brk22_areq2',
        '_alivecounter22',
        '_chksum22',
    ]

    _fields_and_field_types = {
        'brk22_i': 'uint8',
        'brk22_mode_b': 'uint8',
        'brk22_1_15': 'uint8',
        'brk22_areq1': 'float',
        'brk22_1_35': 'uint8',
        'brk22_areq2': 'float',
        'alivecounter22': 'uint8',
        'chksum22': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brk22_i = kwargs.get('brk22_i', int())
        self.brk22_mode_b = kwargs.get('brk22_mode_b', int())
        self.brk22_1_15 = kwargs.get('brk22_1_15', int())
        self.brk22_areq1 = kwargs.get('brk22_areq1', float())
        self.brk22_1_35 = kwargs.get('brk22_1_35', int())
        self.brk22_areq2 = kwargs.get('brk22_areq2', float())
        self.alivecounter22 = kwargs.get('alivecounter22', int())
        self.chksum22 = kwargs.get('chksum22', int())

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
        if self.brk22_i != other.brk22_i:
            return False
        if self.brk22_mode_b != other.brk22_mode_b:
            return False
        if self.brk22_1_15 != other.brk22_1_15:
            return False
        if self.brk22_areq1 != other.brk22_areq1:
            return False
        if self.brk22_1_35 != other.brk22_1_35:
            return False
        if self.brk22_areq2 != other.brk22_areq2:
            return False
        if self.alivecounter22 != other.alivecounter22:
            return False
        if self.chksum22 != other.chksum22:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def brk22_i(self):
        """Message field 'brk22_i'."""
        return self._brk22_i

    @brk22_i.setter
    def brk22_i(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk22_i' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk22_i' field must be an unsigned integer in [0, 255]"
        self._brk22_i = value

    @property
    def brk22_mode_b(self):
        """Message field 'brk22_mode_b'."""
        return self._brk22_mode_b

    @brk22_mode_b.setter
    def brk22_mode_b(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk22_mode_b' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk22_mode_b' field must be an unsigned integer in [0, 255]"
        self._brk22_mode_b = value

    @property
    def brk22_1_15(self):
        """Message field 'brk22_1_15'."""
        return self._brk22_1_15

    @brk22_1_15.setter
    def brk22_1_15(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk22_1_15' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk22_1_15' field must be an unsigned integer in [0, 255]"
        self._brk22_1_15 = value

    @property
    def brk22_areq1(self):
        """Message field 'brk22_areq1'."""
        return self._brk22_areq1

    @brk22_areq1.setter
    def brk22_areq1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brk22_areq1' field must be of type 'float'"
        self._brk22_areq1 = value

    @property
    def brk22_1_35(self):
        """Message field 'brk22_1_35'."""
        return self._brk22_1_35

    @brk22_1_35.setter
    def brk22_1_35(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk22_1_35' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk22_1_35' field must be an unsigned integer in [0, 255]"
        self._brk22_1_35 = value

    @property
    def brk22_areq2(self):
        """Message field 'brk22_areq2'."""
        return self._brk22_areq2

    @brk22_areq2.setter
    def brk22_areq2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brk22_areq2' field must be of type 'float'"
        self._brk22_areq2 = value

    @property
    def alivecounter22(self):
        """Message field 'alivecounter22'."""
        return self._alivecounter22

    @alivecounter22.setter
    def alivecounter22(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alivecounter22' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alivecounter22' field must be an unsigned integer in [0, 255]"
        self._alivecounter22 = value

    @property
    def chksum22(self):
        """Message field 'chksum22'."""
        return self._chksum22

    @chksum22.setter
    def chksum22(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chksum22' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chksum22' field must be an unsigned integer in [0, 255]"
        self._chksum22 = value
