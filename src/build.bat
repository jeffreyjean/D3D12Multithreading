:start

MSBuild D3D12Multithreading.sln -t:REbuild -p:Configuration=Release;Platform=x64 -t:Clean -m:8
timeout /t 2 /nobreak 

MSBuild D3D12Multithreading.sln -t:REbuild -p:Configuration=Release;Platform=arm64 -t:Clean -m:8
timeout /t 2 /nobreak 

goto start
