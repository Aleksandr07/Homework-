#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
FILE *chit;
FILE *zad;
char slovo;
char key[5]="10101";
int i=0;
chit=fopen("zadanie2.txt","rb");
zad=fopen("otvet2.txt","wb");
while(feof(chit)==0)
{
fread(&slovo, 1, 1, chit);
if(slovo!='\n')
{
if(i=5) i=0;
slovo=slovo^key[i];
i++;
}
fwrite(&slovo, 1, 1, zad);
}
return 0;
}
