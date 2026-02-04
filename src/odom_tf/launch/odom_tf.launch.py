import os
from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    package_name = 'go2_description'
    urdf_name = "robot.urdf"

    ld = LaunchDescription()
    pkg_share = FindPackageShare(package=package_name).find(package_name)
    urdf_model_path = os.path.join(pkg_share, f'urdf/{urdf_name}')

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        arguments=[urdf_model_path]
    )

    go2_joint_pub = Node(
        package='go2_driver',
        executable='go2_joint_pub',
        name='go2_joint_pub',
        arguments=[urdf_model_path],
        output='screen',
    )

    odom_tf_node = Node(
        package='odom_tf',
        executable='odom_tf',
        name='odom_tf',
        output='screen',
        parameters=[{
            'pub_tf': True,          
            'odom_frame': 'odom',    
            'base_frame': 'base_link'
        }]
    )

    ld.add_action(go2_joint_pub)
    ld.add_action(robot_state_publisher_node)
    ld.add_action(odom_tf_node)

    return ld
