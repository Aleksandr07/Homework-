#include <stdio.h>
int main()
{
int day, month, year;
printf("Введите количество дней. \n");
scanf("%d", &day);
year=day/365;
month=(day-year*365)/30;
day=day-year*365-month*30;
printf("Дней = %d, месяцев = %d, лет = %d. \n", day, month, year);
return 0;
}
