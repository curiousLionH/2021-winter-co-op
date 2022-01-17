# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/NiroCAN272.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NiroCAN272(type):
    """Metaclass of message 'NiroCAN272'."""

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
                'custom_msgs.msg.NiroCAN272')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__niro_can272
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__niro_can272
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__niro_can272
            cls._TYPE_SUPPORT = module.type_support_msg__msg__niro_can272
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__niro_can272

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NiroCAN272(metaclass=Metaclass_NiroCAN272):
    """Message class 'NiroCAN272'."""

    __slots__ = [
        '_sft_p',
        '_sft_r',
        '_sft_n',
        '_sft_d',
        '_sft_p_reversed',
        '_sft_r_reversed',
        '_sft_n_reversed',
        '_sft_d_reversed',
        '_sft_ctl_en',
    ]

    _fields_and_field_types = {
        'sft_p': 'uint8',
        'sft_r': 'uint8',
        'sft_n': 'uint8',
        'sft_d': 'uint8',
        'sft_p_reversed': 'uint8',
        'sft_r_reversed': 'uint8',
        'sft_n_reversed': 'uint8',
        'sft_d_reversed': 'uint8',
        'sft_ctl_en': 'uint8',
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
        self.sft_p = kwargs.get('sft_p', int())
        self.sft_r = kwargs.get('sft_r', int())
        self.sft_n = kwargs.get('sft_n', int())
        self.sft_d = kwargs.get('sft_d', int())
        self.sft_p_reversed = kwargs.get('sft_p_reversed', int())
        self.sft_r_reversed = kwargs.get('sft_r_reversed', int())
        self.sft_n_reversed = kwargs.get('sft_n_reversed', int())
        self.sft_d_reversed = kwargs.get('sft_d_reversed', int())
        self.sft_ctl_en = kwargs.get('sft_ctl_en', int())

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
        if self.sft_p != other.sft_p:
            return False
        if self.sft_r != other.sft_r:
            return False
        if self.sft_n != other.sft_n:
            return False
        if self.sft_d != other.sft_d:
            return False
        if self.sft_p_reversed != other.sft_p_reversed:
            return False
        if self.sft_r_reversed != other.sft_r_reversed:
            return False
        if self.sft_n_reversed != other.sft_n_reversed:
            return False
        if self.sft_d_reversed != other.sft_d_reversed:
            return False
        if self.sft_ctl_en != other.sft_ctl_en:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sft_p(self):
        """Message field 'sft_p'."""
        return self._sft_p

    @sft_p.setter
    def sft_p(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sft_p' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sft_p' field must be an unsigned integer in [0, 255]"
        self._sft_p = value

    @property
    def sft_r(self):
        """Message field 'sft_r'."""
        return self._sft_r

    @sft_r.setter
    def sft_r(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sft_r' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sft_r' field must be an unsigned integer in [0, 255]"
        self._sft_r = value

    @property
    def sft_n(self):
        """Message field 'sft_n'."""
        return self._sft_n

    @sft_n.setter
    def sft_n(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sft_n' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sft_n' field must be an unsigned integer in [0, 255]"
        self._sft_n = value

    @property
    def sft_d(self):
        """Message field 'sft_d'."""
        return self._sft_d

    @sft_d.setter
    def sft_d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sft_d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sft_d' field must be an unsigned integer in [0, 255]"
        self._sft_d = value

    @property
    def sft_p_reversed(self):
        """Message field 'sft_p_reversed'."""
        return self._sft_p_reversed

    @sft_p_reversed.setter
    def sft_p_reversed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sft_p_reversed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sft_p_reversed' field must be an unsigned integer in [0, 255]"
        self._sft_p_reversed = value

    @property
    def sft_r_reversed(self):
        """Message field 'sft_r_reversed'."""
        return self._sft_r_reversed

    @sft_r_reversed.setter
    def sft_r_reversed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sft_r_reversed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sft_r_reversed' field must be an unsigned integer in [0, 255]"
        self._sft_r_reversed = value

    @property
    def sft_n_reversed(self):
        """Message field 'sft_n_reversed'."""
        return self._sft_n_reversed

    @sft_n_reversed.setter
    def sft_n_reversed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sft_n_reversed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sft_n_reversed' field must be an unsigned integer in [0, 255]"
        self._sft_n_reversed = value

    @property
    def sft_d_reversed(self):
        """Message field 'sft_d_reversed'."""
        return self._sft_d_reversed

    @sft_d_reversed.setter
    def sft_d_reversed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sft_d_reversed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sft_d_reversed' field must be an unsigned integer in [0, 255]"
        self._sft_d_reversed = value

    @property
    def sft_ctl_en(self):
        """Message field 'sft_ctl_en'."""
        return self._sft_ctl_en

    @sft_ctl_en.setter
    def sft_ctl_en(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sft_ctl_en' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sft_ctl_en' field must be an unsigned integer in [0, 255]"
        self._sft_ctl_en = value
