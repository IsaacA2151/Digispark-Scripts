#include "DigiKeyboard.h"

bool s = true;

void setup() {
  //empty
}
void loop() {
  if (s) {
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(600);
    DigiKeyboard.print("https://www.youtube.com/watch?v=a3Z7zEc7AXQ");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(4000);
    s = false;
  }
  
  DigiKeyboard.sendKeyStroke(KEY_N, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(250);
}
