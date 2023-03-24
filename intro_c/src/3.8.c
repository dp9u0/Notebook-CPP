#include <stdio.h>

void swap(char **string1, char **string2)
{
  char *temp = NULL;
  temp = *string1;
  *string1 = *string2;
  *string2 = temp;
}

void swap2(int *a, int *b)
{
  int temp = 0;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main(int argc, char const *argv[])
{
  char *array = "this is 1 string";
  char *array2 = "this is 2 string";
  char array3[] = "this is 3 string";
  char array4[] = "this is 4 string";
  int a = 100;
  int b = 200;
  swap2(&a, &b);
  swap(&array, &array2);
  // swap(&array3, &array4);
  printf("%s\n", array);
  printf("%s\n", array2);
  return 0;
}
