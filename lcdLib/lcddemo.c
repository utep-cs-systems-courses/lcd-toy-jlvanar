/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_PURPLE);
  int col = 0, row = 10, v = 1, a = 1, energyLoss = 3;
  while (col < 200)
    {
      if (col >= 0 && col < screenWidth && row >= 0 && row < screenHeight)
	{
	  drawPixel(col, row, COLOR_GREEN);
	}
      if (row + v > screenHeight)
	{
	  v = v - energyLoss;
	  v = -v;
	}
      col++;
      row += v;
      v += a;
    }

          /*BOWTIE DRAWING */
  /* int frow = 50, fcol =60; */
  /* for (int c = 0; c < 20; c++) */
  /*   { */
  /*     for (int r = 0; r <= c; r++) */
  /* 	{ */
  /* 	  drawPixel(fcol - c, frow + r, COLOR_GREEN); */
  /* 	  drawPixel(fcol + c, frow + r, COLOR_GREEN); */
  /* 	  drawPixel(fcol - c, frow - r, COLOR_RED); */
  /* 	  drawPixel(fcol + c, frow - r, COLOR_RED); */
  /* 	} */
  /*   } */

             /* TAMOBATCHA Logo thang */
  /* for (int windex = 0; windex < 64; windex++) */
  /*   { */
  /*     drawPixel(windex, windex, COLOR_GREEN); */
  /*     drawPixel(127-windex, windex, COLOR_GREEN); */
  /*   } */
  /* for (int bindex = 0; bindex < (159-64); bindex++) */
  /*   { */
  /*     drawPixel(64, 64 + bindex, COLOR_GREEN); */
  /*   } */
  /* drawString5x7(35, 95, "TAMOBACHA", COLOR_BLACK, COLOR_PURPLE); */

                      /*PIXEL PLAY */
  /* drawPixel(25, 50, COLOR_PINK); */
  /* drawPixel(25, 75, COLOR_PINK); */
  /* drawPixel(25, 159, COLOR_GREEN); */
  /* drawPixel(127, 80, COLOR_GREEN); */
  /* fillRectangle(54, 70, 10, 10, COLOR_BLACK); */
  /* drawString5x7(40, 25, "TACOCAT", COLOR_WHITE, COLOR_BLACK); */

  /* fillRectangle(15, 50, 100, 60, COLOR_ORANGE); */
   
}
