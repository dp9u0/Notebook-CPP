#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  printf("%p %p %p", &a, &b, &c);
  printf("a+b+c=%d", a + b + c);
  return 0;
}
