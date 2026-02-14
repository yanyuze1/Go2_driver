# 1. Project Description
This repository is the foundational project for Chapter 1 of the Unitree robot dog ROS2-Gazebo simulation series. The repository will be updated from time to time as the series progresses. You can track the current project plan on my Feishu page: [Project Feishu](https://my.feishu.cn/docx/RsFVdrUeFojrbsxA7AEcTKKenMg). This is expected to be a very long-term project.

![Project overview](images/image.png)

# 2. Hardware Used in This Project

| Device | Quantity | Purchase Channel | Reference Price (CNY) | Notes |
|---|---:|---|---|---|
| Unitree Go2 | 1 | JD, Taobao, etc. | PRO: 19,999 (non-official secondary development)<br>X: 29,999 (official secondary development)<br>EDU: 39,999–89,999 (official secondary development) | Required |
| Gigabit Ethernet cable | At least 1 | JD, Taobao, etc. | 24 | A 5-meter cable is recommended for the first one |
| Mid 360 LiDAR | 1 | JD, Taobao, etc. | 3,999 | Optional |
| D455 / D435 | 1 | JD, Taobao, etc. | D435: 2,300<br>D455: 3,600 | Optional |
| 30V to 19V buck converter | 1 | JD, Taobao, etc. | 29 | Optional |
| 1-to-2 LiDAR splitter cable | 1 | JD, Taobao, etc. | 85 | Optional |
| 3-port Gigabit switch | 1 | JD, Taobao, etc. | 48 | Optional |
| 3D printed parts | 3 | DIY, Taobao, etc. | 20 each | Optional |

# 3. Clone and Build
```bash
git clone https://github.com/yanyuze1/Go2_driver.git    # Clone from GitHub
git clone https://gitee.com/yanyu-sauce/go2_driver.git  # Clone from Gitee
cd Go2_driver
./build.sh                                               # Build
```

# 4. Usage
```bash
ros2 launch go2_bringup go2_base.launch.py              # Basic bringup
ros2 run teleop_twist_keyboard teleop_twist_keyboard    # Control movement via cmd_vel
ros2 launch go2_bringup go2_navigation.launch.py        # Navigation
ros2 launch go2_bringup go2_slam.launch.py              # Mapping (SLAM)
```

# 5. Demo Results
Basic functionality

![Basic demo](images/1429936741.gif)

Keyboard control

![Keyboard control demo](images/18446744073331480211.gif)

Mapping demo

![Mapping demo](images/18446744071947251922.gif)

Navigation demo

![Navigation demo](images/f8af8ef602d995534760e8bf3b8003df.gif)

# 6. More Complete Tutorial
More tutorials are available in: [Unitree Go2 Real-World Deployment](https://my.feishu.cn/docx/RsFVdrUeFojrbsxA7AEcTKKenMg).
