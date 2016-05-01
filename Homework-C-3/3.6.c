#include <stdio.h>
int main()
{
int prog, zero, i;
printf("Введите количество процентов\n");
scanf("%d", &prog);
prog=prog/2;
printf("[");
for(i=0; i<prog; i++)
printf("=");
zero=50-prog;
for(i=0; i<zero; i++)
printf(" ");
printf("]");
return 0;

}
