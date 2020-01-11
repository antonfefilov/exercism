#include "armstrong_numbers.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_armstrong_number(int candidate)
{
  int i;
  int sum   = 0;
  int power = snprintf(NULL, 0, "%d", candidate);

  char* str = malloc(power + 1);

  snprintf(str, power + 1, "%d", candidate);

  for (i = 0; i < power; i++) {
    sum += pow(str[i] - '0', power);
  }

  free(str);

  return sum == candidate;
}
