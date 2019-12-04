echo delete object...
del /f /q %obj_path%\*.o
echo.

set include=-I %project_path%\..\header -I %arch_path%

echo compile ...
%c_compiler% -D%os_version% -c -O2 %include% %project_path%\*.c

echo.

echo copy file...
copy *.o %obj_path%\*.o
echo.

echo delete file...
del /f /q *.o
echo.