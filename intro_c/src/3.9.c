#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[4][3] = {{1, 2, 3}, {2, 3, 4}, {2, 3, 4}, {2, 3, 4}};
  int(*p)[3] = a;
  printf("%ld\n", sizeof *(p + 1)); // 编译器推断 *(p+1) 是二维数组中的一行
  return 0;
}
