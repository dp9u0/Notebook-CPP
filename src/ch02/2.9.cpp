#include <iostream>
int main()
{
  // std::cin >> int input_value; // 应该先定义再使用。
  int input_value = 0;
  std::cin >> input_value;
  // int i = {3.14}; // narrowing conversion of ‘3.14’ from ‘double’ to ‘int’ inside { }
  double d = {3.14};
  //  double salary = wage = 9999.99; 先定义再使用
  double wage;
  double salary = wage = 9999.99;
  // int i = 3.14; // ok
  return 0;
}