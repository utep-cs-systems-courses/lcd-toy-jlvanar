#include <msp430.h>
#include "libTimer.h"
#include "lcdutils.h"
#include "lcddraw.h"
#include "state_machines.h"


short redrawScreen = 1;

void wdt_c_handler()
{
  static int blinkCount = 0;
  if(++blinkCount == 150){
    blinkCount = 0;
    redrawScreen = 1;
  }
}

void main(void)
{
  led_init();
  P1DIR |= LED_GREEN;
  P1OUT |= LED_GREEN;

  configureClocks();/* master oscillator, CPU & periph clocks */
  enableWDTInterrupts();/* enable time-based interrupts */
  buzzer_init();
  lcd_init();
  switch_init();
  or_sr(0x8);/* Enables Interrupts */
  clearScreen(COLOR_GREEN);
  draw_dude(50, 50);


  while(1){
    if(redrawScreen){
      redrawScreen = 0;
      switch(button_state){
      case 1:
	count_down5();
	break;
      case 2:
	dim_80();
	break;
      case 3:
	full_stop();
	break;
      case 4:
	shape_switch();
	pulsing();
	break;
      }
    }
    P1OUT &= ~LED_GREEN;
    or_sr(0x10);/* CPU OFF */
    P1OUT |= LED_GREEN; /* Green LED indicates CPU power status, high when CPU off */
  }
}
