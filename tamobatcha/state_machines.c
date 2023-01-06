#include <msp430.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "state_machines.h"
#include "switches.h"
#include "draw_shapes.h"
#include "buzzer.h"


  char count = 10;
  char dimming = 0;
  char pulse = 0;

void count_down5()
{
  switch (count)
    {
    case 0:
      drawString11x16(20, 10, "5", COLOR_WHITE, COLOR_BLACK);
      count+=1;
      break;

    case 1:
      drawString11x16(20, 35, "4", COLOR_WHITE, COLOR_BLACK);
      count+=1;
      break;

    case 2:
      drawString11x16(20, 60, "3", COLOR_WHITE, COLOR_BLACK);
      count++;
      break;

    case 3:
      drawString11x16(20, 85, "2", COLOR_WHITE, COLOR_BLACK);
      count++;
      break;

    case 4:
      drawString11x16(20, 110, "1", COLOR_WHITE, COLOR_BLACK);
      count++;
      break;

    default:
      clearScreen(COLOR_BLACK);
      count = 0;
    }
}

void pulsing()
{
  static short period = 1500;
  switch (pulse)
    {
    case 0:
      period = 1600;
      break;

    case 1:
      period = 1400;
      break;

    }
  short pulse_freq = 20000/period;
  buzzer_set_period(pulse_freq);
      
}

void shape_switch()
{
  switch(pulse)
    {
    case 0:
      draw_dude(screenWidth/2, 0);
      break;

    case 1:
      draw_dude(screenWidth/2, 35);
      break;
     
    }
}

void full_stop()
{
  clearScreen(COLOR_BLACK);
  button_state = 0;
  count = 0;
  green_on = 0;
  led_update();
}

void dim_80()
{
  switch (dimming)
    {
    case 0:
      red_on = 1;
      dimming += 1;
      break;

    case 1:
    case 2:
    case 3:
    case 4:
      red_on = 0;
      dimming = 0;
      break;
    }
  led_update();
}
}
