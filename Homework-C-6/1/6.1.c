#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
int i, k, n, *a, b, c;
FILE *chit;
FILE *zap;
char str[10000]; 
char **sl;
char *massiv;
n=1;
b=0;
chit=fopen("zadanie.txt","r");
zap=fopen("otvet.txt","w");
fscanf(chit,"%s",str);
sl=(char**)malloc(sizeof(char*));
sl[0]=(char*)malloc(sizeof(char)*strlen(str)+1);
strcpy(sl[0], str);
a=(int*)malloc(sizeof(int));
a[0]=1;
while(fscanf(chit,"%s", str)!=EOF)
{
for(i=0; i<n; ++i)
{
if(strcmp(sl[i],str)==0)
{
a[i]=a[i]+1;
b=1;
}
}
if(!b)
{
n=n+1;
sl=(char**)realloc(sl,n*sizeof(char*));
sl[n-1]=(char*)malloc(sizeof(char)*strlen(str)+1);
strcpy(sl[n-1], str);
a=(int*)realloc(a, sizeof(int)*n);
a[n-1]=1;
}
b=0;
}
fprintf(zap, "Количество уникальных слов:\n");
for(i=0; i<=n-1; i++)
{
for(k=0; k<n-i-1; k++)
{
while(a[k]>a[k+1])
{
massiv=sl[k];
c=a[k];
a[k]=a[k+1];
sl[k]=sl[k+1];
sl[k+1]=massiv;
a[k+1]=c;
}
}
fprintf(zap, "%10s %15d\n", sl[k], a[k]);
}
fclose(chit);
fclose(zap);
return 0;
}
