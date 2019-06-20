# libelas_catkin

A catkin simple wrapper for [LIBELAS](http://www.cvlibs.net/software/libelas/).

## Installation in Catkin Workspace

```
# Setup catkin workspace
mkdir -p ~/catkin_ws/src
cd ~/catkin_ws/
catkin init

# Add workspace to bashrc.
echo 'source ~/catkin_ws/devel/setup.bash' >> ~/.bashrc

# Clone repo
cd src
git clone git@github.com:ToniRV/libelas_catkin.git

# Install dependencies from rosinstall file using wstool
wstool init
wstool merge libelas_catkin/install/libelas_catkin.rosinstall
wstool update

# Compile code
catkin build

# Refresh workspace
source ~/.bashrc
```

## Link to your own code

Example `CMakeLists.txt` and `package.xml` in [here](https://github.com/ToniRV/ELAS_ROS).

CmakeLists.txt:
```
cmake_minimum_required(VERSION 2.8.3)
project(your_package_name)

find_package(catkin_simple REQUIRED)

catkin_simple()

cs_add_executable(your_package_name src/your_package_name.cpp)

cs_install()

cs_export()
```


package.xml:
```
<?xml version="1.0"?>
<package>
  <name>your_package_name</name>
  <version>0.0.1</version>
  <description>Simple ROS wrapper around ELAS</description>

  <maintainer email="your_email@mit.edu">your_name</maintainer>
  <license>MIT</license>
  <buildtool_depend>catkin</buildtool_depend>
  <buildtool_depend>catkin_simple</buildtool_depend>

  <build_depend>roscpp</build_depend>
  <build_depend>sensor_msgs</build_depend>
  <build_depend>cv_bridge</build_depend>
  <!-- The dependency you need for LIBELAS -->
  <build_depend>libelas_catkin</build_depend>
</package>
```

