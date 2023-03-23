#include <stdio.h>
typedef unsigned char byte;
typedef unsigned int uint;

void printint(uint *);

int main(int argc, char const *argv[])
{
  char a[] = "this is a string";
  uint b = 0x12345678;
  uint c = -1;
  printint(&b);
  printint(&c);
  return 0;
}

void printint(uint *p_int)
{
  byte *bp = (byte *)p_int;
  printf("address of int %d is %p\n", *p_int, p_int);
  byte b1 = *bp;
  byte b2 = *(bp + 1);
  byte b3 = *(bp + 2);
  byte b4 = *(bp + 3);
  printf("part of int %p:%hhx,%p:%hhx,%p:%hhx,%p:%hhx\n", bp, b1, bp + 1, b2, bp + 2, b3, bp + 3, b4);
}
