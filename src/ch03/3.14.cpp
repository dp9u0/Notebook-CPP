#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char const *argv[])
{
  vector<int> result;
  int input;
  while (cin >> input)
  {
    result.push_back(input);
  }
  cout << "your input is: ";

  for (auto output : result)
  {

    cout << output << " ";
  }
  cout << endl;
  return 0;
}
