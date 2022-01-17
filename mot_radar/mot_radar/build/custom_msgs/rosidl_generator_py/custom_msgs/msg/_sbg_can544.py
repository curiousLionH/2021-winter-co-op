# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SbgCAN544.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgCAN544(type):
    """Metaclass of message 'SbgCAN544'."""

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
                'custom_msgs.msg.SbgCAN544')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_can544
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_can544
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_can544
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_can544
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_can544

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgCAN544(metaclass=Metaclass_SbgCAN544):
    """Message class 'SbgCAN544'."""

    __slots__ = [
        '_angle_track',
        '_angle_slip',
        '_curvature_radius',
        '_auto_status',
    ]

    _fields_and_field_types = {
        'angle_track': 'double',
        'angle_slip': 'double',
        'curvature_radius': 'double',
        'auto_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.angle_track = kwargs.get('angle_track', float())
        self.angle_slip = kwargs.get('angle_slip', float())
        self.curvature_radius = kwargs.get('curvature_radius', float())
        self.auto_status = kwargs.get('auto_status', int())

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
        if self.angle_track != other.angle_track:
            return False
        if self.angle_slip != other.angle_slip:
            return False
        if self.curvature_radius != other.curvature_radius:
            return False
        if self.auto_status != other.auto_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def angle_track(self):
        """Message field 'angle_track'."""
        return self._angle_track

    @angle_track.setter
    def angle_track(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_track' field must be of type 'float'"
        self._angle_track = value

    @property
    def angle_slip(self):
        """Message field 'angle_slip'."""
        return self._angle_slip

    @angle_slip.setter
    def angle_slip(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_slip' field must be of type 'float'"
        self._angle_slip = value

    @property
    def curvature_radius(self):
        """Message field 'curvature_radius'."""
        return self._curvature_radius

    @curvature_radius.setter
    def curvature_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'curvature_radius' field must be of type 'float'"
        self._curvature_radius = value

    @property
    def auto_status(self):
        """Message field 'auto_status'."""
        return self._auto_status

    @auto_status.setter
    def auto_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auto_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'auto_status' field must be an unsigned integer in [0, 255]"
        self._auto_status = value
