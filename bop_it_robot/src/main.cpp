#include <Arduino.h>
#include "stepper.h"

void spinStepper(){
  stepperCW(200);
  delay(1000);
  stepperCCW(200);
  delay(1000);
}

void solenoid3() {

}

void setup() {
  solenoid3();
  
}

void loop() {
  
  
}