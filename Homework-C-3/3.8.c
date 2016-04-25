#include <stdio.h>
#include <math.h>
int main()
{
float a,b, result;
char operation;
printf("Введите команду:\n");
scanf("%f%c%f", &a,&operation,&b);
switch(operation)
{
case '+': result=a+b;
          break;
case '-': result=a-b;
          break;
case '*': result=a*b;
          break;
case '/': result=a/b;
          break;
case '^': result=pow(a,b);
          break;
case '%': result=a/b*100;
          break;
}
printf("=%.2f\n", result);
return 0;
}

