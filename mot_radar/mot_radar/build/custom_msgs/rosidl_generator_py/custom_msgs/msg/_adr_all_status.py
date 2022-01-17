# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/AdrAllStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AdrAllStatus(type):
    """Metaclass of message 'AdrAllStatus'."""

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
                'custom_msgs.msg.AdrAllStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__adr_all_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__adr_all_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__adr_all_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__adr_all_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__adr_all_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AdrAllStatus(metaclass=Metaclass_AdrAllStatus):
    """Message class 'AdrAllStatus'."""

    __slots__ = [
        '_lidar_status',
        '_ins_status',
        '_acc_status',
        '_eps_status',
        '_safety_warning_status',
        '_rtk_status',
        '_lane_keeping_status',
        '_local_waypoint_status',
    ]

    _fields_and_field_types = {
        'lidar_status': 'boolean',
        'ins_status': 'boolean',
        'acc_status': 'boolean',
        'eps_status': 'boolean',
        'safety_warning_status': 'boolean',
        'rtk_status': 'boolean',
        'lane_keeping_status': 'boolean',
        'local_waypoint_status': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lidar_status = kwargs.get('lidar_status', bool())
        self.ins_status = kwargs.get('ins_status', bool())
        self.acc_status = kwargs.get('acc_status', bool())
        self.eps_status = kwargs.get('eps_status', bool())
        self.safety_warning_status = kwargs.get('safety_warning_status', bool())
        self.rtk_status = kwargs.get('rtk_status', bool())
        self.lane_keeping_status = kwargs.get('lane_keeping_status', bool())
        self.local_waypoint_status = kwargs.get('local_waypoint_status', bool())

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
        if self.lidar_status != other.lidar_status:
            return False
        if self.ins_status != other.ins_status:
            return False
        if self.acc_status != other.acc_status:
            return False
        if self.eps_status != other.eps_status:
            return False
        if self.safety_warning_status != other.safety_warning_status:
            return False
        if self.rtk_status != other.rtk_status:
            return False
        if self.lane_keeping_status != other.lane_keeping_status:
            return False
        if self.local_waypoint_status != other.local_waypoint_status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def lidar_status(self):
        """Message field 'lidar_status'."""
        return self._lidar_status

    @lidar_status.setter
    def lidar_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lidar_status' field must be of type 'bool'"
        self._lidar_status = value

    @property
    def ins_status(self):
        """Message field 'ins_status'."""
        return self._ins_status

    @ins_status.setter
    def ins_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ins_status' field must be of type 'bool'"
        self._ins_status = value

    @property
    def acc_status(self):
        """Message field 'acc_status'."""
        return self._acc_status

    @acc_status.setter
    def acc_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acc_status' field must be of type 'bool'"
        self._acc_status = value

    @property
    def eps_status(self):
        """Message field 'eps_status'."""
        return self._eps_status

    @eps_status.setter
    def eps_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eps_status' field must be of type 'bool'"
        self._eps_status = value

    @property
    def safety_warning_status(self):
        """Message field 'safety_warning_status'."""
        return self._safety_warning_status

    @safety_warning_status.setter
    def safety_warning_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safety_warning_status' field must be of type 'bool'"
        self._safety_warning_status = value

    @property
    def rtk_status(self):
        """Message field 'rtk_status'."""
        return self._rtk_status

    @rtk_status.setter
    def rtk_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rtk_status' field must be of type 'bool'"
        self._rtk_status = value

    @property
    def lane_keeping_status(self):
        """Message field 'lane_keeping_status'."""
        return self._lane_keeping_status

    @lane_keeping_status.setter
    def lane_keeping_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'lane_keeping_status' field must be of type 'bool'"
        self._lane_keeping_status = value

    @property
    def local_waypoint_status(self):
        """Message field 'local_waypoint_status'."""
        return self._local_waypoint_status

    @local_waypoint_status.setter
    def local_waypoint_status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_waypoint_status' field must be of type 'bool'"
        self._local_waypoint_status = value
