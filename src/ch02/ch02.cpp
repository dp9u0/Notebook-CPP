#include <iostream>
#include "Sales_item.h"

void size_of_types()
{
  std::cout << "size of 'bool' : " << sizeof(bool) << std::endl;
  std::cout << "size of 'char' : " << sizeof(char) << std::endl;
  std::cout << "size of 'short' : " << sizeof(short) << std::endl;
  std::cout << "size of 'int' : " << sizeof(int) << std::endl;
  std::cout << "size of 'long' : " << sizeof(long) << std::endl;
  std::cout << "size of 'long long' : " << sizeof(long long) << std::endl;
  std::cout << "size of 'float' : " << sizeof(float) << std::endl;
  std::cout << "size of 'double' : " << sizeof(double) << std::endl;
  std::cout << "size of 'long double' : " << sizeof(long double) << std::endl;

  std::cout << "max of 'int 32' : " << INT32_MAX << std::endl;
  std::cout << "max of 'uint 32' : " << UINT32_MAX << std::endl;
}

void int_to_float()
{
  // 赋值给 float 的整型 超出 float 范围 会导致精度损失
  long long ll1 = 3828375778387558400;
  float f = ll1;
  long long ll2 = f;
  std::cout << "ll1 : " << ll1 << std::endl;
  std::cout << "ll2 : " << ll2 << std::endl;
}

void example_literal()
{
  // 字符字面值，宽字符字面值，字符串字面值，宽字符串字面值。
  auto a1 = 'a';
  auto a2 = L'a';
  auto a3 = "a";
  auto a4 = L"a";
  // 十进制整型，十进制无符号整型，十进制长整型，十进制无符号长整型， 八进制整型，十六进制整型。
  auto a5 = 10;
  auto a6 = 10u;
  auto a7 = 10L;
  auto a8 = 10uL; // 10ull
  auto a8_2 = 10ull;
  auto a9 = 012;
  auto a10 = 0xC;
  // double, float, long double
  auto a11 = 3.14;
  auto a12 = 3.14f;
  auto a13 = 3.14L;
  // 十进制整型，十进制无符号整型，double, double
  auto a14 = 10;
  auto a15 = 10u;
  auto a16 = 10.;
  auto a17 = 10e-2;
}

// 变量初始化
void init_variable()
{

  // std::cin >> int intput_value;
  // 先声明再使用
}

void declaration_define()
{
  extern int a;
  // extern int b = 100; // ‘b’ has both ‘extern’ and initializer
  std::cout << a << std::endl;
}

int a = 100;

int reused = 42; // 全局作用域
void scope()
{
  std::cout << reused << std::endl; // 输出 42

  int reused = 100;
  std::cout << reused << std::endl; // 输出 100

  std::cout << ::reused << std::endl; // 输出 42
}

int main()
{
  size_of_types();

  int_to_float();

  example_literal();

  declaration_define();

  scope();
  return 0;
}