#include <stdio.h>
#include <string.h>

int main()
{
int n, i, k=1;
char name[1000], del[1000];
printf("Введите строку\n");
scanf("%s", name);
n=strlen(name);
del[0]=name[0];
for(i=1; i<n; i++)
  {
    if(name[i-1]!=name[i])
      {del[k]=name[i];
       k=k+1;
      }
  }
printf("%s\n", del);
return 0;

}

