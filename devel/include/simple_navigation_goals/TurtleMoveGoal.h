// Generated by gencpp from file simple_navigation_goals/TurtleMoveGoal.msg
// DO NOT EDIT!


#ifndef SIMPLE_NAVIGATION_GOALS_MESSAGE_TURTLEMOVEGOAL_H
#define SIMPLE_NAVIGATION_GOALS_MESSAGE_TURTLEMOVEGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace simple_navigation_goals
{
template <class ContainerAllocator>
struct TurtleMoveGoal_
{
  typedef TurtleMoveGoal_<ContainerAllocator> Type;

  TurtleMoveGoal_()
    : turtle_target_x(0.0)
    , turtle_target_y(0.0)
    , turtle_target_theta(0.0)  {
    }
  TurtleMoveGoal_(const ContainerAllocator& _alloc)
    : turtle_target_x(0.0)
    , turtle_target_y(0.0)
    , turtle_target_theta(0.0)  {
  (void)_alloc;
    }



   typedef double _turtle_target_x_type;
  _turtle_target_x_type turtle_target_x;

   typedef double _turtle_target_y_type;
  _turtle_target_y_type turtle_target_y;

   typedef double _turtle_target_theta_type;
  _turtle_target_theta_type turtle_target_theta;





  typedef boost::shared_ptr< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> const> ConstPtr;

}; // struct TurtleMoveGoal_

typedef ::simple_navigation_goals::TurtleMoveGoal_<std::allocator<void> > TurtleMoveGoal;

typedef boost::shared_ptr< ::simple_navigation_goals::TurtleMoveGoal > TurtleMoveGoalPtr;
typedef boost::shared_ptr< ::simple_navigation_goals::TurtleMoveGoal const> TurtleMoveGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace simple_navigation_goals

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'move_base_msgs': ['/opt/ros/kinetic/share/move_base_msgs/cmake/../msg'], 'simple_navigation_goals': ['/home/winkle/sim/my_ws/devel/share/simple_navigation_goals/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d6ca75a13b0855b8f735f0fec295b281";
  }

  static const char* value(const ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd6ca75a13b0855b8ULL;
  static const uint64_t static_value2 = 0xf735f0fec295b281ULL;
};

template<class ContainerAllocator>
struct DataType< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "simple_navigation_goals/TurtleMoveGoal";
  }

  static const char* value(const ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Define the goal\n\
float64 turtle_target_x  # Specify Turtle's　target position\n\
float64 turtle_target_y\n\
float64 turtle_target_theta\n\
";
  }

  static const char* value(const ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.turtle_target_x);
      stream.next(m.turtle_target_y);
      stream.next(m.turtle_target_theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TurtleMoveGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::simple_navigation_goals::TurtleMoveGoal_<ContainerAllocator>& v)
  {
    s << indent << "turtle_target_x: ";
    Printer<double>::stream(s, indent + "  ", v.turtle_target_x);
    s << indent << "turtle_target_y: ";
    Printer<double>::stream(s, indent + "  ", v.turtle_target_y);
    s << indent << "turtle_target_theta: ";
    Printer<double>::stream(s, indent + "  ", v.turtle_target_theta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIMPLE_NAVIGATION_GOALS_MESSAGE_TURTLEMOVEGOAL_H
