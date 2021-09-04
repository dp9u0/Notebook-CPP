#include <stdio.h>

char *g = "Hello";

void test()
{
  char *c = "Hello";
  char s[] = "Hello";
  printf("字符指针c的内存地址:%p\n", &c);
  printf("数组s的内存地址:%p\n", &s);
  printf("字符指针g的内存地址:%p\n", &g);
  printf("字符指针c指向Hello的的内存地址: %p\n", &c[0]);
  printf("字符指针g指向Hello的的内存地址: %p\n", &g[0]);
  printf("变量s数组的Hello副本的内存地址:%p\n", &s[0]);
  printf("变量s数组的Hello副本的内存地址:%p\n", &s[4]);
  printf("Hello字面量的尺寸 %lu\n", sizeof("Hello"));
}

void test1()
{
  char *t = "Hello";
  char *c = "Hello";
  char s[] = "Hello";
  printf("字符指针t的内存地址:%p\n", &t);
  printf("字符指针c的内存地址:%p\n", &c);
  printf("数组s的内存地址:%p\n", &s);
  printf("字符指针g的内存地址:%p\n", &g);
  printf("字符指针c指向Hello的的内存地址: %p\n", &c[0]);
  printf("字符指针g指向Hello的的内存地址: %p\n", &g[0]);
  printf("变量s数组的Hello副本的内存地址:%p\n", &s[0]);
  printf("Hello字面量的尺寸 %lu\n", sizeof("Hello"));
}

int main(int argc, char const *argv[])
{
  test();

  test1();
  return 0;
}