#include <stdio.h>
int main(int argc, char const *argv[])
{
  int x, y, *px = &x, *py = &y;
  y = *px + 5; // y = x + 5
  y = ++*px;   // y = (++ x)
  y = *px++;   // y = (x ++)
  py = px;     // 
}
