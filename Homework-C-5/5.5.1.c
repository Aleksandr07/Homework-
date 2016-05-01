#include <stdio.h>
float det(int m, float matr[m][m])
{
float minor[m-1][m-1];
float a=0;
int i, j, k, c;
if(m==1)
return matr[0][0];
while(m!=1)
{
for(i=0; i<m; i++)
{
for(j=1; j<m; j++)
{
for(k=0, c=0;k<m;k++)
{
if(k!=i)
{
minor[j-1][c]=matr[j][k];
c++;
}
}
}
if(i%2==0) a=a+matr[0][i]*det(m-1, minor);
else a=a-matr[0][i]*det(m-1, minor);
}
return a;
}
}

float dwb(int a, int m, float matr[m][m], float matrb[m])
{
float add[m][m], r;
int i, k;
for(i=0; i<m; i++)
{
for(k=0; k<m; k++)
{
add[i][k]=matr[i][k];
}
}
for(i=0;i<m;i++)
{
add[i][a]=matrb[i];
}
r=det(m, add);
return r;
}
