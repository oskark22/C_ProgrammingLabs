// Dan Koskiranta
// 17 February 2022
// Lab 9c.c


#include <stdio.h>

int main()
{

	int hrs;
	float rate, salary;

	printf("Please enter hours worked: ");
	scanf("%i", &hrs);

	while (hrs != -1)
	{
		printf("Please enter hourly rate of the worker($ 00.00): ");
		scanf("%f", &rate);

		if (hrs <= 40)
		{
			salary = hrs * rate;
		}
		else
		{
			int overtime = hrs - 40;
			salary = 40 * rate + overtime * rate * 1.5;
		}
		printf("Salary is $%.2f", salary);
		printf("\n\nPlease enter hours worked: ");
		scanf("%i", &hrs);
	}
	return 0;

}