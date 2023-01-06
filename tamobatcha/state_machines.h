#ifndef _STATE_MACHINES_H_
#define _STATE_MACHINES_H_

#include <lcdutils.h>
#include "led.h"
#include "buzzer.h"
#include "shape.h"
#include "switches.h"
#include "lcddraw.h"
#include "switches.h"
#include "lcdutils.h"

char count;
char dimming;
char pulse;

void count_down5();
void dim_80();
void pulsing();
void shape_switch();
void full_stop();


#endif
