# generated from rosidl_generator_py/resource/_idl.py.em
# with input from teleop_msgs:srv/EmergencyStop.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EmergencyStop_Request(type):
    """Metaclass of message 'EmergencyStop_Request'."""

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
            module = import_type_support('teleop_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'teleop_msgs.srv.EmergencyStop_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__emergency_stop__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__emergency_stop__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__emergency_stop__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__emergency_stop__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__emergency_stop__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EmergencyStop_Request(metaclass=Metaclass_EmergencyStop_Request):
    """Message class 'EmergencyStop_Request'."""

    __slots__ = [
        '_set_estop',
    ]

    _fields_and_field_types = {
        'set_estop': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.set_estop = kwargs.get('set_estop', bool())

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
        if self.set_estop != other.set_estop:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def set_estop(self):
        """Message field 'set_estop'."""
        return self._set_estop

    @set_estop.setter
    def set_estop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'set_estop' field must be of type 'bool'"
        self._set_estop = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_EmergencyStop_Response(type):
    """Metaclass of message 'EmergencyStop_Response'."""

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
            module = import_type_support('teleop_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'teleop_msgs.srv.EmergencyStop_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__emergency_stop__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__emergency_stop__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__emergency_stop__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__emergency_stop__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__emergency_stop__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EmergencyStop_Response(metaclass=Metaclass_EmergencyStop_Response):
    """Message class 'EmergencyStop_Response'."""

    __slots__ = [
        '_estop_state',
    ]

    _fields_and_field_types = {
        'estop_state': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.estop_state = kwargs.get('estop_state', bool())

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
        if self.estop_state != other.estop_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def estop_state(self):
        """Message field 'estop_state'."""
        return self._estop_state

    @estop_state.setter
    def estop_state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'estop_state' field must be of type 'bool'"
        self._estop_state = value


class Metaclass_EmergencyStop(type):
    """Metaclass of service 'EmergencyStop'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('teleop_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'teleop_msgs.srv.EmergencyStop')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__emergency_stop

            from teleop_msgs.srv import _emergency_stop
            if _emergency_stop.Metaclass_EmergencyStop_Request._TYPE_SUPPORT is None:
                _emergency_stop.Metaclass_EmergencyStop_Request.__import_type_support__()
            if _emergency_stop.Metaclass_EmergencyStop_Response._TYPE_SUPPORT is None:
                _emergency_stop.Metaclass_EmergencyStop_Response.__import_type_support__()


class EmergencyStop(metaclass=Metaclass_EmergencyStop):
    from teleop_msgs.srv._emergency_stop import EmergencyStop_Request as Request
    from teleop_msgs.srv._emergency_stop import EmergencyStop_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
