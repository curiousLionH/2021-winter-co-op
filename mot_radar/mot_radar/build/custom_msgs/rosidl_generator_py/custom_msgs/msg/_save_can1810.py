# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SaveCAN1810.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveCAN1810(type):
    """Metaclass of message 'SaveCAN1810'."""

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
                'custom_msgs.msg.SaveCAN1810')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__save_can1810
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__save_can1810
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__save_can1810
            cls._TYPE_SUPPORT = module.type_support_msg__msg__save_can1810
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__save_can1810

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveCAN1810(metaclass=Metaclass_SaveCAN1810):
    """Message class 'SaveCAN1810'."""

    __slots__ = [
        '_wheel_spd_fr',
        '_wheel_spd_fl',
        '_wheel_spd_rr',
        '_wheel_spd_rl',
    ]

    _fields_and_field_types = {
        'wheel_spd_fr': 'float',
        'wheel_spd_fl': 'float',
        'wheel_spd_rr': 'float',
        'wheel_spd_rl': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.wheel_spd_fr = kwargs.get('wheel_spd_fr', float())
        self.wheel_spd_fl = kwargs.get('wheel_spd_fl', float())
        self.wheel_spd_rr = kwargs.get('wheel_spd_rr', float())
        self.wheel_spd_rl = kwargs.get('wheel_spd_rl', float())

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
        if self.wheel_spd_fr != other.wheel_spd_fr:
            return False
        if self.wheel_spd_fl != other.wheel_spd_fl:
            return False
        if self.wheel_spd_rr != other.wheel_spd_rr:
            return False
        if self.wheel_spd_rl != other.wheel_spd_rl:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def wheel_spd_fr(self):
        """Message field 'wheel_spd_fr'."""
        return self._wheel_spd_fr

    @wheel_spd_fr.setter
    def wheel_spd_fr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_spd_fr' field must be of type 'float'"
        self._wheel_spd_fr = value

    @property
    def wheel_spd_fl(self):
        """Message field 'wheel_spd_fl'."""
        return self._wheel_spd_fl

    @wheel_spd_fl.setter
    def wheel_spd_fl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_spd_fl' field must be of type 'float'"
        self._wheel_spd_fl = value

    @property
    def wheel_spd_rr(self):
        """Message field 'wheel_spd_rr'."""
        return self._wheel_spd_rr

    @wheel_spd_rr.setter
    def wheel_spd_rr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_spd_rr' field must be of type 'float'"
        self._wheel_spd_rr = value

    @property
    def wheel_spd_rl(self):
        """Message field 'wheel_spd_rl'."""
        return self._wheel_spd_rl

    @wheel_spd_rl.setter
    def wheel_spd_rl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_spd_rl' field must be of type 'float'"
        self._wheel_spd_rl = value
