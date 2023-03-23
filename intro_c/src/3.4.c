#include <stdio.h>

int *(*p[5])(int *);
int *sum(int *);

int main(int argc, char const *argv[])
{
  p[0] = sum;
  int input = 100;
  int *result = p[0](&input);
  printf("intput :%d,result:%d\n", input, *result);
  return 0;
}
int result = 0;
int *sum(int *input)
{
  result += (*input)++;
  return &result;
}
