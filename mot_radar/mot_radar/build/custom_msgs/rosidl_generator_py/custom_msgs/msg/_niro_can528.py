# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/NiroCAN528.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NiroCAN528(type):
    """Metaclass of message 'NiroCAN528'."""

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
                'custom_msgs.msg.NiroCAN528')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__niro_can528
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__niro_can528
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__niro_can528
            cls._TYPE_SUPPORT = module.type_support_msg__msg__niro_can528
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__niro_can528

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NiroCAN528(metaclass=Metaclass_NiroCAN528):
    """Message class 'NiroCAN528'."""

    __slots__ = [
        '_pa_enable',
        '_pa_strangcmd',
    ]

    _fields_and_field_types = {
        'pa_enable': 'uint8',
        'pa_strangcmd': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.pa_enable = kwargs.get('pa_enable', int())
        self.pa_strangcmd = kwargs.get('pa_strangcmd', float())

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
        if self.pa_enable != other.pa_enable:
            return False
        if self.pa_strangcmd != other.pa_strangcmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def pa_enable(self):
        """Message field 'pa_enable'."""
        return self._pa_enable

    @pa_enable.setter
    def pa_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pa_enable' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pa_enable' field must be an unsigned integer in [0, 255]"
        self._pa_enable = value

    @property
    def pa_strangcmd(self):
        """Message field 'pa_strangcmd'."""
        return self._pa_strangcmd

    @pa_strangcmd.setter
    def pa_strangcmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pa_strangcmd' field must be of type 'float'"
        self._pa_strangcmd = value
