#include <iostream>
#include <string>
#include <vector>

using namespace std;

void example_01()
{
  string word;
  while (cin >> word)
  {
    cout << word << endl;
  }
}

void example_02()
{
  string line;
  while (getline(cin, line))
  {
    if (line.empty())
    {
      cout << "empty line..." << endl;
    }
    else if (line.size() > 80)
    {
      cout << "too long line..." << endl;
    }
    else
    {
      cout << line << endl;
    }
  }
}

void example_03()
{
  string str = "this is a string";
  auto begin = str.begin(), end = str.end();
  if (begin != end)
  {
    auto &first = *begin;
    first = toupper(first);
  }
  cout << str << endl;
}

int global_val = 100;

int &func1()
{
  return global_val;
}

int &func2()
{
  int a = 100;
  return a;
}

// int &func3()
// {
//   return 100;
// }

void example_04()
{
}

int main()
{
  // example_01();
  // example_02();
  example_03();
  return 0;
}