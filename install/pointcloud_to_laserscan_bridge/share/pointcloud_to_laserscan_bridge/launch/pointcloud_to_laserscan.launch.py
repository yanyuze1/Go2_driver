import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    pointcloud_topic = '/livox/lidar' # livox_mid360s
    # pointcloud_topic = '/utlidar/cloud' # Go2
    laserscan_topic = '/scan'  

    return LaunchDescription([
        Node(
            package='pointcloud_to_laserscan',
            executable='pointcloud_to_laserscan_node',
            name='pointcloud_to_laserscan_bridge',
            remappings=[
                ('cloud_in', pointcloud_topic),
                ('scan', laserscan_topic)
            ],
            parameters=[{
                'target_frame': 'livox_frame', 
                'transform_tolerance': 0.01, 
                'min_height': 0.5,  
                'max_height': 1.5,                   
                'angle_min': -3.141592741012573,  
                'angle_max': 3.141592741012573,  
                'angle_increment': 0.0087,
                'scan_time': 0.01,          
                'range_min': 0.01,           
                'range_max': 100.0,          
                'use_inf': True,           
                'inf_epsilon': 0.1,          
            }]
        )
    ])
