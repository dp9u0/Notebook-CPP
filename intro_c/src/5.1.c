typedef enum
{
  Mon = 1,
  Tues,
  Wed,
  Thurs,
  Fri,
  Sat,
  Sun
} week;

typedef struct
{
  char *name;
  int age;
  week dayOfWeek;
} student;

typedef union
{
  int a;
  int b;
} data;

#include <stdio.h>

void print1(const student *stu)
{
  printf("%s:%d,%d\n", stu->name, stu->age, stu->dayOfWeek);
  // stu->age = 100; cannot modify
}

void print2(student *stu)
{
  printf("%s:%d,%d\n", stu->name, stu->age, stu->dayOfWeek);
  stu->age = 30; // CAN modify
}

int main(int argc, char const *argv[])
{
  const student lihua = {"lihua", 18, Mon};
  printf("%s:%d,%d\n", lihua.name, lihua.age, lihua.dayOfWeek);
  print2(&lihua); // 只有警告 warning: passing argument 1 of ‘print2’ discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
  print1(&lihua);
  return 0;
}
