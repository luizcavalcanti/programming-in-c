// Write a program to evaluate the polynomial 3x^3 - 5x^2 + 6 for x = 2.55

#include <stdio.h>

int main(void)
{
  float result, x = 2.55;

  result = (3*x*x*x) - (5*x*x) + 6;
  printf("The result for the polynomial is %f\n", result);

  return 0;
}
