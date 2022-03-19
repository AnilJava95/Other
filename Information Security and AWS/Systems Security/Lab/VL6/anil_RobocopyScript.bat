@ECHO off
REM anil script
REM This program uses Robocopy commands which are native to Windows7, 8, 10, Server 2012, Server 2016
ECHO This program is about to run Robocopy. Press ENTER to proceed...
ECHO Last chance to stop this program from running.
timeout /t 10 /nobreak
cd C:\Section2
REM Conditional statements for TargetWindows01
if exists C:\Section2\ERPdocuments ECHO "Folder already exists on TargetWindows01."
if not exists C:\Section2\ERPdocuments ECHO "Folder does not exist. I will create it."
timeout /t 1 /nobreak > NUL
if not exists C:\Section2\ERPdocuments mkdir C:\Section2\ERPdocuments
timeout /t 2 /nobreak > NUL
robocopy \\TargetWindows01\ERPdocuments \\TargetWindows01\Backup\ERPdocuments /e /z /IS /IT /SEC /MIR /tee /log+:backup_log.txt
robocopy \\TargetWindows01\ERPdocuments \\TargetWindows02Backup\ERPdocuments /e /z /IS /IT /SEC /MIR /tee /log+:backup_log.txt
