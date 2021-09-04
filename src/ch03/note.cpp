#include <iostream>
using namespace std;

void string_io()
{
  cout << " ---------- string_io ---------- " << endl;
  string s;
  cin >> s; // 将 string 对象读取到s 遇到空白停止
  cout << s << endl;

  string s1, s2;
  cin >> s1 >> s2; // 将 string 对象读取到s 遇到空白停止
  cout << s1 << endl;
  cout << s2 << endl;
}

int main()
{
  string_io();
}