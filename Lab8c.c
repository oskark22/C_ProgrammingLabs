// Dan Koskiranta
// 11 February 2022
// Lab 8c.c


#include <stdio.h>

int main()
{
	int number;
	int counter = 1;

	while (counter <= 7)
	{

		printf("Please enter a number: ");
		scanf("%i", &number);

		if (number >= 1 && number <= 10)
		{
			printf("In range\n");
		}
		else
		{
			printf("Out of range\n");
		}
		counter++;
	}

	return 0;

}