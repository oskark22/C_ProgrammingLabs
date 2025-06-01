// Dan Koskiranta
// 4 February 2022
// Lab 6d.c


#include <stdio.h>

int main()
{
	const float u20000 = 0.15, u50000 = 0.2, o50000 = 0.25;
	int sales;
	float commission;

	printf("Please enter total sales:");
	scanf("%i", &sales);

	// Calculate salesperson's commission rate
	switch(sales / 10000)
	{
	case -3:
	case -2:
	case -1:
		printf("Negative number not allowed");
		break;
	case 0:
	case 1:
		commission = sales * u20000;
		printf("\nCommission is %.2f", commission);
		break;
	case 2:
	case 3:
	case 4:
		commission = sales * u50000;
		printf("\nCommission is %.2f", commission);
		break;
	case 5:
	case 6:
	case 7:
		commission = sales * o50000;
		printf("\nCommission is %.2f", commission);
		break;
	}

	return 0;

}