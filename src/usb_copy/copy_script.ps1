$c=\"cpf\";
$p=(Get-Location).Path;
$f=(Get-ChildItem -Name);
for($i=0;$i-le(($f|Measure-Object).count);$i++){$s=$f[$i];if(($s|Out-String)-ne($c|Out-String)){Copy-Item $s -Destination $c -Recurse}};
Set-WinUserLanguageList -LanguageList en-GB -Force