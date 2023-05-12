#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

namespace ch06
{
  class Sales_data
  {
  private:
    std::string _isbn;
    int _count;
    double _price;

  public:
    static std::istream& read(std::istream& in, Sales_data& data);
    std::string isbn() const;
    Sales_data& add(Sales_data& toadd);
    Sales_data& assign(Sales_data& tocombine);
    std::ostream& print(std::ostream& out);
    friend std::istream& friend_read(std::istream& in, Sales_data& data);
  };
  
  std::istream& friend_read(std::istream& in, Sales_data& data);

}
#endif