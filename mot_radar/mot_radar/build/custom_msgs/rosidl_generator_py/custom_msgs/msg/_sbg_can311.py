# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SbgCAN311.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgCAN311(type):
    """Metaclass of message 'SbgCAN311'."""

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
                'custom_msgs.msg.SbgCAN311')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_can311
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_can311
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_can311
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_can311
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_can311

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgCAN311(metaclass=Metaclass_SbgCAN311):
    """Message class 'SbgCAN311'."""

    __slots__ = [
        '_velocity_n',
        '_velocity_e',
        '_velocity_d',
    ]

    _fields_and_field_types = {
        'velocity_n': 'double',
        'velocity_e': 'double',
        'velocity_d': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.velocity_n = kwargs.get('velocity_n', float())
        self.velocity_e = kwargs.get('velocity_e', float())
        self.velocity_d = kwargs.get('velocity_d', float())

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
        if self.velocity_n != other.velocity_n:
            return False
        if self.velocity_e != other.velocity_e:
            return False
        if self.velocity_d != other.velocity_d:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def velocity_n(self):
        """Message field 'velocity_n'."""
        return self._velocity_n

    @velocity_n.setter
    def velocity_n(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_n' field must be of type 'float'"
        self._velocity_n = value

    @property
    def velocity_e(self):
        """Message field 'velocity_e'."""
        return self._velocity_e

    @velocity_e.setter
    def velocity_e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_e' field must be of type 'float'"
        self._velocity_e = value

    @property
    def velocity_d(self):
        """Message field 'velocity_d'."""
        return self._velocity_d

    @velocity_d.setter
    def velocity_d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_d' field must be of type 'float'"
        self._velocity_d = value
