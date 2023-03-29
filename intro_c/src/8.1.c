#include <stdio.h>

int sum2(int first, int second, int p3, int p4, int p5, int p6, int *p7)
{
  return first * second;
}

int sum(int first, int second, int p3, int p4, int p5, int p6, int *p7)
{
  int r = first + second;
  return sum2(first, second, 5, 6, 76, 7, &r);
}

int main(int argc, char const *argv[])
{
  int a = 7;
  int result = sum(1, 2, 3, 4, 5, 6, &a);
  return 0;
}
