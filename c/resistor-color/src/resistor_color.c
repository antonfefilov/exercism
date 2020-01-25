#include "resistor_color.h"
#include <stdio.h>

const resistor_band_t * colors()
{
  static const resistor_band_t col[10] = {
    BLACK, BROWN, RED, ORANGE, YELLOW,
    GREEN, BLUE, VIOLET, GREY, WHITE
  };

  return col;
}

int color_code(resistor_band_t color)
{
  return colors()[color];
}
