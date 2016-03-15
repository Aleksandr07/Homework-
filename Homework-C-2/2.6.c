#include <stdio.h>
int main()
{
int a, n, k;
a=1;
printf("Введите число\n");
scanf("%d", &n);
for(k=1; k<=n; k++)
a=a*k;
printf("Факториал введенного числа = %d\n", a);
return 0;
} 

