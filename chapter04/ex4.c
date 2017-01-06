// Write a program that converts 27 degrees from Fahrenheit
// to Celsius using the formula C = (F-32)/1.8

#include <stdio.h>

int main(void)
{
  float fahrenheit = 27.0;
  float celsius;

  celsius = (fahrenheit - 32) / 1.8;
  printf("%f degrees in Fahrenheit is the same as %f degrees Celsius\n", fahrenheit, celsius);

  return 0;
}
