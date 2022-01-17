# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SaveCAN1808.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveCAN1808(type):
    """Metaclass of message 'SaveCAN1808'."""

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
                'custom_msgs.msg.SaveCAN1808')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__save_can1808
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__save_can1808
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__save_can1808
            cls._TYPE_SUPPORT = module.type_support_msg__msg__save_can1808
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__save_can1808

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveCAN1808(metaclass=Metaclass_SaveCAN1808):
    """Message class 'SaveCAN1808'."""

    __slots__ = [
        '_eps_en_status',
        '_eps_control_board_status',
        '_eps_user_can_err',
        '_eps_err',
        '_eps_veh_can_err',
        '_eps_sas_err',
        '_eps_control_status',
        '_override_ignore_status',
        '_override_status',
        '_strang',
        '_str_drv_tq',
        '_str_out_tq',
        '_eps_alive_cnt',
    ]

    _fields_and_field_types = {
        'eps_en_status': 'string',
        'eps_control_board_status': 'string',
        'eps_user_can_err': 'string',
        'eps_err': 'string',
        'eps_veh_can_err': 'string',
        'eps_sas_err': 'string',
        'eps_control_status': 'string',
        'override_ignore_status': 'string',
        'override_status': 'string',
        'strang': 'float',
        'str_drv_tq': 'float',
        'str_out_tq': 'float',
        'eps_alive_cnt': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.eps_en_status = kwargs.get('eps_en_status', str())
        self.eps_control_board_status = kwargs.get('eps_control_board_status', str())
        self.eps_user_can_err = kwargs.get('eps_user_can_err', str())
        self.eps_err = kwargs.get('eps_err', str())
        self.eps_veh_can_err = kwargs.get('eps_veh_can_err', str())
        self.eps_sas_err = kwargs.get('eps_sas_err', str())
        self.eps_control_status = kwargs.get('eps_control_status', str())
        self.override_ignore_status = kwargs.get('override_ignore_status', str())
        self.override_status = kwargs.get('override_status', str())
        self.strang = kwargs.get('strang', float())
        self.str_drv_tq = kwargs.get('str_drv_tq', float())
        self.str_out_tq = kwargs.get('str_out_tq', float())
        self.eps_alive_cnt = kwargs.get('eps_alive_cnt', int())

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
        if self.eps_en_status != other.eps_en_status:
            return False
        if self.eps_control_board_status != other.eps_control_board_status:
            return False
        if self.eps_user_can_err != other.eps_user_can_err:
            return False
        if self.eps_err != other.eps_err:
            return False
        if self.eps_veh_can_err != other.eps_veh_can_err:
            return False
        if self.eps_sas_err != other.eps_sas_err:
            return False
        if self.eps_control_status != other.eps_control_status:
            return False
        if self.override_ignore_status != other.override_ignore_status:
            return False
        if self.override_status != other.override_status:
            return False
        if self.strang != other.strang:
            return False
        if self.str_drv_tq != other.str_drv_tq:
            return False
        if self.str_out_tq != other.str_out_tq:
            return False
        if self.eps_alive_cnt != other.eps_alive_cnt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def eps_en_status(self):
        """Message field 'eps_en_status'."""
        return self._eps_en_status

    @eps_en_status.setter
    def eps_en_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'eps_en_status' field must be of type 'str'"
        self._eps_en_status = value

    @property
    def eps_control_board_status(self):
        """Message field 'eps_control_board_status'."""
        return self._eps_control_board_status

    @eps_control_board_status.setter
    def eps_control_board_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'eps_control_board_status' field must be of type 'str'"
        self._eps_control_board_status = value

    @property
    def eps_user_can_err(self):
        """Message field 'eps_user_can_err'."""
        return self._eps_user_can_err

    @eps_user_can_err.setter
    def eps_user_can_err(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'eps_user_can_err' field must be of type 'str'"
        self._eps_user_can_err = value

    @property
    def eps_err(self):
        """Message field 'eps_err'."""
        return self._eps_err

    @eps_err.setter
    def eps_err(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'eps_err' field must be of type 'str'"
        self._eps_err = value

    @property
    def eps_veh_can_err(self):
        """Message field 'eps_veh_can_err'."""
        return self._eps_veh_can_err

    @eps_veh_can_err.setter
    def eps_veh_can_err(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'eps_veh_can_err' field must be of type 'str'"
        self._eps_veh_can_err = value

    @property
    def eps_sas_err(self):
        """Message field 'eps_sas_err'."""
        return self._eps_sas_err

    @eps_sas_err.setter
    def eps_sas_err(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'eps_sas_err' field must be of type 'str'"
        self._eps_sas_err = value

    @property
    def eps_control_status(self):
        """Message field 'eps_control_status'."""
        return self._eps_control_status

    @eps_control_status.setter
    def eps_control_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'eps_control_status' field must be of type 'str'"
        self._eps_control_status = value

    @property
    def override_ignore_status(self):
        """Message field 'override_ignore_status'."""
        return self._override_ignore_status

    @override_ignore_status.setter
    def override_ignore_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'override_ignore_status' field must be of type 'str'"
        self._override_ignore_status = value

    @property
    def override_status(self):
        """Message field 'override_status'."""
        return self._override_status

    @override_status.setter
    def override_status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'override_status' field must be of type 'str'"
        self._override_status = value

    @property
    def strang(self):
        """Message field 'strang'."""
        return self._strang

    @strang.setter
    def strang(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'strang' field must be of type 'float'"
        self._strang = value

    @property
    def str_drv_tq(self):
        """Message field 'str_drv_tq'."""
        return self._str_drv_tq

    @str_drv_tq.setter
    def str_drv_tq(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'str_drv_tq' field must be of type 'float'"
        self._str_drv_tq = value

    @property
    def str_out_tq(self):
        """Message field 'str_out_tq'."""
        return self._str_out_tq

    @str_out_tq.setter
    def str_out_tq(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'str_out_tq' field must be of type 'float'"
        self._str_out_tq = value

    @property
    def eps_alive_cnt(self):
        """Message field 'eps_alive_cnt'."""
        return self._eps_alive_cnt

    @eps_alive_cnt.setter
    def eps_alive_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eps_alive_cnt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'eps_alive_cnt' field must be an unsigned integer in [0, 255]"
        self._eps_alive_cnt = value
