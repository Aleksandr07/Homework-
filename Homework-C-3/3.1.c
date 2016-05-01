#include <stdio.h>
#include <string.h>
int main()
{ 
int num, a;
char name[1000];
printf("Введите строку\n");
scanf("%s", name);
a=0;
num=1;
while(num<strlen(name))
{
if(name[num]>a)
       a=name[num];
  num++;
}
printf("Наибольший ASCII код у символа %c\n", a);
return 0;

}
