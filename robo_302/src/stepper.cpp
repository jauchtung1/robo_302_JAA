#include "stepper.h"
#include <Arduino.h>

#define dir 5
#define step 4

void stepperCW(int steps) {

    for (int i = 0;i<steps;i++) {

    digitalWrite(dir, LOW);
    digitalWrite(step, HIGH);
    delayMicroseconds(500);

    digitalWrite(step, LOW);
    delayMicroseconds(500);

    }

}

void stepperCCW(int steps) {

    for (int i = 0;i<steps;i++) {

    digitalWrite(dir, HIGH);
    digitalWrite(step, HIGH);
    delayMicroseconds(500);

    digitalWrite(dir, LOW);
    digitalWrite(step, LOW);
    delayMicroseconds(500);

    }

}