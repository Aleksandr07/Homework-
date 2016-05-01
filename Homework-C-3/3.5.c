#include <stdio.h>
#include <math.h>
int main()
{
int x1, x2, x3, y1, y2, y3, a, b, c;
printf("Введите координаты первой точки\n");
scanf("%d %d", &x1, &y1);
printf("Введите координаты второй точки\n");
scanf("%d %d", &x2, &y2);
printf("Введите координаты третьей точки\n");
scanf("%d %d", &x3, &y3);
a=pow((x2-x1),2)+pow((y2-y1),2);
b=pow((x3-x2),2)+pow((y3-y2),2);
c=pow((x3-x1),2)+pow((y3-y1),2);
if((a=b+c) || (b=a+c) || (c=a+b))
printf("Треугольник прямоугольный\n");
else
printf("Треугольник не прямоугольный\n");
return 0;

}
