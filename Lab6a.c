// Dan Koskiranta
// 4 February 2022
// Lab 6a.c

#include <stdio.h>

int main()
{
	const float u10 = 3.5, u20 = 5, u65 = 7.5, OAP = 4.5;
	int age;

	printf("Please enter your age:");
	scanf("%i", &age);

	switch (age/5)
	{
	case 0:
	case 1:
		printf("The price is: %.2f\n", u10);
		break;
	case 2:
	case 3:
		printf("The price is: %.2f\n", u20);
		break;
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
		printf("The price is: %.2f", u65);
		break;
	case 13:
	case 14:
	case 15:
		printf("The price is: %.2f", OAP);
		break;
	}
	
	return 0;

}