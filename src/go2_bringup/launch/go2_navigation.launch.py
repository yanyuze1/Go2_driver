from launch import LaunchDescription
from launch_ros.actions import Node  
from launch.actions import IncludeLaunchDescription  
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os  

def generate_launch_description():
    ld = LaunchDescription()

    odom_tf_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("odom_tf"),  
                "launch/odom_tf.launch.py" 
            )
        )
    )

    livox_mid360_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("livox_ros_driver2"),
                "launch_ROS2/msg_MID360_launch.py"
            )
        )
    )

    pointcloud_laserscan_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("pointcloud_to_laserscan_bridge"),
                "launch/pointcloud_to_laserscan.launch.py"
            )
        )
    )

    go2_driver_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("go2_driver"),
                "launch/go2_driver.launch.py"
            )
        )
    )

    nav2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("navigation2"),
                "launch/navigation2.launch.py"
            )
        )
    )

    ld.add_action(odom_tf_launch)
    ld.add_action(livox_mid360_launch) 
    ld.add_action(pointcloud_laserscan_launch)
    ld.add_action(go2_driver_launch)
    ld.add_action(nav2_launch)

    return ld
