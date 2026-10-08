#include <Arduino.h>
#include <JrkG2.h>
#include "stepper.h"
#include "solenoid.h"
#include "linearActuator.h"

void spinStepper(){
  stepperCW(200);
  delay(1000);
  stepperCCW(200);
  delay(1000);
}


void setup() {
  pinMode(sol, OUTPUT);
  linearActuatorSetup();
}

void loop() {
  linearActuator(0);
  delay(3000);
  linearActuator(20);
  delay(3000);
  linearActuator(0);
  
  
}