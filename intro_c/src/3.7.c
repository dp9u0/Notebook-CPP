#include <stdio.h>

int main(int argc, char const *argv[])
{
  int length = 0;
  int result = scanf("%d", &length);
  int array[length + 0x10000];
  printf("length of array is : %ld\n", sizeof(array));
  int *p = array;
  printf("length of array pointer is : %ld\n", sizeof(p));
  return 0;
}
