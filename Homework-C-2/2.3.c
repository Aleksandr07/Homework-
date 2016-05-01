#include <stdio.h>
#include <string.h>
int main()
{
  char name[1000];
  printf("Введите строку:\n");
  scanf("%s", name);
  printf("Размер введенной строки %zd байт\n", strlen(name)+1);
return 0;

}
