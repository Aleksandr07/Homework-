#include <stdio.h>

int fibo(int n)
{ if (n<=2) return 1;
   else return fibo(n-1)+fibo(n-2);}
int main()
{
int n, i;
printf("Введите количество чисел Фибоначчи\n");
scanf("%d", &n);
for(i=1; i<=n; i++)
printf("%d ", fibo(i));
printf("\n");
return 0;
}

