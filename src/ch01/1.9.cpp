#include <iostream>
using namespace std;
int main()
{
  int v = 50, sum = 0;
  while (v <= 100)
  {
    sum += v++;
  }
  cout << "Sum of 50 to 100 is " << sum << endl;
}