// Generated by gencpp from file learn_action/TurtleMoveFeedback.msg
// DO NOT EDIT!


#ifndef LEARN_ACTION_MESSAGE_TURTLEMOVEFEEDBACK_H
#define LEARN_ACTION_MESSAGE_TURTLEMOVEFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace learn_action
{
template <class ContainerAllocator>
struct TurtleMoveFeedback_
{
  typedef TurtleMoveFeedback_<ContainerAllocator> Type;

  TurtleMoveFeedback_()
    : present_turtle_x(0.0)
    , present_turtle_y(0.0)
    , present_turtle_theta(0.0)  {
    }
  TurtleMoveFeedback_(const ContainerAllocator& _alloc)
    : present_turtle_x(0.0)
    , present_turtle_y(0.0)
    , present_turtle_theta(0.0)  {
  (void)_alloc;
    }



   typedef double _present_turtle_x_type;
  _present_turtle_x_type present_turtle_x;

   typedef double _present_turtle_y_type;
  _present_turtle_y_type present_turtle_y;

   typedef double _present_turtle_theta_type;
  _present_turtle_theta_type present_turtle_theta;





  typedef boost::shared_ptr< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct TurtleMoveFeedback_

typedef ::learn_action::TurtleMoveFeedback_<std::allocator<void> > TurtleMoveFeedback;

typedef boost::shared_ptr< ::learn_action::TurtleMoveFeedback > TurtleMoveFeedbackPtr;
typedef boost::shared_ptr< ::learn_action::TurtleMoveFeedback const> TurtleMoveFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::learn_action::TurtleMoveFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace learn_action

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'learn_action': ['/home/winkle/sim/my_ws/devel/share/learn_action/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4d26027f0f230cc5b61fa6b93405965c";
  }

  static const char* value(const ::learn_action::TurtleMoveFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4d26027f0f230cc5ULL;
  static const uint64_t static_value2 = 0xb61fa6b93405965cULL;
};

template<class ContainerAllocator>
struct DataType< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "learn_action/TurtleMoveFeedback";
  }

  static const char* value(const ::learn_action::TurtleMoveFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define a feedback message\n\
float64 present_turtle_x\n\
float64 present_turtle_y\n\
float64 present_turtle_theta\n\
\n\
";
  }

  static const char* value(const ::learn_action::TurtleMoveFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.present_turtle_x);
      stream.next(m.present_turtle_y);
      stream.next(m.present_turtle_theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TurtleMoveFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::learn_action::TurtleMoveFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::learn_action::TurtleMoveFeedback_<ContainerAllocator>& v)
  {
    s << indent << "present_turtle_x: ";
    Printer<double>::stream(s, indent + "  ", v.present_turtle_x);
    s << indent << "present_turtle_y: ";
    Printer<double>::stream(s, indent + "  ", v.present_turtle_y);
    s << indent << "present_turtle_theta: ";
    Printer<double>::stream(s, indent + "  ", v.present_turtle_theta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LEARN_ACTION_MESSAGE_TURTLEMOVEFEEDBACK_H
