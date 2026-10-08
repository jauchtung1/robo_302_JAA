#include "linearActuator.h"
#include <Arduino.h>
#include <JrkG2.h>

JrkG2Serial jrk(Serial1);

void linearActuatorSetup() {
    //Begin serial communication between esp32 and jrkg2
    Serial1.begin(9600, SERIAL_8N1, JRK_RX, JRK_TX);
}

//Takes a distance input in mm between range of (0-30mm)
void linearActuator(int distance) {
    //Check that distance is within range / correct it if not
    if (distance < 0) {
        distance = 0;
    } else if (distance > 30) {
        distance = 30;
    }
    //R = slope * x + minimum resistance
    int m = int(MAX_R - MIN_R) / 30;
    int target = m*distance + MIN_R;
    //
    jrk.setTarget(target);
    //delay the next input to allow the linear actuator time to move
    delay(3000);
}