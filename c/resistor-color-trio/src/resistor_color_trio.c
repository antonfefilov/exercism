#include <math.h>
#include "resistor_color_trio.h"

static int raw_value(resistor_band_t colors[])
{
  return (colors[0] * 10 + colors[1]) * pow(10, colors[2]);
}

static int color_code_cant_be_presented_in_kiloohms(resistor_band_t colors[])
{
  return fmod(raw_value(colors), KILOOHMS) > 0 ? TRUE : FALSE;
}

resistor_value_t color_code(resistor_band_t colors[])
{
  resistor_value_t structure;

  if (color_code_cant_be_presented_in_kiloohms(colors)) {
    structure.value = raw_value(colors);
    structure.unit  = OHMS;
  } else {
    structure.value = raw_value(colors) / KILOOHMS;
    structure.unit  = KILOOHMS;
  };

  return structure;
}
