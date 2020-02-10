#include <unity.h>
#include "../lib/driver.h"

static uint8_t virtualLeds;

void setUp(void)
{
    virtualLeds = ALL_LEDS_ON;
    driverInit(&virtualLeds);
}

void tearDown()
{
}

void LedsAreOffAfterInit()
{

    TEST_ASSERT_EQUAL_UINT8(ALL_LEDS_OFF, virtualLeds);
}

void TurnALedOn()
{

    driverTurnOn(2);
    TEST_ASSERT_EQUAL_UINT8(0x02, virtualLeds);
}
void TurnIvalidLedOn()
{
    driverTurnOn(12);
    TEST_ASSERT_EQUAL_UINT8(ALL_LEDS_OFF, virtualLeds);
}

int main()
{
    UNITY_BEGIN();

    RUN_TEST(LedsAreOffAfterInit);
    RUN_TEST(TurnALedOn);
    RUN_TEST(TurnIvalidLedOn);
    return 0;
}
