#include <Arduino.h>
#include "stepper.h"
#include "solenoid.h"

void spinStepper(){
  stepperCW(200);
  delay(1000);
  stepperCCW(200);
  delay(1000);
}


void setup() {
  pinMode(sol, OUTPUT);
  
}

void loop() {
  solenoid3();
  
}