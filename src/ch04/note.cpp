#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
  int x;
  void f() { cout << "A::f" << endl; }
};

class B : public A
{
public:
  int y;
  void f() { cout << "B::f" << endl; }
};

struct type
{
  int i;
  type() : i(3) {}
  void f(int v) const
  {
    // this->i = v;                 // 编译错误：this 是指向 const 的指针
    const_cast<type *>(this)->i = v; // 只要该对象不是 const 就 OK
  }
};

void example_01()
{
  A a{100};
  B b;
  A *p = &b;                // p指向B类对象
  int A::*mp1 = &A::x;      // mp1是一个指向A类成员变量x的指针
  void (A::*mp2)() = &A::f; // mp2是一个指向A类成员函数f的指针
  cout << p->*mp1 << endl;  // 输出p所指对象的x值，即b.x
  (p->*mp2)();              // 调用p所指对象的f函数，即b.f()
}

struct mystr
{
  char a;
  char b;
  char c;
  char d;
  char e;
  char f;
  char g;
};

void example_02()
{
  int i = 3; // 不声明 i 为 const
  const int &rci = i;
  const_cast<int &>(rci) = 4; // OK：修改 i
  std::cout << "i = " << i << '\n';

  const type t; // 如果这是 const type t，那么 t.f(4) 会是未定义行为
  t.f(4);
  std::cout << "type::i = " << t.i << '\n';

  const int j = 3; // 声明 j 为 const
  [[maybe_unused]] int *pj = const_cast<int *>(&j);
  *pj = 4; // 未定义行为

  [[maybe_unused]] void (type::*pmf)(int) const = &type::f; // 指向成员函数的指针
  // const_cast<void (type::*)(int)>(pmf);                     // 编译错误：const_cast 不能用于成员函数指针
}

struct C
{
};

struct D
{
};

struct E : C
{
};

void example_03()
{
  E e;
  // static_cast<D>(e); // 这句会报错
  static_cast<C>(e);
}

void example_04()
{
  unsigned int a = 2;
  unsigned int b = 4;
  unsigned int c = 1;
  auto ulprt = reinterpret_cast<unsigned long *>(&b);
  std::cout << "int to long = " << (*ulprt) << std::endl;

  char *str = "汉字123456";
  mystr mystrprt = *(reinterpret_cast<mystr *>(str));
  std::cout << "string to mystr = "
            << mystrprt.a << mystrprt.b << mystrprt.c
            << mystrprt.d << mystrprt.e << mystrprt.f
            << mystrprt.g
            << std::endl;
}

int main()
{
  // example_01();
  example_02();
  example_04();
  return 0;
}