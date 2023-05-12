#include <iostream>
#include <Sales_data.h>
#include <Persion.h>

using namespace std;
using namespace ch07;

class Dog
{
public:
  Dog() {
    cout << "Dog" << endl;
  }

  ~Dog() {
    cout << "~Dog" << endl;
  }
};

void example01() {
  cout << "--------------------" << endl;
  {
    Dog dog;
  }
  cout << "--------------------" << endl;
}

void example02() {
  ch06::Sales_data data, data2, data3, data4;
  ch06::Sales_data::read(std::cin, data);
  ch06::Sales_data::read(std::cin, data2);
  ch06::Sales_data::read(std::cin, data3);
  cout << "--------------------" << endl;
  data.print(std::cout);
  friend_read(std::cin, data4);
  data2.print(std::cout);
  data3.print(std::cout);

  data.assign(data2);
  data.add(data3);
  cout << "--------------------" << endl;
  data.print(std::cout);
  data2.print(std::cout);
  data3.print(std::cout);
}

void example03() {
  Persion p;
  Persion p2{ "tom","address" };
}

int main(int argc, char const* argv[]) {
  example01();
  example02();
  example03();
  return 0;
}
