#include <cstdlib>
#include <iostream>
#include <string>
#include <initializer_list>
#include <vector>

using std::initializer_list;
using std::string;
using std::vector;

void example01(const string &input, vector<string> args)
{
  std::cout << input << "   ";
  for (auto begin = args.begin(); begin != args.end(); ++begin)
  {
    std::cout << *begin << "   ";
  }
  std::cout << std::endl;
}

int global = 100;
int &example02()
{
  return global;
}

int *example03()
{
  return &global;
}

class Dog
{
public:
  int age;
  Dog()
  {
    std::cout << "Dog constructed" << std::endl;
  }

  Dog(int age) : age(age)
  {
    std::cout << "Dog constructed2" << std::endl;
  }

  Dog(int age, int age2) : age(age)
  {
    std::cout << "Dog constructed3" << std::endl;
  }

  Dog(const Dog &origin) : age(origin.age)
  {
    std::cout << "Dog constructed4" << std::endl;
  }
};

void example04()
{
  std::cout << "d1" << std::endl;
  Dog d1;
  std::cout << "d2" << std::endl;
  Dog d2 = d1;
  std::cout << "d3" << std::endl;
  Dog d3{10};
  std::cout << "d4" << std::endl;
  Dog d4(10);
  std::cout << "d5" << std::endl;
  Dog d5 = 10;
  std::cout << "d6" << std::endl;
  Dog d6{10, 10};
  std::cout << "d7" << std::endl;
  Dog d7 = {10, 10};
  std::cout << "d8" << std::endl;
  Dog d8 = Dog{10, 10};
}

int main(int argc, char const *argv[])
{
  example01("this is a string", {"test1", "test2", "test3", "test4", "test5", "test6"});
  std::cout << global << std::endl;
  example02() = 200;
  std::cout << global << std::endl;
  (*example03()) = 300;
  std::cout << global << std::endl;
  example04();
  return EXIT_SUCCESS;
}
