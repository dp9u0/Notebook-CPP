#include <stdio.h>
#include <stdlib.h>

// 浮点数结构体
typedef struct
{
  unsigned int nMant : 23; // 尾数部分
  unsigned int nExp : 8;   // 指数部分
  unsigned int nSign : 1;  // 符号位
} FLOAT;
int main()
{
  char strBin[33] = {0};
  float f = -19.625;
  FLOAT *p = (FLOAT *)&f;
  printf("sign: %#x\n", p->nSign);
  printf("sign: %#x\n", p->nExp);
  printf("sign: %#x\n", p->nMant);
  return 0;
}