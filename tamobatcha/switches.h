#ifndef _SWITCHES_H_
#define _SWITCHES_H_

#include <msp430.h>

#define LED BIT6

#define SW1 1
#define SW2 2
#define SW3 4
#define SW4 8

#define SWITCHES 15

extern char switch1_down;
extern char switch2_down;
extern char switch3_down;
extern char switch4_down;
extern char switch_state_changed;
extern char button_state;


void switch_init();
void switch_interrupt_handler();

#endif
