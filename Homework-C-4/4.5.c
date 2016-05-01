#include <stdio.h>

int main()
{
float x1, y1, x2, y2, res1, resi1, res2, resi2, x, xi, y, yi, res, resi;
char znak, i;
printf("Введите значение комплексного сопротивления первого элемента:\n");
scanf("%f%c%f%c", &x1,&znak,&y1,&i);
if(znak='-')
y1=-y1;
printf("Введите значение комплексного сопротивления второго элемента:\n");
scanf("%f%c%f%c", &x2,&znak,&y2,&i);
if(znak='-')
y2=-y2;
res1=x1+x2;
resi1=y1+y2;
res2=x1*x2-y1*y2;
resi2=x1*y2+x2*y1;
x=res1*res2+resi1*resi2;
xi=res1*res1+resi1*resi1;
y=res1*resi2-res2*resi1;
res=x/xi;
resi=y/xi;
printf("R=%f+%fi\n", res, resi);
return 0;

}

