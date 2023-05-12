#include <iostream>
#include <string>
#include <Sales_data.h>

namespace ch06
{

  std::istream& Sales_data::read(std::istream& in, Sales_data& data) {
    in >> data._isbn >> data._count >> data._price;
    if (!in) {
      data = Sales_data();
      data._isbn = "none";
      data._count = 1;
      data._price = 1.0;
    }
    return in;
  }

  std::string Sales_data::isbn() const {
    return this->_isbn;
  }

  Sales_data& Sales_data::add(Sales_data& second) {
    this->_count += second._count;
    this->_price += second._price;
    return *this;
  }

  Sales_data& Sales_data::assign(Sales_data& second) {
    this->_isbn = second._isbn;
    this->_count = second._count;
    this->_price = second._price;
    return *this;
  }

  std::ostream& Sales_data::print(std::ostream& out) {
    out << this->_isbn << " " << this->_count << " " << this->_price << std::endl;
    return out;
  }

  std::istream& friend_read(std::istream& in, Sales_data& data) {
    in >> data._isbn >> data._count >> data._price;
    if (!in) {
      data = Sales_data();
      data._isbn = "none";
      data._count = 1;
      data._price = 1.0;
    }
    return in;
  }
}
