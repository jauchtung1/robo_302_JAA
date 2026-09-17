#include "solenoid.h"
#include <Arduino.h>

void solenoid() {
    pinMode(sol, OUTPUT);
    digitalWrite(sol, HIGH);
    delayMicroseconds(500);
    digitalWrite(sol, LOW);

}