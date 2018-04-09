#include "DigiKeyboard.h"

void setup() {
  // don't need to set anything up to use DigiKeyboard

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("notepad");
  DigiKeyboard.delay(1000);
   DigiKeyboard.println("");
   DigiKeyboard.delay(500);
  DigiKeyboard.println("do ");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("msgbox("   ")");
   DigiKeyboard.delay(500);
}


void loop() {
  
}
