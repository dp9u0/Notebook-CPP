#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
  string first, second;
  cin >> first >> second;
  if (first != second)
  {
    cout << ((first > second) ? first : second) << endl;
  }

  if (first != second)
  {
    cout << ((first.size() > second.size()) ? first : second) << endl;
  }
  return 0;
}