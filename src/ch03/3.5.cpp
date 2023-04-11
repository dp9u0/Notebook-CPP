#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
  std::string result;
  std::string result2;
  std::string input;
  while (std::cin >> input)
  {
    result += input;
    result2 += input + " ";
  }
  std::cout << result << std::endl;
  std::cout << result2 << std::endl;
  return 0;
}
