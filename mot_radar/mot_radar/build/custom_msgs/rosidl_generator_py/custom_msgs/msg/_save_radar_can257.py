# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/SaveRadarCAN257.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SaveRadarCAN257(type):
    """Metaclass of message 'SaveRadarCAN257'."""

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
                'custom_msgs.msg.SaveRadarCAN257')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__save_radar_can257
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__save_radar_can257
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__save_radar_can257
            cls._TYPE_SUPPORT = module.type_support_msg__msg__save_radar_can257
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__save_radar_can257

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SaveRadarCAN257(metaclass=Metaclass_SaveRadarCAN257):
    """Message class 'SaveRadarCAN257'."""

    __slots__ = [
        '_can_interference_type',
        '_can_recommend_unconverge',
        '_can_blockage_sidelobe_filter_val',
        '_can_radar_align_incomplete',
        '_can_blockage_sidelobe',
        '_can_blockage_mnr',
        '_can_radar_ext_cond_nok',
        '_can_radar_align_out_range',
        '_can_radar_align_not_start',
        '_can_radar_overheat_error',
        '_can_radar_not_op',
        '_can_xcvr_operational',
    ]

    _fields_and_field_types = {
        'can_interference_type': 'double',
        'can_recommend_unconverge': 'double',
        'can_blockage_sidelobe_filter_val': 'double',
        'can_radar_align_incomplete': 'double',
        'can_blockage_sidelobe': 'double',
        'can_blockage_mnr': 'double',
        'can_radar_ext_cond_nok': 'double',
        'can_radar_align_out_range': 'double',
        'can_radar_align_not_start': 'double',
        'can_radar_overheat_error': 'double',
        'can_radar_not_op': 'double',
        'can_xcvr_operational': 'double',
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
        self.can_interference_type = kwargs.get('can_interference_type', float())
        self.can_recommend_unconverge = kwargs.get('can_recommend_unconverge', float())
        self.can_blockage_sidelobe_filter_val = kwargs.get('can_blockage_sidelobe_filter_val', float())
        self.can_radar_align_incomplete = kwargs.get('can_radar_align_incomplete', float())
        self.can_blockage_sidelobe = kwargs.get('can_blockage_sidelobe', float())
        self.can_blockage_mnr = kwargs.get('can_blockage_mnr', float())
        self.can_radar_ext_cond_nok = kwargs.get('can_radar_ext_cond_nok', float())
        self.can_radar_align_out_range = kwargs.get('can_radar_align_out_range', float())
        self.can_radar_align_not_start = kwargs.get('can_radar_align_not_start', float())
        self.can_radar_overheat_error = kwargs.get('can_radar_overheat_error', float())
        self.can_radar_not_op = kwargs.get('can_radar_not_op', float())
        self.can_xcvr_operational = kwargs.get('can_xcvr_operational', float())

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
        if self.can_interference_type != other.can_interference_type:
            return False
        if self.can_recommend_unconverge != other.can_recommend_unconverge:
            return False
        if self.can_blockage_sidelobe_filter_val != other.can_blockage_sidelobe_filter_val:
            return False
        if self.can_radar_align_incomplete != other.can_radar_align_incomplete:
            return False
        if self.can_blockage_sidelobe != other.can_blockage_sidelobe:
            return False
        if self.can_blockage_mnr != other.can_blockage_mnr:
            return False
        if self.can_radar_ext_cond_nok != other.can_radar_ext_cond_nok:
            return False
        if self.can_radar_align_out_range != other.can_radar_align_out_range:
            return False
        if self.can_radar_align_not_start != other.can_radar_align_not_start:
            return False
        if self.can_radar_overheat_error != other.can_radar_overheat_error:
            return False
        if self.can_radar_not_op != other.can_radar_not_op:
            return False
        if self.can_xcvr_operational != other.can_xcvr_operational:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def can_interference_type(self):
        """Message field 'can_interference_type'."""
        return self._can_interference_type

    @can_interference_type.setter
    def can_interference_type(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_interference_type' field must be of type 'float'"
        self._can_interference_type = value

    @property
    def can_recommend_unconverge(self):
        """Message field 'can_recommend_unconverge'."""
        return self._can_recommend_unconverge

    @can_recommend_unconverge.setter
    def can_recommend_unconverge(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_recommend_unconverge' field must be of type 'float'"
        self._can_recommend_unconverge = value

    @property
    def can_blockage_sidelobe_filter_val(self):
        """Message field 'can_blockage_sidelobe_filter_val'."""
        return self._can_blockage_sidelobe_filter_val

    @can_blockage_sidelobe_filter_val.setter
    def can_blockage_sidelobe_filter_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_blockage_sidelobe_filter_val' field must be of type 'float'"
        self._can_blockage_sidelobe_filter_val = value

    @property
    def can_radar_align_incomplete(self):
        """Message field 'can_radar_align_incomplete'."""
        return self._can_radar_align_incomplete

    @can_radar_align_incomplete.setter
    def can_radar_align_incomplete(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_radar_align_incomplete' field must be of type 'float'"
        self._can_radar_align_incomplete = value

    @property
    def can_blockage_sidelobe(self):
        """Message field 'can_blockage_sidelobe'."""
        return self._can_blockage_sidelobe

    @can_blockage_sidelobe.setter
    def can_blockage_sidelobe(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_blockage_sidelobe' field must be of type 'float'"
        self._can_blockage_sidelobe = value

    @property
    def can_blockage_mnr(self):
        """Message field 'can_blockage_mnr'."""
        return self._can_blockage_mnr

    @can_blockage_mnr.setter
    def can_blockage_mnr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_blockage_mnr' field must be of type 'float'"
        self._can_blockage_mnr = value

    @property
    def can_radar_ext_cond_nok(self):
        """Message field 'can_radar_ext_cond_nok'."""
        return self._can_radar_ext_cond_nok

    @can_radar_ext_cond_nok.setter
    def can_radar_ext_cond_nok(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_radar_ext_cond_nok' field must be of type 'float'"
        self._can_radar_ext_cond_nok = value

    @property
    def can_radar_align_out_range(self):
        """Message field 'can_radar_align_out_range'."""
        return self._can_radar_align_out_range

    @can_radar_align_out_range.setter
    def can_radar_align_out_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_radar_align_out_range' field must be of type 'float'"
        self._can_radar_align_out_range = value

    @property
    def can_radar_align_not_start(self):
        """Message field 'can_radar_align_not_start'."""
        return self._can_radar_align_not_start

    @can_radar_align_not_start.setter
    def can_radar_align_not_start(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_radar_align_not_start' field must be of type 'float'"
        self._can_radar_align_not_start = value

    @property
    def can_radar_overheat_error(self):
        """Message field 'can_radar_overheat_error'."""
        return self._can_radar_overheat_error

    @can_radar_overheat_error.setter
    def can_radar_overheat_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_radar_overheat_error' field must be of type 'float'"
        self._can_radar_overheat_error = value

    @property
    def can_radar_not_op(self):
        """Message field 'can_radar_not_op'."""
        return self._can_radar_not_op

    @can_radar_not_op.setter
    def can_radar_not_op(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_radar_not_op' field must be of type 'float'"
        self._can_radar_not_op = value

    @property
    def can_xcvr_operational(self):
        """Message field 'can_xcvr_operational'."""
        return self._can_xcvr_operational

    @can_xcvr_operational.setter
    def can_xcvr_operational(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'can_xcvr_operational' field must be of type 'float'"
        self._can_xcvr_operational = value
