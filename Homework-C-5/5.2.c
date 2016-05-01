#include <stdio.h>
void change(char * a, char * b)
{
int i;
for(i=0; i<256; i++)
*(b+i)=*(a+i);
}
void invert(char * a, char * b)
{
int i=0, k=0, n, m;
m=*a;
do
{
m=*(a+i);
i=i+1;} 
while(m!='.');
i=i-1;
for(i; i>=0; i--)
{
*(b+k)=*(a+i);
k++;
}
}
int main()
{
char str1[255], str2[255], str3[255], str;
int i=0, k;
printf("Введите строку, которую нужно скопировать. В конце строки поставьте точку\n");
while(str!='.')
{
str=getchar();
str1[i]=str;
i++;
}
change(&str1[0], &str2[0]);
invert(&str1[0], &str3[0]);
printf("Скопированная строчка:\n");
for(k=0; k<i-1; k++)
printf("%c", str2[k]);
printf("\n");
printf("Инвертированная строчка:\n");
for(k=0;k<i;k++)
printf("%c", str3[k]);
printf("\n");
return 0;
}
