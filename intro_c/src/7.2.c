#include <stdio.h>
const int BUFFER_SIZE = 50;

int main(int argc, char const *argv[])
{
  FILE *fp_output = NULL;
  char BUFFER[BUFFER_SIZE];
  if ((fp_output = fopen("./7.2.output.txt", "w+t")) == NULL)
  {
    printf("Open output file error!\n"); // 等同于 puts
    return -1;
  }
  else
  {
    printf("Open output file success!\n");
  }

  // fgetc 从键盘输入字符 fputc 输出到 output中
  fprintf(fp_output, "[Sample1]fputc from stdio,fputc to output.txt ...\n");
  printf("[Sample1]fputc from stdio,fputc to output.txt ...\n");
  char input1;
  while ((input1 = fgetc(stdin)) != '\n')
  {
    fputc(input1, fp_output);
  }
  fputc('\n',fp_output);
  // fgetc 从文件读取字符 输出到文件中
  fprintf(fp_output, "[Sample2]fgetc from input.txt, fputc to output.txt ...\n");
  printf("[Sample2]fgetc from input.txt, fputc to output.txt ...\n");
  FILE *fp_input = NULL;
  char input2;
  if ((fp_input = fopen("./7.2.a.input.txt", "r")) == NULL)
  {
    printf("Open input file error!\n");
    return -2;
  }
  else
  {
    printf("Open input file success!\n");
  }
  while ((input2 = fgetc(fp_input)) != EOF)
  {
    fputc(input2, fp_output);
    // putchar(input2);
  }
  // printf("Code line :%d\n", __LINE__);
  if (feof(fp_input))
  {
    printf("Read input failed,not access the end of file\n");
  }
  // fgets 从文件读取 并输出到 output 中
  fprintf(fp_output, "[Sample3]fgets from input.txt, fputs to output.txt ...\n");
  printf("[Sample3]fgets from input.txt, fputs to output.txt ...\n");
  rewind(fp_input);
  while (fgets(BUFFER, BUFFER_SIZE, fp_input) != NULL)
  {
    fputs(BUFFER, fp_output);
  }
  fclose(fp_input);
  // fscanf 从文件读取 并 使用 fprintf 输出到 output 中
  fprintf(fp_output, "[Sample4]fscanf from input.txt, fprintf to output.txt ...\n");
  printf("[Sample4]fscanf from input.txt, fprintf to output.txt ...\n");
  if ((fp_input = fopen("./7.2.b.input.txt", "r")) == NULL)
  {
    puts("Open input file error!"); // 等同于 puts
    return -3;
  }
  char name[10];
  int age;
  float score;
  while (fscanf(fp_input, "%s %d %f\n", name, &age, &score) == 3)
  {
    fprintf(fp_output, "name:%s,age:%d,score:%f\n", name, age, score);
  }
  fclose(fp_input);

  fclose(fp_output);

  return 0;
}
