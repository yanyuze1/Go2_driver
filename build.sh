#!/bin/bash
LIVOX_BUILD_SCRIPT="./src/livox_ros_driver2/build.sh"  # livox构建脚本路径
ROS_DISTRO="humble"                                   # ROS2发行版名称
SETUP_SCRIPT="./install/setup.bash"                   # 环境配置脚本路径

# 第一步：检查livox构建脚本是否存在
if [ ! -f "${LIVOX_BUILD_SCRIPT}" ]; then
    echo -e "\033[31m错误：找不到构建脚本 ${LIVOX_BUILD_SCRIPT}\033[0m"
    echo "请确认当前工作目录是否正确，且livox_ros_driver2源码已正确下载"
    exit 1  # 退出脚本，返回非0错误码
fi

# 第二步：检查构建脚本是否具有可执行权限
if [ ! -x "${LIVOX_BUILD_SCRIPT}" ]; then
    echo -e "\033[33m警告：构建脚本缺少可执行权限，正在自动添加...\033[0m"
    chmod +x "${LIVOX_BUILD_SCRIPT}"
    # 检查chmod操作是否成功
    if [ $? -ne 0 ]; then
        echo -e "\033[31m错误：无法为构建脚本添加可执行权限，请手动执行 chmod +x ${LIVOX_BUILD_SCRIPT}\033[0m"
        exit 1
    fi
fi

# 第三步：执行livox构建脚本（传入humble参数）
echo -e "\033[32m=====================================\033[0m"
echo -e "\033[32m开始执行构建脚本，发行版：${ROS_DISTRO}\033[0m"
echo -e "\033[32m=====================================\033[0m"
"${LIVOX_BUILD_SCRIPT}" "${ROS_DISTRO}"

# 第四步：检查构建脚本执行结果（构建失败则直接退出，不执行后续source操作）
if [ $? -ne 0 ]; then
    echo -e "\033[31m=====================================\033[0m"
    echo -e "\033[31m错误：livox_ros_driver2构建脚本执行失败！\033[0m"
    echo -e "\033[31m无法继续执行source ${SETUP_SCRIPT}\033[0m"
    exit 1
fi

# 第五步：检查setup.bash是否存在（避免构建成功但未生成install目录的异常）
if [ ! -f "${SETUP_SCRIPT}" ]; then
    echo -e "\033[31m错误：构建成功，但找不到环境配置脚本 ${SETUP_SCRIPT}\033[0m"
    echo "请确认构建过程是否正常生成了install目录"
    exit 1
fi

# 第六步：执行source install/setup.bash配置环境
echo -e "\033[32m=====================================\033[0m"
echo -e "\033[32m构建成功，开始配置环境变量：source ${SETUP_SCRIPT}\033[0m"
echo -e "\033[32m=====================================\033[0m"
source "${SETUP_SCRIPT}"

# 关键说明：告知用户source的生效范围限制
echo -e "\033[33m提示：环境变量仅在当前脚本的子进程中生效！\033[0m"
echo -e "\033[33m若需在当前终端生效，请手动执行：source ${SETUP_SCRIPT}\033[0m"
echo -e "\033[33m若需永久生效，请将上述命令添加到 ~/.bashrc 文件中\033[0m"

# 第七步：整体流程完成提示
echo -e "\033[32m=====================================\033[0m"
echo -e "\033[32m整个流程执行完成！\033[0m"
exit 0
