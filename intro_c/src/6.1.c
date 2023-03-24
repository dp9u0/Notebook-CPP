#define MUL1(a, b) a *b
#define MUL2(a, b) (a) * (b)
#define MUL3(a, b) ((a) * (b))
#define STR(s) #s
#define JOIN(a, e, b) a##e##b

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int r1 = MUL1(100 + 100, 3);     // 100 + 100 * 3
  int r2 = MUL2(100 + 100, 3);     // (100 + 100) * 3
  int r3 = 1 / MUL1(100 + 100, 3); // 1 / 100 + 100 * 3
  int r4 = 1 / MUL3(100 + 100, 3); // 1 / (100 + 100) * 3
  char *str1 = STR(this is a string);
  int r5 = JOIN(1, e, 5);
  printf("%d,%d,%d,%d,%s,%d\n", r1, r2, r3, r4, str1, r5);
  printf("Date : %s %s\n", __DATE__, __TIME__);
  printf("File : %s\n", __FILE__);
  printf("Line : %d\n", __LINE__);
  return 0;
}
