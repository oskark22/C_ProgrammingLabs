// Dan Koskiranta
// 24 February 2022
// Lab 11d.c


#include<stdio.h>
#include<math.h>


int main()
{
	char shape;
	int size;
	int rows;
	int columns;
	int number;

	printf("Please enter any number besides -1: ");
	scanf("%i", &number);

	while (number != -1)
	{
		printf("\nA\tSquare\nB\tTriangle Increase\nC\tTriangle Decrease\nQ\tExit\n\nPlease choose: ");
		scanf(" %c", &shape);
		printf("\n");

		switch (shape)
		{

		// Square
		case 'A':
		case 'a':
			printf("\nPlease enter the size for the square: ");
			scanf("%i", &size);

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

		// Exit the menu
		case 'Q':
		case 'q':
			printf("\nExit the menu");
			number = -1;
			break;

		default:
			printf("Please choose from the options available");
			break;
		}
		
	}

	
		
        return 0;

}