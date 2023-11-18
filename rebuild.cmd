echo off 
if "%VSCMD_VER%" == "" ( 
  call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" x64 
) 
"C:\CMake\bin\cmake.exe" . 
echo %TIME% > buildtime.txt 
msbuild 	C:\blender-git\blender\..\build_windows_x64_vc17_Release\INSTALL.vcxproj 	/property:Configuration=Release 	/maxcpucount:2 	/verbosity:minimal 	/p:platform=x64 	/flp:Summary;Verbosity=minimal;LogFile=C:\blender-git\blender\..\build_windows_x64_vc17_Release\Build.log 
echo %TIME% >> buildtime.txt 
