;; Auto-generated. Do not edit!


(when (boundp 'learn_action::TurtleMoveGoal)
  (if (not (find-package "LEARN_ACTION"))
    (make-package "LEARN_ACTION"))
  (shadow 'TurtleMoveGoal (find-package "LEARN_ACTION")))
(unless (find-package "LEARN_ACTION::TURTLEMOVEGOAL")
  (make-package "LEARN_ACTION::TURTLEMOVEGOAL"))

(in-package "ROS")
;;//! \htmlinclude TurtleMoveGoal.msg.html


(defclass learn_action::TurtleMoveGoal
  :super ros::object
  :slots (_turtle_target_x _turtle_target_y _turtle_target_theta ))

(defmethod learn_action::TurtleMoveGoal
  (:init
   (&key
    ((:turtle_target_x __turtle_target_x) 0.0)
    ((:turtle_target_y __turtle_target_y) 0.0)
    ((:turtle_target_theta __turtle_target_theta) 0.0)
    )
   (send-super :init)
   (setq _turtle_target_x (float __turtle_target_x))
   (setq _turtle_target_y (float __turtle_target_y))
   (setq _turtle_target_theta (float __turtle_target_theta))
   self)
  (:turtle_target_x
   (&optional __turtle_target_x)
   (if __turtle_target_x (setq _turtle_target_x __turtle_target_x)) _turtle_target_x)
  (:turtle_target_y
   (&optional __turtle_target_y)
   (if __turtle_target_y (setq _turtle_target_y __turtle_target_y)) _turtle_target_y)
  (:turtle_target_theta
   (&optional __turtle_target_theta)
   (if __turtle_target_theta (setq _turtle_target_theta __turtle_target_theta)) _turtle_target_theta)
  (:serialization-length
   ()
   (+
    ;; float64 _turtle_target_x
    8
    ;; float64 _turtle_target_y
    8
    ;; float64 _turtle_target_theta
    8
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float64 _turtle_target_x
       (sys::poke _turtle_target_x (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _turtle_target_y
       (sys::poke _turtle_target_y (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;; float64 _turtle_target_theta
       (sys::poke _turtle_target_theta (send s :buffer) (send s :count) :double) (incf (stream-count s) 8)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float64 _turtle_target_x
     (setq _turtle_target_x (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _turtle_target_y
     (setq _turtle_target_y (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;; float64 _turtle_target_theta
     (setq _turtle_target_theta (sys::peek buf ptr- :double)) (incf ptr- 8)
   ;;
   self)
  )

(setf (get learn_action::TurtleMoveGoal :md5sum-) "d6ca75a13b0855b8f735f0fec295b281")
(setf (get learn_action::TurtleMoveGoal :datatype-) "learn_action/TurtleMoveGoal")
(setf (get learn_action::TurtleMoveGoal :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define the goal
float64 turtle_target_x  # Specify Turtle's　target position
float64 turtle_target_y
float64 turtle_target_theta

")



(provide :learn_action/TurtleMoveGoal "d6ca75a13b0855b8f735f0fec295b281")


