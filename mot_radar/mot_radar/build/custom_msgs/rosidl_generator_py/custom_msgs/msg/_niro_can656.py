# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/NiroCAN656.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NiroCAN656(type):
    """Metaclass of message 'NiroCAN656'."""

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
                'custom_msgs.msg.NiroCAN656')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__niro_can656
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__niro_can656
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__niro_can656
            cls._TYPE_SUPPORT = module.type_support_msg__msg__niro_can656
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__niro_can656

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NiroCAN656(metaclass=Metaclass_NiroCAN656):
    """Message class 'NiroCAN656'."""

    __slots__ = [
        '_gway_steering_angle',
        '_gway_steering_tq',
        '_gway_steering_status',
    ]

    _fields_and_field_types = {
        'gway_steering_angle': 'float',
        'gway_steering_tq': 'float',
        'gway_steering_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gway_steering_angle = kwargs.get('gway_steering_angle', float())
        self.gway_steering_tq = kwargs.get('gway_steering_tq', float())
        self.gway_steering_status = kwargs.get('gway_steering_status', int())

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
        if self.gway_steering_angle != other.gway_steering_angle:
            return False
        if self.gway_steering_tq != other.gway_steering_tq:
            return False
        if self.gway_steering_status != other.gway_steering_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def gway_steering_angle(self):
        """Message field 'gway_steering_angle'."""
        return self._gway_steering_angle

    @gway_steering_angle.setter
    def gway_steering_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gway_steering_angle' field must be of type 'float'"
        self._gway_steering_angle = value

    @property
    def gway_steering_tq(self):
        """Message field 'gway_steering_tq'."""
        return self._gway_steering_tq

    @gway_steering_tq.setter
    def gway_steering_tq(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gway_steering_tq' field must be of type 'float'"
        self._gway_steering_tq = value

    @property
    def gway_steering_status(self):
        """Message field 'gway_steering_status'."""
        return self._gway_steering_status

    @gway_steering_status.setter
    def gway_steering_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gway_steering_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gway_steering_status' field must be an unsigned integer in [0, 255]"
        self._gway_steering_status = value
