#include <stdio.h>

typedef struct
{
  char name[10];
  int age;
  float score;
} student;

#define COUNT 3
int main(int argc, char const *argv[])
{
  student classa[COUNT];
  student classb[COUNT];
  student *p_classa = classa;
  student *p_classb = classb;

  for (size_t i = 0; i < COUNT; i += 1)
  {
    printf("INPUT %ldth info\n", (i + 1));
    student *info = &classa[i];
    scanf("%s %d %f", info->name, &info->age, &info->score);
    printf("your input is %s %d %f\n", info->name, info->age, info->score);
    fflush(stdout);
  }

  FILE *foutput = NULL;
  if ((foutput = fopen("./7.3.output", "w+t")) == NULL)
  {
    return 0;
  }
  fwrite(p_classa, sizeof(student), COUNT, foutput);

  rewind(foutput);

  fread(p_classb, sizeof(student), COUNT, foutput);

  for (size_t i = 0; i < COUNT; i++)
  {
    student *info = &classb[i];
    printf("%s %d %f\n", info->name, info->age, info->score);
  }

  return 0;
}
