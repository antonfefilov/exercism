#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

enum color {
  BLACK,
  BROWN,
  RED,
  ORANGE,
  YELLOW,
  GREEN,
  BLUE,
  VIOLET,
  GREY,
  WHITE
};

typedef int resistor_band_t;

int color_code(resistor_band_t color);

const resistor_band_t * colors();

#endif
