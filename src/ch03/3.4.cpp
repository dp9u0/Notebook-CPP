#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string first;
  string second;
  getline(cin, first);
  getline(cin, second);
  if (first == second)
  {
    cout << "first == second" << endl;
  }
  else
  {
    cout << ((first > second) ? first : second) << endl;
  }
  return 0;
}