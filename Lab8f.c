// Dan Koskiranta
// 11 February 2022
// Lab 8f.c


#include <stdio.h>

int main()
{
	int number;
	char symbol;
	int counter = 1;

	printf("Please enter a number: ");
	scanf("%i", &number);
	printf("Please enter a symbol: ");
	scanf(" %c", &symbol);

	// Generate a line consisting of number amount of symbols
	while (counter <= number)
	{
		printf(" %c", symbol);
		counter++;
	}

	return 0;

}