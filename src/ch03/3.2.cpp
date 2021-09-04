#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char const *argv[])
{
  string s;
  while (cin >> s)
  {
    cout << "input is :" << s << endl;
  }
  return 0;
}
