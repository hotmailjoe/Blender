# Install script for directory: C:/blender-git/blender/intern

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
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/atomic/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/clog/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/ghost/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/guardedalloc/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/libmv/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/memutil/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/opencolorio/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/opensubdiv/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/mikktspace/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/eigen/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/sky/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/audaspace/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/dualcon/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/iksolver/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/itasc/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/cycles/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/locale/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/rigidbody/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/utfconv/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/mantaflow/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/openvdb/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/quadriflow/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/intern/ffmpeg/cmake_install.cmake")

endif()

