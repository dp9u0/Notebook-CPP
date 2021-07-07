#include <iostream>
#include "Sales_item.h"
using namespace std;
// ./a.out < data/1.21.input
int main()
{
  Sales_item item1;
  Sales_item item2;
  cin >> item1 >> item2;
  cout << "Sum of two Sales item is :" << item1 + item2 << endl;
  return 0;
}