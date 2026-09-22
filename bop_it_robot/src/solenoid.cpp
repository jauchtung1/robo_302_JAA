#include "solenoid.h"
#include <Arduino.h>

void solenoid3() {

    for (int i = 0; i < 3; i++) {
        digitalWrite(sol, HIGH);
        delay(400);
        digitalWrite(sol, LOW);
        delay(400);
    }

}