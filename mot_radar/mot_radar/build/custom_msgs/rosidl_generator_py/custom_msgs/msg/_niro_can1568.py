# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/NiroCAN1568.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NiroCAN1568(type):
    """Metaclass of message 'NiroCAN1568'."""

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
                'custom_msgs.msg.NiroCAN1568')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__niro_can1568
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__niro_can1568
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__niro_can1568
            cls._TYPE_SUPPORT = module.type_support_msg__msg__niro_can1568
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__niro_can1568

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NiroCAN1568(metaclass=Metaclass_NiroCAN1568):
    """Message class 'NiroCAN1568'."""

    __slots__ = [
        '_str_status',
        '_str_time_remain',
        '_left_status',
        '_left_time_remain',
        '_ped1_status',
        '_ped1_time_remain',
        '_ped2_status',
        '_ped2_time_remain',
    ]

    _fields_and_field_types = {
        'str_status': 'uint16',
        'str_time_remain': 'float',
        'left_status': 'uint16',
        'left_time_remain': 'float',
        'ped1_status': 'uint16',
        'ped1_time_remain': 'float',
        'ped2_status': 'uint16',
        'ped2_time_remain': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.str_status = kwargs.get('str_status', int())
        self.str_time_remain = kwargs.get('str_time_remain', float())
        self.left_status = kwargs.get('left_status', int())
        self.left_time_remain = kwargs.get('left_time_remain', float())
        self.ped1_status = kwargs.get('ped1_status', int())
        self.ped1_time_remain = kwargs.get('ped1_time_remain', float())
        self.ped2_status = kwargs.get('ped2_status', int())
        self.ped2_time_remain = kwargs.get('ped2_time_remain', float())

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
        if self.str_status != other.str_status:
            return False
        if self.str_time_remain != other.str_time_remain:
            return False
        if self.left_status != other.left_status:
            return False
        if self.left_time_remain != other.left_time_remain:
            return False
        if self.ped1_status != other.ped1_status:
            return False
        if self.ped1_time_remain != other.ped1_time_remain:
            return False
        if self.ped2_status != other.ped2_status:
            return False
        if self.ped2_time_remain != other.ped2_time_remain:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def str_status(self):
        """Message field 'str_status'."""
        return self._str_status

    @str_status.setter
    def str_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'str_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'str_status' field must be an unsigned integer in [0, 65535]"
        self._str_status = value

    @property
    def str_time_remain(self):
        """Message field 'str_time_remain'."""
        return self._str_time_remain

    @str_time_remain.setter
    def str_time_remain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'str_time_remain' field must be of type 'float'"
        self._str_time_remain = value

    @property
    def left_status(self):
        """Message field 'left_status'."""
        return self._left_status

    @left_status.setter
    def left_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'left_status' field must be an unsigned integer in [0, 65535]"
        self._left_status = value

    @property
    def left_time_remain(self):
        """Message field 'left_time_remain'."""
        return self._left_time_remain

    @left_time_remain.setter
    def left_time_remain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_time_remain' field must be of type 'float'"
        self._left_time_remain = value

    @property
    def ped1_status(self):
        """Message field 'ped1_status'."""
        return self._ped1_status

    @ped1_status.setter
    def ped1_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ped1_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ped1_status' field must be an unsigned integer in [0, 65535]"
        self._ped1_status = value

    @property
    def ped1_time_remain(self):
        """Message field 'ped1_time_remain'."""
        return self._ped1_time_remain

    @ped1_time_remain.setter
    def ped1_time_remain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ped1_time_remain' field must be of type 'float'"
        self._ped1_time_remain = value

    @property
    def ped2_status(self):
        """Message field 'ped2_status'."""
        return self._ped2_status

    @ped2_status.setter
    def ped2_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ped2_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'ped2_status' field must be an unsigned integer in [0, 65535]"
        self._ped2_status = value

    @property
    def ped2_time_remain(self):
        """Message field 'ped2_time_remain'."""
        return self._ped2_time_remain

    @ped2_time_remain.setter
    def ped2_time_remain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ped2_time_remain' field must be of type 'float'"
        self._ped2_time_remain = value
