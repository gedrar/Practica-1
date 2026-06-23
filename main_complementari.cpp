#include <Arduino.h>

// El LED RGB integrat a les ESP32-S3 sol estar al pin 48 (o al pin de la constant RGB_BUILTIN)
#ifndef RGB_BUILTIN
#define RGB_BUILTIN 48
#endif

void setup() {
  Serial.begin(115200);
  delay(2000);
  Serial.println("--- Test LED RGB Integrat (Neopixel) ---");
}

void loop() {
  // Formato: neopixelWrite(PIN, Vermell, Verd, Blau) - Valors de 0 a 255
  
  Serial.println("Color: VERMELL");
  neopixelWrite(RGB_BUILTIN, 255, 0, 0); // Vermell al màxim
  delay(1000);
  
  Serial.println("Color: VERD");
  neopixelWrite(RGB_BUILTIN, 0, 255, 0); // Verd al màxim
  delay(1000);
  
  Serial.println("Color: BLAU");
  neopixelWrite(RGB_BUILTIN, 0, 0, 255); // Blau al màxim
  delay(1000);
  
  Serial.println("Color: APAGAT");
  neopixelWrite(RGB_BUILTIN, 0, 0, 0); // Apagat
  delay(1000);
}