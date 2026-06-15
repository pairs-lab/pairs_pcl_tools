# pairs_pcl_tools

Point-cloud processing utilities for the PAIRS UAV stack. It cleans and reshapes
raw 3D LiDAR data before it reaches mapping, estimation, and planning. On this
branch the package provides a composable filtration node that clips, downsamples,
and reformats incoming LiDAR clouds, backed by reusable point-cloud I/O and
filter helpers.

## Contents
- `pairs_pcl_tools::PCLFiltration` — composable node that filters and downsamples incoming 3D LiDAR point clouds (loadable standalone or into an existing component container).

## Branches
- `ros1` — ROS 1 Noetic (catkin)
- `ros2` — ROS 2 Jazzy (ament_cmake)

## Install (ROS 2 Jazzy)
```bash
sudo apt install ros-jazzy-pairs-pcl-tools
```

## Usage

```bash
ros2 launch pairs_pcl_tools pcl_filter.launch.py
```

Or start the bundled tmux session (Gazebo simulation + filtration):

```bash
cd tmux && ./start.sh
```

## License
BSD 3-Clause. Derived from the CTU-MRS `pairs_pcl_tools` package; the original
copyright is retained in [LICENSE](LICENSE).
