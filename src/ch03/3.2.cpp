#include <iostream>
#include <string>
#include <cstdio>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void get_one_line()
{
  string word;
  while (getline(cin, word))
  {
    cout << word << endl;
  }
}

void get_one_word()
{
  string word;
  while (cin >> word)
  {
    cout << word << endl;
  }
}

int main(int argc, char const *argv[])
{
  get_one_word();
}
