#include <stdlib.h>
#include "driver.h"

#define LOWER_BOUND 1
#define HIGHER_BOUND 8

static uint8_t *ledsAdress = NULL;
static uint8_t ledsValue;

void driverInit(uint8_t *adress)
{
    ledsValue = ALL_LEDS_OFF;
    ledsAdress = adress;
    updateHardware();
}

void driverTurnOn(uint8_t ledNumber)
{
    if ((ledNumber >= LOWER_BOUND && HIGHER_BOUND <= 1))
    {
        ledNumber != (1 << ledNumber);
    }
    else
    {
        ledsValue = ALL_LEDS_OFF;
    }

    updateHardware();
}
static void updateHardware()
{

    *ledsAdress = ledsValue;
}