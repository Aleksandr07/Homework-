#include <stdio.h>
#include <string.h>

int proverka(char skobka)
{
switch(skobka)
{
case '(': return 1;
  case '[': return 2;
   case '{': return 3;
    case '<': return 4;
     case ')': return -1;
      case ']': return -2;
       case '}': return -3;
        case '>': return -4;
         default: return 0;
}}
int main()
{
char str[255], skob;
int mas[255], i, k=0, a, b;
printf("Введите строку\n");
scanf("%s", str);
b=strlen(str);
for(i=0; i<b; i++)
{
skob=str[i];
a=proverka(skob);
if(a>0)
{
mas[i]=a;
k=k+1;
}
if(a<0)
{
if (k>0 && (mas[i-1]+a)==0) k=k-1;
}
}
if (k==0)
printf("Баланс скобок соблюден\n");
else printf("Баланс скобок не соблюден\n");
return 0;
}

