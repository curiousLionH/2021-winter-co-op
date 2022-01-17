# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/VehicleCANmain.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleCANmain(type):
    """Metaclass of message 'VehicleCANmain'."""

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
                'custom_msgs.msg.VehicleCANmain')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_ca_nmain
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_ca_nmain
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_ca_nmain
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_ca_nmain
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_ca_nmain

            from custom_msgs.msg import SaveCAN1808
            if SaveCAN1808.__class__._TYPE_SUPPORT is None:
                SaveCAN1808.__class__.__import_type_support__()

            from custom_msgs.msg import SaveCAN1809
            if SaveCAN1809.__class__._TYPE_SUPPORT is None:
                SaveCAN1809.__class__.__import_type_support__()

            from custom_msgs.msg import SaveCAN1810
            if SaveCAN1810.__class__._TYPE_SUPPORT is None:
                SaveCAN1810.__class__.__import_type_support__()

            from custom_msgs.msg import SaveCAN1811
            if SaveCAN1811.__class__._TYPE_SUPPORT is None:
                SaveCAN1811.__class__.__import_type_support__()

            from custom_msgs.msg import SaveCAN1812
            if SaveCAN1812.__class__._TYPE_SUPPORT is None:
                SaveCAN1812.__class__.__import_type_support__()

            from custom_msgs.msg import SaveCAN342
            if SaveCAN342.__class__._TYPE_SUPPORT is None:
                SaveCAN342.__class__.__import_type_support__()

            from custom_msgs.msg import SaveCAN343
            if SaveCAN343.__class__._TYPE_SUPPORT is None:
                SaveCAN343.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleCANmain(metaclass=Metaclass_VehicleCANmain):
    """Message class 'VehicleCANmain'."""

    __slots__ = [
        '_eait_control_01',
        '_eait_control_02',
        '_eait_info_eps',
        '_eait_info_acc',
        '_eait_info_spd',
        '_eait_info_imu',
        '_eait_info_rad',
    ]

    _fields_and_field_types = {
        'eait_control_01': 'custom_msgs/SaveCAN342',
        'eait_control_02': 'custom_msgs/SaveCAN343',
        'eait_info_eps': 'custom_msgs/SaveCAN1808',
        'eait_info_acc': 'custom_msgs/SaveCAN1809',
        'eait_info_spd': 'custom_msgs/SaveCAN1810',
        'eait_info_imu': 'custom_msgs/SaveCAN1811',
        'eait_info_rad': 'custom_msgs/SaveCAN1812',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'SaveCAN342'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'SaveCAN343'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'SaveCAN1808'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'SaveCAN1809'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'SaveCAN1810'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'SaveCAN1811'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'SaveCAN1812'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from custom_msgs.msg import SaveCAN342
        self.eait_control_01 = kwargs.get('eait_control_01', SaveCAN342())
        from custom_msgs.msg import SaveCAN343
        self.eait_control_02 = kwargs.get('eait_control_02', SaveCAN343())
        from custom_msgs.msg import SaveCAN1808
        self.eait_info_eps = kwargs.get('eait_info_eps', SaveCAN1808())
        from custom_msgs.msg import SaveCAN1809
        self.eait_info_acc = kwargs.get('eait_info_acc', SaveCAN1809())
        from custom_msgs.msg import SaveCAN1810
        self.eait_info_spd = kwargs.get('eait_info_spd', SaveCAN1810())
        from custom_msgs.msg import SaveCAN1811
        self.eait_info_imu = kwargs.get('eait_info_imu', SaveCAN1811())
        from custom_msgs.msg import SaveCAN1812
        self.eait_info_rad = kwargs.get('eait_info_rad', SaveCAN1812())

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
        if self.eait_control_01 != other.eait_control_01:
            return False
        if self.eait_control_02 != other.eait_control_02:
            return False
        if self.eait_info_eps != other.eait_info_eps:
            return False
        if self.eait_info_acc != other.eait_info_acc:
            return False
        if self.eait_info_spd != other.eait_info_spd:
            return False
        if self.eait_info_imu != other.eait_info_imu:
            return False
        if self.eait_info_rad != other.eait_info_rad:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def eait_control_01(self):
        """Message field 'eait_control_01'."""
        return self._eait_control_01

    @eait_control_01.setter
    def eait_control_01(self, value):
        if __debug__:
            from custom_msgs.msg import SaveCAN342
            assert \
                isinstance(value, SaveCAN342), \
                "The 'eait_control_01' field must be a sub message of type 'SaveCAN342'"
        self._eait_control_01 = value

    @property
    def eait_control_02(self):
        """Message field 'eait_control_02'."""
        return self._eait_control_02

    @eait_control_02.setter
    def eait_control_02(self, value):
        if __debug__:
            from custom_msgs.msg import SaveCAN343
            assert \
                isinstance(value, SaveCAN343), \
                "The 'eait_control_02' field must be a sub message of type 'SaveCAN343'"
        self._eait_control_02 = value

    @property
    def eait_info_eps(self):
        """Message field 'eait_info_eps'."""
        return self._eait_info_eps

    @eait_info_eps.setter
    def eait_info_eps(self, value):
        if __debug__:
            from custom_msgs.msg import SaveCAN1808
            assert \
                isinstance(value, SaveCAN1808), \
                "The 'eait_info_eps' field must be a sub message of type 'SaveCAN1808'"
        self._eait_info_eps = value

    @property
    def eait_info_acc(self):
        """Message field 'eait_info_acc'."""
        return self._eait_info_acc

    @eait_info_acc.setter
    def eait_info_acc(self, value):
        if __debug__:
            from custom_msgs.msg import SaveCAN1809
            assert \
                isinstance(value, SaveCAN1809), \
                "The 'eait_info_acc' field must be a sub message of type 'SaveCAN1809'"
        self._eait_info_acc = value

    @property
    def eait_info_spd(self):
        """Message field 'eait_info_spd'."""
        return self._eait_info_spd

    @eait_info_spd.setter
    def eait_info_spd(self, value):
        if __debug__:
            from custom_msgs.msg import SaveCAN1810
            assert \
                isinstance(value, SaveCAN1810), \
                "The 'eait_info_spd' field must be a sub message of type 'SaveCAN1810'"
        self._eait_info_spd = value

    @property
    def eait_info_imu(self):
        """Message field 'eait_info_imu'."""
        return self._eait_info_imu

    @eait_info_imu.setter
    def eait_info_imu(self, value):
        if __debug__:
            from custom_msgs.msg import SaveCAN1811
            assert \
                isinstance(value, SaveCAN1811), \
                "The 'eait_info_imu' field must be a sub message of type 'SaveCAN1811'"
        self._eait_info_imu = value

    @property
    def eait_info_rad(self):
        """Message field 'eait_info_rad'."""
        return self._eait_info_rad

    @eait_info_rad.setter
    def eait_info_rad(self, value):
        if __debug__:
            from custom_msgs.msg import SaveCAN1812
            assert \
                isinstance(value, SaveCAN1812), \
                "The 'eait_info_rad' field must be a sub message of type 'SaveCAN1812'"
        self._eait_info_rad = value
