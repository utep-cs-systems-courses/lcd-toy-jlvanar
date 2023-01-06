#include <msp430.h>
#include "led.h"

unsigned char red_on = 0, green_on = 0;
unsigned char led_changed = 0;

static char redVal[] = {0, LED_RED}, greenVal[] = {0, LED_GREEN};

void led_init()
{
  P1DIR |= LEDS;
  led_update();
}

void led_update()
{
  char led_flags = redVal[red_on] | greenVal[green_on];

  P1OUT &= (0xff^LEDS) | led_flags;
  P1OUT |= led_flags;
}
