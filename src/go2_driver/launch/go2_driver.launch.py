from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration

def generate_launch_description():
    network_interface_arg = DeclareLaunchArgument(
        'network_interface',
        default_value='enp109s0',   
        description='Network interface for Unitree SDK (e.g., enp3s0, wlan0)'
    )

    go2_controller_node = Node(
        package='go2_driver',
        executable='go2_controller',
        name='go2_controller',
        output='screen',
        parameters=[{
            'network_interface': LaunchConfiguration('network_interface')
        }],
        arguments=['--ros-args', '--log-level', 'INFO'] 
    )

    go2_odom_imu_node = Node(
        package='go2_driver',        
        executable='go2_odom_imu',   
        name='go2_odom_imu',         
        output='screen',             
        arguments=['--ros-args', '--log-level', 'INFO'],  
        parameters=[{
            'odom_frame': 'odom',
            'base_frame': 'base_link'
        }]
    )

    ld = LaunchDescription()

    ld.add_action(network_interface_arg)
    ld.add_action(go2_controller_node)
    ld.add_action(go2_odom_imu_node)

    return ld
