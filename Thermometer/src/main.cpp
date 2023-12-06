#include <Arduino.h>
int digital;
int analog;
boolean x = true;
void setup() {
  Serial.begin(9600);
  pinMode(32, INPUT);
  pinMode(A3, OUTPUT);
}

void loop() {
  digitalWrite(32, x);
  int digital = digitalRead(32);
  int analog = analogRead(32);
  Serial.print("Digital: " + digital);
  Serial.print("Analog: " + analog);
  x != x;
  sleep(1000);
}