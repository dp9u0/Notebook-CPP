#include <iostream>
void sizeoftypes()
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
int main()
{ 
  sizeoftypes();
  return 0;
}