// Dan Koskiranta
// 23 February 2022
// Lab 10a.c


#include <stdio.h>

int main()
{
	int number;
	char character = '*';
	int columns;
	int rows;

	printf("Please enter a number: ");
	scanf("%i", &number);
	printf("\n");

	// Outer for loop to determine the number of rows
	for(rows = 1; rows <= number; rows++)
	{
		// Inner for loop determines the number of columns
		for (columns = 1; columns <= number; columns++)
		{
			printf(" %c", character);
		}
		printf("\n");
	}
	return 0;

}