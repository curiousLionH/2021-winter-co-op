# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/IMUOut.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IMUOut(type):
    """Metaclass of message 'IMUOut'."""

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
                'custom_msgs.msg.IMUOut')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__imu_out
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__imu_out
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__imu_out
            cls._TYPE_SUPPORT = module.type_support_msg__msg__imu_out
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__imu_out

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IMUOut(metaclass=Metaclass_IMUOut):
    """Message class 'IMUOut'."""

    __slots__ = [
        '_vx',
        '_vy',
        '_vz',
        '_roll_rate',
        '_pitch_rate',
        '_yaw_rate',
        '_ax',
        '_ay',
        '_az',
        '_roll_acc',
        '_pitch_acc',
        '_yaw_acc',
    ]

    _fields_and_field_types = {
        'vx': 'double',
        'vy': 'double',
        'vz': 'double',
        'roll_rate': 'double',
        'pitch_rate': 'double',
        'yaw_rate': 'double',
        'ax': 'double',
        'ay': 'double',
        'az': 'double',
        'roll_acc': 'double',
        'pitch_acc': 'double',
        'yaw_acc': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vx = kwargs.get('vx', float())
        self.vy = kwargs.get('vy', float())
        self.vz = kwargs.get('vz', float())
        self.roll_rate = kwargs.get('roll_rate', float())
        self.pitch_rate = kwargs.get('pitch_rate', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.ax = kwargs.get('ax', float())
        self.ay = kwargs.get('ay', float())
        self.az = kwargs.get('az', float())
        self.roll_acc = kwargs.get('roll_acc', float())
        self.pitch_acc = kwargs.get('pitch_acc', float())
        self.yaw_acc = kwargs.get('yaw_acc', float())

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
        if self.vx != other.vx:
            return False
        if self.vy != other.vy:
            return False
        if self.vz != other.vz:
            return False
        if self.roll_rate != other.roll_rate:
            return False
        if self.pitch_rate != other.pitch_rate:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.ax != other.ax:
            return False
        if self.ay != other.ay:
            return False
        if self.az != other.az:
            return False
        if self.roll_acc != other.roll_acc:
            return False
        if self.pitch_acc != other.pitch_acc:
            return False
        if self.yaw_acc != other.yaw_acc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def vx(self):
        """Message field 'vx'."""
        return self._vx

    @vx.setter
    def vx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx' field must be of type 'float'"
        self._vx = value

    @property
    def vy(self):
        """Message field 'vy'."""
        return self._vy

    @vy.setter
    def vy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy' field must be of type 'float'"
        self._vy = value

    @property
    def vz(self):
        """Message field 'vz'."""
        return self._vz

    @vz.setter
    def vz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vz' field must be of type 'float'"
        self._vz = value

    @property
    def roll_rate(self):
        """Message field 'roll_rate'."""
        return self._roll_rate

    @roll_rate.setter
    def roll_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_rate' field must be of type 'float'"
        self._roll_rate = value

    @property
    def pitch_rate(self):
        """Message field 'pitch_rate'."""
        return self._pitch_rate

    @pitch_rate.setter
    def pitch_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_rate' field must be of type 'float'"
        self._pitch_rate = value

    @property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
        self._yaw_rate = value

    @property
    def ax(self):
        """Message field 'ax'."""
        return self._ax

    @ax.setter
    def ax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ax' field must be of type 'float'"
        self._ax = value

    @property
    def ay(self):
        """Message field 'ay'."""
        return self._ay

    @ay.setter
    def ay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ay' field must be of type 'float'"
        self._ay = value

    @property
    def az(self):
        """Message field 'az'."""
        return self._az

    @az.setter
    def az(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'az' field must be of type 'float'"
        self._az = value

    @property
    def roll_acc(self):
        """Message field 'roll_acc'."""
        return self._roll_acc

    @roll_acc.setter
    def roll_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_acc' field must be of type 'float'"
        self._roll_acc = value

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

    @property
    def yaw_acc(self):
        """Message field 'yaw_acc'."""
        return self._yaw_acc

    @yaw_acc.setter
    def yaw_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_acc' field must be of type 'float'"
        self._yaw_acc = value
