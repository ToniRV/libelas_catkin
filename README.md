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

