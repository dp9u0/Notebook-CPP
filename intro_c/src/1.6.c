#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(int argc, char const *argv[])
{

  char str1[] = "a";
  char str2[] = "中"; // Unicode: 0100 1110 0010 1101 (4e2d) 转为 UTF8: 11100100 10111000 10101101 (E4 B8 AD)

  printf("%ld\n", sizeof str1);
  printf("%ld\n", sizeof str2);
  printf("%#hx\n", str1[0]);
  printf("%#hx\n", str1[1]);

  printf("%#hx\n", str2[0]);
  printf("%#hx\n", str2[1]);
  printf("%#hx\n", str2[2]);
  printf("%#hx\n", str2[3]);
  return 0;
}
