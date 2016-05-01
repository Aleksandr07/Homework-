#include <stdio.h>
int main()
{
   int a, n, b;
   float sz, sum;
   printf("Введите число \n");
   scanf("%d", &a);
   n = 0;
   sum = 0;
   while (a!=0)
   {
     b=a;
     n=n+1;
     a=a/10;
     b=b%10;
     sum=sum+b;
                }
   sz=sum/n;
   printf("Количество цифр = %d, сумма цифр = %.0f, среднее значение = %.2f \n", n, sum, sz);
   return 0;
                              } 

