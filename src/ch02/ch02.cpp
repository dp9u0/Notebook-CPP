#include <iostream>
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

int main()
{
  size_of_types();

  int_to_float();
  return 0;
}