
#include <stdio.h>
int main(int argc, char const *argv[])
{
  FILE *fp = NULL;

  if ((fp = fopen("./7.1.notexist.txt", "rt")) == NULL)
  {
    printf("cannot read this file\n");
  }

  if ((fp = fopen("./7.1.txt", "rt")) == NULL)
  {
    printf("cannot read this file\n");
  }
  const int BUFFER_SIZE = 100;
  char input_str[BUFFER_SIZE];
  int line = 1;
  while (fgets(input_str, BUFFER_SIZE, fp) != NULL)
  {
    printf("[BLOCK %d]%s", line++, input_str);
  }
  printf("\n");
  fclose(fp);

  return 0;
}
