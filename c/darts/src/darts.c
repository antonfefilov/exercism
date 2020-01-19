#include "darts.h"
#include <math.h>

static float radius(coordinate_t landing_position)
{
  return sqrt(pow(landing_position.x, 2) + pow(landing_position.y, 2));
}

int score(coordinate_t landing_position)
{
  const float RAD = radius(landing_position);

  if(RAD > 10) {
    return 0;
  }

  if(RAD > 5) {
    return 1;
  }

  if(RAD > 1) {
    return 5;
  }

  return 10;
}
