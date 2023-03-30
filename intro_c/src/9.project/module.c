#include <stdlib.h>

int sum(int *a, int n)
{
  int result = 0;
  for (size_t i = 0; i < n; i++)
  {
    result += a[i];
  }
  return result;
}