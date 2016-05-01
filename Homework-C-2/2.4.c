#include <stdio.h>
#include <string.h>
int main()
{
  char name[1000];
  int a, i;
  printf("Введите строку:\n");
  scanf("%s", name);
  a=strlen(name);
  for(i=0; i<a; i++)
    name[i]=name[i]-32;
  printf("Полученная строка:\n%s\n", name);
return 0;

}
