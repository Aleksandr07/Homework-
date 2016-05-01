#include <stdio.h>
#include <string.h>
int main()
{
char str[255], proverka[]="QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm`~!@#$%^&*()-_=+[]{};:'\\/.,><";
int a[82]={0};
int i, k, l;
printf("Введите желаемую строку\n");
scanf("%s", str);
l=strlen(str);
for(i=0;i<l;i++)
{
for(k=0;k<82;k++)
{
if(proverka[k]==str[i])
a[k]=a[k]+1;
}
}
for(i=0;i<=l;i++)
{
for(k=0;k<82;k++)
{
if(a[k]!=0 && a[k]==i) printf ("%c", proverka[k]);
}
}
printf("\n");
return 0;
}
