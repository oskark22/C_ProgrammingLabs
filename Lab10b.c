// Dan Koskiranta
// 23 February 2022
// Lab 10b.c


#include <stdio.h>

int main()
{
	int number;
	char character = '*';
	int columns;
	int rows;

	printf("Please enter a number: ");
	scanf("%i", &number);

	// The upper rows of stars
	for (rows = 1; rows <= number; rows++)
	{
		for (columns = 1; columns <= rows; columns++)
		{
			printf(" %c", character);
		}
		printf("\n\n");
	}
	printf("\n\n");

	// The lower rows of stars
	for (rows = 1; rows <= number; rows++)
	{
		for (columns = number; columns >= rows; columns--)
		{
			printf(" %c", character);
		}
		printf("\n\n");
	}
		
	return 0;

}