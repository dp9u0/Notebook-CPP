#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char const *argv[])
{

  vector<string> result;
  string input;
  while (cin >> input)
  {
    result.push_back(input);
  }

  for (auto &str : result)
  {
    for (auto &c : str)
    {
      c = toupper(c);
    }
  }

  cout << "your input is: ";
  for (auto output : result)
  {
    cout << output << " ";
  }
  cout << endl;
  return 0;
}
