# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SaveCAN1812.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveCAN1812(type):
    """Metaclass of message 'SaveCAN1812'."""

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
                'custom_msgs.msg.SaveCAN1812')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__save_can1812
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__save_can1812
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__save_can1812
            cls._TYPE_SUPPORT = module.type_support_msg__msg__save_can1812
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__save_can1812

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveCAN1812(metaclass=Metaclass_SaveCAN1812):
    """Message class 'SaveCAN1812'."""

    __slots__ = [
        '_rad_objstate',
        '_rad_objlatpos',
        '_rad_objdist',
        '_rad_objrelspd',
    ]

    _fields_and_field_types = {
        'rad_objstate': 'uint8',
        'rad_objlatpos': 'float',
        'rad_objdist': 'uint8',
        'rad_objrelspd': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rad_objstate = kwargs.get('rad_objstate', int())
        self.rad_objlatpos = kwargs.get('rad_objlatpos', float())
        self.rad_objdist = kwargs.get('rad_objdist', int())
        self.rad_objrelspd = kwargs.get('rad_objrelspd', float())

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
        if self.rad_objstate != other.rad_objstate:
            return False
        if self.rad_objlatpos != other.rad_objlatpos:
            return False
        if self.rad_objdist != other.rad_objdist:
            return False
        if self.rad_objrelspd != other.rad_objrelspd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def rad_objstate(self):
        """Message field 'rad_objstate'."""
        return self._rad_objstate

    @rad_objstate.setter
    def rad_objstate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rad_objstate' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rad_objstate' field must be an unsigned integer in [0, 255]"
        self._rad_objstate = value

    @property
    def rad_objlatpos(self):
        """Message field 'rad_objlatpos'."""
        return self._rad_objlatpos

    @rad_objlatpos.setter
    def rad_objlatpos(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rad_objlatpos' field must be of type 'float'"
        self._rad_objlatpos = value

    @property
    def rad_objdist(self):
        """Message field 'rad_objdist'."""
        return self._rad_objdist

    @rad_objdist.setter
    def rad_objdist(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rad_objdist' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rad_objdist' field must be an unsigned integer in [0, 255]"
        self._rad_objdist = value

    @property
    def rad_objrelspd(self):
        """Message field 'rad_objrelspd'."""
        return self._rad_objrelspd

    @rad_objrelspd.setter
    def rad_objrelspd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rad_objrelspd' field must be of type 'float'"
        self._rad_objrelspd = value
