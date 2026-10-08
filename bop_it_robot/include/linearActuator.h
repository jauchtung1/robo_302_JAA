#ifndef LINEARACTUATOR_H
#define LINEARACTUATOR_H

#define JRK_RX 18
#define JRK_TX 17

#define MIN_R 600
#define MAX_R 3750

void linearActuatorSetup();

void linearActuator(int distance);

#endif