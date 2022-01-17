# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SaveCAN343.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveCAN343(type):
    """Metaclass of message 'SaveCAN343'."""

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
                'custom_msgs.msg.SaveCAN343')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__save_can343
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__save_can343
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__save_can343
            cls._TYPE_SUPPORT = module.type_support_msg__msg__save_can343
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__save_can343

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveCAN343(metaclass=Metaclass_SaveCAN343):
    """Message class 'SaveCAN343'."""

    __slots__ = [
        '_eps_cmd',
        '_acc_cmd',
    ]

    _fields_and_field_types = {
        'eps_cmd': 'float',
        'acc_cmd': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.eps_cmd = kwargs.get('eps_cmd', float())
        self.acc_cmd = kwargs.get('acc_cmd', float())

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
        if self.eps_cmd != other.eps_cmd:
            return False
        if self.acc_cmd != other.acc_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def eps_cmd(self):
        """Message field 'eps_cmd'."""
        return self._eps_cmd

    @eps_cmd.setter
    def eps_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eps_cmd' field must be of type 'float'"
        self._eps_cmd = value

    @property
    def acc_cmd(self):
        """Message field 'acc_cmd'."""
        return self._acc_cmd

    @acc_cmd.setter
    def acc_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_cmd' field must be of type 'float'"
        self._acc_cmd = value
