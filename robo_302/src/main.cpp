#include <Arduino.h>
#include "stepper.h"

void setup() {
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  
}

void loop() {
  stepperCW(200);
  delay(1000);
  stepperCCW(200);
  delay(1000);
  
}