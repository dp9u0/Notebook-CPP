#include <stdio.h>

int sum(int, int);

int main(int argc, char const *argv[])
{
  /* code */
  int sum1 = sum(4, 5);
  printf("sum of %d and %d is %d\n", 5, 6, sum(5, 6));
  return 0;
}

int sum(int first, int second)
{
  return first + second;
}
