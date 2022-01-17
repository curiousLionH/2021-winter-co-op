# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SaveCAN1809.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveCAN1809(type):
    """Metaclass of message 'SaveCAN1809'."""

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
                'custom_msgs.msg.SaveCAN1809')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__save_can1809
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__save_can1809
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__save_can1809
            cls._TYPE_SUPPORT = module.type_support_msg__msg__save_can1809
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__save_can1809

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveCAN1809(metaclass=Metaclass_SaveCAN1809):
    """Message class 'SaveCAN1809'."""

    __slots__ = [
        '_acc_en_status',
        '_acc_control_board_status',
        '_acc_user_can_err',
        '_acc_veh_err',
        '_acc_err',
        '_acc_control_status',
        '_vs',
        '_bsd_right',
        '_bsd_left',
        '_long_accel',
        '_turn_right_en',
        '_hazard_en',
        '_turn_left_en',
        '_aeb_act',
        '_g_sel_disp',
        '_acc_alive_cnt',
    ]

    _fields_and_field_types = {
        'acc_en_status': 'string',
        'acc_control_board_status': 'string',
        'acc_user_can_err': 'string',
        'acc_veh_err': 'string',
        'acc_err': 'string',
        'acc_control_status': 'string',
        'vs': 'uint8',
        'bsd_right': 'uint8',
        'bsd_left': 'uint8',
        'long_accel': 'double',
        'turn_right_en': 'string',
        'hazard_en': 'string',
        'turn_left_en': 'string',
        'aeb_act': 'boolean',
        'g_sel_disp': 'string',
        'acc_alive_cnt': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.acc_en_status = kwargs.get('acc_en_status', str())
        self.acc_control_board_status = kwargs.get('acc_control_board_status', str())
        self.acc_user_can_err = kwargs.get('acc_user_can_err', str())
        self.acc_veh_err = kwargs.get('acc_veh_err', str())
        self.acc_err = kwargs.get('acc_err', str())
        self.acc_control_status = kwargs.get('acc_control_status', str())
        self.vs = kwargs.get('vs', int())
        self.bsd_right = kwargs.get('bsd_right', int())
        self.bsd_left = kwargs.get('bsd_left', int())
        self.long_accel = kwargs.get('long_accel', float())
        self.turn_right_en = kwargs.get('turn_right_en', str())
        self.hazard_en = kwargs.get('hazard_en', str())
        self.turn_left_en = kwargs.get('turn_left_en', str())
        self.aeb_act = kwargs.get('aeb_act', bool())
        self.g_sel_disp = kwargs.get('g_sel_disp', str())
        self.acc_alive_cnt = kwargs.get('acc_alive_cnt', int())

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
        if self.acc_en_status != other.acc_en_status:
            return False
        if self.acc_control_board_status != other.acc_control_board_status:
            return False
        if self.acc_user_can_err != other.acc_user_can_err:
            return False
        if self.acc_veh_err != other.acc_veh_err:
            return False
        if self.acc_err != other.acc_err:
            return False
        if self.acc_control_status != other.acc_control_status:
            return False
        if self.vs != other.vs:
            return False
        if self.bsd_right != other.bsd_right:
            return False
        if self.bsd_left != other.bsd_left:
            return False
        if self.long_accel != other.long_accel:
            return False
        if self.turn_right_en != other.turn_right_en:
            return False
        if self.hazard_en != other.hazard_en:
            return False
        if self.turn_left_en != other.turn_left_en:
            return False
        if self.aeb_act != other.aeb_act:
            return False
        if self.g_sel_disp != other.g_sel_disp:
            return False
        if self.acc_alive_cnt != other.acc_alive_cnt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def acc_en_status(self):
        """Message field 'acc_en_status'."""
        return self._acc_en_status

    @acc_en_status.setter
    def acc_en_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'acc_en_status' field must be of type 'str'"
        self._acc_en_status = value

    @property
    def acc_control_board_status(self):
        """Message field 'acc_control_board_status'."""
        return self._acc_control_board_status

    @acc_control_board_status.setter
    def acc_control_board_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'acc_control_board_status' field must be of type 'str'"
        self._acc_control_board_status = value

    @property
    def acc_user_can_err(self):
        """Message field 'acc_user_can_err'."""
        return self._acc_user_can_err

    @acc_user_can_err.setter
    def acc_user_can_err(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'acc_user_can_err' field must be of type 'str'"
        self._acc_user_can_err = value

    @property
    def acc_veh_err(self):
        """Message field 'acc_veh_err'."""
        return self._acc_veh_err

    @acc_veh_err.setter
    def acc_veh_err(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'acc_veh_err' field must be of type 'str'"
        self._acc_veh_err = value

    @property
    def acc_err(self):
        """Message field 'acc_err'."""
        return self._acc_err

    @acc_err.setter
    def acc_err(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'acc_err' field must be of type 'str'"
        self._acc_err = value

    @property
    def acc_control_status(self):
        """Message field 'acc_control_status'."""
        return self._acc_control_status

    @acc_control_status.setter
    def acc_control_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'acc_control_status' field must be of type 'str'"
        self._acc_control_status = value

    @property
    def vs(self):
        """Message field 'vs'."""
        return self._vs

    @vs.setter
    def vs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vs' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vs' field must be an unsigned integer in [0, 255]"
        self._vs = value

    @property
    def bsd_right(self):
        """Message field 'bsd_right'."""
        return self._bsd_right

    @bsd_right.setter
    def bsd_right(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bsd_right' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bsd_right' field must be an unsigned integer in [0, 255]"
        self._bsd_right = value

    @property
    def bsd_left(self):
        """Message field 'bsd_left'."""
        return self._bsd_left

    @bsd_left.setter
    def bsd_left(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bsd_left' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bsd_left' field must be an unsigned integer in [0, 255]"
        self._bsd_left = value

    @property
    def long_accel(self):
        """Message field 'long_accel'."""
        return self._long_accel

    @long_accel.setter
    def long_accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'long_accel' field must be of type 'float'"
        self._long_accel = value

    @property
    def turn_right_en(self):
        """Message field 'turn_right_en'."""
        return self._turn_right_en

    @turn_right_en.setter
    def turn_right_en(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'turn_right_en' field must be of type 'str'"
        self._turn_right_en = value

    @property
    def hazard_en(self):
        """Message field 'hazard_en'."""
        return self._hazard_en

    @hazard_en.setter
    def hazard_en(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hazard_en' field must be of type 'str'"
        self._hazard_en = value

    @property
    def turn_left_en(self):
        """Message field 'turn_left_en'."""
        return self._turn_left_en

    @turn_left_en.setter
    def turn_left_en(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'turn_left_en' field must be of type 'str'"
        self._turn_left_en = value

    @property
    def aeb_act(self):
        """Message field 'aeb_act'."""
        return self._aeb_act

    @aeb_act.setter
    def aeb_act(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'aeb_act' field must be of type 'bool'"
        self._aeb_act = value

    @property
    def g_sel_disp(self):
        """Message field 'g_sel_disp'."""
        return self._g_sel_disp

    @g_sel_disp.setter
    def g_sel_disp(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'g_sel_disp' field must be of type 'str'"
        self._g_sel_disp = value

    @property
    def acc_alive_cnt(self):
        """Message field 'acc_alive_cnt'."""
        return self._acc_alive_cnt

    @acc_alive_cnt.setter
    def acc_alive_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acc_alive_cnt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acc_alive_cnt' field must be an unsigned integer in [0, 255]"
        self._acc_alive_cnt = value
