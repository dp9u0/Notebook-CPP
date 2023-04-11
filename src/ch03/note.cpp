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

int main()
{
  // example_01();
  example_02();
  return 0;
}