#include <iostream>

class A
{
public:
  int age;
  void f() {}
};

void example_01()
{
  int A::*age_ptr = &A::age;
  void (A::*f_prt)() = &A::f;
  A a;
  a.age = 100;
  std::cout << a.*age_ptr << std::endl;

}

int main(int argc, char const *argv[])
{
  example_01();
  return 0;
}
