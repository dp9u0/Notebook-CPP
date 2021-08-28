#include <iostream>

int main()
{
  int i = 10, i2 = 42;
  unsigned u = 10, u2 = 42;
  std::cout << i2 - i << std::endl; // 32
  std::cout << i - i2 << std::endl; // -32
  std::cout << i - u << std::endl;  // 0
  std::cout << u - i << std::endl;  // 0

  std::cout << u2 - u << std::endl; // 32
  std::cout << u - u2 << std::endl; // 4294967264 (10 + (INT_MAX + 1)  - 42) 其中 (INT_MAX + 1) 为 INT 的模

  int i3 = -32;
  unsigned u3 = i3;
  std::cout << u3 << std::endl; // -32 -> 4294967264
  return 0;
}