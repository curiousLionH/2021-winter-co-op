# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/NiroCAN1569.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NiroCAN1569(type):
    """Metaclass of message 'NiroCAN1569'."""

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
                'custom_msgs.msg.NiroCAN1569')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__niro_can1569
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__niro_can1569
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__niro_can1569
            cls._TYPE_SUPPORT = module.type_support_msg__msg__niro_can1569
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__niro_can1569

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NiroCAN1569(metaclass=Metaclass_NiroCAN1569):
    """Message class 'NiroCAN1569'."""

    __slots__ = [
        '_yyyy',
        '_mm',
        '_dd',
        '_hh',
        '_nn',
        '_ss',
    ]

    _fields_and_field_types = {
        'yyyy': 'uint16',
        'mm': 'uint16',
        'dd': 'uint16',
        'hh': 'uint16',
        'nn': 'uint16',
        'ss': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.yyyy = kwargs.get('yyyy', int())
        self.mm = kwargs.get('mm', int())
        self.dd = kwargs.get('dd', int())
        self.hh = kwargs.get('hh', int())
        self.nn = kwargs.get('nn', int())
        self.ss = kwargs.get('ss', int())

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
        if self.yyyy != other.yyyy:
            return False
        if self.mm != other.mm:
            return False
        if self.dd != other.dd:
            return False
        if self.hh != other.hh:
            return False
        if self.nn != other.nn:
            return False
        if self.ss != other.ss:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def yyyy(self):
        """Message field 'yyyy'."""
        return self._yyyy

    @yyyy.setter
    def yyyy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yyyy' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'yyyy' field must be an unsigned integer in [0, 65535]"
        self._yyyy = value

    @property
    def mm(self):
        """Message field 'mm'."""
        return self._mm

    @mm.setter
    def mm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'mm' field must be an unsigned integer in [0, 65535]"
        self._mm = value

    @property
    def dd(self):
        """Message field 'dd'."""
        return self._dd

    @dd.setter
    def dd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dd' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'dd' field must be an unsigned integer in [0, 65535]"
        self._dd = value

    @property
    def hh(self):
        """Message field 'hh'."""
        return self._hh

    @hh.setter
    def hh(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hh' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'hh' field must be an unsigned integer in [0, 65535]"
        self._hh = value

    @property
    def nn(self):
        """Message field 'nn'."""
        return self._nn

    @nn.setter
    def nn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nn' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'nn' field must be an unsigned integer in [0, 65535]"
        self._nn = value

    @property
    def ss(self):
        """Message field 'ss'."""
        return self._ss

    @ss.setter
    def ss(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ss' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ss' field must be an unsigned integer in [0, 65535]"
        self._ss = value
