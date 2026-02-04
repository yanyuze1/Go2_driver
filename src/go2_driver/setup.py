from setuptools import find_packages, setup
from glob import glob 
import os

package_name = 'go2_driver'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),

        (os.path.join('share', package_name, 'launch'),
            glob(os.path.join('launch', '*'))), 
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='huahua',
    maintainer_email='you@example.com',
    description='go2 ROS2 control package',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'go2_controller = go2_driver.go2_controller:main',
            'twist_bridge = go2_driver.twist_bridge:main',
            'go2_odom_imu = go2_driver.go2_odom_imu:main',
            'go2_joint_pub = go2_driver.go2_joint_pub:main',
        ],
    },
)

