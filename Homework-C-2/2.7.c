#include <stdio.h>
#define a 1218
#define c 1329
#define m 15290
 int main()
{
 int i, n, x=15;
 printf("Введите длину строки\n");
 scanf("%d", &n);
 for(i=1; i<=n; i++)
{x=(a*x+c)%m;
 printf("%d ", x);}
return 0;
}
