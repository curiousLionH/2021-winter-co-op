# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:srv/GetBezier.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetBezier_Request(type):
    """Metaclass of message 'GetBezier_Request'."""

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
                'custom_msgs.srv.GetBezier_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_bezier__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_bezier__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_bezier__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_bezier__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_bezier__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetBezier_Request(metaclass=Metaclass_GetBezier_Request):
    """Message class 'GetBezier_Request'."""

    __slots__ = [
        '_direction',
        '_distance1',
        '_distance2',
        '_distance3',
    ]

    _fields_and_field_types = {
        'direction': 'int16',
        'distance1': 'double',
        'distance2': 'double',
        'distance3': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.direction = kwargs.get('direction', int())
        self.distance1 = kwargs.get('distance1', float())
        self.distance2 = kwargs.get('distance2', float())
        self.distance3 = kwargs.get('distance3', float())

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
        if self.direction != other.direction:
            return False
        if self.distance1 != other.distance1:
            return False
        if self.distance2 != other.distance2:
            return False
        if self.distance3 != other.distance3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def direction(self):
        """Message field 'direction'."""
        return self._direction

    @direction.setter
    def direction(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'direction' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'direction' field must be an integer in [-32768, 32767]"
        self._direction = value

    @property
    def distance1(self):
        """Message field 'distance1'."""
        return self._distance1

    @distance1.setter
    def distance1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance1' field must be of type 'float'"
        self._distance1 = value

    @property
    def distance2(self):
        """Message field 'distance2'."""
        return self._distance2

    @distance2.setter
    def distance2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance2' field must be of type 'float'"
        self._distance2 = value

    @property
    def distance3(self):
        """Message field 'distance3'."""
        return self._distance3

    @distance3.setter
    def distance3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance3' field must be of type 'float'"
        self._distance3 = value


# Import statements for member types

# Member 'path1_x'
# Member 'path1_y'
# Member 'path2_x'
# Member 'path2_y'
# Member 'path3_x'
# Member 'path3_y'
import array  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetBezier_Response(type):
    """Metaclass of message 'GetBezier_Response'."""

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
                'custom_msgs.srv.GetBezier_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_bezier__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_bezier__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_bezier__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_bezier__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_bezier__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetBezier_Response(metaclass=Metaclass_GetBezier_Response):
    """Message class 'GetBezier_Response'."""

    __slots__ = [
        '_path1_x',
        '_path1_y',
        '_path2_x',
        '_path2_y',
        '_path3_x',
        '_path3_y',
    ]

    _fields_and_field_types = {
        'path1_x': 'sequence<double>',
        'path1_y': 'sequence<double>',
        'path2_x': 'sequence<double>',
        'path2_y': 'sequence<double>',
        'path3_x': 'sequence<double>',
        'path3_y': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.path1_x = array.array('d', kwargs.get('path1_x', []))
        self.path1_y = array.array('d', kwargs.get('path1_y', []))
        self.path2_x = array.array('d', kwargs.get('path2_x', []))
        self.path2_y = array.array('d', kwargs.get('path2_y', []))
        self.path3_x = array.array('d', kwargs.get('path3_x', []))
        self.path3_y = array.array('d', kwargs.get('path3_y', []))

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
        if self.path1_x != other.path1_x:
            return False
        if self.path1_y != other.path1_y:
            return False
        if self.path2_x != other.path2_x:
            return False
        if self.path2_y != other.path2_y:
            return False
        if self.path3_x != other.path3_x:
            return False
        if self.path3_y != other.path3_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def path1_x(self):
        """Message field 'path1_x'."""
        return self._path1_x

    @path1_x.setter
    def path1_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'path1_x' array.array() must have the type code of 'd'"
            self._path1_x = value
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
                "The 'path1_x' field must be a set or sequence and each value of type 'float'"
        self._path1_x = array.array('d', value)

    @property
    def path1_y(self):
        """Message field 'path1_y'."""
        return self._path1_y

    @path1_y.setter
    def path1_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'path1_y' array.array() must have the type code of 'd'"
            self._path1_y = value
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
                "The 'path1_y' field must be a set or sequence and each value of type 'float'"
        self._path1_y = array.array('d', value)

    @property
    def path2_x(self):
        """Message field 'path2_x'."""
        return self._path2_x

    @path2_x.setter
    def path2_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'path2_x' array.array() must have the type code of 'd'"
            self._path2_x = value
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
                "The 'path2_x' field must be a set or sequence and each value of type 'float'"
        self._path2_x = array.array('d', value)

    @property
    def path2_y(self):
        """Message field 'path2_y'."""
        return self._path2_y

    @path2_y.setter
    def path2_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'path2_y' array.array() must have the type code of 'd'"
            self._path2_y = value
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
                "The 'path2_y' field must be a set or sequence and each value of type 'float'"
        self._path2_y = array.array('d', value)

    @property
    def path3_x(self):
        """Message field 'path3_x'."""
        return self._path3_x

    @path3_x.setter
    def path3_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'path3_x' array.array() must have the type code of 'd'"
            self._path3_x = value
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
                "The 'path3_x' field must be a set or sequence and each value of type 'float'"
        self._path3_x = array.array('d', value)

    @property
    def path3_y(self):
        """Message field 'path3_y'."""
        return self._path3_y

    @path3_y.setter
    def path3_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'path3_y' array.array() must have the type code of 'd'"
            self._path3_y = value
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
                "The 'path3_y' field must be a set or sequence and each value of type 'float'"
        self._path3_y = array.array('d', value)


class Metaclass_GetBezier(type):
    """Metaclass of service 'GetBezier'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('custom_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_msgs.srv.GetBezier')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_bezier

            from custom_msgs.srv import _get_bezier
            if _get_bezier.Metaclass_GetBezier_Request._TYPE_SUPPORT is None:
                _get_bezier.Metaclass_GetBezier_Request.__import_type_support__()
            if _get_bezier.Metaclass_GetBezier_Response._TYPE_SUPPORT is None:
                _get_bezier.Metaclass_GetBezier_Response.__import_type_support__()


class GetBezier(metaclass=Metaclass_GetBezier):
    from custom_msgs.srv._get_bezier import GetBezier_Request as Request
    from custom_msgs.srv._get_bezier import GetBezier_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
