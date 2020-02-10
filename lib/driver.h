#ifndef _DRIVER_H
#define _DRIVER_H

#include <stdint.h>

#define ALL_LEDS_OFF ((uint8_t)0x00)
#define ALL_LEDS_ON (~ALL_LEDS_OFF)

void driverInit(uint8_t *adress);
void driverTurnOn(uint8_t ledNumber);
static void updateHardware();

#endif