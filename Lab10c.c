// Dan Koskiranta
// 23 February 2022
// Lab 10c.c


#include <stdio.h>

int main()
{
	char shape;
	int size;
	int rows;
	int columns;

	printf("A\tSquare\nB\tTriangle Increase\nC\tTriangle Decrease\nPlease choose: ");
	scanf(" %c", &shape);
	printf("\n");

	// Switch statement to print out the appropriate shape
	switch (shape)
	{

    // Square
	case 'A':
	case'a':
		printf("Please enter the size of the square: ");
		scanf("%i", &size);
        printf("\n");

		for (rows = 1; rows <= size; rows++)
		{
			for (columns = 1; columns <= size; columns++)
			{
				printf("*");
			}
			printf("\n");
		}
		break;

	// Triangle Increase	
	case 'B':
	case 'b':
		for (rows = 1; rows <= 6; rows++)
		{
			for (columns = 1; columns <= rows; columns++)
			{
				printf("*");
			}
			printf("\n");
		}
		break;

    // Triangle Decrease
	case 'C':
	case 'c':
		for (rows = 1; rows <= 6; rows++)
		{
			for (columns = 6; columns >= rows; columns--)
			{
				printf("*");
			}
			printf("\n");
			
		}
		break;

	default:
		printf("Please choose from the options available");
		break;
	}
		
	return 0;

}