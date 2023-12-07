#include <Arduino.h>
int digital;
int analog;
boolean x = true;
void setup() {
  Serial.begin(115200);
  pinMode(32, INPUT);
}

void loop() {
  int digital = digitalRead(32);
  int analog = analogRead(32);
  Serial.print("Digital: ");
  Serial.println(digital);
  Serial.print("Analog: ");
  Serial.println(analog);
  delay(1000);
}