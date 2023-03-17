#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
  wchar_t a = L'A';
  wchar_t b = L'9';
  wchar_t c = L'中';
  wchar_t d = L'国';

  // 将本地环境设置为简体中文
  setlocale(LC_ALL, "zh_CN");

  wprintf(L"%lc: %d\n", a, a);
  wprintf(L"%lc: %d\n", b, b);
  wprintf(L"%lc: %d\n", c, c);
  wprintf(L"%lc: %d\n", d, d);
  return 0;
}
