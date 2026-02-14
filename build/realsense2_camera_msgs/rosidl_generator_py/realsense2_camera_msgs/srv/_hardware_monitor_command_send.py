# generated from rosidl_generator_py/resource/_idl.py.em
# with input from realsense2_camera_msgs:srv/HardwareMonitorCommandSend.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'data'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HardwareMonitorCommandSend_Request(type):
    """Metaclass of message 'HardwareMonitorCommandSend_Request'."""

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
            module = import_type_support('realsense2_camera_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'realsense2_camera_msgs.srv.HardwareMonitorCommandSend_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__hardware_monitor_command_send__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__hardware_monitor_command_send__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__hardware_monitor_command_send__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__hardware_monitor_command_send__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__hardware_monitor_command_send__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HardwareMonitorCommandSend_Request(metaclass=Metaclass_HardwareMonitorCommandSend_Request):
    """Message class 'HardwareMonitorCommandSend_Request'."""

    __slots__ = [
        '_opcode',
        '_param1',
        '_param2',
        '_param3',
        '_param4',
        '_data',
    ]

    _fields_and_field_types = {
        'opcode': 'uint32',
        'param1': 'uint32',
        'param2': 'uint32',
        'param3': 'uint32',
        'param4': 'uint32',
        'data': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.opcode = kwargs.get('opcode', int())
        self.param1 = kwargs.get('param1', int())
        self.param2 = kwargs.get('param2', int())
        self.param3 = kwargs.get('param3', int())
        self.param4 = kwargs.get('param4', int())
        self.data = array.array('B', kwargs.get('data', []))

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
        if self.opcode != other.opcode:
            return False
        if self.param1 != other.param1:
            return False
        if self.param2 != other.param2:
            return False
        if self.param3 != other.param3:
            return False
        if self.param4 != other.param4:
            return False
        if self.data != other.data:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def opcode(self):
        """Message field 'opcode'."""
        return self._opcode

    @opcode.setter
    def opcode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'opcode' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'opcode' field must be an unsigned integer in [0, 4294967295]"
        self._opcode = value

    @builtins.property
    def param1(self):
        """Message field 'param1'."""
        return self._param1

    @param1.setter
    def param1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'param1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'param1' field must be an unsigned integer in [0, 4294967295]"
        self._param1 = value

    @builtins.property
    def param2(self):
        """Message field 'param2'."""
        return self._param2

    @param2.setter
    def param2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'param2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'param2' field must be an unsigned integer in [0, 4294967295]"
        self._param2 = value

    @builtins.property
    def param3(self):
        """Message field 'param3'."""
        return self._param3

    @param3.setter
    def param3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'param3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'param3' field must be an unsigned integer in [0, 4294967295]"
        self._param3 = value

    @builtins.property
    def param4(self):
        """Message field 'param4'."""
        return self._param4

    @param4.setter
    def param4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'param4' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'param4' field must be an unsigned integer in [0, 4294967295]"
        self._param4 = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'data' array.array() must have the type code of 'B'"
            self._data = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = array.array('B', value)


# Import statements for member types

# Member 'result'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_HardwareMonitorCommandSend_Response(type):
    """Metaclass of message 'HardwareMonitorCommandSend_Response'."""

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
            module = import_type_support('realsense2_camera_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'realsense2_camera_msgs.srv.HardwareMonitorCommandSend_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__hardware_monitor_command_send__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__hardware_monitor_command_send__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__hardware_monitor_command_send__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__hardware_monitor_command_send__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__hardware_monitor_command_send__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HardwareMonitorCommandSend_Response(metaclass=Metaclass_HardwareMonitorCommandSend_Response):
    """Message class 'HardwareMonitorCommandSend_Response'."""

    __slots__ = [
        '_success',
        '_result',
        '_error_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'result': 'sequence<uint8>',
        'error_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.result = array.array('B', kwargs.get('result', []))
        self.error_message = kwargs.get('error_message', str())

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
        if self.success != other.success:
            return False
        if self.result != other.result:
            return False
        if self.error_message != other.error_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'result' array.array() must have the type code of 'B'"
            self._result = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'result' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._result = array.array('B', value)

    @builtins.property
    def error_message(self):
        """Message field 'error_message'."""
        return self._error_message

    @error_message.setter
    def error_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_message' field must be of type 'str'"
        self._error_message = value


class Metaclass_HardwareMonitorCommandSend(type):
    """Metaclass of service 'HardwareMonitorCommandSend'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('realsense2_camera_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'realsense2_camera_msgs.srv.HardwareMonitorCommandSend')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__hardware_monitor_command_send

            from realsense2_camera_msgs.srv import _hardware_monitor_command_send
            if _hardware_monitor_command_send.Metaclass_HardwareMonitorCommandSend_Request._TYPE_SUPPORT is None:
                _hardware_monitor_command_send.Metaclass_HardwareMonitorCommandSend_Request.__import_type_support__()
            if _hardware_monitor_command_send.Metaclass_HardwareMonitorCommandSend_Response._TYPE_SUPPORT is None:
                _hardware_monitor_command_send.Metaclass_HardwareMonitorCommandSend_Response.__import_type_support__()


class HardwareMonitorCommandSend(metaclass=Metaclass_HardwareMonitorCommandSend):
    from realsense2_camera_msgs.srv._hardware_monitor_command_send import HardwareMonitorCommandSend_Request as Request
    from realsense2_camera_msgs.srv._hardware_monitor_command_send import HardwareMonitorCommandSend_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
