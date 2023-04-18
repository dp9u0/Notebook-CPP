#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

string results[10]{"1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
string (*example())[10]
{
  return &results;
}

using stringArray10 = string[10];

stringArray10 *example2()
{
  return &results;
}

auto example3() -> string (*)[10]
{
  return &results;
}

int main(int argc, char const *argv[])
{
  auto array = example();
  for (auto &&item : *array)
  {
    cout << item << endl;
  }

  array = example2();
  for (auto &&item : *array)
  {
    cout << item << endl;
  }

  array = example3();
  for (auto &&item : *array)
  {
    cout << item << endl;
  }
  return 0;
}
