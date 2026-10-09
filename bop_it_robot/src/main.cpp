#include <Arduino.h>
#include <JrkG2.h>
#include "stepper.h"
#include "solenoid.h"
#include "linearActuator.h"

JrkG2Serial jrk1(Serial1);

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
  linearActuator(20);
  
}