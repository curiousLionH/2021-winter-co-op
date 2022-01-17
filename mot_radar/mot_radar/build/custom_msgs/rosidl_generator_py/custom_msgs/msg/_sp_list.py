# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SpList.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'x_sp'
# Member 'x_sp_eps'
# Member 'y_sp'
# Member 'y_sp_eps'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpList(type):
    """Metaclass of message 'SpList'."""

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
                'custom_msgs.msg.SpList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sp_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sp_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sp_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sp_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sp_list

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpList(metaclass=Metaclass_SpList):
    """Message class 'SpList'."""

    __slots__ = [
        '_x_sp',
        '_x_sp_eps',
        '_y_sp',
        '_y_sp_eps',
    ]

    _fields_and_field_types = {
        'x_sp': 'sequence<double>',
        'x_sp_eps': 'sequence<double>',
        'y_sp': 'sequence<double>',
        'y_sp_eps': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_sp = array.array('d', kwargs.get('x_sp', []))
        self.x_sp_eps = array.array('d', kwargs.get('x_sp_eps', []))
        self.y_sp = array.array('d', kwargs.get('y_sp', []))
        self.y_sp_eps = array.array('d', kwargs.get('y_sp_eps', []))

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
        if self.x_sp != other.x_sp:
            return False
        if self.x_sp_eps != other.x_sp_eps:
            return False
        if self.y_sp != other.y_sp:
            return False
        if self.y_sp_eps != other.y_sp_eps:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x_sp(self):
        """Message field 'x_sp'."""
        return self._x_sp

    @x_sp.setter
    def x_sp(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'x_sp' array.array() must have the type code of 'd'"
            self._x_sp = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'x_sp' field must be a set or sequence and each value of type 'float'"
        self._x_sp = array.array('d', value)

    @property
    def x_sp_eps(self):
        """Message field 'x_sp_eps'."""
        return self._x_sp_eps

    @x_sp_eps.setter
    def x_sp_eps(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'x_sp_eps' array.array() must have the type code of 'd'"
            self._x_sp_eps = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'x_sp_eps' field must be a set or sequence and each value of type 'float'"
        self._x_sp_eps = array.array('d', value)

    @property
    def y_sp(self):
        """Message field 'y_sp'."""
        return self._y_sp

    @y_sp.setter
    def y_sp(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'y_sp' array.array() must have the type code of 'd'"
            self._y_sp = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'y_sp' field must be a set or sequence and each value of type 'float'"
        self._y_sp = array.array('d', value)

    @property
    def y_sp_eps(self):
        """Message field 'y_sp_eps'."""
        return self._y_sp_eps

    @y_sp_eps.setter
    def y_sp_eps(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'y_sp_eps' array.array() must have the type code of 'd'"
            self._y_sp_eps = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'y_sp_eps' field must be a set or sequence and each value of type 'float'"
        self._y_sp_eps = array.array('d', value)
