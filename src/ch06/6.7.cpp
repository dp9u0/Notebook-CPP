#include <iostream>

int increment_once()
{
  static bool called = false;
  if (called)
  {
    return 1;
  }
  called = true;
  return 0;
}

int main(int argc, char const *argv[])
{
  for (int i = 0; i < 100; i++)
  {
    std::cout << "called times " << i << ":" << increment_once() << std::endl;
  }

  return 0;
}
