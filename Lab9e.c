// Dan Koskiranta
// 18 February 2022
// Lab 9e.c


#include <stdio.h>

int main()
{
	int sales;
	float salary;

	const float RATE = 0.09, MAX = 800;
	const int  BASIC = 200;


	printf("Please enter sales in pounds: ");
	scanf("%i", &sales);

	// While sales is not equal to -1, enter your sales
	while (sales != -1)
	{
		salary = sales * RATE+ BASIC;

		if (salary <= 800)
		{
			printf("Salary is: %.2f\n\n", salary);
		}
		else
		{
			printf("The max salary is %.2f\n\n", MAX);
		}
		
		printf("Please enter sales in pounds: ");
		scanf("%i", &sales);
		
	}
	

	return 0;

}