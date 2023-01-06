#include "switches.h"

int buttonstate = 0;
char switch1_down;
char switch2_down;
char switch3_down;
char switch4_down;

static char
switch_update_interrupt_sense()
{
  char p2val = P2IN;
  P2IES |= (p2val & SWITCHES);
  P2IES &= (p2val | ~SWITCHES);
  return p2val;
}

void
switch_init(void)
{
  P2REN |= SWITCHES;   /* resistor enable */
  P2IE |= SWITCHES;    /* interrupt enable */
  P2OUT |= SWITCHES;   /* pullups */
  P2DIR &= ~SWITCHES;  /* set dem input bits*/
  switch_update_interrupt_sense();
}

void
switch_interrupt_handler(void)
{
  char p2val = switch_update_interrupt_sense();
  button_state = ~p2val & SWITCHES;
  switch1_down = (p2val & SW1) ? 0 : 1;
  switch2_down = (p2val & SW2) ? 0 : 1;
  switch3_down = (p2val & SW3) ? 0 : 1;
  switch4_down = (p2val & SW4) ? 0 : 1;
  if(switch1_down)
    {
      button_state = 1;
    } else if(switch2_down)
    {
      button_state = 2;
    } else if(switch3_down)
    {
      button_state = 3;
    } else if(switch4_down)
    {
      button_state = 4;
    }
}
