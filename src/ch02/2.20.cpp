#include <iostream>
using namespace std;
int main()
{
  int i = 9;
  int *p1 = &i;
  *p1 = *p1 * *p1;
  cout << i << endl;
  return 0;
}