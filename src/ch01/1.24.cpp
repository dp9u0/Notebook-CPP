#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
  Sales_item total;
  cin >> total; // 预先读取一笔
  Sales_item item;
  while (cin >> item)
  {
    if (item.isbn() == total.isbn())
    {
      total += item;
    }
    else
    {
      cout << total << endl;
      total = item;
    }
  }
  cout << total << endl;
  return 0;
}