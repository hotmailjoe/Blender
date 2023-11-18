# Install script for directory: C:/blender-git/blender/intern/cycles

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/blender-git/build_windows_x64_vc17_Release/bin/${BUILD_TYPE}")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/cycles/blender/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/cycles/app/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/cycles/bvh/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/cycles/device/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/cycles/doc/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/cycles/graph/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/cycles/integrator/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/cycles/kernel/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/cycles/scene/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/cycles/session/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/cycles/subd/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/cycles/util/cmake_install.cmake")

endif()

