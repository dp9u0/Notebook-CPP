#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(int argc, char const *argv[])
{
  vector<int> results;
  int input;
  while (cin >> input)
  {
    results.push_back(input);
  }
  auto size = results.size();
  for (size_t i = 0, j = size - 1; i <= j; i++, j--)
  {
    cout << "[" << i << "]"
         << "+"
         << "[" << j << "]"
         << "(" << results[i] << "+" << results[j] << ")"
         << "=" << results[i] + results[j]
         << endl;
  }
  return 0;
}
