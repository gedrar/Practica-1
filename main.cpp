#include <Arduino.h>

// Definim el pin del LED. 
// A la protoboard ho has connectat al pin 7.
const int ledPin = 7; 

void setup() {
  // 1. Iniciar pin de led com a sortida
  pinMode(ledPin, OUTPUT);
  
  // 2. Iniciar el terminal sèrie
  Serial.begin(115200);
  
  // Petita pausa per estabilitzar el port sèrie
  delay(2000); 
  Serial.println("Iniciant Pràctica 1: Blink...");
}

// 3. Bucle infinit
void loop() {
  // Encendre led
  digitalWrite(ledPin, HIGH);
  
  // Treure per port sèrie missatge ON
  Serial.println("ON");
  
  // Espera de 500 mil·lisegons
  delay(500);
  
  // Apagar led
  digitalWrite(ledPin, LOW);
  
  // Treure per port sèrie missatge OFF
  Serial.println("OFF");
  
  // Espera de 500 mil·lisegons
  delay(500);
}