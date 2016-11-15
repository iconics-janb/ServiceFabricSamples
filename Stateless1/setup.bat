set curdir=%cd%\..\Stateless1Pkg.Code.1.0.0
set checkfile=%curdir%\DcomModule.exe

echo %checkfile%
if exist %checkfile% (
	echo "it exists"
	setx -m TestVariable "FileExists"
	%checkfile% /regserver
) else (
	echo "does not exist"
	setx -m TestVariable %checkfile%
)



