#include <Arduino.h>
#include "stepper.h"

void setup() {
  
}

void loop() {
  stepperCW(200);
  delay(1000);
  stepperCCW(200);
  delay(1000);
  
}