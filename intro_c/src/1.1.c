#include <stdio.h>

int main()
{

  char a = 'a';
  int size_of_char = sizeof(a);
  printf("size of char is %d\n", size_of_char);

  short b = 1;
  int size_of_short = sizeof(b);
  printf("size of short is %d\n", size_of_short);

  int c = 1;
  int size_of_int = sizeof(c);
  printf("size of int is %d\n", size_of_int);

  long d = 1;
  int size_of_long = sizeof(d);
  printf("size of long is %d\n", size_of_long);

  float e = 1.1;
  int size_of_float = sizeof(e);
  printf("size of float is %d\n", size_of_float);

  double f = 1.1;
  int size_of_double = sizeof(f);
  printf("size of double is %d\n", size_of_double);
  printf("print a float : %f\n", 0.1f + 0.2f);
  printf("print a float : %f\n", 128.101f);
  printf("0.1f + 0.2f == 0.3f : %d\n", 0.1f + 0.2f == 0.3f);

  long *g = &d;
  long address = (long)g;
  int size_of_point = sizeof(g);
  printf("size of piont (%#lx) is %d\n", address, size_of_point);

  return 0;
}