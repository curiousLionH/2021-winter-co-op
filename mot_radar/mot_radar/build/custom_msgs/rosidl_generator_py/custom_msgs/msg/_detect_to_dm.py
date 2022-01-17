# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/DetectToDM.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetectToDM(type):
    """Metaclass of message 'DetectToDM'."""

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
                'custom_msgs.msg.DetectToDM')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__detect_to_dm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__detect_to_dm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__detect_to_dm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__detect_to_dm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__detect_to_dm

            from custom_msgs.msg import Object
            if Object.__class__._TYPE_SUPPORT is None:
                Object.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetectToDM(metaclass=Metaclass_DetectToDM):
    """Message class 'DetectToDM'."""

    __slots__ = [
        '_objects_cur',
        '_objects_left',
        '_objects_right',
        '_objects_inter',
        '_objects_inter_left',
    ]

    _fields_and_field_types = {
        'objects_cur': 'sequence<custom_msgs/Object>',
        'objects_left': 'sequence<custom_msgs/Object>',
        'objects_right': 'sequence<custom_msgs/Object>',
        'objects_inter': 'sequence<custom_msgs/Object>',
        'objects_inter_left': 'sequence<custom_msgs/Object>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.objects_cur = kwargs.get('objects_cur', [])
        self.objects_left = kwargs.get('objects_left', [])
        self.objects_right = kwargs.get('objects_right', [])
        self.objects_inter = kwargs.get('objects_inter', [])
        self.objects_inter_left = kwargs.get('objects_inter_left', [])

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
        if self.objects_cur != other.objects_cur:
            return False
        if self.objects_left != other.objects_left:
            return False
        if self.objects_right != other.objects_right:
            return False
        if self.objects_inter != other.objects_inter:
            return False
        if self.objects_inter_left != other.objects_inter_left:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def objects_cur(self):
        """Message field 'objects_cur'."""
        return self._objects_cur

    @objects_cur.setter
    def objects_cur(self, value):
        if __debug__:
            from custom_msgs.msg import Object
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
                 all(isinstance(v, Object) for v in value) and
                 True), \
                "The 'objects_cur' field must be a set or sequence and each value of type 'Object'"
        self._objects_cur = value

    @property
    def objects_left(self):
        """Message field 'objects_left'."""
        return self._objects_left

    @objects_left.setter
    def objects_left(self, value):
        if __debug__:
            from custom_msgs.msg import Object
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
                 all(isinstance(v, Object) for v in value) and
                 True), \
                "The 'objects_left' field must be a set or sequence and each value of type 'Object'"
        self._objects_left = value

    @property
    def objects_right(self):
        """Message field 'objects_right'."""
        return self._objects_right

    @objects_right.setter
    def objects_right(self, value):
        if __debug__:
            from custom_msgs.msg import Object
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
                 all(isinstance(v, Object) for v in value) and
                 True), \
                "The 'objects_right' field must be a set or sequence and each value of type 'Object'"
        self._objects_right = value

    @property
    def objects_inter(self):
        """Message field 'objects_inter'."""
        return self._objects_inter

    @objects_inter.setter
    def objects_inter(self, value):
        if __debug__:
            from custom_msgs.msg import Object
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
                 all(isinstance(v, Object) for v in value) and
                 True), \
                "The 'objects_inter' field must be a set or sequence and each value of type 'Object'"
        self._objects_inter = value

    @property
    def objects_inter_left(self):
        """Message field 'objects_inter_left'."""
        return self._objects_inter_left

    @objects_inter_left.setter
    def objects_inter_left(self, value):
        if __debug__:
            from custom_msgs.msg import Object
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
                 all(isinstance(v, Object) for v in value) and
                 True), \
                "The 'objects_inter_left' field must be a set or sequence and each value of type 'Object'"
        self._objects_inter_left = value
