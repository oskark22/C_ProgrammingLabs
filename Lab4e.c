// Dan Koskiranta
// 28 January 2022
// Lab 4e.c

#include <stdio.h>

int main()
{
	int gross_wages;
	int hours_worked;
	int hourly_wage;

	

	printf("Please enter the hourly wage: ");
	scanf("%d",&hourly_wage);

	printf("Please enter the numbers of hours worked: ");
	scanf("%d",&hours_worked);

	if (hours_worked <= 40)
	{
		gross_wages = hours_worked * hourly_wage;
	}
	else
	{
		int overtime_hours = hours_worked - 40;
		gross_wages = 40 * hourly_wage + overtime_hours * hourly_wage * 2;
	}
	printf("the wage is %d\n",gross_wages);
	
	return 0;
}