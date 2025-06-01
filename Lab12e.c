// Dan Koskiranta
// 11 March 2022
// Lab 12e.c


#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

void printSquare(int s);
void printTriangleInc();
void printTriangleDec();

int main()
{
	char shape;
	int size;
	

	printf("\nA\tSquare\nB\tTriangle Increase\nC\tTriangle Decrease\nQ\tExit\n\nPlease choose: ");
	scanf(" %c", &shape);
	printf("\n");

	// Sentinel controlled repetition
	while (shape != 'q' && shape != 'Q')
	{


		switch (shape)
		{

			// Square
		case 'A':
		case 'a':
			printf("\nPlease enter the size for the square: ");
			scanf("%i", &size);
			// Call function printSquare
		    printSquare(size);
			break;

			// Triangle Increase
		case 'B':
		case 'b':
		    printTriangleInc();
			break;

			// Triangle Decrease
		case 'C':
		case 'c':
			printTriangleDec();
			break;

			// Exit the menu
		case 'Q':
		case 'q':
			printf("\nExit the menu");
			shape = 'Q';
			shape = 'q';
			break;

		default:
			printf("Please choose from the options available");
			break;
		}
		printf("\nA\tSquare\nB\tTriangle Increase\nC\tTriangle Decrease\nQ\tExit\n\nPlease choose: ");
		scanf(" %c", &shape);
		printf("\n");

	}

	return 0;

}


void printSquare(int s)
{
	for (int rows = 1; rows <= s; rows++)
	{
		for (int columns = 1; columns <= s; columns++)
		{
			printf("*");
		}
		printf("\n");
	}

}

void printTriangleInc()
{
	for (int rows = 1; rows <= 6; rows++)
	{
		for (int columns = 1; columns <= rows; columns++)
		{
			printf("*");
		}
		printf("\n");
	}

}

void printTriangleDec()
{
	for (int rows = 1; rows <= 6; rows++)
	{
		for (int columns = 6; columns >= rows; columns--)
		{
			printf("*");
		}
		printf("\n");
	}

}