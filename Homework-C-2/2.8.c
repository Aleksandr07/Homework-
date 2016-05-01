#include <stdio.h>
#define pi 3.141593
#define g 9.81

int main()
{
float alpha, v, t, sin;
printf("Введите угол, под которым брошен камень\n");
scanf("%f", &alpha);
printf("Введите начальную скорость\n");
scanf("%f", &v);
alpha=alpha*pi/180;
sin=alpha-(alpha*alpha*alpha/6)+(alpha*alpha*alpha*alpha*alpha/120)-(alpha*alpha*alpha*alpha*alpha*alpha*alpha/5040);
t=2*v*sin/g;
printf("Время полета=%.2f\n", t);
return 0;

} 
