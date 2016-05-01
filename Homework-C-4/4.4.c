#include <stdio.h>
#define a 1218
#define c 1329
#define m 15290
#define max(a,b) ((a>b)?a:b)
 int main()
{
 int i, n, x1=15, x2;
 printf("Введите количество пар\n");
 scanf("%d", &n);
 n=n*2;
 for(i=1; i<=n; i++)
{x1=(a*x1+c)%m;
 printf("%d    ", x1);
 if(i%2==1)
 x2=x1;
 else
  printf("%d\n", max(x1,x2));}
return 0;

}
