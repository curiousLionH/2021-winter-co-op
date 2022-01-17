# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/NiroCAN512.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NiroCAN512(type):
    """Metaclass of message 'NiroCAN512'."""

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
                'custom_msgs.msg.NiroCAN512')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__niro_can512
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__niro_can512
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__niro_can512
            cls._TYPE_SUPPORT = module.type_support_msg__msg__niro_can512
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__niro_can512

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NiroCAN512(metaclass=Metaclass_NiroCAN512):
    """Message class 'NiroCAN512'."""

    __slots__ = [
        '_brk11_35_0',
        '_alivecounter11',
        '_chksum11',
    ]

    _fields_and_field_types = {
        'brk11_35_0': 'uint8',
        'alivecounter11': 'uint8',
        'chksum11': 'uint8',
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
        self.brk11_35_0 = kwargs.get('brk11_35_0', int())
        self.alivecounter11 = kwargs.get('alivecounter11', int())
        self.chksum11 = kwargs.get('chksum11', int())

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
        if self.brk11_35_0 != other.brk11_35_0:
            return False
        if self.alivecounter11 != other.alivecounter11:
            return False
        if self.chksum11 != other.chksum11:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def brk11_35_0(self):
        """Message field 'brk11_35_0'."""
        return self._brk11_35_0

    @brk11_35_0.setter
    def brk11_35_0(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk11_35_0' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk11_35_0' field must be an unsigned integer in [0, 255]"
        self._brk11_35_0 = value

    @property
    def alivecounter11(self):
        """Message field 'alivecounter11'."""
        return self._alivecounter11

    @alivecounter11.setter
    def alivecounter11(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alivecounter11' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alivecounter11' field must be an unsigned integer in [0, 255]"
        self._alivecounter11 = value

    @property
    def chksum11(self):
        """Message field 'chksum11'."""
        return self._chksum11

    @chksum11.setter
    def chksum11(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chksum11' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chksum11' field must be an unsigned integer in [0, 255]"
        self._chksum11 = value
