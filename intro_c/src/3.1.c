#include <stdio.h>

void display_array(int const array[], size_t length)
{
  printf("output an array :\n");
  for (size_t i = 0; i < length; i++)
  {
    /* code */
    printf("[%ld]:%d\n", i, array[i]);
  }
}

int main(int argc, char const *argv[])
{
  int a[4] = {0, 1, 2};
  int b[8] = {5};
  display_array(a, 4);
  display_array(b, 8);
  return 0;
}

