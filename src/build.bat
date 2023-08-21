REM there are two ways of running building script below
REM Option 1: Tools->Command Lin->Developer Command Line
REM Option 2: Open Terminal, and run c:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Auxiliary\Build\vcvars64.bat
REM Note: Option 2 path varies depends on Visual Studio version installed (like 2023 or Enterprise version, etc)

:start

MSBuild D3D12Multithreading.sln -t:REbuild -p:Configuration=Release;Platform=x64 -t:Clean -m:8
timeout /t 2 /nobreak 

MSBuild D3D12Multithreading.sln -t:REbuild -p:Configuration=Release;Platform=arm64 -t:Clean -m:8
timeout /t 2 /nobreak 

goto start
