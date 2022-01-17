# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SaveCAN342.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveCAN342(type):
    """Metaclass of message 'SaveCAN342'."""

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
                'custom_msgs.msg.SaveCAN342')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__save_can342
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__save_can342
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__save_can342
            cls._TYPE_SUPPORT = module.type_support_msg__msg__save_can342
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__save_can342

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveCAN342(metaclass=Metaclass_SaveCAN342):
    """Message class 'SaveCAN342'."""

    __slots__ = [
        '_eps_en',
        '_override_ignore',
        '_eps_speed',
        '_acc_en',
        '_aeb_en',
        '_gear_change',
        '_turn_sig_en',
        '_aeb_decel_value',
        '_aliv_cnt',
    ]

    _fields_and_field_types = {
        'eps_en': 'boolean',
        'override_ignore': 'boolean',
        'eps_speed': 'uint8',
        'acc_en': 'boolean',
        'aeb_en': 'boolean',
        'gear_change': 'uint8',
        'turn_sig_en': 'uint8',
        'aeb_decel_value': 'float',
        'aliv_cnt': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.eps_en = kwargs.get('eps_en', bool())
        self.override_ignore = kwargs.get('override_ignore', bool())
        self.eps_speed = kwargs.get('eps_speed', int())
        self.acc_en = kwargs.get('acc_en', bool())
        self.aeb_en = kwargs.get('aeb_en', bool())
        self.gear_change = kwargs.get('gear_change', int())
        self.turn_sig_en = kwargs.get('turn_sig_en', int())
        self.aeb_decel_value = kwargs.get('aeb_decel_value', float())
        self.aliv_cnt = kwargs.get('aliv_cnt', int())

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
        if self.eps_en != other.eps_en:
            return False
        if self.override_ignore != other.override_ignore:
            return False
        if self.eps_speed != other.eps_speed:
            return False
        if self.acc_en != other.acc_en:
            return False
        if self.aeb_en != other.aeb_en:
            return False
        if self.gear_change != other.gear_change:
            return False
        if self.turn_sig_en != other.turn_sig_en:
            return False
        if self.aeb_decel_value != other.aeb_decel_value:
            return False
        if self.aliv_cnt != other.aliv_cnt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def eps_en(self):
        """Message field 'eps_en'."""
        return self._eps_en

    @eps_en.setter
    def eps_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'eps_en' field must be of type 'bool'"
        self._eps_en = value

    @property
    def override_ignore(self):
        """Message field 'override_ignore'."""
        return self._override_ignore

    @override_ignore.setter
    def override_ignore(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'override_ignore' field must be of type 'bool'"
        self._override_ignore = value

    @property
    def eps_speed(self):
        """Message field 'eps_speed'."""
        return self._eps_speed

    @eps_speed.setter
    def eps_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eps_speed' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'eps_speed' field must be an unsigned integer in [0, 255]"
        self._eps_speed = value

    @property
    def acc_en(self):
        """Message field 'acc_en'."""
        return self._acc_en

    @acc_en.setter
    def acc_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acc_en' field must be of type 'bool'"
        self._acc_en = value

    @property
    def aeb_en(self):
        """Message field 'aeb_en'."""
        return self._aeb_en

    @aeb_en.setter
    def aeb_en(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'aeb_en' field must be of type 'bool'"
        self._aeb_en = value

    @property
    def gear_change(self):
        """Message field 'gear_change'."""
        return self._gear_change

    @gear_change.setter
    def gear_change(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_change' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gear_change' field must be an unsigned integer in [0, 255]"
        self._gear_change = value

    @property
    def turn_sig_en(self):
        """Message field 'turn_sig_en'."""
        return self._turn_sig_en

    @turn_sig_en.setter
    def turn_sig_en(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_sig_en' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'turn_sig_en' field must be an unsigned integer in [0, 255]"
        self._turn_sig_en = value

    @property
    def aeb_decel_value(self):
        """Message field 'aeb_decel_value'."""
        return self._aeb_decel_value

    @aeb_decel_value.setter
    def aeb_decel_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aeb_decel_value' field must be of type 'float'"
        self._aeb_decel_value = value

    @property
    def aliv_cnt(self):
        """Message field 'aliv_cnt'."""
        return self._aliv_cnt

    @aliv_cnt.setter
    def aliv_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aliv_cnt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aliv_cnt' field must be an unsigned integer in [0, 255]"
        self._aliv_cnt = value
