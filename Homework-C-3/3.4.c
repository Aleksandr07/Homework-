#include <stdio.h>
#include <math.h>
int main()
{
float a, b, c, x1, x2, dis;
printf("Введите коэффициенты квадратного уравнения:\n");
printf("a=");
scanf("%f", &a);
printf("b=");
scanf("%f", &b);
printf("c=");
scanf("%f", &c);
dis=(pow(b,2)-4*a*c);
dis=sqrt(dis);
if(dis>=0)
{
x1=(-b+dis)/2;
x2=(-b-dis)/2;
printf("Корни уравнения: %.2f и %.2f\n", x1, x2); }
else
printf("В пространстве вещественных чисел решений не существует\n");

return 0;

}
