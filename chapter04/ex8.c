#include <stdio.h>

int main(void)
{
  int i, j;

  i = 365;
  j = 7;
  printf("The next largest multiple of %d from %d is %d\n", j, i, i + j - i % j);

  i = 12258;
  j = 23;
  printf("The next largest multiple of %d from %d is %d\n", j, i, i + j - i % j);

  i = 996;
  j = 4;
  printf("The next largest multiple of %d from %d is %d\n", j, i, i + j - i % j);

  return 0;
}
