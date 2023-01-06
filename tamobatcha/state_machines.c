#include <msp430.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lcdutils.h"
#include "lcddraw.h"
#include "state_machines.h"
#include "switches.h"
#include "shape.h"
#include "buzzer.h"


  char count = 10;
  char dimming = 0;
  char pulse = 0;

void count_down5()
{
  switch (count)
    {
    case 0:
      buzzer_set_period(5000);
      drawString11x16(20, 10, "5", COLOR_WHITE, COLOR_BLACK);
      count+=1;
      break;

    case 1:
      buzzer_set_period(0);
      buzzer_set_period(10000);
      drawString11x16(20, 35, "4", COLOR_WHITE, COLOR_BLACK);
      count+=1;
      break;

    case 2:
      buzzer_set_period(0);
      buzzer_set_period(15000);
      drawString11x16(20, 60, "3", COLOR_WHITE, COLOR_BLACK);
      count++;
      break;

    case 3:
      buzzer_set_period(0);
      buzzer_set_period(20000);
      drawString11x16(20, 85, "2", COLOR_WHITE, COLOR_BLACK);
      count++;
      break;

    case 4:
      buzzer_set_period(0);
      buzzer_set_period(25000);
      drawString11x16(20, 110, "1", COLOR_WHITE, COLOR_BLACK);
      count++;
      break;

    default:
      buzzer_set_period(0);
      clearScreen(COLOR_BLACK);
      count = 0;
    }
}

void pulsing()
{
  static short buzz;
  switch (pulse)
    {
    case 0:
      buzz = 16000;
      pulse += 1;
      break;

    case 1:
      buzz = 14000;
      pulse = pulse-1;
      break;

    }
  buzzer_set_period(buzz);
      
}

void shape_switch()
{
  clearScreen(COLOR_GREEN);
  switch(pulse)
    {
    case 0:
      erase_dude(screenWidth/2, 35, COLOR_GREEN);
      draw_dude(screenWidth/2, 70);
      break;

    case 1:
      erase_dude(screenWidth/2, 70, COLOR_GREEN);
      draw_dude(screenWidth/2, 35);
      break;
     
    }
}

void full_stop()
{
  clearScreen(COLOR_BLACK);
  button_state = 0;
  buzzer_set_period(0);
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
      dimming+=1;
      break;
    case 2:
      dimming+=1;
      break;
    case 3:
      dimming+=1;
      break;
    case 4:
      red_on = 0;
      dimming = 0;
      break;
    }
  led_update();
}

