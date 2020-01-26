#include<stdio.h>
#include <string.h>
#include "resistor_color_duo.h"

uint16_t color_code(resistor_band_t colors[])
{
  int code;
  char color_1[2];
  char color_2[2];
  char codeStr[3];

  sprintf(color_1, "%d", colors[0]);
  sprintf(color_2, "%d", colors[1]);

  strcpy(codeStr, color_1);
  strcat(codeStr, color_2);

  sscanf(codeStr, "%d", &code);

  return code;
}
