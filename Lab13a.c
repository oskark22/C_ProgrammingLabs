// Dan Koskiranta
// 11 March 2022
// Lab 13a.c



#include<stdio.h>


int integerPower(int base, int exponent);

int main()
{
	int b, e;
	int result;

	printf("Please enter an exponent(0 to end): ");
	scanf("%i", &e);

	while (e != 0)
	{
		switch (e)
		{
		case 0:
			printf("\nGoodbye");
			e = 0;
			break;

		default:
			printf("\nPlease enter a base: ");
			scanf("%i", &b);
		    result = integerPower(b, e);
			printf("\nThe value is %i", result);
			break;

		}
		printf("\nPlease enter an exponent(0 to end): ");
		scanf("%i", &e);
	}
	

	return 0;

}

int integerPower(int base, int exponent)
{
	int counter = 1;
	int value = 1;

	while (counter <= exponent)
	{
	    value = value * base;
		counter++;
	}
	return value;
}




