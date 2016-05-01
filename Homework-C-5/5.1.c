#include <stdio.h>
void change(char * a, char * b)
{
int i;
for(i=0; i<256; i++)
*(b+i)=*(a+i);
}
int main()
{
char str1[255], str2[255], str;
int i=0, k;
printf("Введите строку, которую нужно скопировать. В конце строки поставьте точку\n");
while(str!='.')
{
str=getchar();
str1[i]=str;
i++;
}
change(&str1[0], &str2[0]);
printf("Скопированная строчка:\n");
for(k=0; k<i-1; k++)
printf("%c", str2[k]);
printf("\n");
return 0;
}
