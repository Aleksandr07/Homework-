#include <stdio.h>
int main()
{
int a, b;
printf("a=");
scanf("%d", &a);
printf("b=");
scanf("%d", &b);
while(a!=b)
{ 
  if(a>b)
a=a-b;
  else
b=b-a;
}
printf("НОД чисел=%d\n", a);
return 0;

}
