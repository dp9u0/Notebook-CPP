#include <cassert>
#include <string>
#include <iostream>
#include <string_view>
using namespace std;

void *operator new(std::size_t count)
{
  cout << "new : " << count << endl;
  return malloc(count);
}

void operator delete(void *p)
{
  cout << "delete : " << p << endl;
  free(p);
}

void show_string(const string &str)
{
  cout << endl;
  cout << "show_string()" << endl;
  string tmp = str;
  printf("str.c_str:%p\n", str.c_str());
  printf("tmp.c_str:%p\n", tmp.c_str());
}

void test1()
{
  cout << " -------- test1 -------- " << endl;
  cout << " -------- init string -------- " << endl;
  string you = "Hello World!!";

  cout << " -------- default -------- " << endl;
  printf("address of you:%p\n", you.c_str());
  show_string(you);

  cout << " -------- iteral -------- " << endl;
  show_string("Hello World!!");

  cout << " -------- array -------- " << endl;
  const char mes[] = "Hello World!!";
  printf("address of mess:%p\n", &mes[0]);
  show_string(mes);
}

void test2()
{
  cout << " -------- test2 -------- " << endl;
  cout << " -------- init string -------- " << endl;
  string you = "Hello World!! this is a very very very long string ";

  cout << " -------- default -------- " << endl;
  printf("address of you:%p\n", you.c_str());
  show_string(you);

  cout << " -------- iteral -------- " << endl;
  show_string("Hello World!! this is a very very very long string ");

  cout << " -------- array -------- " << endl;
  const char mes[] = "Hello World!! this is a very very very long string ";
  printf("address of mess:%p\n", &mes[0]);
  show_string(mes);
}

void test3()
{
  string a = "";
  string s;
  string b = "";
  printf("address of a:%p\n", &a);
  printf("address of s:%p\n", &s);
  auto cstr = s.c_str();
  printf("address of s.c_str():%p\n", cstr);
  printf("address of b:%p\n", &b);

  cout << " -------------------------- " << endl;

  s = "123456789012345";

  cstr = s.c_str();
  printf("address of a:%p\n", &a);
  printf("address of s:%p\n", &s);
  printf("address of s.c_str():%p\n", cstr);
  cstr++;
  printf("%p:%c\n", cstr, *cstr);
  cstr++;
  printf("%p:%c\n", cstr, *cstr);
  printf("address of b:%p\n", &b);

  cout << " -------------------------- " << endl;
  s = "12345678901234567890";

  cstr = s.c_str();
  printf("address of a:%p\n", &a);
  printf("address of s:%p\n", &s);
  printf("address of s.c_str():%p\n", cstr);
  printf("address of b:%p\n", &b);
}

int main()
{
  // test1();
  // test2();

  test3();
  return 0;
}
