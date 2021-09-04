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

int main()
{
  test1();
  test2();
  return 0;
}
