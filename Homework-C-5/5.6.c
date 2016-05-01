#include <stdio.h>
#include <assert.h>
float det(int m, float matr[m][m]);
float dwb(int a, int m, float matr[m][m], float matrb[m]);
int kolvo=0;
int main()
{
int m, i, k;
float d=0; 
float dwithb=0;
float x; 
printf("Введите количество строк(столбоцов)\n");
scanf("%d", &m);
assert(m>0);
float matr[m][m];
for(i=0;i<m;i++)
{
for(k=0;k<m;k++)
{
printf("Введите элемент матрицы %d%d\n", i+1, k+1);
scanf("%f", &matr[i][k]);
}
}
float b[m];
printf("Введите столбоец свободных членов\n");
for(i=0;i<m;i++)
{
scanf("%f", &b[i]); 
}
printf("\n");
d=det(m, matr);
printf("X:\n");
for(i=0;i<m;i++)
{
dwithb=dwb(i, m, matr, b);
x=dwithb/d;
printf("x%d=%.2f\n", i+1, x);
}
printf("Функции были вызваны %d раз\n", kolvo);
return 0;
}
