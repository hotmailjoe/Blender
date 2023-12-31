# Install script for directory: C:/blender-git/blender/source/blender

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
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/datatoc/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/editors/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/windowmanager/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/animrig/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/asset_system/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/blenkernel/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/blenlib/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/bmesh/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/draw/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/render/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/blenfont/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/blentranslation/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/blenloader/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/depsgraph/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/ikplugin/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/simulation/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/geometry/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/gpu/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/imbuf/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/imbuf/intern/oiio/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/nodes/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/modifiers/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/gpencil_modifiers_legacy/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/sequencer/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/shader_fx/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/io/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/functions/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/makesdna/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/makesrna/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/compositor/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/blendthumb/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/imbuf/intern/openexr/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/imbuf/intern/cineon/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/python/cmake_install.cmake")
  include("C:/blender-git/build_windows_x64_vc17_Release/source/blender/freestyle/cmake_install.cmake")

endif()

