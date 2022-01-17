# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SbgCAN375.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgCAN375(type):
    """Metaclass of message 'SbgCAN375'."""

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
                'custom_msgs.msg.SbgCAN375')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_can375
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_can375
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_can375
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_can375
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_can375

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgCAN375(metaclass=Metaclass_SbgCAN375):
    """Message class 'SbgCAN375'."""

    __slots__ = [
        '_lat_acc',
        '_long_acc',
        '_alt_acc',
        '_base_station_id',
    ]

    _fields_and_field_types = {
        'lat_acc': 'double',
        'long_acc': 'double',
        'alt_acc': 'double',
        'base_station_id': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lat_acc = kwargs.get('lat_acc', float())
        self.long_acc = kwargs.get('long_acc', float())
        self.alt_acc = kwargs.get('alt_acc', float())
        self.base_station_id = kwargs.get('base_station_id', int())

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
        if self.lat_acc != other.lat_acc:
            return False
        if self.long_acc != other.long_acc:
            return False
        if self.alt_acc != other.alt_acc:
            return False
        if self.base_station_id != other.base_station_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lat_acc(self):
        """Message field 'lat_acc'."""
        return self._lat_acc

    @lat_acc.setter
    def lat_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_acc' field must be of type 'float'"
        self._lat_acc = value

    @property
    def long_acc(self):
        """Message field 'long_acc'."""
        return self._long_acc

    @long_acc.setter
    def long_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'long_acc' field must be of type 'float'"
        self._long_acc = value

    @property
    def alt_acc(self):
        """Message field 'alt_acc'."""
        return self._alt_acc

    @alt_acc.setter
    def alt_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alt_acc' field must be of type 'float'"
        self._alt_acc = value

    @property
    def base_station_id(self):
        """Message field 'base_station_id'."""
        return self._base_station_id

    @base_station_id.setter
    def base_station_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'base_station_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'base_station_id' field must be an unsigned integer in [0, 65535]"
        self._base_station_id = value
