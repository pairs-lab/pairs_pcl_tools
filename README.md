# pairs_pcl_tools

Point-cloud processing utilities for the PAIRS UAV stack. It cleans and reshapes
3D LiDAR data before it reaches mapping, estimation, and planning: filtering raw
sensor scans, registering live clouds against a prior map, generating free-space
clouds for occupancy mapping, and several offline tools for inspecting drift and
normals. On this branch the runtime components ship as ROS 1 nodelets.

## Contents

Nodelets:
- `pairs_pcl_tools/PCLFiltration` — filters and downsamples incoming 3D LiDAR point clouds.
- `pairs_pcl_tools/PCL2MapRegistration` — registers a live point cloud to an a-priori map.
- `pairs_pcl_tools/PCLPublishCloudFileToNetwork` — loads a `.pcd` file and publishes it onto the ROS network.
- `pairs_pcl_tools/FreespacePointcloudCreator` — turns invalid/zero returns in an organized cloud into max-range free-space points for mapping.

Offline executables:
- `estimate_cloud_to_cloud_drift` — measures drift between two point clouds.
- `estimate_lidar_slam_drift` — measures drift of a LiDAR SLAM trajectory.
- `pcd_estimate_normals` — estimates and writes surface normals for a `.pcd` file.
- `concatenate_lidar_scans` — merges multiple LiDAR scans into one cloud.

## Branches
- `ros1` — ROS 1 Noetic (catkin)
- `ros2` — ROS 2 Jazzy (ament_cmake)

## Install (ROS 1 Noetic)
```bash
sudo apt install ros-noetic-pairs-pcl-tools
```

## Usage

```bash
roslaunch pairs_pcl_tools pcl_filter.launch
roslaunch pairs_pcl_tools registration_pcl_to_map.launch
roslaunch pairs_pcl_tools create_freespace_pointcloud.launch
roslaunch pairs_pcl_tools pcd_to_ros_network.launch
```

## License
BSD 3-Clause. Derived from the CTU-MRS `pairs_pcl_tools` package; the original
copyright is retained in [LICENSE](LICENSE).
