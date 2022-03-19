:: set CLASSPATH = C:\Users\Anil\Desktop
:: java InitArray 5 0 4
:: pause

:: %~dp0 stands for the directory of the bat file
:: We could use cd %~dp0 too
:: Make sure you dont have spaces before or after "=".
set CLASSPATH=%~dp0 
java InitArray 5 0 4
pause