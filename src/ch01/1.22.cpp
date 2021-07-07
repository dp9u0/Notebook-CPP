#include <iostream>
#include "Sales_item.h"
using namespace std;
// ./a.out < data/1.22.input
int main()
{
  Sales_item sum;
  cin >> sum;
  Sales_item item;
  while (cin >> item)
  {
    sum = sum + item;
  }
  cout << "Sum of all sales item is :" << sum << endl;
  return 0;
}