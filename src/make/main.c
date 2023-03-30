#include <stdio.h>
#include "headers/math.h"

int main(int argc, char const *argv[])
{
  int first = 100, second = 50;
  printf("add(%d,%d)=%d\n", first, second, add(first, second));
  printf("minus(%d,%d)=%d\n", first, second, minus(first, second));
  printf("multi(%d,%d)=%d\n", first, second, multi(first, second));
  printf("div(%d,%d)=%d\n", first, second, div(first, second));
  return 0;
}
