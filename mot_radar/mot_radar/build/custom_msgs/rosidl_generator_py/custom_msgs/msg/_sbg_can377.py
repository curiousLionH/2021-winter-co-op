# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SbgCAN377.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgCAN377(type):
    """Metaclass of message 'SbgCAN377'."""

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
                'custom_msgs.msg.SbgCAN377')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_can377
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_can377
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_can377
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_can377
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_can377

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgCAN377(metaclass=Metaclass_SbgCAN377):
    """Message class 'SbgCAN377'."""

    __slots__ = [
        '_true_heading',
        '_true_heading_acc',
        '_pitch',
        '_pitch_acc',
    ]

    _fields_and_field_types = {
        'true_heading': 'double',
        'true_heading_acc': 'double',
        'pitch': 'double',
        'pitch_acc': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.true_heading = kwargs.get('true_heading', float())
        self.true_heading_acc = kwargs.get('true_heading_acc', float())
        self.pitch = kwargs.get('pitch', float())
        self.pitch_acc = kwargs.get('pitch_acc', float())

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
        if self.true_heading != other.true_heading:
            return False
        if self.true_heading_acc != other.true_heading_acc:
            return False
        if self.pitch != other.pitch:
            return False
        if self.pitch_acc != other.pitch_acc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def true_heading(self):
        """Message field 'true_heading'."""
        return self._true_heading

    @true_heading.setter
    def true_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'true_heading' field must be of type 'float'"
        self._true_heading = value

    @property
    def true_heading_acc(self):
        """Message field 'true_heading_acc'."""
        return self._true_heading_acc

    @true_heading_acc.setter
    def true_heading_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'true_heading_acc' field must be of type 'float'"
        self._true_heading_acc = value

    @property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
        self._pitch = value

    @property
    def pitch_acc(self):
        """Message field 'pitch_acc'."""
        return self._pitch_acc

    @pitch_acc.setter
    def pitch_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_acc' field must be of type 'float'"
        self._pitch_acc = value
