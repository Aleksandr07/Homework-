#include <stdio.h>
int main()
{
float a, b, sum, raz, proiz, chast;
printf("Введите первое число \n");
scanf("%f", &a);
printf("Введите второе число \n");
scanf("%f", &b);
sum = a+b;
raz = a-b;
proiz = a*b;
chast = a/b;
printf("Сумма = %.2f, разность = %.2f, произведение = %.2f, частное = %.2f. \n", sum, raz, proiz, chast);
return 0;
} 
