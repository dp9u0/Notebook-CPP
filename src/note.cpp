#include <iostream>
#include <functional>

int add(int, int);

int main(int argc, char const* argv[]) {
  /* code */
  auto func = std::bind(add, std::placeholders::_1, 2);
  func(1);
  return 0;
}


int add(int first, int second) {
  return first + second;
}