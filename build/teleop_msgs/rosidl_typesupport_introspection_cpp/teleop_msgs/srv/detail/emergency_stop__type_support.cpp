// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from teleop_msgs:srv/EmergencyStop.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "teleop_msgs/srv/detail/emergency_stop__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace teleop_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void EmergencyStop_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) teleop_msgs::srv::EmergencyStop_Request(_init);
}

void EmergencyStop_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<teleop_msgs::srv::EmergencyStop_Request *>(message_memory);
  typed_message->~EmergencyStop_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EmergencyStop_Request_message_member_array[1] = {
  {
    "set_estop",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs::srv::EmergencyStop_Request, set_estop),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EmergencyStop_Request_message_members = {
  "teleop_msgs::srv",  // message namespace
  "EmergencyStop_Request",  // message name
  1,  // number of fields
  sizeof(teleop_msgs::srv::EmergencyStop_Request),
  EmergencyStop_Request_message_member_array,  // message members
  EmergencyStop_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyStop_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EmergencyStop_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EmergencyStop_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace teleop_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<teleop_msgs::srv::EmergencyStop_Request>()
{
  return &::teleop_msgs::srv::rosidl_typesupport_introspection_cpp::EmergencyStop_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, teleop_msgs, srv, EmergencyStop_Request)() {
  return &::teleop_msgs::srv::rosidl_typesupport_introspection_cpp::EmergencyStop_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "teleop_msgs/srv/detail/emergency_stop__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace teleop_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void EmergencyStop_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) teleop_msgs::srv::EmergencyStop_Response(_init);
}

void EmergencyStop_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<teleop_msgs::srv::EmergencyStop_Response *>(message_memory);
  typed_message->~EmergencyStop_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EmergencyStop_Response_message_member_array[1] = {
  {
    "estop_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(teleop_msgs::srv::EmergencyStop_Response, estop_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EmergencyStop_Response_message_members = {
  "teleop_msgs::srv",  // message namespace
  "EmergencyStop_Response",  // message name
  1,  // number of fields
  sizeof(teleop_msgs::srv::EmergencyStop_Response),
  EmergencyStop_Response_message_member_array,  // message members
  EmergencyStop_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  EmergencyStop_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EmergencyStop_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EmergencyStop_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace teleop_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<teleop_msgs::srv::EmergencyStop_Response>()
{
  return &::teleop_msgs::srv::rosidl_typesupport_introspection_cpp::EmergencyStop_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, teleop_msgs, srv, EmergencyStop_Response)() {
  return &::teleop_msgs::srv::rosidl_typesupport_introspection_cpp::EmergencyStop_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "teleop_msgs/srv/detail/emergency_stop__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace teleop_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers EmergencyStop_service_members = {
  "teleop_msgs::srv",  // service namespace
  "EmergencyStop",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<teleop_msgs::srv::EmergencyStop>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t EmergencyStop_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EmergencyStop_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace teleop_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<teleop_msgs::srv::EmergencyStop>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::teleop_msgs::srv::rosidl_typesupport_introspection_cpp::EmergencyStop_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::teleop_msgs::srv::EmergencyStop_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::teleop_msgs::srv::EmergencyStop_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, teleop_msgs, srv, EmergencyStop)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<teleop_msgs::srv::EmergencyStop>();
}

#ifdef __cplusplus
}
#endif