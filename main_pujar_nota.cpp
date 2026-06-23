#include <Arduino.h>

void setup() {
  // Iniciem el terminal sèrie a 115200 baudios
  Serial.begin(115200);
  
  // Petita pausa perquè el port USB de l'S3 s'estabilitzi
  delay(2000); 
  
  Serial.println("--- Iniciant lectura de Temperatura Interna ESP32-S3 ---");
}

void loop() {
  // La funció temperatureRead() és nativa de l'ESP32 i retorna els graus Celsius
  float temp_c = temperatureRead();
  
  Serial.print("Temperatura del nucli: ");
  Serial.print(temp_c);
  Serial.println(" ºC");
  
  // Esperem 1 segon abans de fer la següent lectura
  delay(1000);
}