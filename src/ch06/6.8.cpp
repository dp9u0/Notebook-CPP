#include <iostream>
#include <ch06.h>

int main(int argc, char const *argv[])
{
  for (int i = 0; i < 11; i++)
  {
    std::cout << "called times " << i << ":" << increment_once() << std::endl;
  }
  return 0;
}
