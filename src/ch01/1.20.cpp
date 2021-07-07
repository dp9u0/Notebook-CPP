#include <iostream>
#include "Sales_item.h"
using namespace std;
// ./a.out < data/1.20.input
int main()
{
  Sales_item item;
  while (cin >> item)
  {
    cout << item << endl;
  }
  return 0;
}