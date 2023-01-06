#include <msp430.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lcddraw.h"
#include "shape.h"

void draw_dude(u_char start_col, u_char start_row)
{
  
  drawPixel(start_col+10, start_row, COLOR_BLACK);
  drawPixel(start_col+11, start_row, COLOR_BLACK);
  drawPixel(start_col+12, start_row, COLOR_CYAN);
  drawPixel(start_col+13, start_row, COLOR_CYAN);
  drawPixel(start_col+14, start_row, COLOR_BLACK);
  drawPixel(start_col+15, start_row, COLOR_BLACK);
  drawPixel(start_col+16, start_row, COLOR_BLACK);

  drawPixel(start_col+8, start_row+1, COLOR_BLACK);
  drawPixel(start_col+9, start_row+1, COLOR_BLACK);
  drawPixel(start_col+10, start_row+1, COLOR_BLACK);
  drawPixel(start_col+11, start_row+1, COLOR_CYAN);
  drawPixel(start_col+12, start_row+1, COLOR_CYAN);
  drawPixel(start_col+13, start_row+1, COLOR_BLACK);
  drawPixel(start_col+14, start_row+1,COLOR_BLACK);
  drawPixel(start_col+15, start_row+1, COLOR_BLACK);
  drawPixel(start_col+16, start_row+1, COLOR_BLACK);
  drawPixel(start_col+17, start_row+1, COLOR_BLACK);
  drawPixel(start_col+18, start_row+1, COLOR_BLACK);

  drawPixel(start_col+6, start_row+2, COLOR_BLACK);
  drawPixel(start_col+7, start_row+2, COLOR_BLACK);
  drawPixel(start_col+8, start_row+2, COLOR_BLACK);
  drawPixel(start_col+9, start_row+2, COLOR_BLACK);
  drawPixel(start_col+10, start_row+2, COLOR_CYAN);
  drawPixel(start_col+11, start_row+2, COLOR_CYAN);
  drawPixel(start_col+12, start_row+2, COLOR_BLACK);
  drawPixel(start_col+13, start_row+2, COLOR_BLACK);
  drawPixel(start_col+14, start_row+2, COLOR_BLACK);
  drawPixel(start_col+15, start_row+2, COLOR_BLACK);
  drawPixel(start_col+16, start_row+2, COLOR_BLACK);
  drawPixel(start_col+17, start_row+2, COLOR_BLACK);
  drawPixel(start_col+18, start_row+2, COLOR_BLACK);
  drawPixel(start_col+19, start_row+2, COLOR_BLACK);

  drawPixel(start_col+5, start_row+3, COLOR_BLACK);
  drawPixel(start_col+6, start_row+3, COLOR_BLACK);
  drawPixel(start_col+7, start_row+3, COLOR_BLACK);
  drawPixel(start_col+8, start_row+3, COLOR_BLACK);
  drawPixel(start_col+9, start_row+3, COLOR_BLACK);
  drawPixel(start_col+10, start_row+3, COLOR_CYAN);
  drawPixel(start_col+11, start_row+3, COLOR_CYAN);
  drawPixel(start_col+12, start_row+3, COLOR_BLACK);
  drawPixel(start_col+13, start_row+3, COLOR_BLACK);
  drawPixel(start_col+14, start_row+3, COLOR_BLACK);
  drawPixel(start_col+15, start_row+3, COLOR_BLACK);
  drawPixel(start_col+16, start_row+3, COLOR_BLACK);
  drawPixel(start_col+17, start_row+3, COLOR_BLACK);
  drawPixel(start_col+18, start_row+3, COLOR_BLACK);
  drawPixel(start_col+19, start_row+3, COLOR_BLACK);
  drawPixel(start_col+20, start_row+3, COLOR_BLACK);

  drawPixel(start_col+4, start_row+4, COLOR_BLACK);
  drawPixel(start_col+5, start_row+4, COLOR_BLACK);
  drawPixel(start_col+6, start_row+4, COLOR_BLACK);
  drawPixel(start_col+7, start_row+4, COLOR_BLACK);
  drawPixel(start_col+8, start_row+4, COLOR_BLACK);
  drawPixel(start_col+9, start_row+4, COLOR_BLACK);
  drawPixel(start_col+10, start_row+4, COLOR_CYAN);
  drawPixel(start_col+11, start_row+4, COLOR_CYAN);
  drawPixel(start_col+12, start_row+4, COLOR_BLACK);
  drawPixel(start_col+13, start_row+4, COLOR_BLACK);
  drawPixel(start_col+14, start_row+4, COLOR_BROWN);
  drawPixel(start_col+15, start_row+4, COLOR_BROWN);
  drawPixel(start_col+16, start_row+4, COLOR_BROWN);
  drawPixel(start_col+17, start_row+4, COLOR_BROWN);
  drawPixel(start_col+18, start_row+4, COLOR_BROWN);
  drawPixel(start_col+19, start_row+4, COLOR_BROWN);
  drawPixel(start_col+20, start_row+4, COLOR_BROWN);
  drawPixel(start_col+21, start_row+4, COLOR_BLACK);

  drawPixel(start_col+3, start_row+5, COLOR_BLACK);
  drawPixel(start_col+4, start_row+5, COLOR_BLACK);
  drawPixel(start_col+5, start_row+5, COLOR_BLACK);
  drawPixel(start_col+6, start_row+5, COLOR_BLACK);
  drawPixel(start_col+7, start_row+5, COLOR_BLACK);
  drawPixel(start_col+8, start_row+5, COLOR_BLACK);
  drawPixel(start_col+9, start_row+5, COLOR_BLACK);
  drawPixel(start_col+10, start_row+5, COLOR_CYAN);
  drawPixel(start_col+11, start_row+5, COLOR_CYAN);
  drawPixel(start_col+12, start_row+5, COLOR_BROWN);
  drawPixel(start_col+13, start_row+5, COLOR_BROWN);
  drawPixel(start_col+14, start_row+5, COLOR_BROWN);
  drawPixel(start_col+15, start_row+5, COLOR_BROWN);
  drawPixel(start_col+16, start_row+5, COLOR_BROWN);
  drawPixel(start_col+17, start_row+5, COLOR_BLACK);
  drawPixel(start_col+18, start_row+5, COLOR_BLACK);
  drawPixel(start_col+19, start_row+5, COLOR_BROWN);
  drawPixel(start_col+20, start_row+5, COLOR_BROWN);
  drawPixel(start_col+21, start_row+5, COLOR_BLACK);

  drawPixel(start_col+2, start_row+6, COLOR_BLACK);
  drawPixel(start_col+3, start_row+6, COLOR_BLACK);
  drawPixel(start_col+4, start_row+6, COLOR_BLACK);
  drawPixel(start_col+5, start_row+6, COLOR_BLACK);
  drawPixel(start_col+6, start_row+6, COLOR_BLACK);
  drawPixel(start_col+7, start_row+6, COLOR_BLACK);
  drawPixel(start_col+8, start_row+6, COLOR_BLACK);
  drawPixel(start_col+9, start_row+6, COLOR_CYAN);
  drawPixel(start_col+10, start_row+6, COLOR_CYAN);
  drawPixel(start_col+11, start_row+6, COLOR_CYAN);
  drawPixel(start_col+12, start_row+6, COLOR_CYAN);
  drawPixel(start_col+13, start_row+6, COLOR_BROWN);
  drawPixel(start_col+14, start_row+6, COLOR_BROWN);
  drawPixel(start_col+15, start_row+6, COLOR_BROWN);
  drawPixel(start_col+16, start_row+6, COLOR_BLACK);
  drawPixel(start_col+17, start_row+6, COLOR_GREEN);
  drawPixel(start_col+18, start_row+6, COLOR_WHITE);
  drawPixel(start_col+19, start_row+6, COLOR_BLACK);
  drawPixel(start_col+20, start_row+6, COLOR_BROWN);
  drawPixel(start_col+21, start_row+6, COLOR_BROWN);
  drawPixel(start_col+22, start_row+6, COLOR_BLACK);

  drawPixel(start_col+1, start_row+7, COLOR_BLACK);
  drawPixel(start_col+2, start_row+7, COLOR_BLACK);
  drawPixel(start_col+3, start_row+7, COLOR_BLACK);
  drawPixel(start_col+4, start_row+7, COLOR_BLACK);
  drawPixel(start_col+5, start_row+7, COLOR_BLACK);
  drawPixel(start_col+6, start_row+7, COLOR_BLACK);
  drawPixel(start_col+7, start_row+7, COLOR_BLACK);
  drawPixel(start_col+8, start_row+7, COLOR_BLACK);
  drawPixel(start_col+9, start_row+7, COLOR_CYAN);
  drawPixel(start_col+10, start_row+7, COLOR_CYAN);
  drawPixel(start_col+11, start_row+7, COLOR_CYAN);
  drawPixel(start_col+12, start_row+7, COLOR_CYAN);
  drawPixel(start_col+13, start_row+7, COLOR_BROWN);
  drawPixel(start_col+14, start_row+7, COLOR_BROWN);
  drawPixel(start_col+15, start_row+7, COLOR_BROWN);
  drawPixel(start_col+16, start_row+7, COLOR_BLACK);
  drawPixel(start_col+17, start_row+7, COLOR_GREEN);
  drawPixel(start_col+18, start_row+7, COLOR_GREEN);
  drawPixel(start_col+19, start_row+7, COLOR_BLACK);
  drawPixel(start_col+20, start_row+7, COLOR_BROWN);
  drawPixel(start_col+21, start_row+7, COLOR_BROWN);
  drawPixel(start_col+22, start_row+7, COLOR_BLACK);

  drawPixel(start_col, start_row+8, COLOR_BLACK);
  drawPixel(start_col+1, start_row+8, COLOR_BLACK);
  drawPixel(start_col+2, start_row+8, COLOR_BLACK);
  drawPixel(start_col+3, start_row+8, COLOR_BLACK);
  drawPixel(start_col+4, start_row+8, COLOR_BLACK);
  drawPixel(start_col+5, start_row+8, COLOR_BLACK);
  drawPixel(start_col+6, start_row+8, COLOR_BLACK);
  drawPixel(start_col+7, start_row+8, COLOR_BLACK);
  drawPixel(start_col+8, start_row+8, COLOR_BLACK);
  drawPixel(start_col+9, start_row+8, COLOR_CYAN);
  drawPixel(start_col+10, start_row+8, COLOR_CYAN);
  drawPixel(start_col+11, start_row+8, COLOR_CYAN);
  drawPixel(start_col+12, start_row+8, COLOR_CYAN);
  drawPixel(start_col+13, start_row+8, COLOR_BROWN);
  drawPixel(start_col+14, start_row+8, COLOR_BROWN);
  drawPixel(start_col+15, start_row+8, COLOR_BROWN);
  drawPixel(start_col+16, start_row+8, COLOR_BROWN);
  drawPixel(start_col+17, start_row+8, COLOR_BLACK);
  drawPixel(start_col+18, start_row+8, COLOR_BLACK);
  drawPixel(start_col+19, start_row+8, COLOR_BROWN);
  drawPixel(start_col+20, start_row+8, COLOR_BROWN);
  drawPixel(start_col+21, start_row+8, COLOR_BROWN);
  drawPixel(start_col+22, start_row+8, COLOR_BLACK);

  drawPixel(start_col, start_row+9, COLOR_BLACK);
  drawPixel(start_col+1, start_row+9, COLOR_BLACK);
  drawPixel(start_col+2, start_row+9, COLOR_BLACK);
  drawPixel(start_col+3, start_row+9, COLOR_BLACK);
  drawPixel(start_col+4, start_row+9, COLOR_BLACK);
  drawPixel(start_col+5, start_row+9, COLOR_BLACK);
  drawPixel(start_col+6, start_row+9, COLOR_BLACK);
  drawPixel(start_col+7, start_row+9, COLOR_BLACK);
  drawPixel(start_col+8, start_row+9, COLOR_BLACK);
  drawPixel(start_col+9, start_row+9, COLOR_CYAN);
  drawPixel(start_col+10, start_row+9, COLOR_CYAN);
  drawPixel(start_col+11, start_row+9, COLOR_CYAN);
  drawPixel(start_col+12, start_row+9, COLOR_CYAN);
  drawPixel(start_col+13, start_row+9, COLOR_BROWN);
  drawPixel(start_col+14, start_row+9, COLOR_BROWN);
  drawPixel(start_col+15, start_row+9, COLOR_BROWN);
  drawPixel(start_col+16, start_row+9, COLOR_BROWN);
  drawPixel(start_col+17, start_row+9, COLOR_BROWN);
  drawPixel(start_col+18, start_row+9, COLOR_BROWN);
  drawPixel(start_col+19, start_row+9, COLOR_BROWN);
  drawPixel(start_col+20, start_row+9, COLOR_BROWN);
  drawPixel(start_col+21, start_row+9, COLOR_BLACK);

  //last headphone row
  fillRectangle(start_col, start_row+10, 9, 1, COLOR_BLACK);
  fillRectangle(start_col+10, start_row+10, 2, 1, COLOR_CYAN);
  fillRectangle(start_col+12, start_row+10, 9, 1, COLOR_BROWN);
  drawPixel(start_col+21, start_row+10, COLOR_BLACK);

  fillRectangle(start_col+1, start_row+11, 10, 1, COLOR_BLACK);
  fillRectangle(start_col+12, start_row+11, 6, 1, COLOR_BROWN);
  fillRectangle(start_col+19, start_row+11, 2, 1, COLOR_BLACK);

  fillRectangle(start_col+2, start_row+12, 3, 1, COLOR_BLACK);
  fillRectangle(start_col+6, start_row+12, 3, 1, COLOR_BLACK);
  drawPixel(start_col+9, start_row+12, COLOR_CYAN);
  drawPixel(start_col+10, start_row+12, COLOR_PURPLE);
  drawPixel(start_col+11, start_row+12, COLOR_CYAN);
  drawPixel(start_col+12, start_row+12, COLOR_PURPLE);
  drawPixel(start_col+13, start_row+12, COLOR_CYAN);
  drawPixel(start_col+14, start_row+12, COLOR_PURPLE);
  drawPixel(start_col+15, start_row+12, COLOR_CYAN);
  fillRectangle(start_col+16, start_row+12, 2, 1, COLOR_BLACK);

  fillRectangle(start_col+3, start_row+13, 2, 1, COLOR_BLACK);
  drawPixel(start_col+6, start_row+13, COLOR_BLACK);
  fillRectangle(start_col+7, start_row+13, 11, 1, COLOR_CYAN);
  drawPixel(start_col+8, start_row+13, COLOR_PURPLE);
  drawPixel(start_col+10, start_row+13, COLOR_PURPLE);
  drawPixel(start_col+12, start_row+13, COLOR_PURPLE);
  drawPixel(start_col+14, start_row+13, COLOR_PURPLE);
  drawPixel(start_col+16, start_row+13, COLOR_PURPLE);
  drawPixel(start_col+18, start_row+13, COLOR_BLACK);
}
void erase_dude(u_char start_col, u_char start_row, int bg_color)
{
  fillRectangle(start_col, start_row, 27, 14, bg_color);
}
