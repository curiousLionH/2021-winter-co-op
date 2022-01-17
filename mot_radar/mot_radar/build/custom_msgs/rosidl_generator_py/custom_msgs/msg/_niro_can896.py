# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/NiroCAN896.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NiroCAN896(type):
    """Metaclass of message 'NiroCAN896'."""

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
                'custom_msgs.msg.NiroCAN896')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__niro_can896
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__niro_can896
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__niro_can896
            cls._TYPE_SUPPORT = module.type_support_msg__msg__niro_can896
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__niro_can896

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NiroCAN896(metaclass=Metaclass_NiroCAN896):
    """Message class 'NiroCAN896'."""

    __slots__ = [
        '_brk23_3_0',
        '_brk23_1_3',
        '_brk23_2_12',
    ]

    _fields_and_field_types = {
        'brk23_3_0': 'uint8',
        'brk23_1_3': 'uint8',
        'brk23_2_12': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.brk23_3_0 = kwargs.get('brk23_3_0', int())
        self.brk23_1_3 = kwargs.get('brk23_1_3', int())
        self.brk23_2_12 = kwargs.get('brk23_2_12', int())

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
        if self.brk23_3_0 != other.brk23_3_0:
            return False
        if self.brk23_1_3 != other.brk23_1_3:
            return False
        if self.brk23_2_12 != other.brk23_2_12:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def brk23_3_0(self):
        """Message field 'brk23_3_0'."""
        return self._brk23_3_0

    @brk23_3_0.setter
    def brk23_3_0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk23_3_0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk23_3_0' field must be an unsigned integer in [0, 255]"
        self._brk23_3_0 = value

    @property
    def brk23_1_3(self):
        """Message field 'brk23_1_3'."""
        return self._brk23_1_3

    @brk23_1_3.setter
    def brk23_1_3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk23_1_3' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk23_1_3' field must be an unsigned integer in [0, 255]"
        self._brk23_1_3 = value

    @property
    def brk23_2_12(self):
        """Message field 'brk23_2_12'."""
        return self._brk23_2_12

    @brk23_2_12.setter
    def brk23_2_12(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk23_2_12' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk23_2_12' field must be an unsigned integer in [0, 255]"
        self._brk23_2_12 = value
