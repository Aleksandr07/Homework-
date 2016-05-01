#include <stdio.h>

int main()
{
long  a, b ;
int h, i, n, k, m, h2;
printf("Введите высоту треугольника Паскаля:\n");
scanf("%d", &h);
h2=h;
for(i=1; i<=h; i++)
{
for(n=1; n<h2; n++)
printf("   ");
m=i;
for (k=1, a=1, b=1; k<=i; k++)
{
if (k==1)
{	
printf("%-5d ", 1);
continue;
}
m--;
b=b*m;
a=a*(k-1);	
printf("%-5ld ", b/a);
}
printf("\n");
h2--;
}	
return 0;

}
