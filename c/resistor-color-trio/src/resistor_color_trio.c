#include <math.h>
#include "resistor_color_trio.h"

static int raw_value(resistor_band_t colors[])
{
  return colors[0] * pow(10, colors[2] + 1) + colors[1] * pow(10, colors[2]);
}

resistor_value_t color_code(resistor_band_t colors[])
{
  resistor_value_t structure;

  if (fmod(raw_value(colors), 1000) > 0) {
    structure.value = raw_value(colors);
    structure.unit  = OHMS;
  } else {
    structure.value = raw_value(colors) / 1000;
    structure.unit  = KILOOHMS;
  };

  return structure;
}
