#include <iostream>
using namespace std;
string global_str; // string.empty
int global_int;    // 0
int main()
{
  string local_str; // string.empty
  int local_int;    // undefined
  cout << "local_int:" << local_int << endl; // 不安全 引发错误
}
