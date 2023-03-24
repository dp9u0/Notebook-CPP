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
} student;

typedef union
{
  int a;
  int b;
} data;
