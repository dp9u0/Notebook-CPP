#include <iostream>

using namespace std;
struct Sales_data
{
  string book_number = "";
  unsigned sold_counts = 10;
  double price = 10;
};

// ./a.out < data/2.40.input
int main()
{
  Sales_data data;
  cin >> data.book_number >> data.sold_counts >> data.price;
  cout << "bookno:" << data.book_number << ",sold_counts:" << data.sold_counts << ",price:" << data.price << endl;
}