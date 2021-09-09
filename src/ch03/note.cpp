#include <iostream>
#include <vector>

using namespace std;

void string_io()
{
  cout << " ---------- string_io ---------- " << endl;
  string s;
  cin >> s; // 将 string 对象读取到s 遇到空白停止
  cout << s << endl;
  string s1, s2;
  cin >> s1 >> s2; // 将 string 对象读取到s 遇到空白停止
  cout << s1 << endl;
  cout << s2 << endl;
}

void string_op()
{
  cout << " ---------- string_op ---------- " << endl;
  string s = "this is a test string";
  auto c = s[0];
  c = 'T';
  cout << s << endl;
  auto &rc = s[0];
  rc = 'T';
  cout << s << endl;
}

void vector_init()
{
  cout << " ---------- vector_init ---------- " << endl;
  vector<int> v1;
  vector<int> v2(v1);
  vector<int> v3 = v2; // 拷贝
  vector<int> v4(10, 100);
  vector<int> v5{1, 2, 3, 4, 5};
  vector<int> v6 = {1, 2, 3, 4, 5};
  v2.push_back(100);

  cout << "v2.size():" << v2.size() << endl;
  cout << "v3.size():" << v3.size() << endl;
}

void vector_op()
{
  cout << " ---------- vector_op ---------- " << endl;
  vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (auto &i : v1) // 这里是引用
  {
    i = i * i;
  }
  for (auto i : v1)
  {
    cout << i << " ";
  }
  cout << endl;
}

void iterator_sample()
{
  cout << " ---------- iterator_sample ---------- " << endl;
  string str = "this is a test string";
  for (auto it = str.begin(); it != str.end(); ++it)
  {
    *it = toupper(*it);
  }
  cout << str << endl;
}

void middle_of_iterator()
{
  cout << " ---------- middle_of_iterator ---------- " << endl;
  string str = "this is a test string";
  auto first = str.begin();
  auto middle = first + str.size() / 2;
  auto c = *middle;
  cout << "middle of str is :" << *middle << endl;
}

void array_init()
{
  int is1[] = {1, 2, 3};
  string strs1[] = {""};
  char cs1[] = "this ii a string";
}

void some_define_array()
{
  int array[10];
  int *ptrs[10];             // 10 个 指针数组
  int(*pArray)[10] = &array; // 指向10个int 数组的指针
  int(&rArray)[10] = array;  // 引用
  int *(&pArray)[10] = ptrs; // 指向 10 个指针数组的引用
}

void begin_end_array()
{
  int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto first = begin(ia);
  auto last = end(ia);
}

int main()
{
  // string_io();
  // string_op();
  // vector_init();
  // vector_op();
  // iterator_sample();
  // middle_of_iterator();
  array_init();
  some_define_array();
}