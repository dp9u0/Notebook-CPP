#include <iostream>
#include "Sales_item.h"
using namespace std;

void size_of_types()
{
  std::cout << "example size_of_types" << std::endl;

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
  std::cout << "example int_to_float" << std::endl;
  // 赋值给 float 的整型 超出 float 范围 会导致精度损失
  long long ll1 = 3828375778387558400;
  float f = ll1;
  long long ll2 = f;
  std::cout << "ll1 : " << ll1 << std::endl;
  std::cout << "ll2 : " << ll2 << std::endl;
}

void example_literal()
{
  std::cout << "example literal" << std::endl;
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
  std::cout << "example init_variable" << std::endl;
  // std::cin >> int intput_value;
  // 先声明再使用
}

void declaration_define()
{
  std::cout << "example declaration_define" << std::endl;
  extern int a;
  // extern int b = 100; // ‘b’ has both ‘extern’ and initializer
  std::cout << a << std::endl;
}

int a = 100;

int reused = 42; // 全局作用域
void scope()
{
  std::cout << "example scope" << std::endl;
  std::cout << reused << std::endl; // 输出 42
  int reused = 100;
  std::cout << reused << std::endl;   // 输出 100
  std::cout << ::reused << std::endl; // 输出 42
}

void refer()
{
  std::cout << "example refer" << std::endl;
  int i1 = 100;
  int &r1 = i1;
  std::cout << i1 << std::endl; // 输出 100
  i1 = 200;
  std::cout << r1 << std::endl; // 输出 200
  r1 = 300;
  std::cout << i1 << std::endl; // 输出 300
}

void point()
{
  std::cout << "example point" << std::endl;
}

void refer_to_point()
{
  std::cout << "example refer_to_point" << std::endl;
  int i = 100;
  int i2 = 1000;
  int *p = &i2;
  std::cout << p << std::endl;
  std::cout << *p << std::endl;
  int *&r = p;

  std::cout << r << std::endl;
  std::cout << *r << std::endl;

  r = &i; // p = &i;
  *p = 10000;

  std::cout << p << std::endl;
  std::cout << *p << std::endl;
}

void reference_to_const()
{
  std::cout << "example reference_to_const" << std::endl;

  const int ci = 100;
  const int &rci = ci;
  // int &ri = ci; // 将 "int &" 类型的引用绑定到 "const int" 类型的初始值设定项时，限定符被丢弃
  // rci = 200; // 表达式必须是可修改的左值

  int i2 = 100;
  const int &rci2 = i2;
  // rci2 = 200; // 表达式必须是可修改的左值
}

void pointer_to_const()
{
  std::cout << "example pointer_to_const" << std::endl;
  const int ci = 100;
  // int *pci = &ci; // "const int *" 类型的值不能用于初始化 "int *" 类型的实体C
  const int *pci = &ci;
  // *pci = 100; // 表达式必须是可修改的左值
}

void const_pointer()
{
  std::cout << "example const_pointer" << std::endl;
  int i = 100;
  int const *pi = &i;
  const int ci = 100;
  const int *const pci = &ci;
}

//普通函数的声明
int noconst_dis(int x);
//常量表达式函数的声明
constexpr int display(int x);

void const_expr()
{
  //调用常量表达式函数
  int a[display(3)] = {1, 2, 3, 4};
  cout << a[2] << endl;
  //调用普通函数
  cout << noconst_dis(3) << endl;
}

//常量表达式函数的定义
constexpr int display(int x)
{
  return 1 + 2 + x;
}

//普通函数的定义
int noconst_dis(int x)
{
  return 1 + 2 + x;
}

void const_expr_pointer()
{
  const int *p = nullptr;
  constexpr int *q = nullptr;
  constexpr const int *q1 = nullptr;
}

int main()
{
  size_of_types();

  int_to_float();

  example_literal();

  declaration_define();

  scope();

  refer();

  refer_to_point();
  return 0;
}