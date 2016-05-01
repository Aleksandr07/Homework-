#include <stdio.h>
int main()
{
	int day;
	int month;
	day=07;
	month=04;
	day=day+month;
	month=day-month;
	day=day-month;
	printf("day=%d, month=%d \n", day, month);
	return 0;

}
