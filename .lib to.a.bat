@echo off
echo 正在生成.a文件
for /R . %%i in (*.lib) do copy %%i %%~dpi\lib%%~ni.a
pause