#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct kniga
{
char name[40];
char telephone[15];
struct kniga *next;
struct kniga *prev;
};
struct kniga *nachalo;
struct kniga *konec;
struct kniga *search(char *);
int choose(void);
void create(struct kniga *i, struct kniga **nachalo, struct kniga **konec);
void add(void);
void delete(struct kniga **, struct kniga **);
void output(void);
void disp(struct kniga *);
void poisk(void);
void save(void);
void load(void);
int main(void)
{
nachalo=NULL;
konec=NULL;
int d, i;
printf("Введите 1 - добавление контакта\n");
printf("Введите 2 - удаление контакта\n");
printf("Введите 3 - отображение всей книги\n");
printf("Введите 4 - поиск контакта\n");
printf("Введите 5 - сохранение книги в файл\n");
printf("Введите 6 - загрузка книги из файла\n");
printf("Введите 7 - выход\n");
for(i=0; i<10; i++)
{printf("Наберите нужную клавишу:\n");
scanf("%d", &d);
if (d==1) add();
if (d==2) delete(&nachalo, &konec);
if (d==3) output();
if (d==4) poisk();
if(d==5) save();
if (d==6) load();
if (d==7) 
{printf("Телефонная книга закрыта\n");
i=11;}
if(i=9) i=0;
}
return 0;
}
void create(struct kniga *i, struct kniga **nachalo, struct kniga **konec)
{
struct kniga *a, *b;
if(*konec==NULL)
{
i->next=NULL;
i->prev=NULL;
*konec=i;
*nachalo=i;
return;
}
b=*nachalo;
a=NULL;
while(b)
{
if(strcmp(b->name, i->name)<0)
{
a=b;
b=b->next;
}
else
{
if(b->prev)
{
b->prev->next=i;
i->next=b;
i->prev=b->prev;
b->prev=i;
return;
}
i->next=b;
i->prev=NULL;
b->prev=i;
*nachalo=i;
return;
}
}
a->next=i;
i->next=NULL;
i->prev=a;
*konec=i;
}
void add(void)
{
struct kniga *a;
char im, tel;
int i=0;
if(!(struct kniga *)malloc(sizeof(struct kniga)))
{
printf("Нет памяти");
return;}
a=(struct kniga *)malloc(sizeof(struct kniga));
printf("Введите имя контакта: ");
scanf("%s", a->name);
printf("Введите номер абонента: ");
getchar();
fgets(a->telephone, 15, stdin);
create(a, &nachalo, &konec);
}
void delete(struct kniga **nachalo, struct kniga **konec)
{
struct kniga *a;
char c[40];
printf("Введите имя контакта: ");
scanf("%s", c);
a=search(c);
if(a) {
if(*nachalo==a)
{
*nachalo=a->next;
if(*nachalo) (*nachalo)->prev=NULL;
else *konec=NULL;
}
else {
a->next->prev=a->next;
if(a!=*konec)
a->next->prev=a->prev;
else
*konec=a->prev;
}
free(a);
}
}
struct kniga *search(char *name)
{
struct kniga *a;
a=nachalo;
while(a)
{
if(!strcmp(name, a->name)) return a;
a=a->next;
}
printf("Такого контакта не существует\n");
return NULL;
}
void output(void)
{
struct kniga *a;
a=nachalo;
while(a)
{
disp(a);
a=a->next;
}
}
void disp(struct kniga *a)
{
printf("%s: ", a->name);
printf("%s\n", a->telephone);
}
void poisk(void)
{
char name[40];
struct kniga *a;
printf("Введите имя контакта: ");
scanf("%s", name);
printf("\n");
a=search(name);
if(a) disp(a);
else printf("Такого контакта не существует\n");
}
void save(void)
{
struct kniga *a;
FILE *b;
b=fopen("kniga.txt", "wb");
a=nachalo;
while(a)
{
fwrite(a, sizeof(struct kniga), 1, b);
a=a->next;
}
fclose(b);
}
void load(void)
{
struct kniga *a;
FILE *b;
b=fopen("kniga.txt", "rb");
while(!feof(b))
{
a=(struct kniga*)malloc(sizeof(struct kniga));
create(a, &nachalo, &konec);
}
fclose(b);
}

