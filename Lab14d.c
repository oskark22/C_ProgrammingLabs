// Dan Koskiranta
// 25 March 2022
// Lab 14d.c


#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

void printSquare(int width);
void printTriangleInc();
void printTriangleDec();
float calcSlope(float xVal1, float xVal2, float yVal1, float yVal2);
float calcLength(float xVal1, float xVal2, float yVal1, float yVal2);


int main()
{
	char option;
	int size;
	float x1, x2, y1, y2;
	float slope, length;

	printf("A\tPrint Square\nB\tPrint Triangle Increase\nC\tPrint Triangle Decrease\nD\tCalcualate Line Slope\nE\tCalculate Line Length\nQ\tExit");
	printf("\n\nPlease choose an option from the menu: ");
	scanf(" %c", &option);

	while (option != 'q' && option != 'Q')
	{
		switch (option)
		{
		case 'A':
		case 'a':
			printf("\nPlease enter the width for the square: ");
			scanf("%i", &size);
		    printSquare(size);
			break;

		case 'B':
		case 'b':
			printTriangleInc();
			break;

		case 'C':
		case 'c':
			printTriangleDec();
			break;

		case 'D':
		case 'd':
			printf("\nPlease enter x1 and x2: ");
			scanf("%f%f", &x1, &x2);
			printf("\nPlease enter y1 and y2: ");
			scanf("%f%f", &y1, &y2);
			slope = calcSlope(x1, x2, y1, y2);
			printf("\nThe slope of the line is %.2f", slope, calcSlope(x1, x2, y1, y2));
			break;

		case 'E':
		case 'e':
			printf("\nPlease enter x1 and x2: ");
			scanf("%f%f", &x1, &x2);
			printf("\nPlease enter y1 and y2: ");
			scanf("%f%f", &y1, &y2);
			length = calcLength(x1, x2, y1, y2);
			printf("\nThe length of the line is %.2f", length, calcLength(x1, x2, y1, y2));
			break;

		case 'Q':
		case 'q':
			printf("\nGoodbye");
			break;


		}
		printf("\n\nA\tPrint Square\nB\tPrint Triangle Increase\nC\tPrint Triangle Decrease\nD\tCalcualate Line Slope\nE\tCalculate Line Length\nQ\tExit");
		printf("\n\nPlease choose an option from the menu: ");
		scanf(" %c", &option);
	}
	
	return 0;
}

void printSquare(int width)
{
	for (int rows = 1; rows <= width; rows++)
	{
		for (int columns = 1; columns <= width; columns++)
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

float calcSlope(float xVal1, float xVal2, float yVal1, float yVal2)
{
	float slp = (yVal2 - yVal1) / (xVal2 - xVal1);
	return slp;
}

float calcLength(float xVal1, float xVal2, float yVal1, float yVal2)
{
	float lng = sqrt((xVal2 - xVal1) * (xVal2 - xVal1) + (yVal2 - yVal1) * (yVal2 - yVal1));
	return lng;
}