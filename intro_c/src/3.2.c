#include <stdio.h>
int main(int argc, char const *argv[])
{
  char str[30] = {0};
  gets(str);
  puts("your input is:");
  puts(str);
  return 0;
}
