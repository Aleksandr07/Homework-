#include <stdio.h>
int main()
{
float day, month, year;
printf("Введите количество дней. \n");
scanf("%f", &day);
month = day/30;
year = month/12;
printf("Дней = %.2f, месяцев = %.2f, лет = %.2f. \n", day, month, year);
return 0;
}
