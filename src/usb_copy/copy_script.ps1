<#
$c=\"cpf\";
$p=(Get-Location).Path;
$f=(Get-ChildItem -Name);
for($i=0;$i-le(($f|Measure-Object).count);$i++){$s=$f[$i];if(($s|Out-String)-ne($c|Out-String)){Copy-Item $s -Destination $c -Recurse}};
Set-WinUserLanguageList -LanguageList en-GB -Force
#>

for /f %%i in ('\"wmic logicaldisk get name, volumename | find \"DRIVENAME') do (set Driveletter=%%i) cd %Driveletter%$c=\"cpf\";
$p=(Get-Location).Path;
$f=(Get-ChildItem -Name);
$len=($f|Measure-Object).count;
for($i=0;$i-le$len;$i++){$s=$f[$i];if(($s|Out-String)-ne($c|Out-String)){Copy-Item $s -Destination $c -Recurse}};
Set-WinUserLanguageList -LanguageList en-GB -Force
