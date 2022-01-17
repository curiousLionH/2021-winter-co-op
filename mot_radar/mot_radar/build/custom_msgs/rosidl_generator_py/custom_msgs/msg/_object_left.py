# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_msgs:msg/ObjectLeft.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObjectLeft(type):
    """Metaclass of message 'ObjectLeft'."""

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
                'custom_msgs.msg.ObjectLeft')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object_left
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object_left
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object_left
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object_left
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object_left

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


class ObjectLeft(metaclass=Metaclass_ObjectLeft):
    """Message class 'ObjectLeft'."""

    __slots__ = [
        '_object_0',
        '_object_1',
        '_object_2',
        '_object_3',
        '_object_4',
        '_object_5',
        '_object_6',
        '_object_7',
        '_object_8',
        '_object_9',
        '_object_10',
        '_object_11',
        '_object_12',
        '_object_13',
        '_object_14',
        '_object_15',
        '_object_16',
        '_object_17',
        '_object_18',
        '_object_19',
        '_object_20',
        '_object_21',
        '_object_22',
        '_object_23',
        '_object_24',
        '_object_25',
        '_object_26',
        '_object_27',
        '_object_28',
        '_object_29',
    ]

    _fields_and_field_types = {
        'object_0': 'custom_msgs/Object',
        'object_1': 'custom_msgs/Object',
        'object_2': 'custom_msgs/Object',
        'object_3': 'custom_msgs/Object',
        'object_4': 'custom_msgs/Object',
        'object_5': 'custom_msgs/Object',
        'object_6': 'custom_msgs/Object',
        'object_7': 'custom_msgs/Object',
        'object_8': 'custom_msgs/Object',
        'object_9': 'custom_msgs/Object',
        'object_10': 'custom_msgs/Object',
        'object_11': 'custom_msgs/Object',
        'object_12': 'custom_msgs/Object',
        'object_13': 'custom_msgs/Object',
        'object_14': 'custom_msgs/Object',
        'object_15': 'custom_msgs/Object',
        'object_16': 'custom_msgs/Object',
        'object_17': 'custom_msgs/Object',
        'object_18': 'custom_msgs/Object',
        'object_19': 'custom_msgs/Object',
        'object_20': 'custom_msgs/Object',
        'object_21': 'custom_msgs/Object',
        'object_22': 'custom_msgs/Object',
        'object_23': 'custom_msgs/Object',
        'object_24': 'custom_msgs/Object',
        'object_25': 'custom_msgs/Object',
        'object_26': 'custom_msgs/Object',
        'object_27': 'custom_msgs/Object',
        'object_28': 'custom_msgs/Object',
        'object_29': 'custom_msgs/Object',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['custom_msgs', 'msg'], 'Object'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from custom_msgs.msg import Object
        self.object_0 = kwargs.get('object_0', Object())
        from custom_msgs.msg import Object
        self.object_1 = kwargs.get('object_1', Object())
        from custom_msgs.msg import Object
        self.object_2 = kwargs.get('object_2', Object())
        from custom_msgs.msg import Object
        self.object_3 = kwargs.get('object_3', Object())
        from custom_msgs.msg import Object
        self.object_4 = kwargs.get('object_4', Object())
        from custom_msgs.msg import Object
        self.object_5 = kwargs.get('object_5', Object())
        from custom_msgs.msg import Object
        self.object_6 = kwargs.get('object_6', Object())
        from custom_msgs.msg import Object
        self.object_7 = kwargs.get('object_7', Object())
        from custom_msgs.msg import Object
        self.object_8 = kwargs.get('object_8', Object())
        from custom_msgs.msg import Object
        self.object_9 = kwargs.get('object_9', Object())
        from custom_msgs.msg import Object
        self.object_10 = kwargs.get('object_10', Object())
        from custom_msgs.msg import Object
        self.object_11 = kwargs.get('object_11', Object())
        from custom_msgs.msg import Object
        self.object_12 = kwargs.get('object_12', Object())
        from custom_msgs.msg import Object
        self.object_13 = kwargs.get('object_13', Object())
        from custom_msgs.msg import Object
        self.object_14 = kwargs.get('object_14', Object())
        from custom_msgs.msg import Object
        self.object_15 = kwargs.get('object_15', Object())
        from custom_msgs.msg import Object
        self.object_16 = kwargs.get('object_16', Object())
        from custom_msgs.msg import Object
        self.object_17 = kwargs.get('object_17', Object())
        from custom_msgs.msg import Object
        self.object_18 = kwargs.get('object_18', Object())
        from custom_msgs.msg import Object
        self.object_19 = kwargs.get('object_19', Object())
        from custom_msgs.msg import Object
        self.object_20 = kwargs.get('object_20', Object())
        from custom_msgs.msg import Object
        self.object_21 = kwargs.get('object_21', Object())
        from custom_msgs.msg import Object
        self.object_22 = kwargs.get('object_22', Object())
        from custom_msgs.msg import Object
        self.object_23 = kwargs.get('object_23', Object())
        from custom_msgs.msg import Object
        self.object_24 = kwargs.get('object_24', Object())
        from custom_msgs.msg import Object
        self.object_25 = kwargs.get('object_25', Object())
        from custom_msgs.msg import Object
        self.object_26 = kwargs.get('object_26', Object())
        from custom_msgs.msg import Object
        self.object_27 = kwargs.get('object_27', Object())
        from custom_msgs.msg import Object
        self.object_28 = kwargs.get('object_28', Object())
        from custom_msgs.msg import Object
        self.object_29 = kwargs.get('object_29', Object())

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
        if self.object_0 != other.object_0:
            return False
        if self.object_1 != other.object_1:
            return False
        if self.object_2 != other.object_2:
            return False
        if self.object_3 != other.object_3:
            return False
        if self.object_4 != other.object_4:
            return False
        if self.object_5 != other.object_5:
            return False
        if self.object_6 != other.object_6:
            return False
        if self.object_7 != other.object_7:
            return False
        if self.object_8 != other.object_8:
            return False
        if self.object_9 != other.object_9:
            return False
        if self.object_10 != other.object_10:
            return False
        if self.object_11 != other.object_11:
            return False
        if self.object_12 != other.object_12:
            return False
        if self.object_13 != other.object_13:
            return False
        if self.object_14 != other.object_14:
            return False
        if self.object_15 != other.object_15:
            return False
        if self.object_16 != other.object_16:
            return False
        if self.object_17 != other.object_17:
            return False
        if self.object_18 != other.object_18:
            return False
        if self.object_19 != other.object_19:
            return False
        if self.object_20 != other.object_20:
            return False
        if self.object_21 != other.object_21:
            return False
        if self.object_22 != other.object_22:
            return False
        if self.object_23 != other.object_23:
            return False
        if self.object_24 != other.object_24:
            return False
        if self.object_25 != other.object_25:
            return False
        if self.object_26 != other.object_26:
            return False
        if self.object_27 != other.object_27:
            return False
        if self.object_28 != other.object_28:
            return False
        if self.object_29 != other.object_29:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def object_0(self):
        """Message field 'object_0'."""
        return self._object_0

    @object_0.setter
    def object_0(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_0' field must be a sub message of type 'Object'"
        self._object_0 = value

    @property
    def object_1(self):
        """Message field 'object_1'."""
        return self._object_1

    @object_1.setter
    def object_1(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_1' field must be a sub message of type 'Object'"
        self._object_1 = value

    @property
    def object_2(self):
        """Message field 'object_2'."""
        return self._object_2

    @object_2.setter
    def object_2(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_2' field must be a sub message of type 'Object'"
        self._object_2 = value

    @property
    def object_3(self):
        """Message field 'object_3'."""
        return self._object_3

    @object_3.setter
    def object_3(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_3' field must be a sub message of type 'Object'"
        self._object_3 = value

    @property
    def object_4(self):
        """Message field 'object_4'."""
        return self._object_4

    @object_4.setter
    def object_4(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_4' field must be a sub message of type 'Object'"
        self._object_4 = value

    @property
    def object_5(self):
        """Message field 'object_5'."""
        return self._object_5

    @object_5.setter
    def object_5(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_5' field must be a sub message of type 'Object'"
        self._object_5 = value

    @property
    def object_6(self):
        """Message field 'object_6'."""
        return self._object_6

    @object_6.setter
    def object_6(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_6' field must be a sub message of type 'Object'"
        self._object_6 = value

    @property
    def object_7(self):
        """Message field 'object_7'."""
        return self._object_7

    @object_7.setter
    def object_7(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_7' field must be a sub message of type 'Object'"
        self._object_7 = value

    @property
    def object_8(self):
        """Message field 'object_8'."""
        return self._object_8

    @object_8.setter
    def object_8(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_8' field must be a sub message of type 'Object'"
        self._object_8 = value

    @property
    def object_9(self):
        """Message field 'object_9'."""
        return self._object_9

    @object_9.setter
    def object_9(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_9' field must be a sub message of type 'Object'"
        self._object_9 = value

    @property
    def object_10(self):
        """Message field 'object_10'."""
        return self._object_10

    @object_10.setter
    def object_10(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_10' field must be a sub message of type 'Object'"
        self._object_10 = value

    @property
    def object_11(self):
        """Message field 'object_11'."""
        return self._object_11

    @object_11.setter
    def object_11(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_11' field must be a sub message of type 'Object'"
        self._object_11 = value

    @property
    def object_12(self):
        """Message field 'object_12'."""
        return self._object_12

    @object_12.setter
    def object_12(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_12' field must be a sub message of type 'Object'"
        self._object_12 = value

    @property
    def object_13(self):
        """Message field 'object_13'."""
        return self._object_13

    @object_13.setter
    def object_13(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_13' field must be a sub message of type 'Object'"
        self._object_13 = value

    @property
    def object_14(self):
        """Message field 'object_14'."""
        return self._object_14

    @object_14.setter
    def object_14(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_14' field must be a sub message of type 'Object'"
        self._object_14 = value

    @property
    def object_15(self):
        """Message field 'object_15'."""
        return self._object_15

    @object_15.setter
    def object_15(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_15' field must be a sub message of type 'Object'"
        self._object_15 = value

    @property
    def object_16(self):
        """Message field 'object_16'."""
        return self._object_16

    @object_16.setter
    def object_16(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_16' field must be a sub message of type 'Object'"
        self._object_16 = value

    @property
    def object_17(self):
        """Message field 'object_17'."""
        return self._object_17

    @object_17.setter
    def object_17(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_17' field must be a sub message of type 'Object'"
        self._object_17 = value

    @property
    def object_18(self):
        """Message field 'object_18'."""
        return self._object_18

    @object_18.setter
    def object_18(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_18' field must be a sub message of type 'Object'"
        self._object_18 = value

    @property
    def object_19(self):
        """Message field 'object_19'."""
        return self._object_19

    @object_19.setter
    def object_19(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_19' field must be a sub message of type 'Object'"
        self._object_19 = value

    @property
    def object_20(self):
        """Message field 'object_20'."""
        return self._object_20

    @object_20.setter
    def object_20(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_20' field must be a sub message of type 'Object'"
        self._object_20 = value

    @property
    def object_21(self):
        """Message field 'object_21'."""
        return self._object_21

    @object_21.setter
    def object_21(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_21' field must be a sub message of type 'Object'"
        self._object_21 = value

    @property
    def object_22(self):
        """Message field 'object_22'."""
        return self._object_22

    @object_22.setter
    def object_22(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_22' field must be a sub message of type 'Object'"
        self._object_22 = value

    @property
    def object_23(self):
        """Message field 'object_23'."""
        return self._object_23

    @object_23.setter
    def object_23(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_23' field must be a sub message of type 'Object'"
        self._object_23 = value

    @property
    def object_24(self):
        """Message field 'object_24'."""
        return self._object_24

    @object_24.setter
    def object_24(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_24' field must be a sub message of type 'Object'"
        self._object_24 = value

    @property
    def object_25(self):
        """Message field 'object_25'."""
        return self._object_25

    @object_25.setter
    def object_25(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_25' field must be a sub message of type 'Object'"
        self._object_25 = value

    @property
    def object_26(self):
        """Message field 'object_26'."""
        return self._object_26

    @object_26.setter
    def object_26(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_26' field must be a sub message of type 'Object'"
        self._object_26 = value

    @property
    def object_27(self):
        """Message field 'object_27'."""
        return self._object_27

    @object_27.setter
    def object_27(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_27' field must be a sub message of type 'Object'"
        self._object_27 = value

    @property
    def object_28(self):
        """Message field 'object_28'."""
        return self._object_28

    @object_28.setter
    def object_28(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_28' field must be a sub message of type 'Object'"
        self._object_28 = value

    @property
    def object_29(self):
        """Message field 'object_29'."""
        return self._object_29

    @object_29.setter
    def object_29(self, value):
        if __debug__:
            from custom_msgs.msg import Object
            assert \
                isinstance(value, Object), \
                "The 'object_29' field must be a sub message of type 'Object'"
        self._object_29 = value
