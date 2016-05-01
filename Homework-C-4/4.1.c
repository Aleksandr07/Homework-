#include <stdio.h>
int main()
{
float r, g, b, h, s, v, max, min;
printf("Введите значения R, G, B\n");
scanf("%f %f %f", &r, &g, &b);
r=r/255;
g=g/255;
b=b/255;
if(r>g && r>b)
max=r;
else
if(g>r && g>b)
max=g;
else
max=b;
if(r<g && r<b)
min=r;
else
if(g<r && g<b)
min=g;
else
min=b;
if(max==min)
h=0;
else
if(max==r && g>=b)
h=60*((g-b)/(max-min));
else
if(max==r && g<b)
h=60*((g-b)/(max-min))+360;
else 
if(max==g)
h=60*((b-r)/(max-min))+120;
else
if(max==b)
h=60*((r-g)/(max-min))+240;
if(max==0)
s=0;
else
s=1-min/max;
v=max;
if(s<0.15)
{
if(v>0.94) printf("Белый оттенок цвета\n");
else 
if(v<0.06) printf("Черный оттенок цвета\n");
else printf("Серый оттенок цвета\n");
}
else 
if(v<0.06) printf("Черный оттенок цвета\n");
else
{
if(h>0 &&h<=20) printf ("Красный оттенок цвета\n");
if(h>20 &&h<=45) printf ("Оранжевый оттенок цвета\n");
if(h>45 &&h<=70) printf ("Желтый оттенок цвета\n");
if(h>70 &&h<=150) printf ("Зеленый оттенок цвета\n");
if(h>150 &&h<=190) printf ("Голубой оттенок цвета\n");
if(h>190 &&h<=270) printf ("Синий оттенок цвета\n");
if(h>270 &&h<=295) printf ("Фиолетовый оттенок цвета\n");
if(h>295 &&h<=335) printf ("Розовый оттенок цвета\n");
if(h>335 &&h<=360) printf ("Красный оттенок цвета\n");
}
s=s*100;
v=v*100;
printf("Введенный оттенок цвета в HSV: %.2f %.2f%% %.2f%%\n", h, s, v);
return 0;

}


