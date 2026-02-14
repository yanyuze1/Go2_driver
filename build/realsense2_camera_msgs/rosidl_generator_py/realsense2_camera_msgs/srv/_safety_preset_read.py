# generated from rosidl_generator_py/resource/_idl.py.em
# with input from realsense2_camera_msgs:srv/SafetyPresetRead.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SafetyPresetRead_Request(type):
    """Metaclass of message 'SafetyPresetRead_Request'."""

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
                'realsense2_camera_msgs.srv.SafetyPresetRead_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__safety_preset_read__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__safety_preset_read__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__safety_preset_read__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__safety_preset_read__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__safety_preset_read__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SafetyPresetRead_Request(metaclass=Metaclass_SafetyPresetRead_Request):
    """Message class 'SafetyPresetRead_Request'."""

    __slots__ = [
        '_index',
    ]

    _fields_and_field_types = {
        'index': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.index = kwargs.get('index', int())

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
        if self.index != other.index:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'index' field must be an unsigned integer in [0, 255]"
        self._index = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SafetyPresetRead_Response(type):
    """Metaclass of message 'SafetyPresetRead_Response'."""

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
                'realsense2_camera_msgs.srv.SafetyPresetRead_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__safety_preset_read__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__safety_preset_read__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__safety_preset_read__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__safety_preset_read__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__safety_preset_read__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SafetyPresetRead_Response(metaclass=Metaclass_SafetyPresetRead_Response):
    """Message class 'SafetyPresetRead_Response'."""

    __slots__ = [
        '_success',
        '_error_message',
        '_safety_preset',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'error_message': 'string',
        'safety_preset': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.error_message = kwargs.get('error_message', str())
        self.safety_preset = kwargs.get('safety_preset', str())

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
        if self.error_message != other.error_message:
            return False
        if self.safety_preset != other.safety_preset:
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

    @builtins.property
    def safety_preset(self):
        """Message field 'safety_preset'."""
        return self._safety_preset

    @safety_preset.setter
    def safety_preset(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'safety_preset' field must be of type 'str'"
        self._safety_preset = value


class Metaclass_SafetyPresetRead(type):
    """Metaclass of service 'SafetyPresetRead'."""

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
                'realsense2_camera_msgs.srv.SafetyPresetRead')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__safety_preset_read

            from realsense2_camera_msgs.srv import _safety_preset_read
            if _safety_preset_read.Metaclass_SafetyPresetRead_Request._TYPE_SUPPORT is None:
                _safety_preset_read.Metaclass_SafetyPresetRead_Request.__import_type_support__()
            if _safety_preset_read.Metaclass_SafetyPresetRead_Response._TYPE_SUPPORT is None:
                _safety_preset_read.Metaclass_SafetyPresetRead_Response.__import_type_support__()


class SafetyPresetRead(metaclass=Metaclass_SafetyPresetRead):
    from realsense2_camera_msgs.srv._safety_preset_read import SafetyPresetRead_Request as Request
    from realsense2_camera_msgs.srv._safety_preset_read import SafetyPresetRead_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
